//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

#import "HFAccessoryBrowsingObserver-Protocol.h"

@class HFAccessoryBrowsingManager, NSString;

@interface HSTroubleshootingTipsItemManager : HFItemManager <HFAccessoryBrowsingObserver>
{
    unsigned long long _page;	// 8 = 0x8
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100012ee0
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
@property(readonly, nonatomic) unsigned long long page; // @synthesize page=_page;
- (void)_updateItemsDependingOnSharingDevice:(id)arg1;	// IMP=0x0000000100012e18
- (void)_updateItemsDependingOnAccessory:(id)arg1;	// IMP=0x0000000100012d70
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewSharingDevice:(id)arg2;	// IMP=0x0000000100012d60
- (void)accessoryBrowsingManager:(id)arg1 didFindNewSharingDevice:(id)arg2;	// IMP=0x0000000100012d50
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewAccessory:(id)arg2;	// IMP=0x0000000100012d40
- (void)accessoryBrowsingManager:(id)arg1 didFindNewAccessory:(id)arg2;	// IMP=0x0000000100012d30
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;	// IMP=0x0000000100012d1c
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x0000000100012c0c
- (void)_unregisterForExternalUpdates;	// IMP=0x0000000100012b98
- (void)_registerForExternalUpdates;	// IMP=0x0000000100012b24
- (id)initWithDelegate:(id)arg1 page:(unsigned long long)arg2 accessoryBrowsingManager:(id)arg3;	// IMP=0x0000000100012a70
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x00000001000129b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
