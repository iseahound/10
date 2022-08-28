// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_FaceAnalysis_0_H
#define WINRT_Windows_Media_FaceAnalysis_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct BitmapBounds;
    enum class BitmapPixelFormat : int32_t;
    struct BitmapSize;
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct VideoFrame;
}
WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis
{
    struct IDetectedFace;
    struct IFaceDetector;
    struct IFaceDetectorStatics;
    struct IFaceTracker;
    struct IFaceTrackerStatics;
    struct DetectedFace;
    struct FaceDetector;
    struct FaceTracker;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::FaceAnalysis::IDetectedFace>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::FaceAnalysis::IFaceDetector>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::FaceAnalysis::IFaceDetectorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::FaceAnalysis::IFaceTracker>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::FaceAnalysis::IFaceTrackerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::FaceAnalysis::DetectedFace>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::FaceAnalysis::FaceDetector>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::FaceAnalysis::FaceTracker>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::FaceAnalysis::DetectedFace> = L"Windows.Media.FaceAnalysis.DetectedFace";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::FaceAnalysis::FaceDetector> = L"Windows.Media.FaceAnalysis.FaceDetector";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::FaceAnalysis::FaceTracker> = L"Windows.Media.FaceAnalysis.FaceTracker";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::FaceAnalysis::IDetectedFace> = L"Windows.Media.FaceAnalysis.IDetectedFace";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::FaceAnalysis::IFaceDetector> = L"Windows.Media.FaceAnalysis.IFaceDetector";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::FaceAnalysis::IFaceDetectorStatics> = L"Windows.Media.FaceAnalysis.IFaceDetectorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::FaceAnalysis::IFaceTracker> = L"Windows.Media.FaceAnalysis.IFaceTracker";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::FaceAnalysis::IFaceTrackerStatics> = L"Windows.Media.FaceAnalysis.IFaceTrackerStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::FaceAnalysis::IDetectedFace>{ 0x8200D454,0x66BC,0x34DF,{ 0x94,0x10,0xE8,0x94,0x00,0x19,0x54,0x14 } }; // 8200D454-66BC-34DF-9410-E89400195414
    template <> inline constexpr guid guid_v<winrt::Windows::Media::FaceAnalysis::IFaceDetector>{ 0x16B672DC,0xFE6F,0x3117,{ 0x8D,0x95,0xC3,0xF0,0x4D,0x51,0x63,0x0C } }; // 16B672DC-FE6F-3117-8D95-C3F04D51630C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::FaceAnalysis::IFaceDetectorStatics>{ 0xBC042D67,0x9047,0x33F6,{ 0x88,0x1B,0x67,0x46,0xC1,0xB2,0x18,0xB8 } }; // BC042D67-9047-33F6-881B-6746C1B218B8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::FaceAnalysis::IFaceTracker>{ 0x6BA67D8C,0xA841,0x4420,{ 0x93,0xE6,0x24,0x20,0xA1,0x88,0x4F,0xCF } }; // 6BA67D8C-A841-4420-93E6-2420A1884FCF
    template <> inline constexpr guid guid_v<winrt::Windows::Media::FaceAnalysis::IFaceTrackerStatics>{ 0xE9629198,0x1801,0x3FA5,{ 0x93,0x2E,0x31,0xD7,0x67,0xAF,0x6C,0x4D } }; // E9629198-1801-3FA5-932E-31D767AF6C4D
    template <> struct default_interface<winrt::Windows::Media::FaceAnalysis::DetectedFace>{ using type = winrt::Windows::Media::FaceAnalysis::IDetectedFace; };
    template <> struct default_interface<winrt::Windows::Media::FaceAnalysis::FaceDetector>{ using type = winrt::Windows::Media::FaceAnalysis::IFaceDetector; };
    template <> struct default_interface<winrt::Windows::Media::FaceAnalysis::FaceTracker>{ using type = winrt::Windows::Media::FaceAnalysis::IFaceTracker; };
    template <> struct abi<winrt::Windows::Media::FaceAnalysis::IDetectedFace>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FaceBox(struct struct_Windows_Graphics_Imaging_BitmapBounds*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::FaceAnalysis::IFaceDetector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DetectFacesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DetectFacesWithSearchAreaAsync(void*, struct struct_Windows_Graphics_Imaging_BitmapBounds, void**) noexcept = 0;
            virtual int32_t __stdcall get_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
            virtual int32_t __stdcall get_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::FaceAnalysis::IFaceDetectorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedBitmapPixelFormats(void**) noexcept = 0;
            virtual int32_t __stdcall IsBitmapPixelFormatSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::FaceAnalysis::IFaceTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProcessNextFrameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
            virtual int32_t __stdcall get_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::FaceAnalysis::IFaceTrackerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedBitmapPixelFormats(void**) noexcept = 0;
            virtual int32_t __stdcall IsBitmapPixelFormatSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IDetectedFace
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::Imaging::BitmapBounds) FaceBox() const;
    };
    template <> struct consume<winrt::Windows::Media::FaceAnalysis::IDetectedFace>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IDetectedFace<D>;
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IFaceDetector
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::FaceAnalysis::DetectedFace>>) DetectFacesAsync(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& image) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::FaceAnalysis::DetectedFace>>) DetectFacesAsync(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& image, winrt::Windows::Graphics::Imaging::BitmapBounds const& searchArea) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::Imaging::BitmapSize) MinDetectableFaceSize() const;
        WINRT_IMPL_AUTO(void) MinDetectableFaceSize(winrt::Windows::Graphics::Imaging::BitmapSize const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::Imaging::BitmapSize) MaxDetectableFaceSize() const;
        WINRT_IMPL_AUTO(void) MaxDetectableFaceSize(winrt::Windows::Graphics::Imaging::BitmapSize const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::FaceAnalysis::IFaceDetector>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceDetector<D>;
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::FaceAnalysis::FaceDetector>) CreateAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Graphics::Imaging::BitmapPixelFormat>) GetSupportedBitmapPixelFormats() const;
        WINRT_IMPL_AUTO(bool) IsBitmapPixelFormatSupported(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSupported() const;
    };
    template <> struct consume<winrt::Windows::Media::FaceAnalysis::IFaceDetectorStatics>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IFaceTracker
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Media::FaceAnalysis::DetectedFace>>) ProcessNextFrameAsync(winrt::Windows::Media::VideoFrame const& videoFrame) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::Imaging::BitmapSize) MinDetectableFaceSize() const;
        WINRT_IMPL_AUTO(void) MinDetectableFaceSize(winrt::Windows::Graphics::Imaging::BitmapSize const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::Imaging::BitmapSize) MaxDetectableFaceSize() const;
        WINRT_IMPL_AUTO(void) MaxDetectableFaceSize(winrt::Windows::Graphics::Imaging::BitmapSize const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::FaceAnalysis::IFaceTracker>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceTracker<D>;
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::FaceAnalysis::FaceTracker>) CreateAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Graphics::Imaging::BitmapPixelFormat>) GetSupportedBitmapPixelFormats() const;
        WINRT_IMPL_AUTO(bool) IsBitmapPixelFormatSupported(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSupported() const;
    };
    template <> struct consume<winrt::Windows::Media::FaceAnalysis::IFaceTrackerStatics>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>;
    };
}
#endif
