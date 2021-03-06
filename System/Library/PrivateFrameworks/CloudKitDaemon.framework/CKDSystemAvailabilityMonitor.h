/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject {

	NSMutableSet* _watcherWrappers;
	unsigned long long _availabilityState;
	unsigned long long _simulatedAvailablityState;

}

@property (nonatomic,retain) NSMutableSet * watcherWrappers;                  //@synthesize watcherWrappers=_watcherWrappers - In the implementation block
@property (assign) unsigned long long availabilityState;                      //@synthesize availabilityState=_availabilityState - In the implementation block
@property (assign) unsigned long long simulatedAvailablityState;              //@synthesize simulatedAvailablityState=_simulatedAvailablityState - In the implementation block
+(void)initialize;
+(id)sharedMonitor;
-(void)simulateFirstUnlockForUnitTests;
-(void)_clearVanishedWatchers;
-(void)_systemMayNowBeReady;
-(void)dealloc;
-(NSMutableSet *)watcherWrappers;
-(void)setSimulatedAvailablityState:(unsigned long long)arg1 ;
-(id)_init;
-(void)resetToUnavailableForUnitTests;
-(void)_logAvailabilityDescription;
-(void)setAvailabilityState:(unsigned long long)arg1 ;
-(void)removeNotifications;
-(void)setWatcherWrappers:(NSMutableSet *)arg1 ;
-(void)simulateBuddyCompletedForUnitTests;
-(BOOL)registerWatcher:(id)arg1 ;
-(unsigned long long)availabilityState;
-(unsigned long long)simulatedAvailablityState;
-(unsigned long long)currentAvailabilityState;
@end

