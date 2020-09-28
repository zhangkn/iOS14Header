//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol _TtP8AppStore20PageTraitEnvironment_;

@interface UIViewController (ContextActionsPresenting)
+ (void)as_activatePresentationHack;	// IMP=0x000000010000d2b0
- (void)as_unregisterForPreviewing:(id)arg1;	// IMP=0x000000010000d1e0
- (id)as_registerForPreviewingFromSourceView:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d0ac
- (void)as_viewDidBecomePartiallyVisible;	// IMP=0x000000010000dc54
- (void)as_viewWillBecomePartiallyVisible;	// IMP=0x000000010000db38
- (void)as_viewDidBecomeFullyVisible;	// IMP=0x000000010000da1c
- (void)as_viewWillBecomeFullyVisible;	// IMP=0x000000010000d900
- (id)as_viewControllersForVisibilityCallbackForwarding;	// IMP=0x000000010000d7c0
- (void)as_dismissalTransitionDidEnd:(id)arg1;	// IMP=0x000000010000d60c
- (void)as_dismissalTransitionWillBegin:(id)arg1;	// IMP=0x000000010000d600
- (void)as_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d40c
- (void)presentViewControllerContextually:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001dfe0
@property(nonatomic, readonly) id <_TtP8AppStore20PageTraitEnvironment_> snapshotPageTraitEnvironment;
@property(nonatomic, readonly) struct UIEdgeInsets pageMarginInsets;
@property(nonatomic, readonly) struct CGSize pageContainerSize;
- (void)ppt_pendingPageRenderDidPost:(id)arg1;	// IMP=0x00000001000e4148
@end
