//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class MISSING_TYPE, NSArray, UIViewController;

@interface _TtC8AppStore24FlowNavigationController : UINavigationController
{
    MISSING_TYPE *flowController;	// 8 = 0x8
    MISSING_TYPE *actionRunner;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001002a1d28
- (id)initWithRootViewController:(id)arg1;	// IMP=0x00000001002a1cac
- (void)handleBackKeyCommandWithCommand:(id)arg1;	// IMP=0x00000001002a1a34
@property(nonatomic, readonly) NSArray *keyCommands;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000001002a1694
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001002a1120
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001002a1064
- (void)viewDidLoad;	// IMP=0x00000001002a0f94
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002a0f00
- (id)init;	// IMP=0x00000001002a0eb4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001002a0e30
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x00000001002a0dd0

@end

