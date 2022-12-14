/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    UcmTcpciSpec.h

Abstract:

    Declarations for registers defined in the USB TCPCI specification below
    and adopted (with minor modifications) by the UCM-TCPCI class extension.

    Universal Serial Bus Type-C Port Controller Interface Specification
    Revision 1.0, Version 1.0, October 20, 2015

    Refer to the referenced sections in the specification for further
    information.

Environment:

    Kernel-mode.

--*/

//
// NOTE: This header is generated by stubwork.  Please make any 
//       modifications to the corresponding template files 
//       (.x or .y) and use stubwork to regenerate the header
//

#ifndef _UCMTCPCISPEC_H_
#define _UCMTCPCISPEC_H_

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START



typedef enum _UCMTCPCI_PORT_CONTROLLER_COMMAND {
    UcmTcpciPortControllerCommandInvalid = 0x0,
    UcmTcpciPortControllerCommandEnterLowPower = 0x11,
    UcmTcpciPortControllerCommandDisableVbusDetect = 0x22,
    UcmTcpciPortControllerCommandEnableVbusDetect = 0x33,
    UcmTcpciPortControllerCommandDisableSinkVbus = 0x44,
    UcmTcpciPortControllerCommandEnableSinkVbus = 0x55,
    UcmTcpciPortControllerCommandDisableSourceVbus = 0x66,
    UcmTcpciPortControllerCommandSourceVbusDefaultVoltage = 0x77,
    UcmTcpciPortControllerCommandSourceVbusHighVoltage = 0x88,
    UcmTcpciPortControllerCommandLook4Connection = 0x99,
    UcmTcpciPortControllerCommandRxOneMore = 0xAA,
    UcmTcpciPortControllerCommandExitLowPower = 0xFF,
} UCMTCPCI_PORT_CONTROLLER_COMMAND;

typedef enum _UCMTCPCI_PORT_CONTROLLER_RETRY_COUNTER {
    UcmTcpciPortControllerNoRetry = 0x0,
    UcmTcpciPortControllerRetryOnce = 0x1,
    UcmTcpciPortControllerRetryTwice = 0x2,
    UcmTcpciPortControllerRetryThreeTimes = 0x3,
} UCMTCPCI_PORT_CONTROLLER_RETRY_COUNTER;

typedef enum _UCMTCPCI_PORT_CONTROLLER_TRANSMIT_SOP_MESSAGE {
    UcmTcpciPortControllerTransmitSOP = 0x0,
    UcmTcpciPortControllerTransmitSOPPrime = 0x1,
    UcmTcpciPortControllerTransmitSOPDoublePrime = 0x2,
    UcmTcpciPortControllerTransmitSOPDBGPrime = 0x3,
    UcmTcpciPortControllerTransmitSOPDBGDoublePrime = 0x4,
    UcmTcpciPortControllerTransmitHardReset = 0x5,
    UcmTcpciPortControllerTransmitCableReset = 0x6,
    UcmTcpciPortControllerTransmitBISTCarrierMode = 0x7,
} UCMTCPCI_PORT_CONTROLLER_TRANSMIT_SOP_MESSAGE;

typedef enum _UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_LSB {
    UcmTcpciPortControllerVbusVoltageAlarm25mV = 0x0,
    UcmTcpciPortControllerVbusVoltageAlarm50mV = 0x1,
    UcmTcpciPortControllerVbusVoltageAlarm100mV = 0x2,
} UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_LSB;

typedef enum _UCMTCPCI_PORT_CONTROLLER_VCONN_POWER_SUPPORTED {
    UcmTcpciPortControllerVconnPower1000mW = 0x0,
    UcmTcpciPortControllerVconnPower1500mW = 0x1,
    UcmTcpciPortControllerVconnPower2000mW = 0x2,
    UcmTcpciPortControllerVconnPower3000mW = 0x3,
    UcmTcpciPortControllerVconnPower4000mW = 0x4,
    UcmTcpciPortControllerVconnPower5000mW = 0x5,
    UcmTcpciPortControllerVconnPower6000mW = 0x6,
    UcmTcpciPortControllerVconnPowerExternal = 0x7,
} UCMTCPCI_PORT_CONTROLLER_VCONN_POWER_SUPPORTED;

typedef enum _UCMTCPCI_PORT_CONTROLLER_RECEIVED_SOP_MESSAGE {
    UcmTcpciPortControllerReceivedSOP = 0x0,
    UcmTcpciPortControllerReceivedSOPPrime = 0x1,
    UcmTcpciPortControllerReceivedSOPDoublePrime = 0x2,
    UcmTcpciPortControllerReceivedSOPDBGPrime = 0x3,
    UcmTcpciPortControllerReceivedSOPDBGDoublePrime = 0x4,
    UcmTcpciPortControllerReceivedCableReset = 0x5,
} UCMTCPCI_PORT_CONTROLLER_RECEIVED_SOP_MESSAGE;

typedef enum _UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_SCALE_FACTOR {
    UcmTcpciPortControllerVbusMeasurementNotScaled = 0x0,
    UcmTcpciPortControllerVbusMeasurementDividedBy2 = 0x1,
    UcmTcpciPortControllerVbusMeasurementDividedBy4 = 0x2,
} UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_SCALE_FACTOR;

typedef enum _UCMTCPCI_PORT_CONTROLLER_MUX_CONTROL {
    UcmTcpciPortControllerMuxNoConnection = 0x0,
    UcmTcpciPortControllerMuxUSB31Connected = 0x1,
    UcmTcpciPortControllerMuxDP4Lanes = 0x2,
    UcmTcpciPortControllerMuxUSB31AndDP2Lanes = 0x3,
} UCMTCPCI_PORT_CONTROLLER_MUX_CONTROL;

typedef enum _UCMTCPCI_PORT_CONTROLLER_ROLES_SUPPORTED {
    UcmTcpciPortControllerRoleSourceOrSinkOnly = 0x0,
    UcmTcpciPortControllerRoleSourceOnly = 0x1,
    UcmTcpciPortControllerRoleSinkOnly = 0x2,
    UcmTcpciPortControllerRoleSinkWithAccessorySupport = 0x3,
    UcmTcpciPortControllerRoleDRPOnly = 0x4,
    UcmTcpciPortControllerRoleAllSupported = 0x5,
    UcmTcpciPortControllerRoleSourceSinkDRP = 0x6,
} UCMTCPCI_PORT_CONTROLLER_ROLES_SUPPORTED;

typedef enum _UCMTCPCI_PORT_CONTROLLER_SOURCE_RESISTOR_SUPPORTED {
    UcmTcpciPortControllerRpDefaultOnly = 0x0,
    UcmTcpciPortControllerRpDefault1500mA = 0x1,
    UcmTcpciPortControllerRpDefault1500mA3000mA = 0x2,
} UCMTCPCI_PORT_CONTROLLER_SOURCE_RESISTOR_SUPPORTED;

typedef enum _UCMTCPCI_PORT_CONTROLLER_MESSAGE_HEADER_PD_REVISION {
    UcmTcpciPortControllerMessageHeaderPdRevision1 = 0x0,
    UcmTcpciPortControllerMessageHeaderPdRevision2 = 0x1,
} UCMTCPCI_PORT_CONTROLLER_MESSAGE_HEADER_PD_REVISION;

typedef enum _UCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL_CC {
    UcmTcpciPortControllerRoleControlCCRa = 0x0,
    UcmTcpciPortControllerRoleControlCCRp = 0x1,
    UcmTcpciPortControllerRoleControlCCRd = 0x2,
    UcmTcpciPortControllerRoleControlCCOpen = 0x3,
} UCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL_CC;

typedef enum _UCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL_RP {
    UcmTcpciPortControllerRoleControlRpDefault = 0x0,
    UcmTcpciPortControllerRoleControlRp1500mA = 0x1,
    UcmTcpciPortControllerRoleControlRp3000mA = 0x2,
} UCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL_RP;

typedef enum _UCMTCPCI_PORT_CONTROLLER_CC_STATE {
    UcmTcpciPortControllerCCStateOpen = 0x0,
    UcmTcpciPortControllerCCStateSrcOpen = 0x0,
    UcmTcpciPortControllerCCStateSrcRa = 0x1,
    UcmTcpciPortControllerCCStateSrcRd = 0x2,
    UcmTcpciPortControllerCCStateSnkOpen = 0x0,
    UcmTcpciPortControllerCCStateSnkPowerDefault = 0x1,
    UcmTcpciPortControllerCCStateSnkPower1500mA = 0x2,
    UcmTcpciPortControllerCCStateSnkPower3000mA = 0x3,
} UCMTCPCI_PORT_CONTROLLER_CC_STATE;

typedef enum _UCMTCPCI_PORT_CONTROLLER_CC_STATUS_CONNECT_RESULT {
    UcmTcpciPortControllerConnectResultPresentingRp = 0x0,
    UcmTcpciPortControllerConnectResultPresentingRd = 0x1,
} UCMTCPCI_PORT_CONTROLLER_CC_STATUS_CONNECT_RESULT;



#pragma warning(push)
#pragma warning(disable:4201) // nonstandard extension used : nameless struct/union
#pragma warning(disable:4214) // nonstandard extension used : bit field types other than int
#include <pshpack1.h>

//
// 4.4.8.1 DEVICE_CAPABILITIES (Required)
// Table 4-24. DEVICE_CAPABILITIES_1 Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_1
{
    UINT16 AsUInt16;
    struct
    {
        UINT16 SourceVbus : 1;
        UINT16 SourceHighVoltageVbus : 1;
        UINT16 SinkVbus : 1;
        UINT16 SourceVconn : 1;
        UINT16 SOPDbgSupport : 1;
        UINT16 RolesSupported : 3;
        UINT16 SourceResistorSupported : 2;
        UINT16 VbusMeasurementAndAlarmCapable : 1;
        UINT16 ForceDischarge : 1;
        UINT16 BleedDischarge : 1;
        UINT16 VbusOVPReporting : 1;
        UINT16 VbusOCPReporting : 1;
        UINT16: 1;
    };
} UCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_1, *PUCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_1;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_1) == 2);

//
// 4.4.8.1 DEVICE_CAPABILITIES (Required)
// Table 4-25. DEVICE_CAPABILITIES_2 Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_2
{
    UINT16 AsUInt16;
    struct
    {
        UINT16 VconnOvercurrentFaultCapable : 1;
        UINT16 VconnPowerSupported : 3;
        UINT16 VbusVoltageAlarmLSB : 2;
        UINT16 StopDischargeThreshold : 1;
        UINT16 SinkDisconnectDetection : 1;
        UINT16: 8;
    };
} UCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_2, *PUCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_2;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_2) == 2);

//
// 4.4.8.2 STANDARD_INPUT_CAPABILITIES (Required)
// Table 4-26. STANDARD_INPUT_CAPABILITIES Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_STANDARD_INPUT_CAPABILITIES
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 ForceOffVbus : 1;
        UINT8 VbusExternalOverCurrentFault : 1;
        UINT8 VbusExternalOverVoltageFault : 1;
        UINT8: 5;
    };
} UCMTCPCI_PORT_CONTROLLER_STANDARD_INPUT_CAPABILITIES, *PUCMTCPCI_PORT_CONTROLLER_STANDARD_INPUT_CAPABILITIES;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_STANDARD_INPUT_CAPABILITIES) == 1);

//
// 4.4.8.3 STANDARD_OUTPUT_CAPABILITIES (Required)
// Table 4-27. STANDARD_OUTPUT_CAPABILITIES Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_STANDARD_OUTPUT_CAPABILITIES
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 ConnectorOrientation : 1;
        UINT8 ConnectionPresent : 1;
        UINT8 MUXConfigurationControl : 1;
        UINT8 ActiveCableIndicator : 1;
        UINT8 AudioAdapterAccessoryIndicator : 1;
        UINT8 VbusPresentMonitor : 1;
        UINT8 DebugAccessoryIndicator : 1;
        UINT8: 1;
    };
} UCMTCPCI_PORT_CONTROLLER_STANDARD_OUTPUT_CAPABILITIES, *PUCMTCPCI_PORT_CONTROLLER_STANDARD_OUTPUT_CAPABILITIES;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_STANDARD_OUTPUT_CAPABILITIES) == 1);

//
// 4.4.9 MESSAGE_HEADER_INFO (Required)
// Table 4-28. MESSAGE_HEADER_INFO Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_MESSAGE_HEADER_INFO {
    UINT8 AsUInt8;
    struct {
        UINT8 PowerRole : 1;
        UINT8 USBPDSpecificationRevision : 2;
        UINT8 DataRole : 1;
        UINT8 CablePlug : 1;
        UINT8: 3;
    };
} UCMTCPCI_PORT_CONTROLLER_MESSAGE_HEADER_INFO, *PUCMTCPCI_PORT_CONTROLLER_MESSAGE_HEADER_INFO;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_MESSAGE_HEADER_INFO) == 1);

//
// 4.4.10 RECEIVE_DETECT (Required)
// Table 4-29. RECEIVE_DETECT Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_RECEIVE_DETECT
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 EnableSOPMessage : 1;
        UINT8 EnableSOPPrimeMessage : 1;
        UINT8 EnableSOPDoublePrimeMessage : 1;
        UINT8 EnableSOPDBGPrimeMessage : 1;
        UINT8 EnableSOPDBGDoublePrimeMessage : 1;
        UINT8 EnableHardReset : 1;
        UINT8 EnableCableReset : 1;
        UINT8: 1;
    };
} UCMTCPCI_PORT_CONTROLLER_RECEIVE_DETECT, *PUCMTCPCI_PORT_CONTROLLER_RECEIVE_DETECT;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_RECEIVE_DETECT) == 1);

//
// 4.4.5.1 TCPC_CONTROL (Required)
// Table 4-13. TCPC_Control Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_TCPC_CONTROL
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 PlugOrientation : 1;
        UINT8 BISTMode : 1;
        UINT8: 2;
        UINT8 DebugAccessoryControl : 1;
        UINT8: 3;
    };
} UCMTCPCI_PORT_CONTROLLER_TCPC_CONTROL, *PUCMTCPCI_PORT_CONTROLLER_TCPC_CONTROL;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_TCPC_CONTROL) == 1);

//
// 4.4.5.2 ROLE_CONTROL (Required)
// Table 4-14. ROLE_CONTROL Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 CC1 : 2;
        UINT8 CC2 : 2;
        UINT8 RpValue : 2;
        UINT8 Drp : 1;
        UINT8: 1;
    };
} UCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL, *PUCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL) == 1);

//
// 4.4.5.3 FAULT_CONTROL (Required)
// Table 4-16. FAULT_CONTROL Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_FAULT_CONTROL
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 VconnOvercurrent : 1;
        UINT8 VbusOVP : 1;
        UINT8 VbusOCP : 1;
        UINT8 VbusDischargeFaultDetectionTimer : 1;
        UINT8 ForceOffVbus : 1;
        UINT8: 3;
    };
} UCMTCPCI_PORT_CONTROLLER_FAULT_CONTROL, *PUCMTCPCI_PORT_CONTROLLER_FAULT_CONTROL;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_ROLE_CONTROL) == 1);

//
// 4.4.5.4 POWER_CONTROL (Required)
// Table 4-17. POWER_CONTROL Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_POWER_CONTROL
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 EnableVconn : 1;
        UINT8 VconnPowerSupported : 1;
        UINT8 ForceDischarge : 1;
        UINT8 EnableBleedDischarge : 1;
        UINT8 AutoDischargeDisconnect : 1;
        UINT8 DisableVoltageAlarms : 1;
        UINT8 VbusVoltageMonitor : 1;
        UINT8: 1;
    };
} UCMTCPCI_PORT_CONTROLLER_POWER_CONTROL, *PUCMTCPCI_PORT_CONTROLLER_POWER_CONTROL;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_POWER_CONTROL) == 1);

//
// 4.4.6.1 CC_STATUS (Required)
// Table 4-20. CC_STATUS Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_CC_STATUS
{
    UINT8 AsUInt8;
    struct {
        UINT8 CC1State : 2;
        UINT8 CC2State : 2;
        UINT8 ConnectResult : 1;
        UINT8 Looking4Connection : 1;
        UINT8: 2;
    };
} UCMTCPCI_PORT_CONTROLLER_CC_STATUS, *PUCMTCPCI_PORT_CONTROLLER_CC_STATUS;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_CC_STATUS) == 1);

//
// 4.4.6.2 POWER_STATUS (Required)
// Table 4-21. POWER_STATUS Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_POWER_STATUS
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 SinkingVbus : 1;
        UINT8 VconnPresent : 1;
        UINT8 VbusPresent : 1;
        UINT8 VbusPresentDetectionEnabled : 1;
        UINT8 SourcingVbus : 1;
        UINT8 SourcingHighVoltage : 1;
        UINT8 TCPCInitializationStatus : 1;
        UINT8 DebugAccessoryConnected : 1;
    };
} UCMTCPCI_PORT_CONTROLLER_POWER_STATUS, *PUCMTCPCI_PORT_CONTROLLER_POWER_STATUS;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_POWER_STATUS) == 1);

//
// 4.4.6.3 FAULT_STATUS (Required)
// Table 4-22. FAULT_STATUS Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_FAULT_STATUS
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 InterfaceError : 1;
        UINT8 VconnOverCurrent : 1;
        UINT8 VbusOVP : 1;
        UINT8 VbusOCP : 1;
        UINT8 ForceDischargeFailed : 1;
        UINT8 AutoDischargeFailed : 1;
        UINT8 ForceOffVbus : 1;
        UINT8: 1;
    };
} UCMTCPCI_PORT_CONTROLLER_FAULT_STATUS, *PUCMTCPCI_PORT_CONTROLLER_FAULT_STATUS;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_FAULT_STATUS) == 1);

//
// 4.4.4 CONFIGURE STANDARD OUTPUT (Optional Normative)
// Table 4-12. CONFIG_STANDARD_OUTPUT Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_CONFIG_STANDARD_OUTPUT
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 ConnectorOrientation : 1;
        UINT8 ConnectionPresent : 1;
        UINT8 MUXControl : 2;
        UINT8 ActiveCableConnected : 1;
        UINT8 AudioAccessoryConnected : 1;
        UINT8 DebugAccessoryConnected : 1;
        UINT8 HighImpedanceOutputs : 1;
    };
} UCMTCPCI_PORT_CONTROLLER_CONFIG_STANDARD_OUTPUT, *PUCMTCPCI_PORT_CONTROLLER_CONFIG_STANDARD_OUTPUT;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_CONFIG_STANDARD_OUTPUT) == 1);

//
// 4.4.15.1 VBUS_SINK_DISCONNECT_THRESHOLD
// Table 4-39. VBUS_SINK_DISCONNECT_THRESHOLD Register Description
//
typedef union _UCMTCPCI_PORT_CONTROLLER_VBUS_SINK_DISCONNECT_THRESHOLD
{
    UINT16 AsUInt16;
    struct
    {
        UINT16 VoltageTripPoint : 10;
        UINT16: 6;
    };
} UCMTCPCI_PORT_CONTROLLER_VBUS_SINK_DISCONNECT_THRESHOLD, *PUCMTCPCI_PORT_CONTROLLER_VBUS_SINK_DISCONNECT_THRESHOLD;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_VBUS_SINK_DISCONNECT_THRESHOLD) == 2);

//
// 4.4.15.2 VBUS_STOP_DISCHARGE_THRESHOLD
// Table 4-40. VBUS_STOP_DISCHARGE_THRESHOLD Register Description
//
typedef union _UCMTCPCI_PORT_CONTROLLER_VBUS_STOP_DISCHARGE_THRESHOLD
{
    UINT16 AsUInt16;
    struct
    {
        UINT16 VoltageTripPoint : 10;
        UINT16: 6;
    };
} UCMTCPCI_PORT_CONTROLLER_VBUS_STOP_DISCHARGE_THRESHOLD, *PUCMTCPCI_PORT_CONTROLLER_VBUS_STOP_DISCHARGE_THRESHOLD;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_VBUS_STOP_DISCHARGE_THRESHOLD) == 2);

//
// 4.4.15.3 Voltage Alarms (Optional Normative)
// Table 4-41. VBUS_VOLTAGE_ALARM_HI_CFG Register Description
//
typedef union _UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_HI_CFG
{
    UINT16 AsUInt16;
    struct
    {
        UINT16 VoltageTripPoint : 10;
        UINT16: 6;
    };
} UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_HI_CFG, *PUCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_HI_CFG;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_HI_CFG) == 2);

//
// 4.4.15.3 Voltage Alarms (Optional Normative)
// Table 4-42. VBUS_VOLTAGE_ALARM_LO_CFG Register Description
//
typedef union _UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_LO_CFG
{
    UINT16 AsUInt16;
    struct
    {
        UINT16 VoltageTripPoint : 10;
        UINT16: 6;
    };
} UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_LO_CFG, *PUCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_LO_CFG;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE_ALARM_LO_CFG) == 2);

//
// 4.4.14 VBUS_VOLTAGE (Optional Normative)
// Table 4-38. VBUS_VOLTAGE Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE
{
    UINT16 AsUInt16;
    struct
    {
        UINT16 VbusVoltageMeasurement : 10;
        UINT16 ScaleFactor : 2;
        UINT16 : 4;
    };
} UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE, *PUCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_VBUS_VOLTAGE) == 2);

//
// 4.4.12 TRANSMIT (Required)
// Table 4-34. TRANSMIT Register Definition
//
typedef union _UCMTCPCI_PORT_CONTROLLER_TRANSMIT
{
    UINT8 AsUInt8;
    struct
    {
        UINT8 TransmitSOPMessage : 3;
        UINT8 : 1;
        UINT8 RetryCounter : 2;
        UINT8 : 2;
    };
} UCMTCPCI_PORT_CONTROLLER_TRANSMIT, *PUCMTCPCI_PORT_CONTROLLER_TRANSMIT;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_TRANSMIT) == 1);

//
// 4.4.13 TRANSMIT_BUFFER (Required)
// Table 4-35. TRANSMIT_BYTE_COUNT Definition
// Table 4-36. TX_BUF_HEADER Definition
// Table 4-37. TX_BUFFER_DATA_OBJECTS Definition
//
typedef struct _UCMTCPCI_PORT_CONTROLLER_TRANSMIT_BUFFER
{
    UINT8 TransmitByteCount;
    UINT8 Header[2];
    UINT8 DataObjects[28];
} UCMTCPCI_PORT_CONTROLLER_TRANSMIT_BUFFER, *PUCMTCPCI_PORT_CONTROLLER_TRANSMIT_BUFFER;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_TRANSMIT_BUFFER) == 31);

//
// 4.4.11 RECEIVE_BUFFER (Required)
// Table 4-30. RECEIVE_BYTE_COUNT Definition
// Table 4-31. RX_BUF_FRAME_TYPE Definition
// Table 4-32. RX_BUF_HEADER Definition
// Table 4-33. RX_BUFFER_DATA_OBJECTS Definition
//
typedef struct _UCMTCPCI_PORT_CONTROLLER_RECEIVE_BUFFER
{
    UINT8 ReceiveByteCount;

    struct
    {
        UINT8 ReceivedFrameType : 3;
        UINT8 : 5;
    };

    UINT8 Header[2];
    UINT8 DataObjects[28];
} UCMTCPCI_PORT_CONTROLLER_RECEIVE_BUFFER, *PUCMTCPCI_PORT_CONTROLLER_RECEIVE_BUFFER;

C_ASSERT(sizeof(UCMTCPCI_PORT_CONTROLLER_RECEIVE_BUFFER) == 32);

#pragma warning(pop)
#include <poppack.h>



WDF_EXTERN_C_END

#endif // _UCMTCPCISPEC_H_

