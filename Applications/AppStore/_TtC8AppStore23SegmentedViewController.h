//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC8AppStore23SegmentedViewController : UIViewController
{
    MISSING_TYPE *headerBackgroundView;	// 8 = 0x8
    MISSING_TYPE *headerView;	// 16 = 0x10
    MISSING_TYPE *segments;	// 24 = 0x18
    MISSING_TYPE *selectedIndex;	// 32 = 0x20
    MISSING_TYPE *selectedViewController;	// 40 = 0x28
    MISSING_TYPE *columnViewControllers;	// 48 = 0x30
    MISSING_TYPE *selectorControl;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001246c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100124654
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001001245d0
- (void)viewWillLayoutSubviews;	// IMP=0x00000001001245a4
- (void)takeSelectedIndexFrom:(id)arg1;	// IMP=0x0000000100124294
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x0000000100124178
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0000000100124100
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100123f90
- (void)didReceiveMemoryWarning;	// IMP=0x000000010012388c
- (void)viewDidLoad;	// IMP=0x00000001001235d4

@end

