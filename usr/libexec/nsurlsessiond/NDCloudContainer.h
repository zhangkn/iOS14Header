//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDApplication.h"

#import "BRContainerObserver-Protocol.h"

@class BRContainersMonitor, NSString;

@interface NDCloudContainer : NDApplication <BRContainerObserver>
{
    BRContainersMonitor *_monitor;	// 40 = 0x28
    _Bool _isForeground;	// 48 = 0x30
    _Bool _initializedForegroundStateFromMonitorCallback;	// 49 = 0x31
}

+ (id)bundleIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x0000000100040924
+ (id)containerIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x0000000100040880
- (void).cxx_destruct;	// IMP=0x000000010004086c
- (void)containerDidEnterForeground:(id)arg1;	// IMP=0x0000000100040754
- (void)containerDidEnterBackground:(id)arg1;	// IMP=0x000000010004063c
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100040560
- (void)addObserver:(id)arg1;	// IMP=0x0000000100040484
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x000000010004047c
- (_Bool)supportsWakes;	// IMP=0x0000000100040474
- (_Bool)isForeground;	// IMP=0x0000000100040368
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x0000000100040360
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010004029c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
