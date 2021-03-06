/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CCCameraConnectionDelegate.h>

@protocol CAMRemoteShutterDelegate;
@class NSArray, CCCameraConnection, CAMMotionController, NSString;

@interface CAMRemoteShutterController : NSObject <CCCameraConnectionDelegate> {

	BOOL _showingPreview;
	BOOL _capturingVideo;
	BOOL _capturingTimelapse;
	NSArray* _availableCaptureModes;
	long long _captureMode;
	long long _captureDevice;
	long long _flashMode;
	long long _hdrMode;
	long long _irisMode;
	double _zoomAmount;
	long long _shallowDepthOfFieldStatus;
	id<CAMRemoteShutterDelegate> _delegate;
	CCCameraConnection* _connection;
	CAMMotionController* __motionController;

}

@property (nonatomic,retain) CCCameraConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                        //@synthesize _motionController=__motionController - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (assign,getter=isShowingPreview,nonatomic) BOOL showingPreview;                      //@synthesize showingPreview=_showingPreview - In the implementation block
@property (nonatomic,retain) NSArray * availableCaptureModes;                                  //@synthesize availableCaptureModes=_availableCaptureModes - In the implementation block
@property (assign,nonatomic) long long captureMode;                                            //@synthesize captureMode=_captureMode - In the implementation block
@property (assign,nonatomic) long long captureDevice;                                          //@synthesize captureDevice=_captureDevice - In the implementation block
@property (assign,nonatomic) long long flashMode;                                              //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) long long hdrMode;                                                //@synthesize hdrMode=_hdrMode - In the implementation block
@property (assign,nonatomic) long long irisMode;                                               //@synthesize irisMode=_irisMode - In the implementation block
@property (assign,nonatomic) double zoomAmount;                                                //@synthesize zoomAmount=_zoomAmount - In the implementation block
@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                              //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
@property (assign,getter=isCapturingVideo,nonatomic) BOOL capturingVideo;                      //@synthesize capturingVideo=_capturingVideo - In the implementation block
@property (assign,getter=isCapturingTimelapse,nonatomic) BOOL capturingTimelapse;              //@synthesize capturingTimelapse=_capturingTimelapse - In the implementation block
@property (assign,nonatomic,__weak) id<CAMRemoteShutterDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAvailableCaptureModes:(NSArray *)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(long long)shallowDepthOfFieldStatus;
-(long long)hdrMode;
-(long long)flashMode;
-(BOOL)isCapturingVideo;
-(void)applyCaptureConfiguration:(id)arg1 ;
-(long long)_currentMode;
-(void)setCapturingTimelapse:(BOOL)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(BOOL)isCapturingTimelapse;
-(long long)cameraConnectionCaptureMode:(id)arg1 ;
-(void)openConnection;
-(void)closeConnection;
-(void)cameraConnection:(id)arg1 setIrisMode:(long long)arg2 ;
-(long long)cameraConnectionOrientation:(id)arg1 ;
-(BOOL)cameraConnectionSupportsMomentCapture:(id)arg1 ;
-(BOOL)isConnected;
-(void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
-(long long)_currentCaptureDevice;
-(BOOL)cameraConnection:(id)arg1 setCaptureMode:(long long)arg2 ;
-(void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2 ;
-(CAMMotionController *)_motionController;
-(double)cameraConnectionZoomAmount:(id)arg1 ;
-(long long)captureDevice;
-(BOOL)isShowingPreview;
-(void)didStartCaptureTimer;
-(CCCameraConnection *)connection;
-(BOOL)cameraConnectionIsMirrored:(id)arg1 ;
-(BOOL)cameraConnectionBurstSupport:(id)arg1 ;
-(void)dealloc;
-(long long)cameraConnectionCaptureDevice:(id)arg1 ;
-(void)cameraConnectionCancelCountdown:(id)arg1 ;
-(long long)cameraConnectionHDRSupport:(id)arg1 ;
-(long long)_convertMode:(long long)arg1 ;
-(void)didStopCapture;
-(BOOL)cameraConnectionStartCapture:(id)arg1 ;
-(void)_sendMode;
-(long long)captureMode;
-(long long)cameraConnectionFlashSupport:(id)arg1 ;
-(void)setCapturingVideo:(BOOL)arg1 ;
-(void)cameraConnection:(id)arg1 setHDRMode:(long long)arg2 ;
-(BOOL)cameraConnection:(id)arg1 setCaptureDevice:(long long)arg2 ;
-(void)willStartCapturing;
-(BOOL)cameraConnectionBeginBurstCapture:(id)arg1 ;
-(void)cameraConnectionToggleCameraDevice:(id)arg1 ;
-(long long)_convertCaptureDevice:(long long)arg1 ;
-(void)setShowingPreview:(BOOL)arg1 ;
-(void)setDelegate:(id<CAMRemoteShutterDelegate>)arg1 ;
-(void)_createConnectionIfNeeded;
-(void)cameraConnection:(id)arg1 setFocusPoint:(CGPoint)arg2 ;
-(long long)cameraConnectionIrisMode:(id)arg1 ;
-(id)initWithCaptureConfiguration:(id)arg1 motionController:(id)arg2 ;
-(id)cameraConnectionSupportedCaptureDevices:(id)arg1 ;
-(void)setZoomAmount:(double)arg1 ;
-(BOOL)cameraConnectionZoomSupport:(id)arg1 ;
-(id<CAMRemoteShutterDelegate>)delegate;
-(void)sendThumbnailImage:(id)arg1 isVideo:(BOOL)arg2 ;
-(NSArray *)availableCaptureModes;
-(void)createConnectionIfNecessary;
-(void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2 ;
-(long long)cameraConnectionFlashMode:(id)arg1 ;
-(long long)cameraConnectionHDRMode:(id)arg1 ;
-(id)cameraConnectionSupportedCaptureModes:(id)arg1 ;
-(void)_enterForeground:(id)arg1 ;
-(BOOL)cameraConnectionToggleCameraDeviceSupport:(id)arg1 ;
-(BOOL)cameraConnectionIsShowingLivePreview:(id)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(void)sendThumbnailData:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)_captureOrientationDidChange:(id)arg1 ;
-(void)burstCaptureDidStop;
-(void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2 ;
-(void)setIrisMode:(long long)arg1 ;
-(long long)irisMode;
-(void)setCaptureDevice:(long long)arg1 ;
-(BOOL)cameraConnectionEndBurstCapture:(id)arg1 ;
-(long long)cameraConnectionIrisSupport:(id)arg1 ;
-(void)burstCaptureWillStart;
-(void)cameraConnectionSuspend:(id)arg1 ;
-(void)setConnection:(CCCameraConnection *)arg1 ;
-(BOOL)cameraConnectionStopCapture:(id)arg1 ;
-(void)countdownCanceled;
-(double)zoomAmount;
@end

