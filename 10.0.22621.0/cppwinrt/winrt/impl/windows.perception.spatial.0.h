// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Perception_Spatial_0_H
#define WINRT_Windows_Perception_Spatial_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IKeyValuePair;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Perception
{
    struct PerceptionTimestamp;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IOutputStream;
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems
{
    struct RemoteSystemSession;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    enum class SpatialAnchorExportPurpose : int32_t
    {
        Relocalization = 0,
        Sharing = 1,
    };
    enum class SpatialEntityWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    enum class SpatialLocatability : int32_t
    {
        Unavailable = 0,
        OrientationOnly = 1,
        PositionalTrackingActivating = 2,
        PositionalTrackingActive = 3,
        PositionalTrackingInhibited = 4,
    };
    enum class SpatialLookDirectionRange : int32_t
    {
        ForwardOnly = 0,
        Omnidirectional = 1,
    };
    enum class SpatialMovementRange : int32_t
    {
        NoMovement = 0,
        Bounded = 1,
    };
    enum class SpatialPerceptionAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    struct ISpatialAnchor;
    struct ISpatialAnchor2;
    struct ISpatialAnchorExportSufficiency;
    struct ISpatialAnchorExporter;
    struct ISpatialAnchorExporterStatics;
    struct ISpatialAnchorManagerStatics;
    struct ISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
    struct ISpatialAnchorStatics;
    struct ISpatialAnchorStore;
    struct ISpatialAnchorTransferManagerStatics;
    struct ISpatialBoundingVolume;
    struct ISpatialBoundingVolumeStatics;
    struct ISpatialCoordinateSystem;
    struct ISpatialEntity;
    struct ISpatialEntityAddedEventArgs;
    struct ISpatialEntityFactory;
    struct ISpatialEntityRemovedEventArgs;
    struct ISpatialEntityStore;
    struct ISpatialEntityStoreStatics;
    struct ISpatialEntityUpdatedEventArgs;
    struct ISpatialEntityWatcher;
    struct ISpatialLocation;
    struct ISpatialLocation2;
    struct ISpatialLocator;
    struct ISpatialLocatorAttachedFrameOfReference;
    struct ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
    struct ISpatialLocatorStatics;
    struct ISpatialStageFrameOfReference;
    struct ISpatialStageFrameOfReferenceStatics;
    struct ISpatialStationaryFrameOfReference;
    struct SpatialAnchor;
    struct SpatialAnchorExportSufficiency;
    struct SpatialAnchorExporter;
    struct SpatialAnchorManager;
    struct SpatialAnchorRawCoordinateSystemAdjustedEventArgs;
    struct SpatialAnchorStore;
    struct SpatialAnchorTransferManager;
    struct SpatialBoundingVolume;
    struct SpatialCoordinateSystem;
    struct SpatialEntity;
    struct SpatialEntityAddedEventArgs;
    struct SpatialEntityRemovedEventArgs;
    struct SpatialEntityStore;
    struct SpatialEntityUpdatedEventArgs;
    struct SpatialEntityWatcher;
    struct SpatialLocation;
    struct SpatialLocator;
    struct SpatialLocatorAttachedFrameOfReference;
    struct SpatialLocatorPositionalTrackingDeactivatingEventArgs;
    struct SpatialStageFrameOfReference;
    struct SpatialStationaryFrameOfReference;
    struct SpatialBoundingBox;
    struct SpatialBoundingFrustum;
    struct SpatialBoundingOrientedBox;
    struct SpatialBoundingSphere;
    struct SpatialRay;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchor2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchorExporter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchorExporterStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchorManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchorStore>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialBoundingVolume>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialCoordinateSystem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialEntity>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialEntityFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialEntityStore>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialEntityStoreStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialLocation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialLocation2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialLocator>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialLocatorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReference>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialAnchor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialAnchorExportSufficiency>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialAnchorExporter>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialAnchorManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialAnchorStore>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialAnchorTransferManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialBoundingVolume>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialEntity>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialEntityStore>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialEntityWatcher>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialLocation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialLocator>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialAnchorExportPurpose>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialEntityWatcherStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialLocatability>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialLookDirectionRange>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialMovementRange>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialBoundingBox>{ using type = struct_category<winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::float3>; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialBoundingFrustum>{ using type = struct_category<winrt::Windows::Foundation::Numerics::plane, winrt::Windows::Foundation::Numerics::plane, winrt::Windows::Foundation::Numerics::plane, winrt::Windows::Foundation::Numerics::plane, winrt::Windows::Foundation::Numerics::plane, winrt::Windows::Foundation::Numerics::plane>; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox>{ using type = struct_category<winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion>; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialBoundingSphere>{ using type = struct_category<winrt::Windows::Foundation::Numerics::float3, float>; };
    template <> struct category<winrt::Windows::Perception::Spatial::SpatialRay>{ using type = struct_category<winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::float3>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialAnchor> = L"Windows.Perception.Spatial.SpatialAnchor";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialAnchorExportSufficiency> = L"Windows.Perception.Spatial.SpatialAnchorExportSufficiency";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialAnchorExporter> = L"Windows.Perception.Spatial.SpatialAnchorExporter";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialAnchorManager> = L"Windows.Perception.Spatial.SpatialAnchorManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> = L"Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialAnchorStore> = L"Windows.Perception.Spatial.SpatialAnchorStore";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialAnchorTransferManager> = L"Windows.Perception.Spatial.SpatialAnchorTransferManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialBoundingVolume> = L"Windows.Perception.Spatial.SpatialBoundingVolume";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem> = L"Windows.Perception.Spatial.SpatialCoordinateSystem";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialEntity> = L"Windows.Perception.Spatial.SpatialEntity";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs> = L"Windows.Perception.Spatial.SpatialEntityAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> = L"Windows.Perception.Spatial.SpatialEntityRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialEntityStore> = L"Windows.Perception.Spatial.SpatialEntityStore";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> = L"Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialEntityWatcher> = L"Windows.Perception.Spatial.SpatialEntityWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialLocation> = L"Windows.Perception.Spatial.SpatialLocation";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialLocator> = L"Windows.Perception.Spatial.SpatialLocator";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference> = L"Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> = L"Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference> = L"Windows.Perception.Spatial.SpatialStageFrameOfReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference> = L"Windows.Perception.Spatial.SpatialStationaryFrameOfReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialAnchorExportPurpose> = L"Windows.Perception.Spatial.SpatialAnchorExportPurpose";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialEntityWatcherStatus> = L"Windows.Perception.Spatial.SpatialEntityWatcherStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialLocatability> = L"Windows.Perception.Spatial.SpatialLocatability";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialLookDirectionRange> = L"Windows.Perception.Spatial.SpatialLookDirectionRange";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialMovementRange> = L"Windows.Perception.Spatial.SpatialMovementRange";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> = L"Windows.Perception.Spatial.SpatialPerceptionAccessStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialBoundingBox> = L"Windows.Perception.Spatial.SpatialBoundingBox";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialBoundingFrustum> = L"Windows.Perception.Spatial.SpatialBoundingFrustum";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox> = L"Windows.Perception.Spatial.SpatialBoundingOrientedBox";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialBoundingSphere> = L"Windows.Perception.Spatial.SpatialBoundingSphere";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::SpatialRay> = L"Windows.Perception.Spatial.SpatialRay";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchor> = L"Windows.Perception.Spatial.ISpatialAnchor";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchor2> = L"Windows.Perception.Spatial.ISpatialAnchor2";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchorExportSufficiency> = L"Windows.Perception.Spatial.ISpatialAnchorExportSufficiency";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchorExporter> = L"Windows.Perception.Spatial.ISpatialAnchorExporter";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchorExporterStatics> = L"Windows.Perception.Spatial.ISpatialAnchorExporterStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchorManagerStatics> = L"Windows.Perception.Spatial.ISpatialAnchorManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs> = L"Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchorStatics> = L"Windows.Perception.Spatial.ISpatialAnchorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchorStore> = L"Windows.Perception.Spatial.ISpatialAnchorStore";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics> = L"Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialBoundingVolume> = L"Windows.Perception.Spatial.ISpatialBoundingVolume";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics> = L"Windows.Perception.Spatial.ISpatialBoundingVolumeStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialCoordinateSystem> = L"Windows.Perception.Spatial.ISpatialCoordinateSystem";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialEntity> = L"Windows.Perception.Spatial.ISpatialEntity";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs> = L"Windows.Perception.Spatial.ISpatialEntityAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialEntityFactory> = L"Windows.Perception.Spatial.ISpatialEntityFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs> = L"Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialEntityStore> = L"Windows.Perception.Spatial.ISpatialEntityStore";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialEntityStoreStatics> = L"Windows.Perception.Spatial.ISpatialEntityStoreStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs> = L"Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher> = L"Windows.Perception.Spatial.ISpatialEntityWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialLocation> = L"Windows.Perception.Spatial.ISpatialLocation";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialLocation2> = L"Windows.Perception.Spatial.ISpatialLocation2";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialLocator> = L"Windows.Perception.Spatial.ISpatialLocator";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference> = L"Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs> = L"Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialLocatorStatics> = L"Windows.Perception.Spatial.ISpatialLocatorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReference> = L"Windows.Perception.Spatial.ISpatialStageFrameOfReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics> = L"Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference> = L"Windows.Perception.Spatial.ISpatialStationaryFrameOfReference";
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchor>{ 0x0529E5CE,0x1D34,0x3702,{ 0xBC,0xEC,0xEA,0xBF,0xF5,0x78,0xA8,0x69 } }; // 0529E5CE-1D34-3702-BCEC-EABFF578A869
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchor2>{ 0xED17C908,0xA695,0x4CF6,{ 0x92,0xFD,0x97,0x26,0x3B,0xA7,0x10,0x47 } }; // ED17C908-A695-4CF6-92FD-97263BA71047
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>{ 0x77C25B2B,0x3409,0x4088,{ 0xB9,0x1B,0xFD,0xFD,0x05,0xD1,0x64,0x8F } }; // 77C25B2B-3409-4088-B91B-FDFD05D1648F
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchorExporter>{ 0x9A2A4338,0x24FB,0x4269,{ 0x89,0xC5,0x88,0x30,0x4A,0xEE,0xF2,0x0F } }; // 9A2A4338-24FB-4269-89C5-88304AEEF20F
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchorExporterStatics>{ 0xED2507B8,0x2475,0x439C,{ 0x85,0xFF,0x7F,0xED,0x34,0x1F,0xDC,0x88 } }; // ED2507B8-2475-439C-85FF-7FED341FDC88
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchorManagerStatics>{ 0x88E30EAB,0xF3B7,0x420B,{ 0xB0,0x86,0x8A,0x80,0xC0,0x7D,0x91,0x0D } }; // 88E30EAB-F3B7-420B-B086-8A80C07D910D
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ 0xA1E81EB8,0x56C7,0x3117,{ 0xA2,0xE4,0x81,0xE0,0xFC,0xF2,0x8E,0x00 } }; // A1E81EB8-56C7-3117-A2E4-81E0FCF28E00
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchorStatics>{ 0xA9928642,0x0174,0x311C,{ 0xAE,0x79,0x0E,0x51,0x07,0x66,0x9F,0x16 } }; // A9928642-0174-311C-AE79-0E5107669F16
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchorStore>{ 0xB0BC3636,0x486A,0x3CB0,{ 0x9E,0x6F,0x12,0x45,0x16,0x5C,0x4D,0xB6 } }; // B0BC3636-486A-3CB0-9E6F-1245165C4DB6
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>{ 0x03BBF9B9,0x12D8,0x4BCE,{ 0x88,0x35,0xC5,0xDF,0x3A,0xC0,0xAD,0xAB } }; // 03BBF9B9-12D8-4BCE-8835-C5DF3AC0ADAB
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialBoundingVolume>{ 0xFB2065DA,0x68C3,0x33DF,{ 0xB7,0xAF,0x4C,0x78,0x72,0x07,0x99,0x9C } }; // FB2065DA-68C3-33DF-B7AF-4C787207999C
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>{ 0x05889117,0xB3E1,0x36D8,{ 0xB0,0x17,0x56,0x61,0x81,0xA5,0xB1,0x96 } }; // 05889117-B3E1-36D8-B017-566181A5B196
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialCoordinateSystem>{ 0x69EBCA4B,0x60A3,0x3586,{ 0xA6,0x53,0x59,0xA7,0xBD,0x67,0x6D,0x07 } }; // 69EBCA4B-60A3-3586-A653-59A7BD676D07
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialEntity>{ 0x166DE955,0xE1EB,0x454C,{ 0xBA,0x08,0xE6,0xC0,0x66,0x8D,0xDC,0x65 } }; // 166DE955-E1EB-454C-BA08-E6C0668DDC65
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>{ 0xA397F49B,0x156A,0x4707,{ 0xAC,0x2C,0xD3,0x1D,0x57,0x0E,0xD3,0x99 } }; // A397F49B-156A-4707-AC2C-D31D570ED399
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialEntityFactory>{ 0xE1F1E325,0x349F,0x4225,{ 0xA2,0xF3,0x4B,0x01,0xC1,0x5F,0xE0,0x56 } }; // E1F1E325-349F-4225-A2F3-4B01C15FE056
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>{ 0x91741800,0x536D,0x4E9F,{ 0xAB,0xF6,0x41,0x5B,0x54,0x44,0xD6,0x51 } }; // 91741800-536D-4E9F-ABF6-415B5444D651
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialEntityStore>{ 0x329788BA,0xE513,0x4F06,{ 0x88,0x9D,0x1B,0xE3,0x0E,0xCF,0x43,0xE6 } }; // 329788BA-E513-4F06-889D-1BE30ECF43E6
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialEntityStoreStatics>{ 0x6B4B389E,0x7C50,0x4E92,{ 0x8A,0x62,0x4D,0x1D,0x4B,0x7C,0xCD,0x3E } }; // 6B4B389E-7C50-4E92-8A62-4D1D4B7CCD3E
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>{ 0xE5671766,0x627B,0x43CB,{ 0xA4,0x9F,0xB3,0xBE,0x6D,0x47,0xDE,0xED } }; // E5671766-627B-43CB-A49F-B3BE6D47DEED
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher>{ 0xB3B85FA0,0x6D5E,0x4BBC,{ 0x80,0x5D,0x5F,0xE5,0xB9,0xBA,0x19,0x59 } }; // B3B85FA0-6D5E-4BBC-805D-5FE5B9BA1959
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialLocation>{ 0x1D81D29D,0x24A1,0x37D5,{ 0x8F,0xA1,0x39,0xB4,0xF9,0xAD,0x67,0xE2 } }; // 1D81D29D-24A1-37D5-8FA1-39B4F9AD67E2
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialLocation2>{ 0x117F2416,0x38A7,0x4A18,{ 0xB4,0x04,0xAB,0x8F,0xAB,0xE1,0xD7,0x8B } }; // 117F2416-38A7-4A18-B404-AB8FABE1D78B
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialLocator>{ 0xF6478925,0x9E0C,0x3BB6,{ 0x99,0x7E,0xB6,0x4E,0xCC,0xA2,0x4C,0xF4 } }; // F6478925-9E0C-3BB6-997E-B64ECCA24CF4
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>{ 0xE1774EF6,0x1F4F,0x499C,{ 0x96,0x25,0xEF,0x5E,0x6E,0xD7,0xA0,0x48 } }; // E1774EF6-1F4F-499C-9625-EF5E6ED7A048
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>{ 0xB8A84063,0xE3F4,0x368B,{ 0x90,0x61,0x9E,0xA9,0xD1,0xD6,0xCC,0x16 } }; // B8A84063-E3F4-368B-9061-9EA9D1D6CC16
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialLocatorStatics>{ 0xB76E3340,0xA7C2,0x361B,{ 0xBB,0x82,0x56,0xE9,0x3B,0x89,0xB1,0xBB } }; // B76E3340-A7C2-361B-BB82-56E93B89B1BB
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReference>{ 0x7A8A3464,0xAD0D,0x4590,{ 0xAB,0x86,0x33,0x06,0x2B,0x67,0x49,0x26 } }; // 7A8A3464-AD0D-4590-AB86-33062B674926
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>{ 0xF78D5C4D,0xA0A4,0x499C,{ 0x8D,0x91,0xA8,0xC9,0x65,0xD4,0x06,0x54 } }; // F78D5C4D-A0A4-499C-8D91-A8C965D40654
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>{ 0x09DBCCB9,0xBCF8,0x3E7F,{ 0xBE,0x7E,0x7E,0xDC,0xCB,0xB1,0x78,0xA8 } }; // 09DBCCB9-BCF8-3E7F-BE7E-7EDCCBB178A8
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialAnchor>{ using type = winrt::Windows::Perception::Spatial::ISpatialAnchor; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialAnchorExportSufficiency>{ using type = winrt::Windows::Perception::Spatial::ISpatialAnchorExportSufficiency; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialAnchorExporter>{ using type = winrt::Windows::Perception::Spatial::ISpatialAnchorExporter; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>{ using type = winrt::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialAnchorStore>{ using type = winrt::Windows::Perception::Spatial::ISpatialAnchorStore; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialBoundingVolume>{ using type = winrt::Windows::Perception::Spatial::ISpatialBoundingVolume; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem>{ using type = winrt::Windows::Perception::Spatial::ISpatialCoordinateSystem; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialEntity>{ using type = winrt::Windows::Perception::Spatial::ISpatialEntity; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs>{ using type = winrt::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>{ using type = winrt::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialEntityStore>{ using type = winrt::Windows::Perception::Spatial::ISpatialEntityStore; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>{ using type = winrt::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialEntityWatcher>{ using type = winrt::Windows::Perception::Spatial::ISpatialEntityWatcher; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialLocation>{ using type = winrt::Windows::Perception::Spatial::ISpatialLocation; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialLocator>{ using type = winrt::Windows::Perception::Spatial::ISpatialLocator; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>{ using type = winrt::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>{ using type = winrt::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference>{ using type = winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReference; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference>{ using type = winrt::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference; };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_RawCoordinateSystem(void**) noexcept = 0;
            virtual int32_t __stdcall add_RawCoordinateSystemAdjusted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RawCoordinateSystemAdjusted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemovedByUser(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsMinimallySufficient(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SufficiencyLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_RecommendedSufficiencyLevel(double*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchorExporter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAnchorExportSufficiencyAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryExportAnchorAsync(void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchorExporterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(winrt::Windows::Foundation::Numerics::float4x4*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateRelativeTo(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateWithPositionRelativeTo(void*, winrt::Windows::Foundation::Numerics::float3, void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateWithPositionAndOrientationRelativeTo(void*, winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchorStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAllSavedAnchors(void**) noexcept = 0;
            virtual int32_t __stdcall TrySave(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryImportAnchorsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryExportAnchorsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialBoundingVolume>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromBox(void*, struct struct_Windows_Perception_Spatial_SpatialBoundingBox, void**) noexcept = 0;
            virtual int32_t __stdcall FromOrientedBox(void*, struct struct_Windows_Perception_Spatial_SpatialBoundingOrientedBox, void**) noexcept = 0;
            virtual int32_t __stdcall FromSphere(void*, struct struct_Windows_Perception_Spatial_SpatialBoundingSphere, void**) noexcept = 0;
            virtual int32_t __stdcall FromFrustum(void*, struct struct_Windows_Perception_Spatial_SpatialBoundingFrustum, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialCoordinateSystem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetTransformTo(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialEntity>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Anchor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Entity(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialEntityFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithSpatialAnchor(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSpatialAnchorAndProperties(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Entity(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialEntityStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEntityWatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialEntityStoreStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetForRemoteSystemSession(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Entity(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(winrt::Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteLinearVelocity(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteLinearAcceleration(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteAngularVelocity(winrt::Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteAngularAcceleration(winrt::Windows::Foundation::Numerics::quaternion*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialLocation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteAngularVelocityAxisAngle(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteAngularAccelerationAxisAngle(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialLocator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Locatability(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_LocatabilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LocatabilityChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PositionalTrackingDeactivating(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PositionalTrackingDeactivating(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryLocateAtTimestamp(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAttachedFrameOfReferenceAtCurrentHeading(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(winrt::Windows::Foundation::Numerics::float3, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStationaryFrameOfReferenceAtCurrentLocation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(winrt::Windows::Foundation::Numerics::float3, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RelativePosition(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_RelativePosition(winrt::Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_RelativeOrientation(winrt::Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall put_RelativeOrientation(winrt::Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall AdjustHeading(double) noexcept = 0;
            virtual int32_t __stdcall GetStationaryCoordinateSystemAtTimestamp(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetRelativeHeadingAtTimestamp(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Canceled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Canceled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialLocatorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_MovementRange(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LookDirectionRange(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCoordinateSystemAtCurrentLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetMovementBounds(void*, uint32_t* __valueSize, winrt::Windows::Foundation::Numerics::float3**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall add_CurrentChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RequestNewStageAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem) CoordinateSystem() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem) RawCoordinateSystem() const;
        WINRT_IMPL_AUTO(winrt::event_token) RawCoordinateSystemAdjusted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialAnchor, winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const& handler) const;
        using RawCoordinateSystemAdjusted_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::ISpatialAnchor, &impl::abi_t<winrt::Windows::Perception::Spatial::ISpatialAnchor>::remove_RawCoordinateSystemAdjusted>;
        [[nodiscard]] RawCoordinateSystemAdjusted_revoker RawCoordinateSystemAdjusted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialAnchor, winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) RawCoordinateSystemAdjusted(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchor>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchor<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchor2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RemovedByUser() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchor2>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchor2<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorExportSufficiency
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMinimallySufficient() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SufficiencyLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RecommendedSufficiencyLevel() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorExportSufficiency<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorExporter
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialAnchorExportSufficiency>) GetAnchorExportSufficiencyAsync(winrt::Windows::Perception::Spatial::SpatialAnchor const& anchor, winrt::Windows::Perception::Spatial::SpatialAnchorExportPurpose const& purpose) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryExportAnchorAsync(winrt::Windows::Perception::Spatial::SpatialAnchor const& anchor, winrt::Windows::Perception::Spatial::SpatialAnchorExportPurpose const& purpose, winrt::Windows::Storage::Streams::IOutputStream const& stream) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchorExporter>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorExporter<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorExporterStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialAnchorExporter) GetDefault() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>) RequestAccessAsync() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchorExporterStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorExporterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorManagerStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialAnchorStore>) RequestStoreAsync() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::float4x4) OldRawCoordinateSystemToNewRawCoordinateSystemTransform() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialAnchor) TryCreateRelativeTo(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialAnchor) TryCreateRelativeTo(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& position) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialAnchor) TryCreateRelativeTo(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& position, winrt::Windows::Foundation::Numerics::quaternion const& orientation) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchorStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorStore
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Perception::Spatial::SpatialAnchor>) GetAllSavedAnchors() const;
        WINRT_IMPL_AUTO(bool) TrySave(param::hstring const& id, winrt::Windows::Perception::Spatial::SpatialAnchor const& anchor) const;
        WINRT_IMPL_AUTO(void) Remove(param::hstring const& id) const;
        WINRT_IMPL_AUTO(void) Clear() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchorStore>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorStore<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Perception::Spatial::SpatialAnchor>>) TryImportAnchorsAsync(winrt::Windows::Storage::Streams::IInputStream const& stream) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) TryExportAnchorsAsync(param::async_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Perception::Spatial::SpatialAnchor>> const& anchors, winrt::Windows::Storage::Streams::IOutputStream const& stream) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>) RequestAccessAsync() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialBoundingVolume
    {
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialBoundingVolume>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialBoundingVolume<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialBoundingVolume) FromBox(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Perception::Spatial::SpatialBoundingBox const& box) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialBoundingVolume) FromOrientedBox(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox const& box) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialBoundingVolume) FromSphere(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Perception::Spatial::SpatialBoundingSphere const& sphere) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialBoundingVolume) FromFrustum(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Perception::Spatial::SpatialBoundingFrustum const& frustum) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialCoordinateSystem
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Numerics::float4x4>) TryGetTransformTo(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& target) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialCoordinateSystem>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialCoordinateSystem<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntity
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialAnchor) Anchor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::ValueSet) Properties() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialEntity>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntity<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialEntity) Entity() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialEntity) CreateWithSpatialAnchor(winrt::Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialEntity) CreateWithSpatialAnchorAndProperties(winrt::Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor, winrt::Windows::Foundation::Collections::ValueSet const& propertySet) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialEntityFactory>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialEntity) Entity() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityStore
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) SaveAsync(winrt::Windows::Perception::Spatial::SpatialEntity const& entity) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) RemoveAsync(winrt::Windows::Perception::Spatial::SpatialEntity const& entity) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialEntityWatcher) CreateEntityWatcher() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialEntityStore>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityStore<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityStoreStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSupported() const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialEntityStore) TryGet(winrt::Windows::System::RemoteSystems::RemoteSystemSession const& session) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialEntityStoreStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityStoreStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialEntity) Entity() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityWatcher
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialEntityWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(winrt::event_token) Added(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialEntityWatcher, winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher, &impl::abi_t<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialEntityWatcher, winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Added(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Updated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialEntityWatcher, winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const& handler) const;
        using Updated_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher, &impl::abi_t<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Updated>;
        [[nodiscard]] Updated_revoker Updated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialEntityWatcher, winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Updated(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Removed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialEntityWatcher, winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher, &impl::abi_t<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialEntityWatcher, winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Removed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialEntityWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher, &impl::abi_t<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialEntityWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialEntityWatcher>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::float3) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::quaternion) Orientation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::float3) AbsoluteLinearVelocity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::float3) AbsoluteLinearAcceleration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::quaternion) AbsoluteAngularVelocity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::quaternion) AbsoluteAngularAcceleration() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialLocation>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocation<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::float3) AbsoluteAngularVelocityAxisAngle() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::float3) AbsoluteAngularAccelerationAxisAngle() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialLocation2>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocation2<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocator
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialLocatability) Locatability() const;
        WINRT_IMPL_AUTO(winrt::event_token) LocatabilityChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialLocator, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using LocatabilityChanged_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::ISpatialLocator, &impl::abi_t<winrt::Windows::Perception::Spatial::ISpatialLocator>::remove_LocatabilityChanged>;
        [[nodiscard]] LocatabilityChanged_revoker LocatabilityChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialLocator, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) LocatabilityChanged(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PositionalTrackingDeactivating(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialLocator, winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const& handler) const;
        using PositionalTrackingDeactivating_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::ISpatialLocator, &impl::abi_t<winrt::Windows::Perception::Spatial::ISpatialLocator>::remove_PositionalTrackingDeactivating>;
        [[nodiscard]] PositionalTrackingDeactivating_revoker PositionalTrackingDeactivating(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::SpatialLocator, winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PositionalTrackingDeactivating(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialLocation) TryLocateAtTimestamp(winrt::Windows::Perception::PerceptionTimestamp const& timestamp, winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference) CreateAttachedFrameOfReferenceAtCurrentHeading() const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference) CreateAttachedFrameOfReferenceAtCurrentHeading(winrt::Windows::Foundation::Numerics::float3 const& relativePosition) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference) CreateAttachedFrameOfReferenceAtCurrentHeading(winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference) CreateAttachedFrameOfReferenceAtCurrentHeading(winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation, double relativeHeadingInRadians) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference) CreateStationaryFrameOfReferenceAtCurrentLocation() const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference) CreateStationaryFrameOfReferenceAtCurrentLocation(winrt::Windows::Foundation::Numerics::float3 const& relativePosition) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference) CreateStationaryFrameOfReferenceAtCurrentLocation(winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference) CreateStationaryFrameOfReferenceAtCurrentLocation(winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation, double relativeHeadingInRadians) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialLocator>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocator<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::float3) RelativePosition() const;
        WINRT_IMPL_AUTO(void) RelativePosition(winrt::Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::quaternion) RelativeOrientation() const;
        WINRT_IMPL_AUTO(void) RelativeOrientation(winrt::Windows::Foundation::Numerics::quaternion const& value) const;
        WINRT_IMPL_AUTO(void) AdjustHeading(double headingOffsetInRadians) const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem) GetStationaryCoordinateSystemAtTimestamp(winrt::Windows::Perception::PerceptionTimestamp const& timestamp) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<double>) TryGetRelativeHeadingAtTimestamp(winrt::Windows::Perception::PerceptionTimestamp const& timestamp) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Canceled() const;
        WINRT_IMPL_AUTO(void) Canceled(bool value) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocatorStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialLocator) GetDefault() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialLocatorStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem) CoordinateSystem() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialMovementRange) MovementRange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialLookDirectionRange) LookDirectionRange() const;
        WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem) GetCoordinateSystemAtCurrentLocation(winrt::Windows::Perception::Spatial::SpatialLocator const& locator) const;
        WINRT_IMPL_AUTO(com_array<winrt::Windows::Foundation::Numerics::float3>) TryGetMovementBounds(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReference>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference) Current() const;
        WINRT_IMPL_AUTO(winrt::event_token) CurrentChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using CurrentChanged_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics, &impl::abi_t<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>::remove_CurrentChanged>;
        [[nodiscard]] CurrentChanged_revoker CurrentChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CurrentChanged(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference>) RequestNewStageAsync() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem) CoordinateSystem() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference<D>;
    };
    struct struct_Windows_Perception_Spatial_SpatialBoundingBox
    {
        winrt::Windows::Foundation::Numerics::float3 Center;
        winrt::Windows::Foundation::Numerics::float3 Extents;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialBoundingBox>
    {
        using type = struct_Windows_Perception_Spatial_SpatialBoundingBox;
    };
    struct struct_Windows_Perception_Spatial_SpatialBoundingFrustum
    {
        winrt::Windows::Foundation::Numerics::plane Near;
        winrt::Windows::Foundation::Numerics::plane Far;
        winrt::Windows::Foundation::Numerics::plane Right;
        winrt::Windows::Foundation::Numerics::plane Left;
        winrt::Windows::Foundation::Numerics::plane Top;
        winrt::Windows::Foundation::Numerics::plane Bottom;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialBoundingFrustum>
    {
        using type = struct_Windows_Perception_Spatial_SpatialBoundingFrustum;
    };
    struct struct_Windows_Perception_Spatial_SpatialBoundingOrientedBox
    {
        winrt::Windows::Foundation::Numerics::float3 Center;
        winrt::Windows::Foundation::Numerics::float3 Extents;
        winrt::Windows::Foundation::Numerics::quaternion Orientation;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialBoundingOrientedBox>
    {
        using type = struct_Windows_Perception_Spatial_SpatialBoundingOrientedBox;
    };
    struct struct_Windows_Perception_Spatial_SpatialBoundingSphere
    {
        winrt::Windows::Foundation::Numerics::float3 Center;
        float Radius;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialBoundingSphere>
    {
        using type = struct_Windows_Perception_Spatial_SpatialBoundingSphere;
    };
    struct struct_Windows_Perception_Spatial_SpatialRay
    {
        winrt::Windows::Foundation::Numerics::float3 Origin;
        winrt::Windows::Foundation::Numerics::float3 Direction;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialRay>
    {
        using type = struct_Windows_Perception_Spatial_SpatialRay;
    };
}
#endif
