//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFFlow.h>

@class ACAccountStore;

@interface BuddyAppleIDFlow : BFFFlow
{
    ACAccountStore *_accountStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000c1aa4
- (id)accountToUpdate;	// IMP=0x00000001000c1a48
- (id)accountToRepair;	// IMP=0x00000001000c18f0
- (void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2;	// IMP=0x00000001000c177c
- (id)firstItem;	// IMP=0x00000001000c0df0
- (id)init;	// IMP=0x00000001000c0d84

@end
