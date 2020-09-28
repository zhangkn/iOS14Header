//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuddyFlowProducer-Protocol.h"

@class NSString;
@protocol BuddyFundamentalFlowProvider;

@interface BuddyFundamentalFlow : NSObject <BuddyFlowProducer>
{
    id <BuddyFundamentalFlowProvider> _flowProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000fbf98
@property(nonatomic) __weak id <BuddyFundamentalFlowProvider> flowProvider; // @synthesize flowProvider=_flowProvider;
- (Class)potentialNextFlowItemClassFollowingFlowItemClass:(Class)arg1;	// IMP=0x00000001000fbef0
- (void)configureInitialFlowItem:(id)arg1;	// IMP=0x00000001000fbdc8
- (Class)initialFlowItemClass;	// IMP=0x00000001000fbb0c
- (void)_addItems:(id)arg1 toFlow:(id)arg2;	// IMP=0x00000001000fba14
- (id)_flowMapByClass;	// IMP=0x00000001000fafac
- (id)initWithFlowProvider:(id)arg1;	// IMP=0x00000001000faf40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
