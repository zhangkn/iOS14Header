//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC8AppStore20FlowTabBarController : UITabBarController
{
    MISSING_TYPE *flowController;	// 8 = 0x8
    MISSING_TYPE *actionRunner;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000cf6a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000cf768
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000cf6e4
- (void)handleSearchKeyCommandWithCommand:(id)arg1;	// IMP=0x00000001000cf610
- (void)handleTabSwitchKeyCommandWithCommand:(id)arg1;	// IMP=0x00000001000cf5c4
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

@end

