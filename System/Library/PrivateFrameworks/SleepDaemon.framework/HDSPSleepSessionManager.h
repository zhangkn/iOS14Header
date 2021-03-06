/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepTrackerDelegate.h>
#import <libobjc.A.dylib/HDSPDeviceUnlockObserver.h>

@protocol HDSPSleepSessionManagerDelegate, HDSPSleepSessionPersistence;
@class HDSPDeviceUnlockMonitor, NSString;

@interface HDSPSleepSessionManager : NSObject <HDSPSleepTrackerDelegate, HDSPDeviceUnlockObserver> {

	os_unfair_lock_s _sessionLock;
	id<HDSPSleepSessionManagerDelegate> _delegate;
	id<HDSPSleepSessionPersistence> _persistence;
	HDSPDeviceUnlockMonitor* _deviceUnlockManager;

}

@property (nonatomic,readonly) id<HDSPSleepSessionPersistence> persistence;                    //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,readonly) HDSPDeviceUnlockMonitor * deviceUnlockManager;                  //@synthesize deviceUnlockManager=_deviceUnlockManager - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s sessionLock;                                   //@synthesize sessionLock=_sessionLock - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPSleepSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_archivedSessionFile;
+(id)_archivedSessionDirectory;
-(id<HDSPSleepSessionPersistence>)persistence;
-(id)initWithEnvironment:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)_waitForFirstUnlock;
-(id)_unprocessedSessions;
-(void)stopSession;
-(void)deviceHasBeenUnlocked;
-(void)sleepTracker:(id)arg1 didEndSession:(id)arg2 reason:(unsigned long long)arg3 ;
-(HDSPDeviceUnlockMonitor *)deviceUnlockManager;
-(void)sleepTrackerDidStartSession:(id)arg1 ;
-(void)removeSessionDataFile;
-(void)setDelegate:(id<HDSPSleepSessionManagerDelegate>)arg1 ;
-(os_unfair_lock_s)sessionLock;
-(id<HDSPSleepSessionManagerDelegate>)delegate;
-(void)startSession;
-(id)saveSession:(id)arg1 ;
-(void)savePendingSessions;
-(void)archiveSession:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 persistence:(id)arg2 ;
-(BOOL)_hasUnprocessedSessions;
-(void)_locked_savePendingSessions;
@end

