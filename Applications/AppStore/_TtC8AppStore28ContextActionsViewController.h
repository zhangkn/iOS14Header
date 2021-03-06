//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAdaptivePresentationControllerDelegate-Protocol.h"
#import "UIInterfaceActionHandlerInvocationDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class ContextActionsPresentationController, MISSING_TYPE, UIGestureRecognizer;

@interface _TtC8AppStore28ContextActionsViewController : UIViewController <UIPopoverPresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIAdaptivePresentationControllerDelegate>
{
    MISSING_TYPE *isOrbPresentation;	// 8 = 0x8
    MISSING_TYPE *systemProvidedGestureRecognizer;	// 16 = 0x10
    MISSING_TYPE *hasAppliedSystemRecognizer;	// 24 = 0x18
    MISSING_TYPE *transitionPresentationController;	// 32 = 0x20
    MISSING_TYPE *configuration;	// 40 = 0x28
    MISSING_TYPE *contextActionView;	// 48 = 0x30
    MISSING_TYPE *stackView;	// 56 = 0x38
    MISSING_TYPE *backgroundView;	// 64 = 0x40
    MISSING_TYPE *gestureRecognizerInitialLocation;	// 72 = 0x48
    MISSING_TYPE *constraints;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100241648
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001002416d0
- (void)animateTransition:(id)arg1;	// IMP=0x00000001002415d0
- (double)transitionDuration:(id)arg1;	// IMP=0x00000001002413d0
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000100241328
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000001002412e8
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100241210
- (void)systemProvidedGestureRecognzierTriggeredWithSystemGesture:(id)arg1;	// IMP=0x000000010023f8a4
- (void)viewTappedWithTapGesture:(id)arg1;	// IMP=0x000000010023f764
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010023f714
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010023f2e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010023f164
- (void)viewDidLoad;	// IMP=0x000000010023f138
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010023eee0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010023ee94
@property(nonatomic, retain) ContextActionsPresentationController *transitionPresentationController; // @synthesize transitionPresentationController;
@property(nonatomic, retain) UIGestureRecognizer *systemProvidedGestureRecognizer; // @synthesize systemProvidedGestureRecognizer;
@property(nonatomic) _Bool isOrbPresentation; // @synthesize isOrbPresentation;

@end

