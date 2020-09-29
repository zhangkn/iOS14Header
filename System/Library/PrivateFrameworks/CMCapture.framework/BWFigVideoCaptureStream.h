/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFigCaptureStreamStartStopDelegate.h>

@protocol BWFigVideoCaptureStreamDelegate, OS_dispatch_queue, BWFigVideoCaptureStreamStillImageCaptureDelegate, OS_dispatch_group, BWFaceDetector, BWObjectDetector;
@class BWFigCaptureStream, NSString, NSDictionary, NSArray, NSData, BWSphereModeSelector, BWStillImageTimeMachine, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, NSMutableArray, NSObject, NSSet, NSMutableDictionary, BWFigCaptureSynchronizedStreamsGroup, BWNoiseReductionAndSharpeningParameters;

@interface BWFigVideoCaptureStream : NSObject <BWFigCaptureStreamStartStopDelegate> {

	BWFigCaptureStream* _stream;
	BOOL _started;
	BOOL _suspended;
	BOOL _streamHasBeenSuspended;
	NSString* _portType;
	NSDictionary* _cachedVideoOutputConfigurations;
	NSDictionary* _cachedVideoOutputsEnabled;
	float _minimumFrameRate;
	float _maximumFrameRate;
	float _minimumSupportedFrameRate;
	float _maximumSupportedFrameRate;
	BOOL _rawBufferCompandingEnabled;
	NSDictionary* _supportedProperties;
	NSArray* _supportedFormats;
	long long _activeFormatIndex;
	NSDictionary* _moduleInfo;
	BOOL _usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
	BOOL _hasFocus;
	NSDictionary* _sensorIDDictionary;
	id<BWFigVideoCaptureStreamDelegate> _delegate;
	float _baseZoomFactor;
	float _baseZoomFactorAfterGDC;
	NSDictionary* _opticalCenterOffset;
	NSDictionary* _opticalCenterOffsetCalibratedForBackWideFieldOfView;
	float _pixelSize;
	float _pixelsPerMicron;
	float _focalLength;
	float _lensFNumber;
	float _gravityFactor;
	NSDictionary* _focusPositionToLensMakersPFLLinearFit;
	NSData* _cameraViewMatrix;
	NSData* _cameraViewMatrixCalibratedForBackWideFieldOfView;
	NSData* _cameraPoseMatrix;
	NSString* _nonLocalizedName;
	BOOL _isSlave;
	os_unfair_lock_s _cameraAccessLock;
	BOOL _clientProcessHasAccessToCamera;
	int _clientPID;
	NSString* _applicationID;
	SCD_Struct_Fi79 _clientAuditToken;
	os_unfair_lock_s _sphereLock;
	BOOL _sphereEnabled;
	BOOL _motionDataInvalid;
	BWSphereModeSelector* _sphereModeSelector;
	int _motionDataDeliveryEnabled;
	BOOL _isStationary;
	BOOL _timeMachineEnabled;
	int _timeMachineCapacity;
	BWStillImageTimeMachine* _timeMachine;
	os_unfair_lock_s _stillImageCaptureStateLock;
	BOOL _grabNextFrame;
	BWStillImageCaptureSettings* _activeResolvedStillImageCaptureSettings;
	BWStillImageCaptureStreamSettings* _activeResolvedStillImageCaptureStreamSettings;
	int _lastStillImageCaptureType;
	SCD_Struct_BW8 _lastStillImagePTS;
	SCD_Struct_BW8 _largestStillImagePTS;
	BOOL _usesStillFusionReferenceFramePTSForDidCaptureCallback;
	NSMutableArray* _stillFusionBracketFramesMetadata;
	SCD_Struct_BW8 _stillCaptureReferenceFramePTS;
	int _skippedFramesCountForAF;
	int _expectedImagesOrErrorsForCaptureStillImageNow;
	int _receivedImagesOrErrorsForCaptureStillImageNow;
	/*^block*/id _stillImageBufferTimeMachineHandler;
	BOOL _stillImageCaptureEnabled;
	NSObject*<OS_dispatch_queue> _streamNotificationDispatchQueue;
	id<BWFigVideoCaptureStreamStillImageCaptureDelegate> _stillImageCaptureDelegate;
	NSObject*<OS_dispatch_group> _stillImageCaptureDelegateDispatchGroup;
	BOOL _objectDetectionMetadataRequested;
	BOOL _defersObjectDetectionStartup;
	NSDictionary* _faceDetectionConfiguration;
	OpaqueFigSimpleMutexRef _objectDetectionConfigurationMutex;
	NSSet* _enabledDetectedObjectTypes;
	BOOL _faceDetectionEnabledSeparately;
	NSMutableDictionary* _currentObjectDetectionConfiguration;
	unsigned _maxObjects;
	BOOL _isSynchronizationMaster;
	BOOL _synchronizedStreamsEnabled;
	BWFigCaptureSynchronizedStreamsGroup* _synchronizedStreamsGroup;
	int _masterToSlaveFrameRateRatio;
	BOOL _streamingRequiredWhenConfiguredAsSlave;
	int _sensorToOutputFrameRateRatioWhenConfiguredAsSlave;
	BOOL _firmwareTimeMachineEnabledWhenConfiguredAsSlave;
	NSDictionary* _geometricDistortionCoefficients;
	NSDictionary* _geometricDistortionCoefficientsCalibratedForBackWideFieldOfView;
	BOOL _lumaHistogramMetadataEnabled;
	NSMutableDictionary* _keypointDetectionConfiguration;
	BOOL _keypointDetectionConfigured;
	BOOL _keypointDetectionEnabled;
	BOOL _stillImageKeypointDetectionEnabled;
	BOOL _highlightRecoverySuspended;
	BOOL _highlightRecoveryEnabled;
	BOOL _highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
	BOOL _highlightRecoveryEnabledWhenConfiguredAsSlave;
	BOOL _videoHDRFusionEnabled;
	BOOL _videoHDRImageStatisticsEnabled;
	BOOL _pixelFormatIsTenBit;
	id<BWFaceDetector> _faceDetector;
	id<BWObjectDetector> _objectDetector;
	BWNoiseReductionAndSharpeningParameters* _stillImageNoiseAndSharpeningParameters;
	int _multiBandNoiseReductionMode;
	BOOL _unifiedBracketingEnabled;
	BOOL _aeStatisticsEnabled;
	BOOL _rawFocusScoresEnabled;
	BOOL _focusBlurMapEnabled;
	BOOL _zeroShutterLagEnabled;
	int _autoFocusPositionSensorMode;
	SCD_Struct_BW8 _maxExposureDurationClientOverride;
	SCD_Struct_BW8 _maxExposureDurationFrameworkOverride;
	BOOL _maxExposureDurationHasBeenSet;
	float _aeMaxGain;
	float _momentCaptureVideoRecordingAEMaxGain;
	BOOL _timeLapseEnabled;
	BOOL _lowLightVideoEnabled;
	BOOL _variableFrameRateVideoEnabled;
	SCD_Struct_BW2 _sensorDimensions;
	SCD_Struct_BW2 _videoCaptureDimensions;

}

@property (readonly) BWFigCaptureStream * stream;                                                                         //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) id<BWFigVideoCaptureStreamDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * portType; 
@property (readonly) NSArray * supportedFormats; 
@property (readonly) NSDictionary * moduleInfo; 
@property (readonly) BOOL usePinholeCameraFocalLengthInIntrinsicMatrixCalculation; 
@property (readonly) BOOL hasFocus; 
@property (readonly) NSString * sensorIDString; 
@property (readonly) NSDictionary * sensorIDDictionary; 
@property (readonly) NSDictionary * geometricDistortionCoefficients; 
@property (readonly) NSDictionary * geometricDistortionCoefficientsCalibratedForBackWideFieldOfView; 
@property (readonly) BOOL synchronizedStreamsEnabled; 
@property (readonly) NSDictionary * opticalCenterOffset; 
@property (readonly) NSDictionary * opticalCenterOffsetCalibratedForBackWideFieldOfView; 
@property (readonly) float pixelSize; 
@property (readonly) float pixelsPerMicron; 
@property (readonly) float focalLength;                                                                                   //@synthesize focalLength=_focalLength - In the implementation block
@property (readonly) float lensFNumber;                                                                                   //@synthesize lensFNumber=_lensFNumber - In the implementation block
@property (readonly) float gravityFactor; 
@property (readonly) NSDictionary * focusPositionToLensMakersPFLLinearFit; 
@property (readonly) NSData * cameraViewMatrix; 
@property (readonly) NSData * cameraViewMatrixCalibratedForBackWideFieldOfView; 
@property (readonly) NSData * cameraPoseMatrix; 
@property (readonly) NSString * nonLocalizedName; 
@property (assign,nonatomic) float aeMaxGain;                                                                             //@synthesize aeMaxGain=_aeMaxGain - In the implementation block
@property (assign,nonatomic) float momentCaptureVideoRecordingAEMaxGain;                                                  //@synthesize momentCaptureVideoRecordingAEMaxGain=_momentCaptureVideoRecordingAEMaxGain - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxExposureDurationClientOverride;                                            //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxExposureDurationFrameworkOverride;                                         //@synthesize maxExposureDurationFrameworkOverride=_maxExposureDurationFrameworkOverride - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 maxExposureDuration; 
@property (assign,nonatomic) float minimumFrameRate; 
@property (assign,nonatomic) float maximumFrameRate; 
@property (assign,nonatomic) float maximumSupportedFrameRate; 
@property (assign,nonatomic) float minimumSupportedFrameRate; 
@property (nonatomic,readonly) BOOL rawBufferCompandingEnabled; 
@property (readonly) BOOL hasSphere; 
@property (assign,nonatomic) BOOL enablesSphereWhenAvailable; 
@property (readonly) BOOL sphereEnabled; 
@property (readonly) BOOL sphereVideoSupported; 
@property (assign,nonatomic) BOOL sphereVideoEnabled; 
@property (assign,nonatomic) BOOL avoidsSphereRecentering; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) int sphereThermalLevel; 
@property (assign,nonatomic) BOOL isStationary; 
@property (nonatomic,readonly) CFStringRef currentSphereMode; 
@property (assign,nonatomic) BOOL motionDataDeliveryEnabled; 
@property (readonly) BOOL motionDataInvalid; 
@property (assign,nonatomic) BOOL defersObjectDetectionStartup; 
@property (nonatomic,readonly) BOOL suspendingSupported; 
@property (nonatomic,readonly) BOOL suspended;                                                                            //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) BOOL started;                                                                              //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL stillImageCaptureEnabled; 
@property (assign,nonatomic) id<BWFigVideoCaptureStreamStillImageCaptureDelegate> stillImageCaptureDelegate;              //@synthesize stillImageCaptureDelegate=_stillImageCaptureDelegate - In the implementation block
@property (assign,nonatomic) BOOL usesStillFusionReferenceFramePTSForDidCaptureCallback;                                  //@synthesize usesStillFusionReferenceFramePTSForDidCaptureCallback=_usesStillFusionReferenceFramePTSForDidCaptureCallback - In the implementation block
@property (readonly) int timeMachineCapacity; 
@property (assign,nonatomic) BOOL timeMachineEnabled; 
@property (nonatomic,copy) id stillImageBufferTimeMachineHandler; 
@property (nonatomic,readonly) int activeStillImageCaptureType; 
@property (nonatomic,readonly) BOOL providesPreBracketedEV0; 
@property (nonatomic,readonly) int lastStillImageCaptureType;                                                             //@synthesize lastStillImageCaptureType=_lastStillImageCaptureType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 lastStillImagePTS;                                                          //@synthesize lastStillImagePTS=_lastStillImagePTS - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi79 clientAuditToken;                                                          //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
@property (nonatomic,readonly) BOOL clientProcessHasAccessToCamera; 
@property (getter=isSynchronizationMaster,nonatomic,readonly) BOOL synchronizationMaster;                                 //@synthesize isSynchronizationMaster=_isSynchronizationMaster - In the implementation block
@property (assign,nonatomic) int masterToSlaveFrameRateRatio; 
@property (assign,nonatomic) BOOL streamingRequiredWhenConfiguredAsSlave; 
@property (assign,nonatomic) int sensorToOutputFrameRateRatioWhenConfiguredAsSlave; 
@property (assign,nonatomic) BOOL firmwareTimeMachineEnabledWhenConfiguredAsSlave;                                        //@synthesize firmwareTimeMachineEnabledWhenConfiguredAsSlave=_firmwareTimeMachineEnabledWhenConfiguredAsSlave - In the implementation block
@property (assign,nonatomic) BOOL keypointDetectionEnabled; 
@property (assign,nonatomic) BOOL stillImageKeypointDetectionEnabled; 
@property (assign,nonatomic) int multiBandNoiseReductionMode;                                                             //@synthesize multiBandNoiseReductionMode=_multiBandNoiseReductionMode - In the implementation block
@property (assign,nonatomic) BOOL highlightRecoverySuspended; 
@property (nonatomic,readonly) BOOL highlightRecoveryEnabled; 
@property (assign,nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream; 
@property (assign,nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsSlave; 
@property (assign,nonatomic) BOOL unifiedBracketingEnabled; 
@property (assign,nonatomic) BOOL aeStatisticsEnabled; 
@property (assign,nonatomic) BOOL rawFocusScoresEnabled; 
@property (assign,nonatomic) BOOL focusBlurMapEnabled; 
@property (assign,nonatomic) BOOL zeroShutterLagEnabled; 
@property (assign,nonatomic) BOOL overCaptureEnabled; 
@property (nonatomic,retain) id<BWFaceDetector> faceDetector;                                                             //@synthesize faceDetector=_faceDetector - In the implementation block
@property (nonatomic,retain) id<BWObjectDetector> objectDetector;                                                         //@synthesize objectDetector=_objectDetector - In the implementation block
@property (assign,nonatomic) BOOL timeLapseEnabled;                                                                       //@synthesize timeLapseEnabled=_timeLapseEnabled - In the implementation block
@property (assign,nonatomic) BOOL lowLightVideoEnabled;                                                                   //@synthesize lowLightVideoEnabled=_lowLightVideoEnabled - In the implementation block
@property (assign,nonatomic) BOOL variableFrameRateVideoEnabled; 
@property (nonatomic,readonly) int autoFocusPositionSensorMode;                                                           //@synthesize autoFocusPositionSensorMode=_autoFocusPositionSensorMode - In the implementation block
@property (assign) float baseZoomFactor; 
@property (assign) float baseZoomFactorAfterGDC; 
@property (assign,nonatomic) BOOL videoHDRImageStatisticsEnabled; 
@property (assign,nonatomic) BOOL videoHDRFusionEnabled; 
@property (assign,nonatomic) BOOL pixelFormatIsTenBit;                                                                    //@synthesize pixelFormatIsTenBit=_pixelFormatIsTenBit - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 videoCaptureDimensions;                                                       //@synthesize videoCaptureDimensions=_videoCaptureDimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(BOOL)videoHDRImageStatisticsEnabled;
-(BWFigCaptureStream *)stream;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(float)minimumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(BOOL)unifiedBracketingEnabled;
-(float)focalLength;
-(BOOL)depthDataDeliveryEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(void)setStillImageCaptureEnabled:(BOOL)arg1 ;
-(void)setUnifiedBracketingEnabled:(BOOL)arg1 ;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(int)lastStillImageCaptureType;
-(BOOL)zeroShutterLagEnabled;
-(NSDictionary *)focusPositionToLensMakersPFLLinearFit;
-(CFStringRef)currentSphereMode;
-(BOOL)variableFrameRateVideoEnabled;
-(BOOL)sphereEnabled;
-(BOOL)avoidsSphereRecentering;
-(BOOL)sphereVideoSupported;
-(float)maximumFrameRate;
-(void)_updateSphereMode;
-(BOOL)streamingRequiredWhenConfiguredAsSlave;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(void)setVariableFrameRateVideoEnabled:(BOOL)arg1 ;
-(BOOL)enablesSphereWhenAvailable;
-(BOOL)overCaptureEnabled;
-(BOOL)sphereVideoEnabled;
-(NSDictionary *)geometricDistortionCoefficients;
-(BOOL)videoHDRFusionEnabled;
-(int)sourceNodeWillEmitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 drivesCameraControls:(BOOL)arg2 deliversStills:(BOOL)arg3 ;
-(BOOL)highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
-(BOOL)hasSphere;
-(void)setFocusBlurMapEnabled:(BOOL)arg1 ;
-(BOOL)rawBufferCompandingEnabled;
-(SCD_Struct_BW8)maxExposureDurationFrameworkOverride;
-(NSString *)nonLocalizedName;
-(BOOL)stillImageKeypointDetectionEnabled;
-(void)setMaximumSupportedFrameRate:(float)arg1 ;
-(NSDictionary *)sensorIDDictionary;
-(void)setPixelFormatIsTenBit:(BOOL)arg1 ;
-(void)registerForObjectDetectionMetadata:(id)arg1 ;
-(NSDictionary *)moduleInfo;
-(void)startupObjectDetectionIfNeeded;
-(BOOL)hasFocus;
-(void)setUsesStillFusionReferenceFramePTSForDidCaptureCallback:(BOOL)arg1 ;
-(void)setMinimumSupportedFrameRate:(float)arg1 ;
-(NSDictionary *)geometricDistortionCoefficientsCalibratedForBackWideFieldOfView;
-(void)captureStreamDidStop;
-(BOOL)providesPreBracketedEV0;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(id)noiseReductionAndSharpeningConfigurationForType:(int)arg1 gain:(float)arg2 ;
-(BOOL)clientProcessHasAccessToCamera;
-(NSDictionary *)opticalCenterOffset;
-(int)multiBandNoiseReductionEnabled;
-(void)setMasterToSlaveFrameRateRatio:(int)arg1 ;
-(float)pixelSize;
-(float)maximumSupportedFrameRate;
-(void)setMomentCaptureVideoRecordingAEMaxGain:(float)arg1 ;
-(void)setVisionDataSuspended:(BOOL)arg1 ;
-(id)stillImageBufferTimeMachineHandler;
-(void)setTimeLapseEnabled:(BOOL)arg1 ;
-(id<BWFaceDetector>)faceDetector;
-(int)sourceNodeWillEmitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)timeMachineEnabled;
-(BOOL)started;
-(void)sourceNodeWillDiscardVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)timeLapseEnabled;
-(void)dealloc;
-(float)aeMaxGain;
-(void)setObjectDetector:(id<BWObjectDetector>)arg1 ;
-(void)setMotionDataInvalid:(BOOL)arg1 ;
-(float)baseZoomFactorAfterGDC;
-(void)setVisionDataKeypointDetectionThreshold:(float)arg1 ;
-(void)prepareForStillImageCaptureFromFirmwareWithStillImageSettings:(id)arg1 ;
-(void)_updateSuspendStateForInfraredDepthStream;
-(BOOL)isSynchronizationMaster;
-(void)setMaxExposureDurationFrameworkOverride:(SCD_Struct_BW8)arg1 ;
-(void)setFirmwareTimeMachineEnabledWhenConfiguredAsSlave:(BOOL)arg1 ;
-(void)setAeStatisticsEnabled:(BOOL)arg1 ;
-(void)willCaptureStillImageFromFirmware;
-(void)_setRequestedDetectedObjectTypes:(id)arg1 ;
-(NSString *)sensorIDString;
-(void)setMotionDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)suspended;
-(int)activeStillImageCaptureType;
-(BOOL)usesStillFusionReferenceFramePTSForDidCaptureCallback;
-(void)didBecomeSlaveStream;
-(BOOL)motionDataInvalid;
-(BOOL)aeStatisticsEnabled;
-(int)start;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW8)arg1 ;
-(void)setTimeMachineEnabled:(BOOL)arg1 ;
-(void)sourceNodeWillEmitDetectedFacesSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setStreamingRequiredWhenConfiguredAsSlave:(BOOL)arg1 ;
-(void)setVideoHDRFusionEnabled:(BOOL)arg1 ;
-(float)minimumSupportedFrameRate;
-(BOOL)rawFocusScoresEnabled;
-(void)sourceNodeWillStartStreaming;
-(BOOL)synchronizedStreamsEnabled;
-(id)_copyOpticalCenterOffsetCalculatedFromProperty:(CFStringRef)arg1 ;
-(void)_updateMotionDataStatus:(opaqueCMSampleBufferRef)arg1 ;
-(void)setMultiBandNoiseReductionMode:(int)arg1 ;
-(void)triggerVisionDataBurst;
-(void)_prepareForStillImageCaptureWithStillImageSettings:(id)arg1 fromCMTimeMachine:(BOOL)arg2 ;
-(id<BWFigVideoCaptureStreamStillImageCaptureDelegate>)stillImageCaptureDelegate;
-(void)setStillImageKeypointDetectionEnabled:(BOOL)arg1 ;
-(void)sourceNodeWillEmitStillImageQuadraBufferProcessingError:(int)arg1 ;
-(void)setStillImageCaptureDelegate:(id<BWFigVideoCaptureStreamStillImageCaptureDelegate>)arg1 ;
-(SCD_Struct_BW8)_updateMaxExposureDuration;
-(void)updateAETables;
-(void)failedToCaptureStillImageFromFirmwareWithError:(int)arg1 ;
-(BOOL)stillImageCaptureEnabled;
-(BOOL)defersObjectDetectionStartup;
-(BOOL)highlightRecoverySuspended;
-(void)setDelegate:(id<BWFigVideoCaptureStreamDelegate>)arg1 ;
-(BOOL)suspendingSupported;
-(void)didBecomeMasterStream;
-(void)setVideoHDRImageStatisticsEnabled:(BOOL)arg1 ;
-(long long)activeFormatIndex;
-(int)masterToSlaveFrameRateRatio;
-(void)setFaceDetectionConfiguration:(id)arg1 ;
-(void)willBecomeSlaveStream;
-(void)_configureKeypointDetection;
-(void)sourceNodeDidStopStreaming;
-(void)setStillImageBufferTimeMachineHandler:(id)arg1 ;
-(NSData *)cameraViewMatrixCalibratedForBackWideFieldOfView;
-(void)sourceNodeWillStopStreaming;
-(int)_updateFaceDetectionConfigurationOnStream:(id)arg1 ;
-(BOOL)usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
-(void)_updateMasterSlavePropertiesOnStream;
-(void)setLowLightVideoEnabled:(BOOL)arg1 ;
-(void)setHighlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream:(BOOL)arg1 ;
-(void)setBaseZoomFactorAfterGDC:(float)arg1 ;
-(int)autoFocusPositionSensorMode;
-(void)_addStillImageBracketFrameMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setRawFocusScoresEnabled:(BOOL)arg1 ;
-(NSArray *)supportedFormats;
-(BOOL)firmwareTimeMachineEnabledWhenConfiguredAsSlave;
-(BOOL)keypointDetectionEnabled;
-(SCD_Struct_BW8)updateMaxExposureDurationClientOverride:(SCD_Struct_BW8)arg1 ;
-(void)setHighlightRecoveryEnabledWhenConfiguredAsSlave:(BOOL)arg1 ;
-(SCD_Struct_Fi79)clientAuditToken;
-(id)_aeTables;
-(int)multiBandNoiseReductionMode;
-(id<BWFigVideoCaptureStreamDelegate>)delegate;
-(float)lensFNumber;
-(SCD_Struct_BW8)maxExposureDuration;
-(void)setHighlightRecoverySuspended:(BOOL)arg1 ;
-(int)sourceNodeWillEmitPointCloudSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setIsStationary:(BOOL)arg1 ;
-(void)_setHighlightRecoveryEnabled:(BOOL)arg1 ;
-(void)captureStreamDidStart;
-(void)_updateAutoFocusPositionSensorModeForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW8)maxExposureDurationClientOverride;
-(BOOL)motionDataDeliveryEnabled;
-(void)captureStillImageFromTimeMachineWithStillImageSettings:(id)arg1 ;
-(BOOL)lowLightVideoEnabled;
-(void)enableFaceDetection;
-(SCD_Struct_BW8)lastStillImagePTS;
-(BOOL)isStationary;
-(void)setSphereThermalLevel:(int)arg1 ;
-(BOOL)highlightRecoveryEnabledWhenConfiguredAsSlave;
-(id)bwStream;
-(void)setKeypointDetectionEnabled:(BOOL)arg1 ;
-(int)setActiveFormatIndex:(long long)arg1 ;
-(SCD_Struct_BW2)videoCaptureDimensions;
-(BOOL)highlightRecoveryEnabled;
-(void)_updateObjectDetectionEnabledOnStream;
-(void)setAeMaxGain:(float)arg1 ;
-(BOOL)pixelFormatIsTenBit;
-(float)baseZoomFactor;
-(int)timeMachineCapacity;
-(void)_updateAETables;
-(void)setSensorToOutputFrameRateRatioWhenConfiguredAsSlave:(int)arg1 ;
-(BOOL)focusBlurMapEnabled;
-(float)pixelsPerMicron;
-(void)setFaceDetector:(id<BWFaceDetector>)arg1 ;
-(int)setSuspended:(BOOL)arg1 ;
-(NSData *)cameraViewMatrix;
-(void)setDefersObjectDetectionStartup:(BOOL)arg1 ;
-(int)_handleStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 withError:(int)arg2 fromTimeMachine:(BOOL)arg3 ;
-(void)unregisterForObjectDetectionMetadata;
-(int)_setHighlightRecoveryEnabled:(BOOL)arg1 highlightRecoverySuspended:(BOOL)arg2 ;
-(NSData *)cameraPoseMatrix;
-(int)sphereThermalLevel;
-(void)_serviceTimeMachineWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_setMaxExposureDuration:(SCD_Struct_BW8)arg1 ;
-(void)_resetStillImageCaptureState;
-(void)sourceNodeFailedToStartStreaming;
-(id<BWObjectDetector>)objectDetector;
-(void)_setLowPowerSphereModeEnabled:(BOOL)arg1 ;
-(int)stop;
-(NSString *)portType;
-(SCD_Struct_BW8)updateMaxExposureDuration;
-(void)setBaseZoomFactor:(float)arg1 ;
-(int)sensorToOutputFrameRateRatioWhenConfiguredAsSlave;
-(id)initWithCaptureStream:(id)arg1 attributes:(id)arg2 sensorIDDictionary:(id)arg3 synchronizedStreamsGroup:(id)arg4 applicationID:(id)arg5 clientAuditToken:(SCD_Struct_Fi79)arg6 error:(int*)arg7 ;
-(float)gravityFactor;
-(NSString *)description;
-(void)setMinimumFrameRate:(float)arg1 ;
-(int)sourceNodeWillEmitDepthSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)willBecomeMasterStream;
-(NSDictionary *)opticalCenterOffsetCalibratedForBackWideFieldOfView;
-(void)setVideoCaptureDimensions:(SCD_Struct_BW2)arg1 ;
-(void)sourceNodeDidStartStreaming;
-(float)momentCaptureVideoRecordingAEMaxGain;
@end
