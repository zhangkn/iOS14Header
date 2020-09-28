/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDevice.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSDictionary, NSString, AVWeakReference;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _attributes;
	BOOL _levelMeteringEnabled;
	BOOL _isConnected;
	NSString* _localizedName;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_semaphore> _serverConnectionDiedSemaphore;

}
+(void)initialize;
+(id)_devices;
+(void)_reconnectDevices:(id)arg1 ;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(BOOL)hasMediaType:(id)arg1 ;
-(BOOL)isConnected;
-(id)deviceType;
-(void)stopUsingDevice;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(id)localizedName;
-(void)dealloc;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(id)modelID;
-(id)uniqueID;
-(id)init;
-(id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1 ;
-(OpaqueCMClockRef)deviceClock;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(BOOL)isBuiltInStereoAudioCaptureSupported;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)audioInputDevicesDidChangeHandler:(id)arg1 ;
-(void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1 ;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
@end
