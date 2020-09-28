/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSString;

@interface CAMMomentCaptureSettings : NSObject {

	NSString* _persistenceUUID;
	long long _flashMode;
	long long _hdrMode;
	BOOL _autoOriginalPhotoDeliveryEnabled;
	long long _lowLightMode;
	unsigned long long _userInitiationTime;
	long long _photoQualityPrioritization;
	BOOL _shouldDisableCameraSwitchingDuringVideoRecording;
	BOOL _autoSpatialOverCaptureEnabled;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                    //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                                //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                                                  //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,readonly) BOOL autoOriginalPhotoDeliveryEnabled;                              //@synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled - In the implementation block
@property (nonatomic,readonly) long long lowLightMode;                                             //@synthesize lowLightMode=_lowLightMode - In the implementation block
@property (nonatomic,readonly) unsigned long long userInitiationTime;                              //@synthesize userInitiationTime=_userInitiationTime - In the implementation block
@property (nonatomic,readonly) long long photoQualityPrioritization;                               //@synthesize photoQualityPrioritization=_photoQualityPrioritization - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableCameraSwitchingDuringVideoRecording;              //@synthesize shouldDisableCameraSwitchingDuringVideoRecording=_shouldDisableCameraSwitchingDuringVideoRecording - In the implementation block
@property (nonatomic,readonly) BOOL autoSpatialOverCaptureEnabled;                                 //@synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled - In the implementation block
-(long long)hdrMode;
-(long long)flashMode;
-(long long)lowLightMode;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)photoQualityPrioritization;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(BOOL)autoSpatialOverCaptureEnabled;
-(NSString *)persistenceUUID;
-(unsigned long long)userInitiationTime;
-(BOOL)autoOriginalPhotoDeliveryEnabled;
-(BOOL)shouldDisableCameraSwitchingDuringVideoRecording;
@end
