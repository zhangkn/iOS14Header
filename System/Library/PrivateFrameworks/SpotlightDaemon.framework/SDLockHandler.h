/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SDLockHandler : NSObject
+(BOOL)unlockedSinceBoot;
+(BOOL)deviceUnlocked;
+(BOOL)deviceFirstUnlockedInSB;
+(void)_deviceLockSetupSB;
+(void)_deviceLockSetUpMigrationCheck;
+(BOOL)deviceFirstUnlockedInMKB;
+(void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(BOOL)arg2 indexEnabled:(BOOL)arg3 delegate:(id)arg4 ;
+(void)_deviceLockSetup;
+(void)_deviceLockSetupMKB;
@end
