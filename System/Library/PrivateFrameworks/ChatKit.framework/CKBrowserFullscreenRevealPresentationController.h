/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class CKBrowserFullscreenRevealDimmingView, UIStatusBar, UIStatusBarWindow, UIView;

@interface CKBrowserFullscreenRevealPresentationController : UIPresentationController {

	BOOL _presenting;
	BOOL _dismissing;
	/*^block*/id _dismissHandler;
	CKBrowserFullscreenRevealDimmingView* _dimmingView;
	UIStatusBar* _statusBar;
	UIStatusBarWindow* _statusBarWindow;
	unsigned long long _statusBarResizeMask;
	UIView* _presentingSnapshotView;
	CGRect _presentingSnapshotFrame;

}

@property (nonatomic,retain) CKBrowserFullscreenRevealDimmingView * dimmingView;              //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                             //@synthesize presenting=_presenting - In the implementation block
@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;                             //@synthesize dismissing=_dismissing - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                         //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) UIStatusBarWindow * statusBarWindow;                             //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (assign,nonatomic) unsigned long long statusBarResizeMask;                          //@synthesize statusBarResizeMask=_statusBarResizeMask - In the implementation block
@property (nonatomic,retain) UIView * presentingSnapshotView;                                 //@synthesize presentingSnapshotView=_presentingSnapshotView - In the implementation block
@property (assign,nonatomic) CGRect presentingSnapshotFrame;                                  //@synthesize presentingSnapshotFrame=_presentingSnapshotFrame - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                                 //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(UIStatusBar *)statusBar;
-(CKBrowserFullscreenRevealDimmingView *)dimmingView;
-(void)containerViewDidLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionWillBegin;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)dimmingViewTapped:(id)arg1 ;
-(void)_willChangeStatusBarFrame:(id)arg1 ;
-(void)_prepareViewHierarchyForPresentation;
-(void)_configureViewsForPresentedState;
-(CGRect)presentingSnapshotFrame;
-(UIView *)presentingSnapshotView;
-(void)_configureViewsForDismissedState;
-(void)setPresentingSnapshotView:(UIView *)arg1 ;
-(void)setPresentingSnapshotFrame:(CGRect)arg1 ;
-(id)_viewsToApplyTransform;
-(id)_viewsToApplyCornerRadius;
-(void)setStatusBarResizeMask:(unsigned long long)arg1 ;
-(unsigned long long)statusBarResizeMask;
-(void)setStatusBarWindow:(UIStatusBarWindow *)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(void)setDismissing:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDimmingView:(CKBrowserFullscreenRevealDimmingView *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
-(UIStatusBarWindow *)statusBarWindow;
-(BOOL)shouldRemovePresentersView;
-(BOOL)isPresenting;
-(BOOL)_shouldGrabPresentersView;
-(BOOL)isDismissing;
-(void)_cleanupPresentation;
@end
