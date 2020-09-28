//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, RDFileURLs;
@protocol RDTimeTelling;

@interface RDStateCache : NSObject
{
    double _lastTimeReminderAlertShown;	// 8 = 0x8
    double _daemonLaunchTime;	// 16 = 0x10
    unsigned long long _lastVersionMigrated;	// 24 = 0x18
    double _timeSyncTimestamp;	// 32 = 0x20
    double _remoteRTCOffset;	// 40 = 0x28
    NSDictionary *_serviceStartTimes;	// 48 = 0x30
    double _preferWifiAssertionEndTime;	// 56 = 0x38
    double _stateSentTimestamp;	// 64 = 0x40
    double _dataVaultMigrationStartTime;	// 72 = 0x48
    RDFileURLs *_fileURLs;	// 80 = 0x50
    id <RDTimeTelling> _timeOracle;	// 88 = 0x58
}

+ (void)initialize;	// IMP=0x000000010002066c
@property(readonly, nonatomic) double timeSyncTimestamp; // @synthesize timeSyncTimestamp=_timeSyncTimestamp;
- (id)description;	// IMP=0x0000000100021154
- (void)dealloc;	// IMP=0x0000000100020bf8

@end
