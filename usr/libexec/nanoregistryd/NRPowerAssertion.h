//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NROSTransaction, NSCountedSet, NSMutableArray, NSMutableDictionary, NSString;
@protocol AbstractTimer, OS_dispatch_queue;

@interface NRPowerAssertion : NSObject
{
    _Bool _assertionLockoutTimerDidTimeOut;	// 8 = 0x8
    unsigned int _assertion;	// 12 = 0xc
    NSMutableDictionary *_liveActivityInfos;	// 16 = 0x10
    NSCountedSet *_liveActivities;	// 24 = 0x18
    NSMutableArray *_activityGroups;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NROSTransaction *_transaction;	// 48 = 0x30
    NSString *_assertionSuffix;	// 56 = 0x38
    id <AbstractTimer> _assertionLockoutTimer;	// 64 = 0x40
}

+ (void)releaseAssertion:(unsigned int)arg1;	// IMP=0x000000010007dffc
+ (unsigned int)takeAssertionWithSuffix:(id)arg1;	// IMP=0x000000010007dda0
+ (id)sharedInstance;	// IMP=0x000000010007d24c
- (void).cxx_destruct;	// IMP=0x000000010007e884
@property(nonatomic) _Bool assertionLockoutTimerDidTimeOut; // @synthesize assertionLockoutTimerDidTimeOut=_assertionLockoutTimerDidTimeOut;
@property(retain, nonatomic) id <AbstractTimer> assertionLockoutTimer; // @synthesize assertionLockoutTimer=_assertionLockoutTimer;
@property(retain, nonatomic) NSString *assertionSuffix; // @synthesize assertionSuffix=_assertionSuffix;
@property(nonatomic) unsigned int assertion; // @synthesize assertion=_assertion;
@property(retain, nonatomic) NROSTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *activityGroups; // @synthesize activityGroups=_activityGroups;
@property(retain, nonatomic) NSCountedSet *liveActivities; // @synthesize liveActivities=_liveActivities;
@property(retain, nonatomic) NSMutableDictionary *liveActivityInfos; // @synthesize liveActivityInfos=_liveActivityInfos;
- (void)removeActivityWithUUID:(id)arg1;	// IMP=0x000000010007e468
- (void)_powerAssertionLockoutTimeout;	// IMP=0x000000010007e294
- (void)renameAssertionWithSuffix:(id)arg1;	// IMP=0x000000010007e184
- (void)releaseAssertion;	// IMP=0x000000010007e148
- (void)takeAssertion;	// IMP=0x000000010007e10c
- (id)addActivityWithName:(id)arg1;	// IMP=0x000000010007d9b0
- (_Bool)containsProcessGroup;	// IMP=0x000000010007d87c
- (void)dumpProcesses:(id)arg1 isAdded:(_Bool)arg2;	// IMP=0x000000010007d5b0
- (id)init;	// IMP=0x000000010007d4a0
- (void)addActivityGroup:(id)arg1;	// IMP=0x000000010007d2e8

@end
