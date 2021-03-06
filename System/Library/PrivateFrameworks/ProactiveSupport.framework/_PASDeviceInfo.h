/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PASDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(BOOL)isInternalBuild;
+(id)sharedInstance;
+(id)deviceUUID;
+(BOOL)shouldIncludePredictionLogs;
+(BOOL)isDemoModeEnabled;
+(BOOL)isDNUEnabled;
+(BOOL)isAudioAccessory;
+(BOOL)isBetaBuild;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isLowEndHardware;
-(void)dealloc;
-(id)init;
@end

