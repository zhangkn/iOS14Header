/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class HMDCameraSessionID, HMDAccessory;

@interface HMDCameraMetricsLogEvent : HMDLogEvent {

	BOOL _isLocal;
	HMDCameraSessionID* _sessionID;
	HMDAccessory* _accessory;

}

@property (nonatomic,readonly) HMDCameraSessionID * sessionID;               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (readonly) BOOL isLocal;                                           //@synthesize isLocal=_isLocal - In the implementation block
-(BOOL)isLocal;
-(HMDCameraSessionID *)sessionID;
-(HMDAccessory *)accessory;
-(id)initWithMetricUUID:(id)arg1 sessionID:(id)arg2 cameraAccessory:(id)arg3 isLocal:(BOOL)arg4 ;
@end
