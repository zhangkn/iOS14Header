//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessoryManager, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface PRAttachedAccessoryMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    EAAccessoryManager *fAccessoryManager;	// 16 = 0x10
    NSNotificationCenter *fNotificationCenter;	// 24 = 0x18
    _Bool _monitoring;	// 32 = 0x20
    CDUnknownBlockType _stateChangedHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010017d2c4
@property _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(copy) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
- (void)accessoryDisconnected:(id)arg1;	// IMP=0x000000010017d0d4
- (void)accessoryConnected:(id)arg1;	// IMP=0x000000010017cf0c
- (void)accessoryNotify:(id)arg1 isAttached:(_Bool)arg2;	// IMP=0x000000010017c9f8
- (void)initAccessoryListener;	// IMP=0x000000010017c750
- (_Bool)startMonitoring;	// IMP=0x000000010017c6cc
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010017c5ac

@end

