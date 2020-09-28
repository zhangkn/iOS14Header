/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging; 
@property (readonly) BOOL isDeviceOnWifi; 
+(id)sharedInstance;
-(BOOL)isDeviceCharging;
-(BOOL)isDeviceOnWifi;
-(id)_batteryStatus;
-(id)_mobileNetworkManager;
@end
