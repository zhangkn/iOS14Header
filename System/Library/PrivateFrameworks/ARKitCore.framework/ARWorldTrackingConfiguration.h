/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@class ARWorldMap, NSSet, NSString, ARSceneReconstructionOptions, ARImageSensorSettings;

@interface ARWorldTrackingConfiguration : ARConfiguration {

	BOOL _wantsHDREnvironmentTextures;
	BOOL _automaticImageScaleEstimationEnabled;
	BOOL _collaborationEnabled;
	BOOL _userFaceTrackingEnabled;
	BOOL _relocalizationEnabled;
	BOOL _mlModelEnabled;
	BOOL _lowQosSchedulingEnabled;
	BOOL _deliverRawSceneUnderstandingResults;
	BOOL _shouldUseUltraWideIfAvailable;
	BOOL _depthTemporalSmoothingEnabled;
	BOOL _depthOptimizedForStaticScene;
	BOOL _alwaysUsePrimaryCameraForTracking;
	BOOL _recordForGeoTracking;
	long long _environmentTexturing;
	unsigned long long _planeDetection;
	ARWorldMap* _initialWorldMap;
	NSSet* _detectionImages;
	long long _maximumNumberOfTrackedImages;
	NSSet* _detectionObjects;
	unsigned long long _sceneReconstruction;
	NSString* _slamConfiguration;
	double _minVergenceAngle;
	ARSceneReconstructionOptions* _sceneReconstructionOptions;

}

@property (assign,nonatomic) BOOL relocalizationEnabled;                                                 //@synthesize relocalizationEnabled=_relocalizationEnabled - In the implementation block
@property (nonatomic,copy) NSString * slamConfiguration;                                                 //@synthesize slamConfiguration=_slamConfiguration - In the implementation block
@property (assign,nonatomic) double minVergenceAngle;                                                    //@synthesize minVergenceAngle=_minVergenceAngle - In the implementation block
@property (assign,getter=isMLModelEnabled,nonatomic) BOOL mlModelEnabled;                                //@synthesize mlModelEnabled=_mlModelEnabled - In the implementation block
@property (assign,getter=isLowQosSchedulingEnabled,nonatomic) BOOL lowQosSchedulingEnabled;              //@synthesize lowQosSchedulingEnabled=_lowQosSchedulingEnabled - In the implementation block
@property (assign,nonatomic) BOOL deliverRawSceneUnderstandingResults;                                   //@synthesize deliverRawSceneUnderstandingResults=_deliverRawSceneUnderstandingResults - In the implementation block
@property (assign,nonatomic) BOOL shouldUseUltraWideIfAvailable;                                         //@synthesize shouldUseUltraWideIfAvailable=_shouldUseUltraWideIfAvailable - In the implementation block
@property (nonatomic,readonly) ARImageSensorSettings * imageSensorSettingsForUltraWide; 
@property (assign,nonatomic) BOOL depthTemporalSmoothingEnabled;                                         //@synthesize depthTemporalSmoothingEnabled=_depthTemporalSmoothingEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthOptimizedForStaticScene;                                          //@synthesize depthOptimizedForStaticScene=_depthOptimizedForStaticScene - In the implementation block
@property (assign,nonatomic) ARSpatialMappingParameters spatialMappingParameters; 
@property (nonatomic,retain) ARSceneReconstructionOptions * sceneReconstructionOptions;                  //@synthesize sceneReconstructionOptions=_sceneReconstructionOptions - In the implementation block
@property (assign,nonatomic) BOOL useSpatialMappingQualityMode; 
@property (assign,nonatomic) BOOL alwaysUsePrimaryCameraForTracking;                                     //@synthesize alwaysUsePrimaryCameraForTracking=_alwaysUsePrimaryCameraForTracking - In the implementation block
@property (assign,nonatomic) BOOL recordForGeoTracking;                                                  //@synthesize recordForGeoTracking=_recordForGeoTracking - In the implementation block
@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (assign,nonatomic) long long environmentTexturing;                                             //@synthesize environmentTexturing=_environmentTexturing - In the implementation block
@property (assign,nonatomic) BOOL wantsHDREnvironmentTextures;                                           //@synthesize wantsHDREnvironmentTextures=_wantsHDREnvironmentTextures - In the implementation block
@property (assign,nonatomic) unsigned long long planeDetection;                                          //@synthesize planeDetection=_planeDetection - In the implementation block
@property (nonatomic,retain) ARWorldMap * initialWorldMap;                                               //@synthesize initialWorldMap=_initialWorldMap - In the implementation block
@property (nonatomic,copy) NSSet * detectionImages;                                                      //@synthesize detectionImages=_detectionImages - In the implementation block
@property (assign,nonatomic) BOOL automaticImageScaleEstimationEnabled;                                  //@synthesize automaticImageScaleEstimationEnabled=_automaticImageScaleEstimationEnabled - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfTrackedImages;                                     //@synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages - In the implementation block
@property (nonatomic,copy) NSSet * detectionObjects;                                                     //@synthesize detectionObjects=_detectionObjects - In the implementation block
@property (assign,getter=isCollaborationEnabled,nonatomic) BOOL collaborationEnabled;                    //@synthesize collaborationEnabled=_collaborationEnabled - In the implementation block
@property (assign,getter=userFaceTrackingEnabled,nonatomic) BOOL userFaceTrackingEnabled;                //@synthesize userFaceTrackingEnabled=_userFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long sceneReconstruction;                                     //@synthesize sceneReconstruction=_sceneReconstruction - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(id)supportedVideoFormats;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(id)supportedVideoFormatsForUltraWide;
+(id)_querySupportedVideoFormats;
+(BOOL)supportsUserFaceTracking;
+(id)_querySupportedVideoFormatsForUserFaceTracking;
+(id)_querySupportedVideoFormatsForUltraWide;
+(id)supportedVideoFormatsForUserFaceTracking;
+(BOOL)supportsSceneReconstruction:(unsigned long long)arg1 ;
+(BOOL)supportsFrontCameraFaceAnchors;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaneDetection:(unsigned long long)arg1 ;
-(id)init;
-(long long)_depthPrioritization;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isMLModelEnabled;
-(double)minVergenceAngle;
-(unsigned long long)planeDetection;
-(BOOL)wantsHDREnvironmentTextures;
-(long long)maximumNumberOfTrackedImages;
-(ARWorldMap *)initialWorldMap;
-(BOOL)isCollaborationEnabled;
-(long long)environmentTexturing;
-(NSSet *)detectionImages;
-(NSSet *)detectionObjects;
-(unsigned long long)sceneReconstruction;
-(BOOL)userFaceTrackingEnabled;
-(BOOL)automaticImageScaleEstimationEnabled;
-(void)createTechniques:(id)arg1 ;
-(id)parentImageSensorSettings;
-(id)imageSensorSettings;
-(id)secondaryTechniques;
-(ARImageSensorSettings *)imageSensorSettingsForUltraWide;
-(BOOL)shouldUseUltraWide;
-(NSString *)slamConfiguration;
-(BOOL)relocalizationEnabled;
-(BOOL)alwaysUsePrimaryCameraForTracking;
-(void)setSlamConfiguration:(NSString *)arg1 ;
-(void)setRelocalizationEnabled:(BOOL)arg1 ;
-(void)setInitialWorldMap:(ARWorldMap *)arg1 ;
-(void)setLowQosSchedulingEnabled:(BOOL)arg1 ;
-(void)setMinVergenceAngle:(double)arg1 ;
-(void)setMlModelEnabled:(BOOL)arg1 ;
-(void)setCollaborationEnabled:(BOOL)arg1 ;
-(void)setSceneReconstruction:(unsigned long long)arg1 ;
-(ARSceneReconstructionOptions *)sceneReconstructionOptions;
-(void)setSceneReconstructionOptions:(ARSceneReconstructionOptions *)arg1 ;
-(void)setAlwaysUsePrimaryCameraForTracking:(BOOL)arg1 ;
-(BOOL)recordForGeoTracking;
-(void)setRecordForGeoTracking:(BOOL)arg1 ;
-(BOOL)shouldUseJasper;
-(void)setMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)setWantsHDREnvironmentTextures:(BOOL)arg1 ;
-(BOOL)shouldEnableVisionDataForImageSensorSettings:(id)arg1 ;
-(id)_trackingOptions;
-(BOOL)isLowQosSchedulingEnabled;
-(BOOL)depthOptimizedForStaticScene;
-(BOOL)shouldUseUltraWideIfAvailable;
-(void)setDetectionImages:(NSSet *)arg1 ;
-(void)setEnvironmentTexturing:(long long)arg1 ;
-(void)setAutomaticImageScaleEstimationEnabled:(BOOL)arg1 ;
-(void)setDetectionObjects:(NSSet *)arg1 ;
-(void)setShouldUseUltraWideIfAvailable:(BOOL)arg1 ;
-(void)setDepthOptimizedForStaticScene:(BOOL)arg1 ;
-(id)imageSensorSettingsForUserFaceTracking;
-(void)setUserFaceTrackingEnabled:(BOOL)arg1 ;
-(BOOL)depthTemporalSmoothingEnabled;
-(void)setFrontCameraFaceAnchorsEnabled:(BOOL)arg1 ;
-(void)setSpatialMappingParameters:(ARSpatialMappingParameters)arg1 ;
-(ARSpatialMappingParameters)spatialMappingParameters;
-(void)setUseSpatialMappingQualityMode:(BOOL)arg1 ;
-(BOOL)useSpatialMappingQualityMode;
-(BOOL)deliverRawSceneUnderstandingResults;
-(void)setDeliverRawSceneUnderstandingResults:(BOOL)arg1 ;
-(void)setDepthTemporalSmoothingEnabled:(BOOL)arg1 ;
@end

