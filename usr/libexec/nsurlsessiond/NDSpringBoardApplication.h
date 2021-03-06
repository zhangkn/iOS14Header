//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDApplication.h"

#import "NDSpringBoardAppObserver-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface NDSpringBoardApplication : NDApplication <NDSpringBoardAppObserver>
{
    NSObject<OS_dispatch_source> *_delayTimer;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_nonDiscretionaryGracePeriodTimer;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_extendedNonDiscretionaryGracePeriodTimer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_transitionalDiscretionaryStateTimer;	// 64 = 0x40
    NDSpringBoardApplication *_containingApplication;	// 72 = 0x48
}

+ (id)requestDelayQueue;	// IMP=0x0000000100040140
- (void).cxx_destruct;	// IMP=0x000000010003fd8c
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x000000010003fcec
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x000000010003fb30
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x000000010003faf4
- (void)applicationBackgroundUpdatesTurnedOn:(id)arg1;	// IMP=0x000000010003fab8
- (void)applicationBackgroundUpdatesTurnedOff:(id)arg1;	// IMP=0x000000010003fa7c
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x000000010003fa40
- (void)startTransitionalDiscretionaryPeriodTimer;	// IMP=0x000000010003f9d0
- (void)disableTransitionalDiscretionaryPeriodTimer;	// IMP=0x000000010003f980
- (void)setupTransitionalDiscretionaryPeriodTimer;	// IMP=0x000000010003f8a0
- (void)removeObserver:(id)arg1;	// IMP=0x000000010003f738
- (void)addObserver:(id)arg1;	// IMP=0x000000010003f4f4
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x000000010003f480
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x000000010003f40c
- (_Bool)isBeingDebugged;	// IMP=0x000000010003f398
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x000000010003f2d0
- (_Bool)isSuspended;	// IMP=0x000000010003f25c
- (_Bool)isAwake;	// IMP=0x000000010003f1e8
- (_Bool)canBeSuspended;	// IMP=0x000000010003f1e0
- (_Bool)isForeground;	// IMP=0x000000010003f16c
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x000000010003f164
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x000000010003f030
- (void)_onqueue_resetRequestDelay;	// IMP=0x000000010003ef5c
- (void)setupDelayTimer;	// IMP=0x000000010003ee78
- (_Bool)supportsWakes;	// IMP=0x000000010003ee70
- (id)containerURL;	// IMP=0x000000010003edf4
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010003ec78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

