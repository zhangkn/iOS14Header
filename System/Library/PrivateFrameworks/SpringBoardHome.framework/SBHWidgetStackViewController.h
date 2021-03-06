/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BSUIScrollViewDelegate.h>
#import <libobjc.A.dylib/SBLeafIconObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBIconViewCustomImageViewControllerObserving.h>
#import <libobjc.A.dylib/SBIconViewCustomImageViewControlling.h>

@protocol SBHWidgetStackViewControllerDataSource, SBHWidgetStackViewControllerDelegate, SBLeafIconDataSource, BSInvalidatable;
@class SBIcon, _UILegibilitySettings, NSArray, UIView, NSHashTable, SBWidgetIcon, BSUIScrollView, UIPageControl, NSTimer, NSMutableDictionary, SBHWidgetSettings, SBFFluidBehaviorSettings, NSString;

@interface SBHWidgetStackViewController : UIViewController <BSUIScrollViewDelegate, SBLeafIconObserver, PTSettingsKeyObserver, SBIconViewCustomImageViewControllerObserving, SBIconViewCustomImageViewControlling> {

	NSHashTable* _observers;
	BOOL _editing;
	BOOL _showingContextMenu;
	BOOL _overlapping;
	BOOL _userInteractionEnabled;
	BOOL _backgroundBlurEnabled;
	BOOL _visiblySettled;
	BOOL _automaticallyUpdatesVisiblySettled;
	BOOL _privateModeEnabled;
	BOOL _showsSquareCorners;
	BOOL _alwaysShowsAsStack;
	BOOL _highlightsAtAnySize;
	BOOL _forcesEdgeAntialiasing;
	BOOL _showStackBorderWhenShowingPageControl;
	BOOL _flashPageControlOnNextAppearance;
	/*^block*/id _backgroundViewProvider;
	double _brightness;
	unsigned long long _presentationMode;
	unsigned long long _imageViewAlignment;
	unsigned long long _pauseReasons;
	_UILegibilitySettings* _legibilitySettings;
	id<SBHWidgetStackViewControllerDataSource> _dataSource;
	id<SBHWidgetStackViewControllerDelegate> _delegate;
	SBWidgetIcon* _icon;
	id<SBLeafIconDataSource> _activeWidget;
	BSUIScrollView* _scrollView;
	UIView* _containerView;
	UIView* _backgroundView;
	UIPageControl* _pageControl;
	NSTimer* _pageControlHidingTimer;
	UIView* _dimmingView;
	NSMutableDictionary* _widgetContainerViewControllers;
	SBHWidgetSettings* _widgetSettings;
	SBFFluidBehaviorSettings* _animationSettings;
	unsigned long long _widgetScaleAnimationCount;
	unsigned long long _backgroundAnimationCount;
	NSHashTable* _imageUpdateDisableAssertions;
	id<BSInvalidatable> _scrollingTouchCancellationAssertion;
	id<BSInvalidatable> _imageUpdatesDisabledForContextMenuAssertion;
	SBIconImageInfo _iconImageInfo;

}

@property (nonatomic,retain) SBWidgetIcon * icon;                                                          //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) id<SBLeafIconDataSource> activeWidget;                                        //@synthesize activeWidget=_activeWidget - In the implementation block
@property (nonatomic,retain) BSUIScrollView * scrollView;                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                                  //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) NSTimer * pageControlHidingTimer;                                             //@synthesize pageControlHidingTimer=_pageControlHidingTimer - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) BOOL showStackBorderWhenShowingPageControl;                                   //@synthesize showStackBorderWhenShowingPageControl=_showStackBorderWhenShowingPageControl - In the implementation block
@property (assign,nonatomic) BOOL flashPageControlOnNextAppearance;                                        //@synthesize flashPageControlOnNextAppearance=_flashPageControlOnNextAppearance - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * widgetContainerViewControllers;                         //@synthesize widgetContainerViewControllers=_widgetContainerViewControllers - In the implementation block
@property (nonatomic,retain) SBHWidgetSettings * widgetSettings;                                           //@synthesize widgetSettings=_widgetSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * animationSettings;                                 //@synthesize animationSettings=_animationSettings - In the implementation block
@property (assign,nonatomic) unsigned long long widgetScaleAnimationCount;                                 //@synthesize widgetScaleAnimationCount=_widgetScaleAnimationCount - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundAnimationCount;                                  //@synthesize backgroundAnimationCount=_backgroundAnimationCount - In the implementation block
@property (nonatomic,retain) NSHashTable * imageUpdateDisableAssertions;                                   //@synthesize imageUpdateDisableAssertions=_imageUpdateDisableAssertions - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> scrollingTouchCancellationAssertion;                      //@synthesize scrollingTouchCancellationAssertion=_scrollingTouchCancellationAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> imageUpdatesDisabledForContextMenuAssertion;              //@synthesize imageUpdatesDisabledForContextMenuAssertion=_imageUpdatesDisabledForContextMenuAssertion - In the implementation block
@property (nonatomic,readonly) SBWidgetIcon * widgetIcon; 
@property (assign,nonatomic) BOOL alwaysShowsAsStack;                                                      //@synthesize alwaysShowsAsStack=_alwaysShowsAsStack - In the implementation block
@property (assign,nonatomic) BOOL highlightsAtAnySize;                                                     //@synthesize highlightsAtAnySize=_highlightsAtAnySize - In the implementation block
@property (assign,nonatomic) BOOL forcesEdgeAntialiasing;                                                  //@synthesize forcesEdgeAntialiasing=_forcesEdgeAntialiasing - In the implementation block
@property (nonatomic,readonly) NSArray * widgetViewControllers; 
@property (assign,nonatomic,__weak) id<SBHWidgetStackViewControllerDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SBHWidgetStackViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SBIconImageInfo iconImageInfo;                                                //@synthesize iconImageInfo=_iconImageInfo - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) id<SBLeafIconDataSource> visiblyActiveDataSource; 
@property (assign,getter=isShowingContextMenu,nonatomic) BOOL showingContextMenu;                          //@synthesize showingContextMenu=_showingContextMenu - In the implementation block
@property (assign,getter=isOverlapping,nonatomic) BOOL overlapping;                                        //@synthesize overlapping=_overlapping - In the implementation block
@property (assign,getter=isDropping,nonatomic) BOOL dropping; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                  //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,getter=isBackgroundBlurEnabled,nonatomic) BOOL backgroundBlurEnabled;                    //@synthesize backgroundBlurEnabled=_backgroundBlurEnabled - In the implementation block
@property (nonatomic,readonly) BOOL wantsCaptureOnlyBackgroundView; 
@property (nonatomic,copy) id backgroundViewProvider;                                                      //@synthesize backgroundViewProvider=_backgroundViewProvider - In the implementation block
@property (assign,nonatomic) double brightness;                                                            //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) BOOL wantsLabelHidden; 
@property (assign,getter=isVisiblySettled,nonatomic) BOOL visiblySettled;                                  //@synthesize visiblySettled=_visiblySettled - In the implementation block
@property (assign,nonatomic) BOOL automaticallyUpdatesVisiblySettled;                                      //@synthesize automaticallyUpdatesVisiblySettled=_automaticallyUpdatesVisiblySettled - In the implementation block
@property (assign,getter=isPrivateModeEnabled,nonatomic) BOOL privateModeEnabled;                          //@synthesize privateModeEnabled=_privateModeEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;                                          //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic) unsigned long long imageViewAlignment;                                        //@synthesize imageViewAlignment=_imageViewAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long pauseReasons;                                              //@synthesize pauseReasons=_pauseReasons - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * applicationShortcutItems; 
@property (nonatomic,readonly) UIView * snapshotView; 
@property (nonatomic,readonly) CGRect visibleBounds; 
@property (nonatomic,readonly) double continuousCornerRadius; 
@property (assign,nonatomic) BOOL showsSquareCorners;                                                      //@synthesize showsSquareCorners=_showsSquareCorners - In the implementation block
-(UIView *)dimmingView;
-(CGRect)visibleBounds;
-(unsigned long long)presentationMode;
-(SBFFluidBehaviorSettings *)animationSettings;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(void)setAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)brightness;
-(void)setEditing:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_handleInstalledAppsChanged:(id)arg1 ;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(BOOL)isShowingContextMenu;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setDataSource:(id<SBHWidgetStackViewControllerDataSource>)arg1 ;
-(void)setWidgetSettings:(SBHWidgetSettings *)arg1 ;
-(void)setIconImageInfo:(SBIconImageInfo)arg1 ;
-(UIView *)containerView;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(BOOL)showsSquareCorners;
-(void)setShowsSquareCorners:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setOverlapping:(BOOL)arg1 ;
-(UIPageControl *)pageControl;
-(BOOL)isOverlapping;
-(SBIconImageInfo)iconImageInfo;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)customImageViewControllerWantsLabelHiddenDidChange:(id)arg1 ;
-(double)continuousCornerRadius;
-(BOOL)isPrivateModeEnabled;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isEditing;
-(id)sourceView;
-(NSArray *)applicationShortcutItems;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(CGSize)_scrollViewContentSize;
-(void)setDimmingView:(UIView *)arg1 ;
-(SBWidgetIcon *)icon;
-(void)setVisiblySettled:(BOOL)arg1 ;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setPauseReasons:(unsigned long long)arg1 ;
-(void)setBackgroundBlurEnabled:(BOOL)arg1 ;
-(id<SBLeafIconDataSource>)visiblyActiveDataSource;
-(void)setAutomaticallyUpdatesVisiblySettled:(BOOL)arg1 ;
-(BOOL)wantsCaptureOnlyBackgroundView;
-(id)backgroundViewProvider;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)willShowContextMenuAtLocation:(CGPoint)arg1 ;
-(void)setShowingContextMenu:(BOOL)arg1 ;
-(void)removeCustomImageViewControllerObserver:(id)arg1 ;
-(void)setBackgroundViewProvider:(id)arg1 ;
-(void)addCustomImageViewControllerObserver:(id)arg1 ;
-(unsigned long long)imageViewAlignment;
-(void)setImageViewAlignment:(unsigned long long)arg1 ;
-(UIView *)backgroundView;
-(id<SBHWidgetStackViewControllerDataSource>)dataSource;
-(void)leafIcon:(id)arg1 didChangeActiveDataSource:(id)arg2 ;
-(CGSize)_pageSize;
-(_UILegibilitySettings *)legibilitySettings;
-(void)leafIcon:(id)arg1 didRemoveIconDataSource:(id)arg2 ;
-(void)setDelegate:(id<SBHWidgetStackViewControllerDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)disableImageUpdatesForReason:(id)arg1 ;
-(void)leafIcon:(id)arg1 didAddIconDataSource:(id)arg2 ;
-(UIView *)snapshotView;
-(SBWidgetIcon *)widgetIcon;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(id<SBLeafIconDataSource>)activeWidget;
-(void)setBrightness:(double)arg1 ;
-(void)setScrollView:(BSUIScrollView *)arg1 ;
-(id<SBHWidgetStackViewControllerDelegate>)delegate;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SBHWidgetSettings *)widgetSettings;
-(unsigned long long)pauseReasons;
-(id)initWithIcon:(id)arg1 ;
-(void)_updateAccessibilityValue;
-(void)_layoutWithAnimationUpdateMode:(long long)arg1 ;
-(BOOL)automaticallyUpdatesVisiblySettled;
-(void)_flashPageControlAnimated:(BOOL)arg1 ;
-(void)_updateWidgetViewEdgeAntialiasing;
-(void)_updatePageControlWithAnimationUpdateMode:(long long)arg1 ;
-(void)_animateRemovalOfWidget:(id)arg1 ;
-(id)_disableImageUpdatesForReason:(id)arg1 animateChangesUponInvalidation:(BOOL)arg2 ;
-(BOOL)alwaysShowsAsStack;
-(id)_widgetContextMenuController;
-(void)_updateWidgetViewHitTesting;
-(BOOL)_shouldDrawSystemBackgroundMaterialForWidget:(id)arg1 ;
-(void)_createBackgroundViewIfNecessary;
-(BOOL)_widgetHitTestingDisabled;
-(BOOL)highlightsAtAnySize;
-(void)_updateVisiblySettledForWidgetViewControllers;
-(void)_updatePresentationModeForWidgetViewControllers;
-(void)_updatePrivateModeForWidgetViewControllers;
-(void)_updatePauseReasonForWidgetViewControllers;
-(void)didSelectApplicationShortcutItem:(id)arg1 ;
-(BOOL)_scrollToActiveWidgetAnimated:(BOOL)arg1 ;
-(NSHashTable *)imageUpdateDisableAssertions;
-(long long)_newActiveWidgetIndexForContentOffset:(CGPoint)arg1 ;
-(void)_setPageControlHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_restartPageControlTimer;
-(CGPoint)_restingContentOffset;
-(BOOL)_createViewControllerForWidgetIfNecessary:(id)arg1 usingSize:(CGSize)arg2 ;
-(void)_updateActiveWidgetIndexAndScrollViewContentOffset;
-(void)_updateWidgetViewsWithAnimationUpdateMode:(long long)arg1 ;
-(void)_updateWidgetViewClippingAndBackgroundView;
-(void)_updateBackgroundViewWithAnimationUpdateMode:(long long)arg1 ;
-(void)_updateScrollViewDelaysContentTouches;
-(BOOL)_showAdjacentWidgets;
-(BOOL)_insetWidgetsForTrackingAppearance;
-(void)_incrementWidgetScaleAnimationCount;
-(BOOL)_alwaysShowStackBorder;
-(BOOL)_alwaysShowStackPageControl;
-(void)_decrementWidgetScaleAnimationCount;
-(void)_incrementBackgroundAnimationCount;
-(void)_decrementBackgroundAnimationCount;
-(BOOL)_pageControlIsHorizontallyConstrained;
-(void)setShowStackBorderWhenShowingPageControl:(BOOL)arg1 ;
-(NSTimer *)pageControlHidingTimer;
-(void)setPageControlHidingTimer:(NSTimer *)arg1 ;
-(BOOL)isBackgroundBlurEnabled;
-(BOOL)isVisiblySettled;
-(void)setForcesEdgeAntialiasing:(BOOL)arg1 ;
-(NSArray *)widgetViewControllers;
-(BOOL)_isScrollViewTracking;
-(void)setAlwaysShowsAsStack:(BOOL)arg1 ;
-(void)setHighlightsAtAnySize:(BOOL)arg1 ;
-(void)setActiveWidget:(id<SBLeafIconDataSource>)arg1 ;
-(BOOL)forcesEdgeAntialiasing;
-(BOOL)showStackBorderWhenShowingPageControl;
-(BOOL)flashPageControlOnNextAppearance;
-(void)setFlashPageControlOnNextAppearance:(BOOL)arg1 ;
-(NSMutableDictionary *)widgetContainerViewControllers;
-(void)setWidgetContainerViewControllers:(NSMutableDictionary *)arg1 ;
-(unsigned long long)widgetScaleAnimationCount;
-(void)setWidgetScaleAnimationCount:(unsigned long long)arg1 ;
-(unsigned long long)backgroundAnimationCount;
-(void)setBackgroundAnimationCount:(unsigned long long)arg1 ;
-(void)setImageUpdateDisableAssertions:(NSHashTable *)arg1 ;
-(id<BSInvalidatable>)scrollingTouchCancellationAssertion;
-(void)setScrollingTouchCancellationAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)imageUpdatesDisabledForContextMenuAssertion;
-(void)setImageUpdatesDisabledForContextMenuAssertion:(id<BSInvalidatable>)arg1 ;
-(void)setIcon:(SBWidgetIcon *)arg1 ;
-(BSUIScrollView *)scrollView;
-(BOOL)_canShowWhileLocked;
@end

