/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarVisualProvider.h>
#import <UIKitCore/_UINavigationBarContentViewDelegate.h>
#import <UIKitCore/_UINavigationItemChangeObserver.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>
#import <UIKitCore/_UINavigationControllerRefreshControlHostDelegate.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@class _UIBarBackground, _UINavigationBarContentView, UIView, _UINavigationBarLargeTitleView, _UINavigationBarModernPromptView, _UIPointerInteractionAssistant, UILabel, _UINavigationBarTransitionContext, UIBarButtonItem, _UINavigationControllerRefreshControlHost, NSString;

@interface _UINavigationBarVisualProviderModernIOS : _UINavigationBarVisualProvider <_UINavigationBarContentViewDelegate, _UINavigationItemChangeObserver, _UIBarAppearanceChangeObserver, _UINavigationControllerRefreshControlHostDelegate, _UIBasicAnimationFactory> {

	_UIBarBackground* _backgroundView;
	_UINavigationBarContentView* _contentView;
	UIView* _canvasView;
	_UINavigationBarLargeTitleView* _largeTitleView;
	_UINavigationBarModernPromptView* _promptView;
	_UIPointerInteractionAssistant* _assistant;
	UILabel* _weeTitleLabel;
	_UINavigationBarTransitionContext* _transitionContext;
	CGSize _previousBarSize;
	double _backgroundAlpha;
	double _titleAlpha;
	double _shadowAlpha;
	BOOL _hasIdiom;
	BOOL _runningPaletteBasedSearchPresentation;
	BOOL _useInlineBackgroundHeightWhenLarge;
	BOOL _backgroundTransparentWhenNotCollapsed;
	BOOL _providesExtraSpaceForExcessiveLineHeights;
	BOOL _isObservingDidEncounterFirstTitleWithExcessiveHeightChanged;
	BOOL _useModernAppearanceAPI;
	BOOL _forceScrollEdgeAppearance;
	long long _appearanceAPIVersion;
	UIBarButtonItem* _staticNavBarButtonItem;
	_UINavigationControllerRefreshControlHost* _refreshControlHost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stackDidChangeFrom:(id)arg1 ;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateBackground;
-(void)_removeContentClippingView;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldFadeStaticNavBarButton;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(BOOL)arg2 ;
-(id)_updateBackgroundLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(BOOL)arg3 ;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(BOOL)wantsExtendedContentView;
-(void)updateBackgroundGroupName;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_defaultWeeTitleAttributes;
-(void)_enforceLayoutOrdering;
-(void)updateArchivedSubviews:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_updateTitleViewWithLargeTitle:(BOOL)arg1 ;
-(void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setUseInlineBackgroundHeightWhenLarge:(BOOL)arg1 ;
-(void)navigationItemUpdatedScrollEdgeProgress:(id)arg1 ;
-(double)navItemContentLayoutGuideAnimationDistance;
-(void)navigationItemUpdatedPromptContent:(id)arg1 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(double)titleAlpha;
-(BOOL)_isInInteractiveScroll;
-(void)_popToItem:(id)arg1 ;
-(BOOL)isContentViewHidden;
-(void)setRefreshControlHost:(id)arg1 ;
-(void)navigationControllerRefreshControlHostDidUpdateLayout:(id)arg1 ;
-(void)navigationItemUpdatedCanvasView:(id)arg1 ;
-(long long)currentContentSize;
-(void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(BOOL)allowLargeTitleView;
-(BOOL)navigationItemIsBackItem:(id)arg1 ;
-(void)setTitleAlpha:(double)arg1 ;
-(void)_updateWithCompletion:(/*^block*/id)arg1 ;
-(void)_installContentClippingView:(id)arg1 ;
-(void)recordBarSize:(CGSize)arg1 ;
-(void)_performAnimationWithTransitionCompletion:(/*^block*/id)arg1 transition:(int)arg2 ;
-(void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3 ;
-(id)refreshControlHost;
-(void)_setupTopNavigationItemAnimated:(BOOL)arg1 ;
-(NSDirectionalEdgeInsets)resolvedSearchBarMargins;
-(void)navigationItemUpdatedTitleContent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)useInlineBackgroundHeightWhenLarge;
-(void)barDidAddSubview:(id)arg1 ;
-(void)prepareForPop;
-(BOOL)_stackWantsLargeTitleDisplayedForItem:(id)arg1 ;
-(NSDirectionalEdgeInsets)largeSearchBaseMarginsRequiringNavMinimums:(BOOL)arg1 ;
-(id)_backButtonMenu;
-(BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(CGPoint)arg1 ;
-(void)_prepareLayouts;
-(void)_updateLegacyLayout:(id)arg1 forNavigationItem:(id)arg2 ;
-(double)heightForRestoringFromCancelledTransition;
-(void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)changeAppearance;
-(void)_setupAccessibilityLimitsForView:(id)arg1 ;
-(id)emptyLayout;
-(BOOL)topItemHasVariableHeight;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(void)prepare;
-(void)setShouldFadeStaticNavBarButton:(BOOL)arg1 ;
-(void)_shim_setDisableBlurTinting:(BOOL)arg1 ;
-(void)navigationBarInvalidatedResolvedLayoutMargins;
-(void)teardown;
-(void)navigationBarContentViewDidChangeDesiredHeight:(id)arg1 ;
-(SCD_Struct_UI30)layoutHeightsFittingWidth:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateModernLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)animateForSearchPresentation:(BOOL)arg1 ;
-(void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1 ;
-(BOOL)_shim_disableBlurTinting;
-(id)_shim_compatibilityBackgroundView;
-(void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)arg1 ;
-(void)navigationItemUpdatedLargeTitleContent:(id)arg1 ;
-(void)setNeedsStaticNavBarButtonUpdate;
-(BOOL)wantsLargeTitleDisplayed;
-(void)_presentOrDismissSearch:(int)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)staticNavBarButtonLingers;
-(BOOL)_stackWantsBottomPaletteDisplayedForItem:(id)arg1 ;
-(void)setStaticNavBarButtonLingers:(BOOL)arg1 ;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(void)_ensureLayoutsConfiguredForEntry:(id)arg1 ;
-(id)appearanceObserver;
-(BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1 ;
-(void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2 ;
-(BOOL)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)prepareForPush;
-(double)_effectiveBackIndicatorLeftMargin;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)setStaticNavBarButtonItem:(id)arg1 ;
-(long long)statusBarStyle;
-(NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
-(long long)appearanceAPIVersion;
-(void)_updatePromptViewAndActuallyHide:(BOOL)arg1 ;
-(void)traitCollectionDidChangeOnSubtree:(id)arg1 ;
-(id)staticNavBarButtonItem;
-(void)setAppearanceAPIVersion:(long long)arg1 ;
-(void)changeLayout;
-(BOOL)supportsRefreshControlHosting;
-(void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2 ;
-(BOOL)navigationItemIsTopItem:(id)arg1 ;
-(void)setForceScrollEdgeAppearance:(BOOL)arg1 ;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)navigationItemUpdatedBackgroundAppearance:(id)arg1 ;
-(id)restingHeights;
-(void)navigationItemUpdatedContentLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)barDidMoveToWindow;
-(void)_updateAugmentedTitleDataSources;
-(BOOL)forceScrollEdgeAppearance;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
-(double)backgroundAlpha;
-(void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 ;
-(void)_updateCanvasView;
-(void)_setupTransitionContextForTransition:(int)arg1 ;
-(BOOL)useManualScrollEdgeAppearanceForItem:(id)arg1 ;
-(void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
-(void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(BOOL)arg3 ;
-(double)_contentBackgroundExtension;
-(void)_configureMarginsOnContentViewsAndPalette:(id)arg1 withContentMargin:(double)arg2 ;
-(void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
-(id)_backgroundLayoutOfClass:(Class)arg1 fromLayout:(id)arg2 ;
-(BOOL)_stackWantsLargeTitleDisplayedForItem:(id)arg1 hideLargeTitleForActiveSearch:(BOOL)arg2 ;
-(BOOL)_stackWantsExtendedContentViewForItem:(id)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)navigationBarContentViewDidTriggerBackAction:(id)arg1 fromBackButtonItem:(id)arg2 ;
-(void)_upgradeAppearanceAPIForItemIfNecessary:(id)arg1 ;
-(void)_updateContentPriorities;
-(void)_layoutInBounds:(CGRect)arg1 wantsExtendedContentView:(BOOL)arg2 wantsLargeTitle:(BOOL)arg3 ;
-(void)_endTransitionCompleted:(BOOL)arg1 ;
-(BOOL)_isInnerNavigationBarOfNestedNavigationController;
-(void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)arg1 ;
-(BOOL)_stackWantsSearchDisplayedBelowContentViewForItem:(id)arg1 ;
@end
