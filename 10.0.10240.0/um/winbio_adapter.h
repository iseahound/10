/*++

Copyright (c) 2008 Microsoft Corporation


Module Name:

    winbio_adapter.h

Abstract:

    Interface definitions used by WinBio Service plug-in
    components.


Environment:

    User mode.

Revision History:

--*/
#ifndef _WINBIO_ADAPTER_H_2C0E14E1_5330_4f60_9B4F_836CFFD7452A_
#define _WINBIO_ADAPTER_H_2C0E14E1_5330_4f60_9B4F_836CFFD7452A_
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#if (NTDDI_VERSION >= NTDDI_WIN7)


///////////////////////////////////////////////////////////////////////////////
//
// Dependencies...
//
///////////////////////////////////////////////////////////////////////////////
#include "winbio_types.h"
#include "winbio_err.h"


#ifdef __cplusplus
extern "C"{
#endif 

///////////////////////////////////////////////////////////////////////////////
//
// Types used throughout
//
///////////////////////////////////////////////////////////////////////////////
//
// Forward declarations of interface pointers
//
typedef struct _WINBIO_SENSOR_INTERFACE *PWINBIO_SENSOR_INTERFACE;
typedef struct _WINBIO_ENGINE_INTERFACE *PWINBIO_ENGINE_INTERFACE;
typedef struct _WINBIO_STORAGE_INTERFACE *PWINBIO_STORAGE_INTERFACE;

//
// Forward declarations of Adapter-private context structures
//
typedef struct _WINIBIO_SENSOR_CONTEXT *PWINIBIO_SENSOR_CONTEXT;
typedef struct _WINIBIO_ENGINE_CONTEXT *PWINIBIO_ENGINE_CONTEXT;
typedef struct _WINIBIO_STORAGE_CONTEXT *PWINIBIO_STORAGE_CONTEXT;

typedef ULONG WINBIO_HASH_TYPE, *PWINBIO_HASH_TYPE;

typedef ULONG WINBIO_SENSOR_STATUS, *PWINBIO_SENSOR_STATUS;

typedef ULONG WINBIO_SENSOR_CAPABILITIES, *PWINBIO_SENSOR_CAPABILITIES;
typedef ULONG WINBIO_ENGINE_CAPABILITIES, *PWINBIO_ENGINE_CAPABILITIES;
typedef ULONG WINBIO_STORAGE_CAPABILITIES, *PWINBIO_STORAGE_CAPABILITIES;

///////////////////////////////////////////////////////////////////////////////
//
// Contents of a single storage record. The Storage Adapter fills in one
// of these structure in response to a 'GetCurrentRecord' call.
//
// NOTE: 
//  The memory pointed to by this structure belongs to the Storage Adapter 
//  and is only valid until the pipeline executes its next database operation,
//  or until the pipeline is cleared.
//
///////////////////////////////////////////////////////////////////////////////
typedef struct _WINBIO_STORAGE_RECORD {
    PWINBIO_IDENTITY Identity;
    WINBIO_BIOMETRIC_SUBTYPE SubFactor;
    PULONG IndexVector;
    SIZE_T IndexElementCount;
    PUCHAR TemplateBlob;
    SIZE_T TemplateBlobSize;
    PUCHAR PayloadBlob;
    SIZE_T PayloadBlobSize;
} WINBIO_STORAGE_RECORD, *PWINBIO_STORAGE_RECORD;


///////////////////////////////////////////////////////////////////////////////
//
// Context structure passed up and down the Biometric Unit's plug-in
// component stack. Guaranteed to be unique per Biometric Unit, even
// if a single plug-in Adapter is supporting more than one Biometric
// Unit.
//
///////////////////////////////////////////////////////////////////////////////
typedef struct _WINBIO_PIPELINE {
    //
    // Handles to the hardware available to each
    // plug-in Adapter.
    //
    HANDLE SensorHandle;
    HANDLE EngineHandle;
    HANDLE StorageHandle;

    //
    // Pointers to interface dispatch tables for each 
    // Adapter in the plug-in stack. These should be 
    // considered read-only by the plug-in Adapters.
    //
    PWINBIO_SENSOR_INTERFACE    SensorInterface;
    PWINBIO_ENGINE_INTERFACE    EngineInterface;
    PWINBIO_STORAGE_INTERFACE   StorageInterface;

    //
    // Pointers to per-plug-in private data. Each private
    // data block is opaque to everyone except the Adapter
    // that owns it.
    //
    PWINIBIO_SENSOR_CONTEXT     SensorContext;
    PWINIBIO_ENGINE_CONTEXT     EngineContext;
    PWINIBIO_STORAGE_CONTEXT    StorageContext;
    
} WINBIO_PIPELINE, *PWINBIO_PIPELINE;

///////////////////////////////////////////////////////////////////////////////
//
// Adapter types...
//
///////////////////////////////////////////////////////////////////////////////
typedef ULONG WINBIO_ADAPTER_TYPE, *PWINBIO_ADAPTER_TYPE;

#define WINBIO_ADAPTER_TYPE_SENSOR      ((WINBIO_ADAPTER_TYPE)1)
#define WINBIO_ADAPTER_TYPE_ENGINE      ((WINBIO_ADAPTER_TYPE)2)
#define WINBIO_ADAPTER_TYPE_STORAGE     ((WINBIO_ADAPTER_TYPE)3)

///////////////////////////////////////////////////////////////////////////////
//
// Interface version control...
//
///////////////////////////////////////////////////////////////////////////////

typedef struct _WINBIO_ADAPTER_INTERFACE_VERSION
{
    USHORT MajorVersion;
    USHORT MinorVersion;
} WINBIO_ADAPTER_INTERFACE_VERSION, *PWINBIO_ADAPTER_INTERFACE_VERSION;

#define WINBIO_MAKE_INTERFACE_VERSION(major, minor) {(USHORT)major, (USHORT)minor}

#define WINBIO_IS_INTERFACE_VERSION_COMPATIBLE(loader, adapter)    \
    ((loader).MajorVersion >= (adapter).MajorVersion)

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// Sensor Adapter methods...
//
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// Methods available in V1.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_SENSOR_ATTACH_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_DETACH_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

// Clears out all Sensor-specific pipeline context
typedef HRESULT
(WINAPI *PIBIO_SENSOR_CLEAR_CONTEXT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_QUERY_STATUS_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_SENSOR_STATUS Status
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_RESET_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_SET_MODE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_SENSOR_MODE Mode
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_SET_INDICATOR_STATUS_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_INDICATOR_STATUS IndicatorStatus
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_GET_INDICATOR_STATUS_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_INDICATOR_STATUS IndicatorStatus
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_START_CAPTURE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_BIR_PURPOSE Purpose,
    _Out_ LPOVERLAPPED *Overlapped
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_FINISH_CAPTURE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    );


//
// Export raw capture buffer
//
typedef HRESULT
(WINAPI *PIBIO_SENSOR_EXPORT_SENSOR_DATA_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_BIR *SampleBuffer,
    _Out_ PSIZE_T SampleSize
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_CANCEL_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

//
// Push current sample into the Engine and
// convert it into a feature set for use in
// additional processing.
//
typedef HRESULT
(WINAPI *PIBIO_SENSOR_PUSH_DATA_TO_ENGINE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_BIR_PURPOSE Purpose,
    _In_ WINBIO_BIR_DATA_FLAGS Flags,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_CONTROL_UNIT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_CONTROL_UNIT_PRIVILEGED_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    );

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
// Additional methods available in V2.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_SENSOR_NOTIFY_POWER_CHANGE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG PowerEventType
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
//
// Additional methods available in V3.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_SENSOR_PIPELINE_INIT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_PIPELINE_CLEANUP_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_ACTIVATE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_DEACTIVATE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_QUERY_EXTENDED_INFO_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_bytes_(SensorInfoSize) PWINBIO_EXTENDED_SENSOR_INFO SensorInfo,
    _In_ SIZE_T SensorInfoSize
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_QUERY_CALIBRATION_FORMATS_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_to_(FormatArraySize, *FormatCount) PWINBIO_UUID FormatArray,
    _In_ SIZE_T FormatArraySize,
    _Out_ PSIZE_T FormatCount
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_SET_CALIBRATION_FORMAT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_UUID Format
    );

typedef HRESULT
(WINAPI *PIBIO_SENSOR_ACCEPT_CALIBRATION_DATA_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_reads_bytes_(CalibrationBufferSize) PUCHAR CalibrationBuffer,
    _In_ SIZE_T CalibrationBufferSize
    );

#endif

///////////////////////////////////////////////////////////////////////////////
//
// Sensor Adapter interface table.
//
///////////////////////////////////////////////////////////////////////////////
//
// Available interface versions...
//
#define WINBIO_SENSOR_INTERFACE_VERSION_1    WINBIO_MAKE_INTERFACE_VERSION(1,0)

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define WINBIO_SENSOR_INTERFACE_VERSION_2    WINBIO_MAKE_INTERFACE_VERSION(2,0)
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#define WINBIO_SENSOR_INTERFACE_VERSION_3    WINBIO_MAKE_INTERFACE_VERSION(3,0)
#endif

typedef struct _WINBIO_SENSOR_INTERFACE {
    WINBIO_ADAPTER_INTERFACE_VERSION            Version;
    WINBIO_ADAPTER_TYPE                         Type;
    SIZE_T                                      Size;
    GUID                                        AdapterId;

    PIBIO_SENSOR_ATTACH_FN                      Attach;
    PIBIO_SENSOR_DETACH_FN                      Detach;

    PIBIO_SENSOR_CLEAR_CONTEXT_FN               ClearContext;

    PIBIO_SENSOR_QUERY_STATUS_FN                QueryStatus;
    PIBIO_SENSOR_RESET_FN                       Reset;
    PIBIO_SENSOR_SET_MODE_FN                    SetMode;
    
    PIBIO_SENSOR_SET_INDICATOR_STATUS_FN        SetIndicatorStatus;
    PIBIO_SENSOR_GET_INDICATOR_STATUS_FN        GetIndicatorStatus;
    
    PIBIO_SENSOR_START_CAPTURE_FN               StartCapture;
    PIBIO_SENSOR_FINISH_CAPTURE_FN              FinishCapture;
    PIBIO_SENSOR_EXPORT_SENSOR_DATA_FN          ExportSensorData;
    PIBIO_SENSOR_CANCEL_FN                      Cancel;

    PIBIO_SENSOR_PUSH_DATA_TO_ENGINE_FN         PushDataToEngine;

    PIBIO_SENSOR_CONTROL_UNIT_FN                ControlUnit;
    PIBIO_SENSOR_CONTROL_UNIT_PRIVILEGED_FN     ControlUnitPrivileged;

#if (NTDDI_VERSION >= NTDDI_WIN8)
    //
    // V2.0 methods begin here...
    //
    PIBIO_SENSOR_NOTIFY_POWER_CHANGE_FN         NotifyPowerChange;
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
    //
    // V3.0 methods begin here...
    //
    PIBIO_SENSOR_PIPELINE_INIT_FN               PipelineInit;
    PIBIO_SENSOR_PIPELINE_CLEANUP_FN            PipelineCleanup;
    PIBIO_SENSOR_ACTIVATE_FN                    Activate;
    PIBIO_SENSOR_DEACTIVATE_FN                  Deactivate;
    PIBIO_SENSOR_QUERY_EXTENDED_INFO_FN         QueryExtendedInfo;
    PIBIO_SENSOR_QUERY_CALIBRATION_FORMATS_FN   QueryCalibrationFormats;
    PIBIO_SENSOR_SET_CALIBRATION_FORMAT_FN      SetCalibrationFormat;
    PIBIO_SENSOR_ACCEPT_CALIBRATION_DATA_FN     AcceptCalibrationData;
#endif

} WINBIO_SENSOR_INTERFACE, *PWINBIO_SENSOR_INTERFACE;

//
// Interface-retrieval function exported by the Sensor Adapter
// plug-in DLL. It *MUST* be called 'WbioQuerySensorInterface'.
//
HRESULT
WINAPI
WbioQuerySensorInterface(
    _Out_ PWINBIO_SENSOR_INTERFACE *SensorInterface
    );

//
// Pointer to an interface-retrieval function used by the 
// framework after a 'GetProcAddress' call.
//
typedef HRESULT
(WINAPI *PWINBIO_QUERY_SENSOR_INTERFACE_FN)(
    _Out_ PWINBIO_SENSOR_INTERFACE *SensorInterface
    );

#define WINBIO_QUERY_SENSOR_INTERFACE_FN_NAME   ("WbioQuerySensorInterface")


///////////////////////////////////////////////////////////////////////////////
//
// Inline functions for calling Sensor Adapter methods
//
///////////////////////////////////////////////////////////////////////////////
inline HRESULT
WbioSensorAttach(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->Attach))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->Attach(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorDetach(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->Detach))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->Detach(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorClearContext(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->ClearContext))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->ClearContext(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorQueryStatus(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_SENSOR_STATUS Status
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->QueryStatus))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->QueryStatus(Pipeline, Status);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorReset(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->Reset))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->Reset(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorSetMode(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_SENSOR_MODE Mode
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->SetMode))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->SetMode(Pipeline, Mode);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorStartCapture(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_BIR_PURPOSE Purpose,
    _Out_ LPOVERLAPPED *Overlapped
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->StartCapture))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->StartCapture(
                                            Pipeline,
                                            Purpose,
                                            Overlapped
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorFinishCapture(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->FinishCapture))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->FinishCapture(
                                            Pipeline,
                                            RejectDetail
                                            );
    }
}
//-----------------------------------------------------------------------------

//
// Export raw capture buffer
//
inline HRESULT
WbioSensorExportSensorData(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_BIR *SampleBuffer,
    _Out_ PSIZE_T SampleSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->ExportSensorData))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->ExportSensorData(
                                            Pipeline,
                                            SampleBuffer,
                                            SampleSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorCancel(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->Cancel))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->Cancel(Pipeline);
    }
}
//-----------------------------------------------------------------------------

//
// Push current sample into the Engine and
// convert it into a feature set for use in
// additional processing.
//
inline HRESULT
WbioSensorPushDataToEngine(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_BIR_PURPOSE Purpose,
    _In_ WINBIO_BIR_DATA_FLAGS Flags,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->PushDataToEngine))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->PushDataToEngine(
                                            Pipeline,
                                            Purpose,
                                            Flags,
                                            RejectDetail
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorControlUnit(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->ControlUnit))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->ControlUnit(
                                            Pipeline,
                                            ControlCode,
                                            SendBuffer,
                                            SendBufferSize,
                                            ReceiveBuffer,
                                            ReceiveBufferSize,
                                            ReceiveDataSize,
                                            OperationStatus
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorControlUnitPrivileged(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->ControlUnitPrivileged))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->ControlUnitPrivileged(
                                            Pipeline,
                                            ControlCode,
                                            SendBuffer,
                                            SendBufferSize,
                                            ReceiveBuffer,
                                            ReceiveBufferSize,
                                            ReceiveDataSize,
                                            OperationStatus
                                            );
    }
}
//-----------------------------------------------------------------------------

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
// V2.0 methods begin here...
//

inline HRESULT
WbioSensorNotifyPowerChange(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG PowerEventType
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->NotifyPowerChange))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->NotifyPowerChange(
                                            Pipeline,
                                            PowerEventType
                                            );
    }
}
//-----------------------------------------------------------------------------
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
//
// V3.0 methods begin here...
//

inline HRESULT
WbioSensorPipelineInit(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->PipelineInit))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->PipelineInit(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorPipelineCleanup(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->PipelineCleanup))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->PipelineCleanup(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorActivate(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->Activate))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->Activate(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorDeactivate(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->Deactivate))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->Deactivate(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorQueryExtendedInfo(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_bytes_(SensorInfoSize) PWINBIO_EXTENDED_SENSOR_INFO SensorInfo,
    _In_ SIZE_T SensorInfoSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface) ||
        !ARGUMENT_PRESENT(SensorInfo))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->QueryExtendedInfo))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->QueryExtendedInfo(
                                            Pipeline,
                                            SensorInfo,
                                            SensorInfoSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorQueryCalibrationFormats(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_to_(FormatArraySize, *FormatCount) PWINBIO_UUID FormatArray,
    _In_ SIZE_T FormatArraySize,
    _Out_ PSIZE_T FormatCount
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface) ||
        !ARGUMENT_PRESENT(FormatArray) ||
        !ARGUMENT_PRESENT(FormatCount))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->QueryCalibrationFormats))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->QueryCalibrationFormats(
                                            Pipeline,
                                            FormatArray,
                                            FormatArraySize,
                                            FormatCount
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorSetCalibrationFormat(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_UUID Format
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface) ||
        !ARGUMENT_PRESENT(Format))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->SetCalibrationFormat))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->SetCalibrationFormat(
                                            Pipeline,
                                            Format
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioSensorAcceptCalibrationData(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_reads_bytes_(CalibrationBufferSize) PUCHAR CalibrationBuffer,
    _In_ SIZE_T CalibrationBufferSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->SensorInterface) ||
        !ARGUMENT_PRESENT(CalibrationBuffer))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->SensorInterface->AcceptCalibrationData))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->SensorInterface->AcceptCalibrationData(
                                            Pipeline,
                                            CalibrationBuffer,
                                            CalibrationBufferSize
                                            );
    }
}
//-----------------------------------------------------------------------------
#endif


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// Engine Adapter methods...
//
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// Methods available in V1.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_ENGINE_ATTACH_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_DETACH_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

// Clears out all Engine-specific pipeline context
typedef HRESULT
(WINAPI *PIBIO_ENGINE_CLEAR_CONTEXT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

// 'QUERY_PREFERRED_FORMAT' - SENSOR ASKS ENGINE WHAT DATA 
// FORMAT THE ENGINE PREFERS TO RECEIVE FROM THE SENSOR
typedef HRESULT
(WINAPI *PIBIO_ENGINE_QUERY_PREFERRED_FORMAT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_REGISTERED_FORMAT StandardFormat,
    _Out_ PWINBIO_UUID VendorFormat
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_QUERY_INDEX_VECTOR_SIZE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T IndexElementCount
    );

//
// RETURN AN ARRAY OF UTF-8 OIDS FOR HASH
// ALGS SUPPORTED BY THE ENGINE
//
typedef HRESULT
(WINAPI *PIBIO_ENGINE_QUERY_HASH_ALGORITHMS_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T AlgorithmCount,
    _Out_ PSIZE_T AlgorithmBufferSize,
    _Outptr_result_bytebuffer_all_(*AlgorithmBufferSize) _At_(*AlgorithmBuffer, _Post_ _NullNull_terminated_) PUCHAR *AlgorithmBuffer
    );

//
// SELECT ONE OID FOR THE ENGINE TO USE
//
typedef HRESULT
(WINAPI *PIBIO_ENGINE_SET_HASH_ALGORITHM_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ SIZE_T AlgorithmBufferSize,
    _In_reads_z_(AlgorithmBufferSize) PUCHAR AlgorithmBuffer
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_QUERY_SAMPLE_HINT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T SampleHint
    );


typedef HRESULT
(WINAPI *PIBIO_ENGINE_ACCEPT_SAMPLE_DATA_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_reads_bytes_(SampleSize) PWINBIO_BIR SampleBuffer,
    _In_ SIZE_T SampleSize,
    _In_ WINBIO_BIR_PURPOSE Purpose,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    );

// CAN RETURN: 
//      'FEATURE SET' - AFTER A PUSH FROM THE SENSOR - WINBIO_DATA_FLAG_INTERMEDIATE
//      'ENROLLMENT TEMPLATE' - AFTER AN ENROLLMENT CYCLE - WINBIO_DATA_FLAG_PROCESSED
//      'MATCHING TEMPLATE' - AFTER AN IDENTIFY OR VERIFY OPERATION - WINBIO_DATA_FLAG_PROCESSED
//
typedef HRESULT
(WINAPI *PIBIO_ENGINE_EXPORT_ENGINE_DATA_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_BIR_DATA_FLAGS Flags,
    _Outptr_result_bytebuffer_all_(*SampleSize) PWINBIO_BIR *SampleBuffer,
    _Out_ PSIZE_T SampleSize
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_VERIFY_FEATURE_SET_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_IDENTITY Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _Out_ PBOOLEAN Match,
    _Outptr_result_bytebuffer_all_(*PayloadBlobSize) PUCHAR *PayloadBlob,
    _Out_ PSIZE_T PayloadBlobSize,
    _Outptr_result_bytebuffer_all_(*HashSize) PUCHAR *HashValue,
    _Out_ PSIZE_T HashSize,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_IDENTIFY_FEATURE_SET_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_IDENTITY Identity,
    _Out_ PWINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _Outptr_result_bytebuffer_all_(*PayloadBlobSize) PUCHAR *PayloadBlob,
    _Out_ PSIZE_T PayloadBlobSize,
    _Outptr_result_bytebuffer_all_(*HashSize) PUCHAR *HashValue,
    _Out_ PSIZE_T HashSize,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_CREATE_ENROLLMENT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_UPDATE_ENROLLMENT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_GET_ENROLLMENT_STATUS_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_GET_ENROLLMENT_HASH_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Outptr_result_bytebuffer_all_(*HashSize) PUCHAR *HashValue,
    _Out_ PSIZE_T HashSize
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_CHECK_FOR_DUPLICATE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_IDENTITY Identity,
    _Out_ PWINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _Out_ PBOOLEAN Duplicate
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_COMMIT_ENROLLMENT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_IDENTITY Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _In_reads_bytes_(PayloadBlobSize) PUCHAR PayloadBlob,
    _In_ SIZE_T PayloadBlobSize
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_DISCARD_ENROLLMENT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_CONTROL_UNIT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_CONTROL_UNIT_PRIVILEGED_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    );

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
// Additional methods available in V2.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_ENGINE_NOTIFY_POWER_CHANGE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG PowerEventType
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_RESERVED_1_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_IDENTITY Identity
    );

#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
//
// Additional methods available in V3.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_ENGINE_PIPELINE_INIT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_PIPELINE_CLEANUP_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_ACTIVATE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_DEACTIVATE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_QUERY_EXTENDED_INFO_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_bytes_(EngineInfoSize) PWINBIO_EXTENDED_ENGINE_INFO EngineInfo,
    _In_ SIZE_T EngineInfoSize
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_IDENTIFY_ALL_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T PresenceCount,
    _Out_ PWINBIO_PRESENCE *PresenceArray
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_SET_ENROLLMENT_SELECTOR_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONGLONG SelectorValue
    );

typedef struct _WINBIO_EXTENDED_ENROLLMENT_PARAMETERS {
    SIZE_T Size;
    WINBIO_BIOMETRIC_SUBTYPE SubFactor;
} WINBIO_EXTENDED_ENROLLMENT_PARAMETERS, *PWINBIO_EXTENDED_ENROLLMENT_PARAMETERS;

typedef HRESULT
(WINAPI *PIBIO_ENGINE_SET_ENROLLMENT_PARAMETERS_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_EXTENDED_ENROLLMENT_PARAMETERS Parameters
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_QUERY_EXTENDED_ENROLLMENT_STATUS_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_bytes_(EnrollmentStatusSize) PWINBIO_EXTENDED_ENROLLMENT_STATUS EnrollmentStatus,
    _In_ SIZE_T EnrollmentStatusSize
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_REFRESH_CACHE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_SELECT_CALIBRATION_FORMAT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_reads_(FormatCount) PWINBIO_UUID FormatArray,
    _In_ SIZE_T FormatCount,
    _Out_ PWINBIO_UUID SelectedFormat,
    _Out_ PSIZE_T MaxBufferSize
    );

typedef HRESULT
(WINAPI *PIBIO_ENGINE_QUERY_CALIBRATION_DATA_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PBOOLEAN DiscardAndRepeatCapture,
    _Out_writes_bytes_to_(MaxBufferSize, *CalibrationBufferSize) PUCHAR CalibrationBuffer,
    _Out_ PSIZE_T CalibrationBufferSize,
    _In_ SIZE_T MaxBufferSize
    );


typedef struct _WINBIO_ACCOUNT_POLICY {
    WINBIO_IDENTITY Identity;
    WINBIO_ANTI_SPOOF_POLICY_ACTION AntiSpoofBehavior;
} WINBIO_ACCOUNT_POLICY, *PWINBIO_ACCOUNT_POLICY;

typedef HRESULT
(WINAPI *PIBIO_ENGINE_SET_ACCOUNT_POLICY_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_reads_(PolicyItemCount) PWINBIO_ACCOUNT_POLICY PolicyItemArray,
    _In_ SIZE_T PolicyItemCount
    );
#endif

///////////////////////////////////////////////////////////////////////////////
//
// Engine Adapter interface table.
//
///////////////////////////////////////////////////////////////////////////////
//
// Available interface versions...
//
#define WINBIO_ENGINE_INTERFACE_VERSION_1   WINBIO_MAKE_INTERFACE_VERSION(1,0)

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define WINBIO_ENGINE_INTERFACE_VERSION_2   WINBIO_MAKE_INTERFACE_VERSION(2,0)
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#define WINBIO_ENGINE_INTERFACE_VERSION_3   WINBIO_MAKE_INTERFACE_VERSION(3,0)
#endif

typedef struct _WINBIO_ENGINE_INTERFACE {
    WINBIO_ADAPTER_INTERFACE_VERSION            Version;
    WINBIO_ADAPTER_TYPE                         Type;
    SIZE_T                                      Size;
    GUID                                        AdapterId;

    PIBIO_ENGINE_ATTACH_FN                      Attach;
    PIBIO_ENGINE_DETACH_FN                      Detach;

    PIBIO_ENGINE_CLEAR_CONTEXT_FN               ClearContext;

    PIBIO_ENGINE_QUERY_PREFERRED_FORMAT_FN      QueryPreferredFormat;
    PIBIO_ENGINE_QUERY_INDEX_VECTOR_SIZE_FN     QueryIndexVectorSize;
    PIBIO_ENGINE_QUERY_HASH_ALGORITHMS_FN       QueryHashAlgorithms;
    PIBIO_ENGINE_SET_HASH_ALGORITHM_FN          SetHashAlgorithm;

    PIBIO_ENGINE_QUERY_SAMPLE_HINT_FN           QuerySampleHint;

    PIBIO_ENGINE_ACCEPT_SAMPLE_DATA_FN          AcceptSampleData;       // PROCESSES CURRENT BUFFER FROM PIPELINE AND GENERATES A FEATURE SET IN THE PIPELINE
    PIBIO_ENGINE_EXPORT_ENGINE_DATA_FN          ExportEngineData;       // EXPORTS FEATURE SET OR TEMPLATE
    
    PIBIO_ENGINE_VERIFY_FEATURE_SET_FN          VerifyFeatureSet;
    PIBIO_ENGINE_IDENTIFY_FEATURE_SET_FN        IdentifyFeatureSet;

    PIBIO_ENGINE_CREATE_ENROLLMENT_FN           CreateEnrollment;       // ATTACHES AN EMPTY ENROLLMENT TEMPLATE TO THE PIPELINE
    PIBIO_ENGINE_UPDATE_ENROLLMENT_FN           UpdateEnrollment;       // CONVERTS CURRENT PIPELINE FEATURE SET INTO SOMETHING THAT CAN BE ADDED TO A TEMPLATE
    PIBIO_ENGINE_GET_ENROLLMENT_STATUS_FN       GetEnrollmentStatus;    // QUERIES TEMPLATE ATTACHED TO THE PIPELINE TO SEE IF IT IS READY TO COMMIT
    PIBIO_ENGINE_GET_ENROLLMENT_HASH_FN         GetEnrollmentHash;
    PIBIO_ENGINE_CHECK_FOR_DUPLICATE_FN         CheckForDuplicate;      // DETERMINES WHETHER TEMPLATE IS ALREADY ENROLLED
    PIBIO_ENGINE_COMMIT_ENROLLMENT_FN           CommitEnrollment;
    PIBIO_ENGINE_DISCARD_ENROLLMENT_FN          DiscardEnrollment;

    PIBIO_ENGINE_CONTROL_UNIT_FN                ControlUnit;
    PIBIO_ENGINE_CONTROL_UNIT_PRIVILEGED_FN     ControlUnitPrivileged;

#if (NTDDI_VERSION >= NTDDI_WIN8)
    //
    // V2.0 methods begin here...
    //
    PIBIO_ENGINE_NOTIFY_POWER_CHANGE_FN         NotifyPowerChange;
    PIBIO_ENGINE_RESERVED_1_FN                  Reserved_1;
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
    //
    // V3.0 methods begin here...
    //
    PIBIO_ENGINE_PIPELINE_INIT_FN                       PipelineInit;
    PIBIO_ENGINE_PIPELINE_CLEANUP_FN                    PipelineCleanup;
    PIBIO_ENGINE_ACTIVATE_FN                            Activate;
    PIBIO_ENGINE_DEACTIVATE_FN                          Deactivate;
    PIBIO_ENGINE_QUERY_EXTENDED_INFO_FN                 QueryExtendedInfo;
    PIBIO_ENGINE_IDENTIFY_ALL_FN                        IdentifyAll;
    PIBIO_ENGINE_SET_ENROLLMENT_SELECTOR_FN             SetEnrollmentSelector;
    PIBIO_ENGINE_SET_ENROLLMENT_PARAMETERS_FN           SetEnrollmentParameters;
    PIBIO_ENGINE_QUERY_EXTENDED_ENROLLMENT_STATUS_FN    QueryExtendedEnrollmentStatus;
    PIBIO_ENGINE_REFRESH_CACHE_FN                       RefreshCache; 
    PIBIO_ENGINE_SELECT_CALIBRATION_FORMAT_FN           SelectCalibrationFormat;
    PIBIO_ENGINE_QUERY_CALIBRATION_DATA_FN              QueryCalibrationData;
    PIBIO_ENGINE_SET_ACCOUNT_POLICY_FN                  SetAccountPolicy;
#endif

} WINBIO_ENGINE_INTERFACE, *PWINBIO_ENGINE_INTERFACE;

//
// Interface-retrieval function exported by the Engine Adapter
// plug-in DLL. It *MUST* be called 'WbioQueryEngineInterface'.
//
HRESULT
WINAPI
WbioQueryEngineInterface(
    _Out_ PWINBIO_ENGINE_INTERFACE *EngineInterface
    );

//
// Pointer to an interface-retrieval function used by the 
// framework after a 'GetProcAddress' call.
//
typedef HRESULT
(WINAPI *PWINBIO_QUERY_ENGINE_INTERFACE_FN)(
    _Out_ PWINBIO_ENGINE_INTERFACE *EngineInterface
    );

#define WINBIO_QUERY_ENGINE_INTERFACE_FN_NAME   ("WbioQueryEngineInterface")


///////////////////////////////////////////////////////////////////////////////
//
// Inline functions for calling Engine Adapter methods
//
///////////////////////////////////////////////////////////////////////////////
inline HRESULT
WbioEngineAttach(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->Attach))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->Attach(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineDetach(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->Detach))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->Detach(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineClearContext(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->ClearContext))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->ClearContext(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineQueryPreferredFormat(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_REGISTERED_FORMAT StandardFormat,
    _Out_ PWINBIO_UUID VendorFormat
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->QueryPreferredFormat))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->QueryPreferredFormat(
                                            Pipeline,
                                            StandardFormat,
                                            VendorFormat
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineQueryIndexVectorSize(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T IndexElementCount
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->QueryIndexVectorSize))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->QueryIndexVectorSize(
                                            Pipeline,
                                            IndexElementCount
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineQueryHashAlgorithms(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T AlgorithmCount,
    _Out_ PSIZE_T AlgorithmBufferSize,
    _Outptr_result_bytebuffer_all_(*AlgorithmBufferSize) _At_(*AlgorithmBuffer, _Post_ _NullNull_terminated_) PUCHAR *AlgorithmBuffer
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->QueryHashAlgorithms))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->QueryHashAlgorithms(
                                            Pipeline,
                                            AlgorithmCount,
                                            AlgorithmBufferSize,
                                            AlgorithmBuffer
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineSetHashAlgorithm(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ SIZE_T AlgorithmBufferSize,
    _In_reads_z_(AlgorithmBufferSize) PUCHAR AlgorithmBuffer
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->SetHashAlgorithm))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->SetHashAlgorithm(
                                            Pipeline,
                                            AlgorithmBufferSize,
                                            AlgorithmBuffer
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineQuerySampleHint(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T SampleHint
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->QuerySampleHint))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->QuerySampleHint(
                                            Pipeline,
                                            SampleHint
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineAcceptSampleData(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_reads_bytes_(SampleSize) PWINBIO_BIR SampleBuffer,
    _In_ SIZE_T SampleSize,
    _In_ WINBIO_BIR_PURPOSE Purpose,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->AcceptSampleData))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->AcceptSampleData(
                                            Pipeline,
                                            SampleBuffer,
                                            SampleSize,
                                            Purpose,
                                            RejectDetail
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineExportEngineData(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_BIR_DATA_FLAGS Flags,
    _Outptr_result_bytebuffer_all_(*SampleSize) PWINBIO_BIR *SampleBuffer,
    _Out_ PSIZE_T SampleSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->ExportEngineData))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->ExportEngineData(
                                            Pipeline,
                                            Flags,
                                            SampleBuffer,
                                            SampleSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineVerifyFeatureSet(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_IDENTITY Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _Out_ PBOOLEAN Match,
    _Outptr_result_bytebuffer_all_(*PayloadBlobSize) PUCHAR *PayloadBlob,
    _Out_ PSIZE_T PayloadBlobSize,
    _Outptr_result_bytebuffer_all_(*HashSize) PUCHAR *HashValue,
    _Out_ PSIZE_T HashSize,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->VerifyFeatureSet))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->VerifyFeatureSet(
                                            Pipeline,
                                            Identity,
                                            SubFactor,
                                            Match,
                                            PayloadBlob,
                                            PayloadBlobSize,
                                            HashValue,
                                            HashSize,
                                            RejectDetail
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineIdentifyFeatureSet(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_IDENTITY Identity,
    _Out_ PWINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _Outptr_result_bytebuffer_all_(*PayloadBlobSize) PUCHAR *PayloadBlob,
    _Out_ PSIZE_T PayloadBlobSize,
    _Outptr_result_bytebuffer_all_(*HashSize) PUCHAR *HashValue,
    _Out_ PSIZE_T HashSize,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->IdentifyFeatureSet))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->IdentifyFeatureSet(
                                            Pipeline,
                                            Identity,
                                            SubFactor,
                                            PayloadBlob,
                                            PayloadBlobSize,
                                            HashValue,
                                            HashSize,
                                            RejectDetail
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineCreateEnrollment(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->CreateEnrollment))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->CreateEnrollment(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineUpdateEnrollment(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->UpdateEnrollment))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->UpdateEnrollment(
                                            Pipeline,
                                            RejectDetail
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineGetEnrollmentStatus(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_REJECT_DETAIL RejectDetail
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->GetEnrollmentStatus))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->GetEnrollmentStatus(
                                            Pipeline,
                                            RejectDetail
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineGetEnrollmentHash(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Outptr_result_bytebuffer_all_(*HashSize) PUCHAR *HashValue,
    _Out_ PSIZE_T HashSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->GetEnrollmentHash))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->GetEnrollmentHash(
                                            Pipeline,
                                            HashValue,
                                            HashSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineCheckForDuplicate(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_IDENTITY Identity,
    _Out_ PWINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _Out_ PBOOLEAN Duplicate
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->CheckForDuplicate))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->CheckForDuplicate(
                                            Pipeline,
                                            Identity,
                                            SubFactor,
                                            Duplicate
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineCommitEnrollment(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_IDENTITY Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _In_reads_bytes_(PayloadBlobSize) PUCHAR PayloadBlob,
    _In_ SIZE_T PayloadBlobSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->CommitEnrollment))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->CommitEnrollment(
                                            Pipeline,
                                            Identity,
                                            SubFactor,
                                            PayloadBlob,
                                            PayloadBlobSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineDiscardEnrollment(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->DiscardEnrollment))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->DiscardEnrollment(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineControlUnit(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->ControlUnit))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->ControlUnit(
                                            Pipeline,
                                            ControlCode,
                                            SendBuffer,
                                            SendBufferSize,
                                            ReceiveBuffer,
                                            ReceiveBufferSize,
                                            ReceiveDataSize,
                                            OperationStatus
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineControlUnitPrivileged(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->ControlUnitPrivileged))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->ControlUnitPrivileged(
                                            Pipeline,
                                            ControlCode,
                                            SendBuffer,
                                            SendBufferSize,
                                            ReceiveBuffer,
                                            ReceiveBufferSize,
                                            ReceiveDataSize,
                                            OperationStatus
                                            );
    }
}
//-----------------------------------------------------------------------------

#if (NTDDI_VERSION >= NTDDI_WIN8)

inline HRESULT
WbioEngineNotifyPowerChange(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG PowerEventType
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->NotifyPowerChange))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->NotifyPowerChange(
                                            Pipeline,
                                            PowerEventType
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineReserved_1(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_IDENTITY Identity
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface) ||
        !ARGUMENT_PRESENT(Identity))
    {
        return E_POINTER;
    }
    else
    {
        return E_NOTIMPL;
    }
}
//-----------------------------------------------------------------------------
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
//
// V3.0 methods begin here...
//

inline HRESULT
WbioEnginePipelineInit(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->PipelineInit))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->PipelineInit(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEnginePipelineCleanup(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->PipelineCleanup))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->PipelineCleanup(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineActivate(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->Activate))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->Activate(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineDeactivate(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->Deactivate))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->Deactivate(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineQueryExtendedInfo(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_bytes_(EngineInfoSize) PWINBIO_EXTENDED_ENGINE_INFO EngineInfo,
    _In_ SIZE_T EngineInfoSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface) ||
        !ARGUMENT_PRESENT(EngineInfo))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->QueryExtendedInfo))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->QueryExtendedInfo(
                                            Pipeline,
                                            EngineInfo,
                                            EngineInfoSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineIdentifyAll(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T PresenceCount,
    _Out_ PWINBIO_PRESENCE *PresenceArray
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface) ||
        !ARGUMENT_PRESENT(PresenceCount) ||
        !ARGUMENT_PRESENT(PresenceArray))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->IdentifyAll))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->IdentifyAll(
                                            Pipeline,
                                            PresenceCount,
                                            PresenceArray
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineSetEnrollmentSelector(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONGLONG SelectorValue
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->SetEnrollmentSelector))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->SetEnrollmentSelector(
                                            Pipeline,
                                            SelectorValue
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineQueryExtendedEnrollmentStatus(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_bytes_(EnrollmentStatusSize) PWINBIO_EXTENDED_ENROLLMENT_STATUS EnrollmentStatus,
    _In_ SIZE_T EnrollmentStatusSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface) ||
        !ARGUMENT_PRESENT(EnrollmentStatus))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->QueryExtendedEnrollmentStatus))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->QueryExtendedEnrollmentStatus(
                                            Pipeline,
                                            EnrollmentStatus,
                                            EnrollmentStatusSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineSetEnrollmentParameters(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_EXTENDED_ENROLLMENT_PARAMETERS Parameters
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->SetEnrollmentParameters))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->SetEnrollmentParameters(
                                            Pipeline,
                                            Parameters
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineRefreshCache(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->RefreshCache))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->RefreshCache(
                                            Pipeline
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineSelectCalibrationFormat(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_reads_(FormatCount) PWINBIO_UUID FormatArray,
    _In_ SIZE_T FormatCount,
    _Out_ PWINBIO_UUID SelectedFormat,
    _Out_ PSIZE_T MaxBufferSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface) ||
        !ARGUMENT_PRESENT(FormatArray) ||
        !ARGUMENT_PRESENT(SelectedFormat) ||
        !ARGUMENT_PRESENT(MaxBufferSize))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->SelectCalibrationFormat))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->SelectCalibrationFormat(
                                            Pipeline,
                                            FormatArray,
                                            FormatCount,
                                            SelectedFormat,
                                            MaxBufferSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineQueryCalibrationData(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PBOOLEAN DiscardAndRepeatCapture,
    _Out_writes_bytes_to_(MaxBufferSize, *CalibrationBufferSize) PUCHAR CalibrationBuffer,
    _Out_ PSIZE_T CalibrationBufferSize,
    _In_ SIZE_T MaxBufferSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface) ||
        !ARGUMENT_PRESENT(DiscardAndRepeatCapture) ||
        !ARGUMENT_PRESENT(CalibrationBuffer) ||
        !ARGUMENT_PRESENT(CalibrationBufferSize))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->QueryCalibrationData))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->QueryCalibrationData(
                                            Pipeline,
                                            DiscardAndRepeatCapture,
                                            CalibrationBuffer,
                                            CalibrationBufferSize,
                                            MaxBufferSize
                                            );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioEngineSetAccountPolicy(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_reads_(PolicyItemCount) PWINBIO_ACCOUNT_POLICY PolicyItemArray,
    _In_ SIZE_T PolicyItemCount
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->EngineInterface) ||
        !ARGUMENT_PRESENT(PolicyItemArray))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->EngineInterface->SetAccountPolicy))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->EngineInterface->SetAccountPolicy(
                                            Pipeline,
                                            PolicyItemArray,
                                            PolicyItemCount
                                            );
    }
}
//-----------------------------------------------------------------------------

#endif

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// Storage Adapter methods...
//
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// Methods available in V1.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_STORAGE_ATTACH_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_DETACH_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

// Clears out all Storage-specific pipeline context
typedef HRESULT
(WINAPI *PIBIO_STORAGE_CLEAR_CONTEXT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_CREATE_DATABASE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_UUID DatabaseId,
    _In_ WINBIO_BIOMETRIC_TYPE Factor,
    _In_ PWINBIO_UUID Format,
    _In_ LPCWSTR FilePath,
    _In_ LPCWSTR ConnectString,
    _In_ SIZE_T IndexElementCount,
    _In_ SIZE_T InitialSize
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_ERASE_DATABASE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_UUID DatabaseId,
    _In_ LPCWSTR FilePath,
    _In_ LPCWSTR ConnectString
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_OPEN_DATABASE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_UUID DatabaseId,
    _In_ LPCWSTR FilePath,
    _In_ LPCWSTR ConnectString
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_CLOSE_DATABASE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_GET_DATA_FORMAT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_UUID Format,
    _Out_ PWINBIO_VERSION Version
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_GET_DATABASE_SIZE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T AvailableRecordCount,
    _Out_ PSIZE_T TotalRecordCount
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_ADD_RECORD_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_STORAGE_RECORD RecordContents
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_DELETE_RECORD_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_IDENTITY Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_QUERY_BY_SUBJECT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_IDENTITY Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_QUERY_BY_CONTENT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _In_reads_(IndexElementCount) ULONG IndexVector[],
    _In_ SIZE_T IndexElementCount
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_GET_RECORD_COUNT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T RecordCount
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_FIRST_RECORD_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_NEXT_RECORD_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_GET_CURRENT_RECORD_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_STORAGE_RECORD RecordContents
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_CONTROL_UNIT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_CONTROL_UNIT_PRIVILEGED_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize)  PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    );

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
// Additional methods available in V2.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_STORAGE_NOTIFY_POWER_CHANGE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG PowerEventType
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
//
// Additional methods available in V3.0 and later
//
typedef HRESULT
(WINAPI *PIBIO_STORAGE_PIPELINE_INIT_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_PIPELINE_CLEANUP_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_ACTIVATE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_DEACTIVATE_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline
    );

typedef HRESULT
(WINAPI *PIBIO_STORAGE_QUERY_EXTENDED_INFO_FN)(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_bytes_(StorageInfoSize) PWINBIO_EXTENDED_STORAGE_INFO StorageInfo,
    _In_ SIZE_T StorageInfoSize
    );

#endif

///////////////////////////////////////////////////////////////////////////////
//
// Storage Adapter interface table.
//
///////////////////////////////////////////////////////////////////////////////
//
// Available interface versions...
//
#define WINBIO_STORAGE_INTERFACE_VERSION_1  WINBIO_MAKE_INTERFACE_VERSION(1,0)

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define WINBIO_STORAGE_INTERFACE_VERSION_2  WINBIO_MAKE_INTERFACE_VERSION(2,0)
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#define WINBIO_STORAGE_INTERFACE_VERSION_3  WINBIO_MAKE_INTERFACE_VERSION(3,0)
#endif

typedef struct _WINBIO_STORAGE_INTERFACE {
    WINBIO_ADAPTER_INTERFACE_VERSION            Version;
    WINBIO_ADAPTER_TYPE                         Type;
    SIZE_T                                      Size;
    GUID                                        AdapterId;

    PIBIO_STORAGE_ATTACH_FN                     Attach;
    PIBIO_STORAGE_DETACH_FN                     Detach;

    PIBIO_STORAGE_CLEAR_CONTEXT_FN              ClearContext;

    PIBIO_STORAGE_CREATE_DATABASE_FN            CreateDatabase;
    PIBIO_STORAGE_ERASE_DATABASE_FN             EraseDatabase;

    PIBIO_STORAGE_OPEN_DATABASE_FN              OpenDatabase;
    PIBIO_STORAGE_CLOSE_DATABASE_FN             CloseDatabase;

    PIBIO_STORAGE_GET_DATA_FORMAT_FN            GetDataFormat;
    PIBIO_STORAGE_GET_DATABASE_SIZE_FN          GetDatabaseSize;

    PIBIO_STORAGE_ADD_RECORD_FN                 AddRecord;
    PIBIO_STORAGE_DELETE_RECORD_FN              DeleteRecord;

    PIBIO_STORAGE_QUERY_BY_SUBJECT_FN           QueryBySubject;
    PIBIO_STORAGE_QUERY_BY_CONTENT_FN           QueryByContent;

    PIBIO_STORAGE_GET_RECORD_COUNT_FN           GetRecordCount;
    PIBIO_STORAGE_FIRST_RECORD_FN               FirstRecord;
    PIBIO_STORAGE_NEXT_RECORD_FN                NextRecord;
    PIBIO_STORAGE_GET_CURRENT_RECORD_FN         GetCurrentRecord;

    PIBIO_STORAGE_CONTROL_UNIT_FN               ControlUnit;
    PIBIO_STORAGE_CONTROL_UNIT_PRIVILEGED_FN    ControlUnitPrivileged;

#if (NTDDI_VERSION >= NTDDI_WIN8)
    //
    // V2.0 methods begin here...
    //
    PIBIO_STORAGE_NOTIFY_POWER_CHANGE_FN        NotifyPowerChange;
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
    //
    // V3.0 methods begin here...
    //
    PIBIO_STORAGE_PIPELINE_INIT_FN              PipelineInit;
    PIBIO_STORAGE_PIPELINE_CLEANUP_FN           PipelineCleanup;
    PIBIO_STORAGE_ACTIVATE_FN                   Activate;
    PIBIO_STORAGE_DEACTIVATE_FN                 Deactivate;
    PIBIO_STORAGE_QUERY_EXTENDED_INFO_FN        QueryExtendedInfo;
#endif

} WINBIO_STORAGE_INTERFACE, *PWINBIO_STORAGE_INTERFACE;


//
// Interface-retrieval function exported by the Storage Adapter
// plug-in DLL. It *MUST* be called 'WbioQueryStorageInterface'.
//
HRESULT
WINAPI
WbioQueryStorageInterface(
    _Out_ PWINBIO_STORAGE_INTERFACE *StorageInterface
    );

//
// Pointer to an interface-retrieval function used by the 
// framework after a 'GetProcAddress' call.
//
typedef HRESULT
(WINAPI *PWINBIO_QUERY_STORAGE_INTERFACE_FN)(
    _Out_ PWINBIO_STORAGE_INTERFACE *StorageInterface
    );

#define WINBIO_QUERY_STORAGE_INTERFACE_FN_NAME  ("WbioQueryStorageInterface")





///////////////////////////////////////////////////////////////////////////////
//
// Inline functions for calling Storage Adapter methods
//
///////////////////////////////////////////////////////////////////////////////
inline HRESULT
WbioStorageAttach(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->Attach))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->Attach(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageDetach(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->Detach))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->Detach(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageClearContext(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->ClearContext))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->ClearContext(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageCreateDatabase(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_UUID DatabaseId,
    _In_ WINBIO_BIOMETRIC_TYPE Factor,
    _In_ PWINBIO_UUID Format,
    _In_ LPCWSTR FilePath,
    _In_ LPCWSTR ConnectString,
    _In_ SIZE_T IndexElementCount,
    _In_ SIZE_T InitialSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->CreateDatabase))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->CreateDatabase(
                                                Pipeline,
                                                DatabaseId,
                                                Factor,
                                                Format,
                                                FilePath,
                                                ConnectString,
                                                IndexElementCount,
                                                InitialSize
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageEraseDatabase(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_UUID DatabaseId,
    _In_ LPCWSTR FilePath,
    _In_ LPCWSTR ConnectString
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->EraseDatabase))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->EraseDatabase(
                                                Pipeline,
                                                DatabaseId,
                                                FilePath,
                                                ConnectString
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageOpenDatabase(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_UUID DatabaseId,
    _In_ LPCWSTR FilePath,
    _In_ LPCWSTR ConnectString
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->OpenDatabase))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->OpenDatabase(
                                                Pipeline,
                                                DatabaseId,
                                                FilePath,
                                                ConnectString
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageCloseDatabase(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->CloseDatabase))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->CloseDatabase(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageGetDataFormat(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_UUID Format,
    _Out_ PWINBIO_VERSION Version
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->GetDataFormat))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->GetDataFormat(
                                                Pipeline,
                                                Format,
                                                Version
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageGetDatabaseSize(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T AvailableRecordCount,
    _Out_ PSIZE_T TotalRecordCount
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->GetDatabaseSize))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->GetDatabaseSize(
                                                Pipeline,
                                                AvailableRecordCount,
                                                TotalRecordCount
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageAddRecord(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_STORAGE_RECORD RecordContents
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->AddRecord))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->AddRecord( 
                                                Pipeline, 
                                                RecordContents
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageDeleteRecord(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_IDENTITY Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->DeleteRecord))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->DeleteRecord(
                                                Pipeline,
                                                Identity,
                                                SubFactor
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageQueryBySubject(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ PWINBIO_IDENTITY Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->QueryBySubject))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->QueryBySubject(
                                                Pipeline,
                                                Identity,
                                                SubFactor
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageQueryByContent(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _In_reads_(IndexElementCount) ULONG IndexVector[],
    _In_ SIZE_T IndexElementCount
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->QueryByContent))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->QueryByContent(
                                                Pipeline,
                                                SubFactor,
                                                IndexVector,
                                                IndexElementCount
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageGetRecordCount(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PSIZE_T RecordCount
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->GetRecordCount))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->GetRecordCount(
                                                Pipeline,
                                                RecordCount
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageFirstRecord(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->FirstRecord))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->FirstRecord(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageNextRecord(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->NextRecord))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->NextRecord(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageGetCurrentRecord(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_ PWINBIO_STORAGE_RECORD RecordContents
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->GetCurrentRecord))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->GetCurrentRecord(
                                                Pipeline,
                                                RecordContents
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageControlUnit(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize)  PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->ControlUnit))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->ControlUnit(
                                                Pipeline,
                                                ControlCode,
                                                SendBuffer,
                                                SendBufferSize,
                                                ReceiveBuffer,
                                                ReceiveBufferSize,
                                                ReceiveDataSize,
                                                OperationStatus
                                                );
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageControlUnitPrivileged(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize)  PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_ PSIZE_T ReceiveDataSize,
    _Out_ PULONG OperationStatus
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->ControlUnitPrivileged))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->ControlUnitPrivileged(
                                                Pipeline,
                                                ControlCode,
                                                SendBuffer,
                                                SendBufferSize,
                                                ReceiveBuffer,
                                                ReceiveBufferSize,
                                                ReceiveDataSize,
                                                OperationStatus
                                                );
    }
}
//-----------------------------------------------------------------------------

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
// V2.0 methods begin here...
//

inline HRESULT
WbioStorageNotifyPowerChange(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _In_ ULONG PowerEventType
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->NotifyPowerChange))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->NotifyPowerChange(
                                                Pipeline,
                                                PowerEventType
                                                );
    }
}
//-----------------------------------------------------------------------------
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
//
// V3.0 methods begin here...
//

inline HRESULT
WbioStoragePipelineInit(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->PipelineInit))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->PipelineInit(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStoragePipelineCleanup(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->PipelineCleanup))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->PipelineCleanup(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageActivate(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->Activate))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->Activate(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageDeactivate(
    _Inout_ PWINBIO_PIPELINE Pipeline
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->Deactivate))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->Deactivate(Pipeline);
    }
}
//-----------------------------------------------------------------------------

inline HRESULT
WbioStorageQueryExtendedInfo(
    _Inout_ PWINBIO_PIPELINE Pipeline,
    _Out_writes_bytes_(StorageInfoSize) PWINBIO_EXTENDED_STORAGE_INFO StorageInfo,
    _In_ SIZE_T StorageInfoSize
    )
{
    if (!ARGUMENT_PRESENT(Pipeline) ||
        !ARGUMENT_PRESENT(Pipeline->StorageInterface) ||
        !ARGUMENT_PRESENT(StorageInfo))
    {
        return E_POINTER;
    }
    else if (!ARGUMENT_PRESENT(Pipeline->StorageInterface->QueryExtendedInfo))
    {
        return E_NOTIMPL;
    }
    else
    {
        return Pipeline->StorageInterface->QueryExtendedInfo(
                                                Pipeline,
                                                StorageInfo,
                                                StorageInfoSize
                                                );
    }
}
//-----------------------------------------------------------------------------

#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif // (NTDDI_VERSION >= NTDDI_WIN7)


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // _WINBIO_ADAPTER_H_2C0E14E1_5330_4f60_9B4F_836CFFD7452A_


