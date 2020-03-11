#pragma once

#include "Emu/Cell/ErrorCodes.h"

#include "Emu/Memory/vm_ptr.h"

// Video Out Error Codes
enum CellVideoOutError : u32
{
	CELL_VIDEO_OUT_ERROR_NOT_IMPLEMENTED          = 0x8002b220,
	CELL_VIDEO_OUT_ERROR_ILLEGAL_CONFIGURATION    = 0x8002b221,
	CELL_VIDEO_OUT_ERROR_ILLEGAL_PARAMETER        = 0x8002b222,
	CELL_VIDEO_OUT_ERROR_PARAMETER_OUT_OF_RANGE   = 0x8002b223,
	CELL_VIDEO_OUT_ERROR_DEVICE_NOT_FOUND         = 0x8002b224,
	CELL_VIDEO_OUT_ERROR_UNSUPPORTED_VIDEO_OUT    = 0x8002b225,
	CELL_VIDEO_OUT_ERROR_UNSUPPORTED_DISPLAY_MODE = 0x8002b226,
	CELL_VIDEO_OUT_ERROR_CONDITION_BUSY           = 0x8002b227,
	CELL_VIDEO_OUT_ERROR_VALUE_IS_NOT_SET         = 0x8002b228,
};

enum CellVideoOut : s32
{
	CELL_VIDEO_OUT_PRIMARY   = 0,
	CELL_VIDEO_OUT_SECONDARY = 1,
};

enum CellVideoOutResolutionId : s32
{
	CELL_VIDEO_OUT_RESOLUTION_UNDEFINED                         = 0,
	CELL_VIDEO_OUT_RESOLUTION_1080                              = 1,
	CELL_VIDEO_OUT_RESOLUTION_720                               = 2,
	CELL_VIDEO_OUT_RESOLUTION_480                               = 4,
	CELL_VIDEO_OUT_RESOLUTION_576                               = 5,
	CELL_VIDEO_OUT_RESOLUTION_1600x1080                         = 0xa,
	CELL_VIDEO_OUT_RESOLUTION_1440x1080                         = 0xb,
	CELL_VIDEO_OUT_RESOLUTION_1280x1080                         = 0xc,
	CELL_VIDEO_OUT_RESOLUTION_960x1080                          = 0xd,
	CELL_VIDEO_OUT_RESOLUTION_720_3D_FRAME_PACKING              = 0x81,
	CELL_VIDEO_OUT_RESOLUTION_1024x720_3D_FRAME_PACKING	        = 0x88,
	CELL_VIDEO_OUT_RESOLUTION_960x720_3D_FRAME_PACKING          = 0x89,
	CELL_VIDEO_OUT_RESOLUTION_800x720_3D_FRAME_PACKING          = 0x8a,
	CELL_VIDEO_OUT_RESOLUTION_640x720_3D_FRAME_PACKING          = 0x8b,
	CELL_VIDEO_OUT_RESOLUTION_720_DUALVIEW_FRAME_PACKING        = 0x91,
	CELL_VIDEO_OUT_RESOLUTION_720_SIMULVIEW_FRAME_PACKING       = 0x91,
	CELL_VIDEO_OUT_RESOLUTION_1024x720_DUALVIEW_FRAME_PACKING   = 0x98,
	CELL_VIDEO_OUT_RESOLUTION_1024x720_SIMULVIEW_FRAME_PACKING  = 0x98,
	CELL_VIDEO_OUT_RESOLUTION_960x720_DUALVIEW_FRAME_PACKING    = 0x99,
	CELL_VIDEO_OUT_RESOLUTION_960x720_SIMULVIEW_FRAME_PACKING   = 0x99,
	CELL_VIDEO_OUT_RESOLUTION_800x720_DUALVIEW_FRAME_PACKING    = 0x9a,
	CELL_VIDEO_OUT_RESOLUTION_800x720_SIMULVIEW_FRAME_PACKING   = 0x9a,
	CELL_VIDEO_OUT_RESOLUTION_640x720_DUALVIEW_FRAME_PACKING    = 0x9b,
	CELL_VIDEO_OUT_RESOLUTION_640x720_SIMULVIEW_FRAME_PACKING   = 0x9b,
};

enum CellVideoOutScanMode : s32
{
	CELL_VIDEO_OUT_SCAN_MODE_INTERLACE,
	CELL_VIDEO_OUT_SCAN_MODE_PROGRESSIVE,
};

enum CellVideoOutScanMode2 : s32
{
	CELL_VIDEO_OUT_SCAN_MODE2_AUTO,
	CELL_VIDEO_OUT_SCAN_MODE2_INTERLACE,
	CELL_VIDEO_OUT_SCAN_MODE2_PROGRESSIVE,
};

enum CellVideoOutRefreshRate : s32
{
	CELL_VIDEO_OUT_REFRESH_RATE_AUTO    = 0x0000,
	CELL_VIDEO_OUT_REFRESH_RATE_59_94HZ = 0x0001,
	CELL_VIDEO_OUT_REFRESH_RATE_50HZ    = 0x0002,
	CELL_VIDEO_OUT_REFRESH_RATE_60HZ    = 0x0004,
	CELL_VIDEO_OUT_REFRESH_RATE_30HZ    = 0x0008,
};

enum CellVideoOutPortType : s32
{
	CELL_VIDEO_OUT_PORT_NONE            = 0x00,
	CELL_VIDEO_OUT_PORT_HDMI            = 0x01,
	CELL_VIDEO_OUT_PORT_NETWORK         = 0x41,
	CELL_VIDEO_OUT_PORT_COMPOSITE_S     = 0x81,
	CELL_VIDEO_OUT_PORT_D               = 0x82,
	CELL_VIDEO_OUT_PORT_COMPONENT       = 0x83,
	CELL_VIDEO_OUT_PORT_RGB             = 0x84,
	CELL_VIDEO_OUT_PORT_AVMULTI_SCART   = 0x85,
	CELL_VIDEO_OUT_PORT_DSUB            = 0x86,
};

enum CellVideoOutDisplayAspect : s32
{
	CELL_VIDEO_OUT_ASPECT_AUTO,
	CELL_VIDEO_OUT_ASPECT_4_3,
	CELL_VIDEO_OUT_ASPECT_16_9,
};

enum CellVideoOutBufferColorFormat : s32
{
	CELL_VIDEO_OUT_BUFFER_COLOR_FORMAT_X8R8G8B8,
	CELL_VIDEO_OUT_BUFFER_COLOR_FORMAT_X8B8G8R8,
	CELL_VIDEO_OUT_BUFFER_COLOR_FORMAT_R16G16B16X16_FLOAT,
};

enum CellVideoOutOutputState : s32
{
	CELL_VIDEO_OUT_OUTPUT_STATE_ENABLED,
	CELL_VIDEO_OUT_OUTPUT_STATE_DISABLED,
	CELL_VIDEO_OUT_OUTPUT_STATE_PREPARING,
};

enum CellVideoOutDeviceState : s32
{
	CELL_VIDEO_OUT_DEVICE_STATE_UNAVAILABLE,
	CELL_VIDEO_OUT_DEVICE_STATE_AVAILABLE,
};

enum CellVideoOutColorSpace : s32
{
	CELL_VIDEO_OUT_COLOR_SPACE_RGB   = 0x01,
	CELL_VIDEO_OUT_COLOR_SPACE_YUV   = 0x02,
	CELL_VIDEO_OUT_COLOR_SPACE_XVYCC = 0x04,
};

enum CellVideoOutDebugMonitorType : s32
{
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_UNDEFINED     = 0,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_480I_59_94HZ  = 1,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_576I_50HZ     = 2,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_480P_59_94HZ  = 3,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_576P_50HZ     = 4,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_1080I_59_94HZ = 5,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_720P_59_94HZ  = 7,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_1080P_59_94HZ = 9,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_WXGA_60HZ     = 11,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_SXGA_60HZ     = 12,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_WUXGA_60HZ    = 13,
};

struct CellVideoOutColorInfo
{
	be_t<u16> redX;
	be_t<u16> redY;
	be_t<u16> greenX;
	be_t<u16> greenY;
	be_t<u16> blueX;
	be_t<u16> blueY;
	be_t<u16> whiteX;
	be_t<u16> whiteY;
	be_t<u32> gamma;
};

struct CellVideoOutKSVList
{
	u8 ksv[32*5];
	u8 reserved[4];
	be_t<u32> count;
};

enum CellVideoOutDisplayConversion : s32
{
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_NONE          = 0x00,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_WXGA       = 0x01,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_SXGA       = 0x02,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_WUXGA      = 0x03,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_1080       = 0x05,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_REMOTEPLAY = 0x10,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_720_3D_FRAME_PACKING = 0x80,
};

struct CellVideoOutDisplayMode
{
	u8 resolutionId;
	u8 scanMode;
	u8 conversion;
	u8 aspect;
	u8 reserved[2];
	be_t<u16> refreshRates;
};

struct CellVideoOutResolution
{
	be_t<u16> width;
	be_t<u16> height;
};

struct CellVideoOutDeviceInfo
{
	u8 portType;
	u8 colorSpace;
	be_t<u16> latency;
	u8 availableModeCount;
	u8 state;
	u8 rgbOutputRange;
	u8 reserved[5];
	CellVideoOutColorInfo colorInfo;
	CellVideoOutDisplayMode availableModes[32];
	CellVideoOutKSVList ksvList;
};

struct CellVideoOutState
{
	u8 state;
	u8 colorSpace;
	u8 reserved[6];
	CellVideoOutDisplayMode displayMode;
};

struct CellVideoOutConfiguration
{
	u8 resolutionId;
	u8 format;
	u8 aspect;
	u8 reserved[9];
	be_t<u32> pitch;
};

struct CellVideoOutOption
{
	be_t<u32> reserved;
};

enum CellVideoOutEvent : s32
{
	CELL_VIDEO_OUT_EVENT_DEVICE_CHANGED,
	CELL_VIDEO_OUT_EVENT_OUTPUT_DISABLED,
	CELL_VIDEO_OUT_EVENT_DEVICE_AUTHENTICATED,
	CELL_VIDEO_OUT_EVENT_OUTPUT_ENABLED,
};

enum CellVideoOutCopyControl : s32
{
	CELL_VIDEO_OUT_COPY_CONTROL_COPY_FREE,
	CELL_VIDEO_OUT_COPY_CONTROL_COPY_ONCE,
	CELL_VIDEO_OUT_COPY_CONTROL_COPY_NEVER,
};

enum CellVideoOutRGBOutputRange : s32
{
	CELL_VIDEO_OUT_RGB_OUTPUT_RANGE_LIMITED,
	CELL_VIDEO_OUT_RGB_OUTPUT_RANGE_FULL,
};

using CellVideoOutCallback = s32(u32 slot, u32 videoOut, u32 deviceIndex, u32 event, vm::ptr<CellVideoOutDeviceInfo> info, vm::ptr<void> userData);
