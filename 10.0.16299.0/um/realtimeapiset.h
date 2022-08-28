 
/********************************************************************************
*                                                                               *
* realtimeapi.h -- ApiSet Contract for api-ms-win-core-realtime-l1              *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _APISETREALTIME_
#define _APISETREALTIME_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>

/* APISET_NAME: api-ms-win-core-realtime-l1 */
/* APISET_TAG: public */

#if !defined(RC_INVOKED)

#ifndef _APISET_REALTIME_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN10_RS2
#define _APISET_REALTIME_VER 0x0102
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_REALTIME_VER 0x0101
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_REALTIME_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI
BOOL
WINAPI
QueryThreadCycleTime(
    _In_ HANDLE ThreadHandle,
    _Out_ PULONG64 CycleTime
    );


WINBASEAPI
BOOL
WINAPI
QueryProcessCycleTime(
    _In_ HANDLE ProcessHandle,
    _Out_ PULONG64 CycleTime
    );


WINBASEAPI
BOOL
WINAPI
QueryIdleProcessorCycleTime(
    _Inout_ PULONG BufferLength,
    _Out_writes_bytes_opt_(*BufferLength) PULONG64 ProcessorIdleCycleTime
    );


#endif


#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI
BOOL
WINAPI
QueryIdleProcessorCycleTimeEx(
    _In_ USHORT Group,
    _Inout_ PULONG BufferLength,
    _Out_writes_bytes_opt_(*BufferLength) PULONG64 ProcessorIdleCycleTime
    );

    
#endif // (_WIN32_WINNT >= 0x0601)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#if !defined(_CONTRACT_GEN) || (_APISET_REALTIME_VER >= 0x0101)

WINBASEAPI
VOID
WINAPI
QueryInterruptTimePrecise(
    _Out_ PULONGLONG lpInterruptTimePrecise
    );


WINBASEAPI
VOID
WINAPI
QueryUnbiasedInterruptTimePrecise(
    _Out_ PULONGLONG lpUnbiasedInterruptTimePrecise
    );


WINBASEAPI
VOID
WINAPI
QueryInterruptTime(
    _Out_ PULONGLONG lpInterruptTime
    );


#endif // !defined(_CONTRACT_GEN) || (_APISET_REALTIME_VER >= 0x0101)


#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI
BOOL
WINAPI
QueryUnbiasedInterruptTime(
    _Out_ PULONGLONG UnbiasedTime
    );


#endif // (_WIN32_WINNT >= 0x0601)


#if !defined(_CONTRACT_GEN) || (_APISET_REALTIME_VER >= 0x0102)

WINBASEAPI
HRESULT
WINAPI
QueryAuxiliaryCounterFrequency(
    _Out_ PULONGLONG lpAuxiliaryCounterFrequency
    );


WINBASEAPI
HRESULT
WINAPI
ConvertAuxiliaryCounterToPerformanceCounter(
    _In_ ULONGLONG ullAuxiliaryCounterValue,
    _Out_ PULONGLONG lpPerformanceCounterValue,
    _Out_opt_ PULONGLONG lpConversionError
    );


WINBASEAPI
HRESULT
WINAPI
ConvertPerformanceCounterToAuxiliaryCounter(
    _In_ ULONGLONG ullPerformanceCounterValue,
    _Out_ PULONGLONG lpAuxiliaryCounterValue,
    _Out_opt_ PULONGLONG lpConversionError
    );


#endif // !defined(_CONTRACT_GEN) || (_APISET_REALTIME_VER >= 0x0102)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _APISETREALTIME_
