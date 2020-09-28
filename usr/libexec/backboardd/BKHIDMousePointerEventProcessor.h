//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventProcessor-Protocol.h"

@class BKMousePointerController, BKMousePointerServiceServer, NSString;

@interface BKHIDMousePointerEventProcessor : NSObject <BKHIDEventProcessor>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BKMousePointerController *_mousePointerController;	// 16 = 0x10
    BKMousePointerServiceServer *_mousePointerServiceServer;	// 24 = 0x18
    int _assistiveTouchNotificationToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002e590
@property(readonly, nonatomic) BKMousePointerController *mousePointerController;
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x000000010002e4d8
- (id)init;	// IMP=0x000000010002e3f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
