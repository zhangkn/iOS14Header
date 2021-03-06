//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NFScreenStateMonitorDelegate, OS_dispatch_queue;

@interface NFScreenStateMonitor : NSObject
{
    int _sbScreenStateToken;	// 8 = 0x8
    int _bgTagDetectOverrideStateToken;	// 12 = 0xc
    id <NFScreenStateMonitorDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)sharedScreenStateMonitor;	// IMP=0x00000001000b8580
- (void).cxx_destruct;	// IMP=0x00000001000b8df4
- (_Bool)isScreenOn;	// IMP=0x00000001000b8bd8
- (void)_unregisterBGTagDetectOverrideNotifications;	// IMP=0x00000001000b8ba0
- (void)_registerBGTagDetectOverrideNotifications;	// IMP=0x00000001000b8988
- (void)_unregisterForSpringboardNotifications;	// IMP=0x00000001000b8950
- (void)_registerForSpringboardNotifications;	// IMP=0x00000001000b8670
- (void)unregisterStateChange;	// IMP=0x00000001000b8630
- (void)registerStateChangeWithDelegate:(id)arg1;	// IMP=0x00000001000b85ec
- (id)init;	// IMP=0x00000001000b84c0

@end

