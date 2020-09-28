//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WPRangingDelegate-Protocol.h"

@class NSString, WPRanging;
@protocol OS_dispatch_queue;

@interface PRWirelessProximityAdapter : NSObject <WPRangingDelegate>
{
    WPRanging *_wpRanging;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _wiproxStateHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001697f8
@property(copy) CDUnknownBlockType wiproxStateHandler; // @synthesize wiproxStateHandler=_wiproxStateHandler;
- (void)rangingDidUpdateState:(id)arg1;	// IMP=0x00000001001696e8
- (void)querySPMIMessagingStatusWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010016963c
- (void)enableSPMIMessagingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010016957c
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100169464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
