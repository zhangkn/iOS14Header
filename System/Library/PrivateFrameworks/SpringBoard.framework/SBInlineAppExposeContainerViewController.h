/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBSwitcherContentViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSwitcherContentViewControllerDataSource.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBAppPlatterDragSourceViewProviding.h>

@protocol SBInlineAppExposeContainerViewControllerDelegate;
@class NSString, SBAsymmetricalCornerRadiusWrapperView, NSArray, SBFluidSwitcherViewController, SBInlineAppExposeLiveContentOverlayCoordinator, SBInlineAppExposeRootSwitcherModifier, SBWallpaperEffectView, SBHomeScreenBackdropViewBase, UIView, BSCornerRadiusConfiguration, SBDeviceApplicationSceneViewController;

@interface SBInlineAppExposeContainerViewController : UIViewController <SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource, SBLayoutStateTransitionObserver, SBAppPlatterDragSourceViewProviding> {

	NSString* _bundleIdentifier;
	BOOL _transitioningFromOverlay;
	SBAsymmetricalCornerRadiusWrapperView* _asymmetricalCornerRadiusWrapperView;
	NSArray* _appLayouts;
	SBFluidSwitcherViewController* _contentViewController;
	SBInlineAppExposeLiveContentOverlayCoordinator* _liveContentCoordinator;
	SBInlineAppExposeRootSwitcherModifier* _rootModifier;
	SBWallpaperEffectView* _wallpaperEffectView;
	SBHomeScreenBackdropViewBase* _backdropView;
	UIView* _dimmingView;
	CGSize _contentReferenceSize;
	long long _contentInterfaceOrientation;
	BOOL _didPerformInitialSetup;
	BOOL _isRotating;
	BOOL _dragging;
	BOOL _overlay;
	BOOL _clipsToBounds;
	id<SBInlineAppExposeContainerViewControllerDelegate> _delegate;
	long long _layoutRole;
	BSCornerRadiusConfiguration* _cornerRadiusConfiguration;
	unsigned long long _maskedCorners;
	SBDeviceApplicationSceneViewController* _deviceApplicationSceneViewController;

}

@property (assign,nonatomic,__weak) id<SBInlineAppExposeContainerViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long layoutRole;                                                                       //@synthesize layoutRole=_layoutRole - In the implementation block
@property (assign,getter=isOverlay,nonatomic) BOOL overlay;                                                              //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration;                                    //@synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;                                                           //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,nonatomic) BOOL clipsToBounds;                                                                         //@synthesize clipsToBounds=_clipsToBounds - In the implementation block
@property (nonatomic,retain) SBDeviceApplicationSceneViewController * deviceApplicationSceneViewController;              //@synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                                            //@synthesize dragging=_dragging - In the implementation block
-(SBDragPreviewShadowParameters)initialRimShadowParameters;
-(SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
-(unsigned long long)maskedCorners;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(id)initialRimShadowFilters;
-(id)initialDiffuseShadowFilters;
-(id)initialCornerRadiusConfiguration;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(void)setLayoutRole:(long long)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)switcherContentController:(id)arg1 setContentOrientation:(long long)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)switcherContentController:(id)arg1 setHomeScreenDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDragging:(BOOL)arg1 ;
-(void)setOverlay:(BOOL)arg1 ;
-(BOOL)isDragging;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(BOOL)clipsToBounds;
-(id)appLayoutsForSwitcherContentController:(id)arg1 ;
-(void)switcherContentController:(id)arg1 setHomeScreenBackdropBlurType:(long long)arg2 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)_addAppLayoutToFront:(id)arg1 ;
-(id)sourceView;
-(id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(BOOL)isOverlay;
-(void)dealloc;
-(void)switcherContentController:(id)arg1 performTransitionWithRequest:(id)arg2 gestureInitiated:(BOOL)arg3 ;
-(long long)sbActiveInterfaceOrientation;
-(CGRect)frameForInlineAppExposeItemAspectFill:(BOOL)arg1 ;
-(void)switcherContentController:(id)arg1 setHomeScreenBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(void)viewWillLayoutSubviews;
-(long long)switcherInterfaceOrientationForContentController:(id)arg1 ;
-(id)containerViewForBlurContentView;
-(void)loadView;
-(void)switcherContentController:(id)arg1 setContainerStatusBarHidden:(BOOL)arg2 animationDuration:(double)arg3 ;
-(UIRectCornerRadii)cornerRadii;
-(long long)layoutRole;
-(void)setDelegate:(id<SBInlineAppExposeContainerViewControllerDelegate>)arg1 ;
-(id<SBInlineAppExposeContainerViewControllerDelegate>)delegate;
-(void)switcherContentController:(id)arg1 deletedAppLayout:(id)arg2 forReason:(long long)arg3 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)switcherContentController:(id)arg1 handlePlusButtonActionForBundleIdentifier:(id)arg2 ;
-(id)initWithBundleID:(id)arg1 layoutRole:(long long)arg2 overlay:(BOOL)arg3 ;
-(BOOL)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id)arg1 ;
-(long long)backdropInterfaceStyleForContentController:(id)arg1 ;
-(SBDeviceApplicationSceneViewController *)deviceApplicationSceneViewController;
-(void)setDeviceApplicationSceneViewController:(SBDeviceApplicationSceneViewController *)arg1 ;
-(id)_unfilteredAppLayoutsForBundleID:(id)arg1 ;
-(id)_inlineAppLayoutForDisplayItem:(id)arg1 ;
-(void)_insertAppLayout:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 modelMutation:(/*^block*/id)arg4 ;
-(void)_updateContentViewControllerFrame;
-(id)_liveSceneIDsExcludingCurrentRole:(BOOL)arg1 matchingBundleIdentifier:(id)arg2 forTransitionContext:(id)arg3 ;
-(id)_newInlineDisplayItemFromSceneHandle:(id)arg1 ;
-(CGRect)_frameForInlineAppExposeItemAspectFill:(BOOL)arg1 referenceSize:(CGSize)arg2 interfaceOrientation:(long long)arg3 scale:(inout double*)arg4 ;
-(id)_inlineDisplayItemInLayoutState:(id)arg1 ;
@end

