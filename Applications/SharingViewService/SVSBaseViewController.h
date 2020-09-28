//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, SVSCardContainerView;

@interface SVSBaseViewController : UIViewController
{
    NSLayoutConstraint *_bottomMarginConstraint;	// 8 = 0x8
    SVSCardContainerView *_containerView;	// 16 = 0x10
    id _mainController;	// 24 = 0x18
    _Bool _didReactivateContainerViewAfterLayingOut;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000824b8
@property(retain, nonatomic) id mainController; // @synthesize mainController=_mainController;
@property(retain, nonatomic) SVSCardContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100082418
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100082274
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000821dc
- (void)cancelProxCardDraggingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000821b4
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000821ac
- (id)initWithMainController:(id)arg1;	// IMP=0x0000000100082130

@end
