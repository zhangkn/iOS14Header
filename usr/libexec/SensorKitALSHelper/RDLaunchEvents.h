//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RDDefaults, RDFileURLs;
@protocol OS_dispatch_queue, RDLaunchEventsDelegate;

@interface RDLaunchEvents : NSObject
{
    id <RDLaunchEventsDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
    RDDefaults *_defaults;	// 24 = 0x18
    RDFileURLs *_fileURLs;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0000000100005cbc
- (void).cxx_destruct;	// IMP=0x0000000100007598
- (void)registerForCacheDelete;	// IMP=0x0000000100006afc
- (void)registerForXPCEvent:(id)arg1;	// IMP=0x0000000100006950
- (void)unregisterForXPCActivities:(id)arg1;	// IMP=0x00000001000067e8
- (void)registerForXPCActivities:(id)arg1;	// IMP=0x00000001000064bc
- (void)dealloc;	// IMP=0x0000000100005da4

@end

