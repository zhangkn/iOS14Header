//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventProcessor-Protocol.h"
#import "BKIOHIDServiceDisappearanceObserver-Protocol.h"
#import "BKIOHIDServiceMatchObserver-Protocol.h"

@class BKIOHIDServiceMatcher, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchPadManager : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver, BKHIDEventProcessor>
{
    NSObject<OS_dispatch_queue> *_touchPadQueue;	// 8 = 0x8
    NSMutableDictionary *_queue_currentTouchPads;	// 16 = 0x10
    BKIOHIDServiceMatcher *_touchPadMatcher;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100011354
- (void).cxx_destruct;	// IMP=0x0000000100010e98
- (void)_queue_sendCancelEventForTouchPad:(id)arg1;	// IMP=0x0000000100010bec
- (void)_queue_handleEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 dispatcher:(id)arg3;	// IMP=0x00000001000106a8
- (void)_queue_sendEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 toDestination:(id)arg3 dispatcher:(id)arg4;	// IMP=0x0000000100010330
- (void)_queue_touchPadsDetected:(id)arg1;	// IMP=0x000000010001026c
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x00000001000101a0
- (void)_queue_touchPadRemoved:(id)arg1;	// IMP=0x0000000100010044
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x000000010000fff0
- (void)sendCancelEventForAllDisplays;	// IMP=0x000000010000ff98
- (void)sendCancelEventForDisplay:(id)arg1;	// IMP=0x000000010000ff14
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x000000010000fe40
- (void)dealloc;	// IMP=0x000000010000fdf0
- (id)init;	// IMP=0x000000010000fbf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
