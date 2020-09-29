/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXWidgetCompositionDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXUIViewControllerZoomTransitionEndPoint.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXWidgetUnlockDelegate.h>
#import <libobjc.A.dylib/PXWidgetEditingDelegate.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXPurgeableController.h>

@protocol PXPhotosDetailsUIViewControllerDelegate, PXViewControllerEventTracker, PXUIWidget, PXAssetCollectionActionPerformerDelegate;
@class PXAssetSelectionUserActivityController, PXPhotosDetailsContext, PXPhotosDetailsViewModel, PXUIScrollViewController, NSArray, NSMapTable, PXPhotosDetailsHeaderTileWidget, PXPhotosDetailsAssetVariationsWidget, PXTilingController, PXWidgetComposition, PXPhotosDetailsSpecManager, NSMutableArray, PXWidgetSpec, PXSwipeSelectionManager, UIView, UIContextMenuInteraction, UIViewController, UIPointerInteraction, NSUserActivity, PXMiroMoviePresenter, PXBarsController, PXScrollViewController, UIScrollView, NSString;

@interface PXPhotosDetailsUIViewController : UIViewController <PXWidgetCompositionDelegate, PXChangeObserver, PXUIViewControllerZoomTransitionEndPoint, PXActionPerformerDelegate, PXWidgetUnlockDelegate, PXWidgetEditingDelegate, PXForcedDismissableViewController, UIContextMenuInteractionDelegate, UIPointerInteractionDelegate, PXScrollViewControllerObserver, PXPurgeableController> {

	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL __hasAppeared;
	BOOL _didAppearOnce;
	BOOL __shouldFocusHeader;
	BOOL __previewCommitting;
	BOOL _empty;
	PXAssetSelectionUserActivityController* _userActivityController;
	PXPhotosDetailsContext* _context;
	unsigned long long _options;
	id<PXPhotosDetailsUIViewControllerDelegate> _delegate;
	id<PXViewControllerEventTracker> _eventTracker;
	PXPhotosDetailsViewModel* __viewModel;
	PXUIScrollViewController* __scrollViewController;
	NSArray* __widgets;
	NSMapTable* __widgetOptions;
	PXPhotosDetailsHeaderTileWidget* __headerWidget;
	PXPhotosDetailsAssetVariationsWidget* __variationsWidget;
	PXTilingController* __headerAssetWidgetTilingController;
	PXWidgetComposition* __composition;
	PXPhotosDetailsSpecManager* __specManager;
	NSMutableArray* __widgetDisablingDimmingViews;
	PXWidgetSpec* __widgetSpec;
	PXSwipeSelectionManager* __swipeSelectionManager;
	Class __barsControllerClass;
	/*^block*/id __unlockStatus;
	/*^block*/id __unlockHandler;
	id<PXUIWidget> __previewWidget;
	UIView* __headerTileView;
	/*^block*/id __ppt_allWidgetLoadingCompleteHandler;
	/*^block*/id __ppt_variationsWidgetLoadingCompleteHandler;
	UIContextMenuInteraction* __contextMenuInteraction;
	UIViewController* __previewViewController;
	UIPointerInteraction* __pointerInteraction;
	NSUserActivity* _siriActionActivity;
	PXMiroMoviePresenter* _miroMoviePresenter;
	PXBarsController* _barsController;
	id<PXAssetCollectionActionPerformerDelegate> _actionPerformerDelegate;
	unsigned long long _occludedContentEdges;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) id<PXViewControllerEventTracker> eventTracker;                                                                  //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsViewModel * _viewModel;                                                                          //@synthesize _viewModel=__viewModel - In the implementation block
@property (nonatomic,readonly) PXUIScrollViewController * _scrollViewController;                                                               //@synthesize _scrollViewController=__scrollViewController - In the implementation block
@property (nonatomic,readonly) NSArray * _widgets;                                                                                             //@synthesize _widgets=__widgets - In the implementation block
@property (nonatomic,readonly) NSMapTable * _widgetOptions;                                                                                    //@synthesize _widgetOptions=__widgetOptions - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsHeaderTileWidget * _headerWidget;                                                                //@synthesize _headerWidget=__headerWidget - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsAssetVariationsWidget * _variationsWidget;                                                       //@synthesize _variationsWidget=__variationsWidget - In the implementation block
@property (nonatomic,readonly) PXTilingController * _headerAssetWidgetTilingController;                                                        //@synthesize _headerAssetWidgetTilingController=__headerAssetWidgetTilingController - In the implementation block
@property (nonatomic,readonly) PXWidgetComposition * _composition;                                                                             //@synthesize _composition=__composition - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsSpecManager * _specManager;                                                                      //@synthesize _specManager=__specManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _widgetDisablingDimmingViews;                                                                  //@synthesize _widgetDisablingDimmingViews=__widgetDisablingDimmingViews - In the implementation block
@property (setter=_setWidgetSpec:,nonatomic,retain) PXWidgetSpec * _widgetSpec;                                                                //@synthesize _widgetSpec=__widgetSpec - In the implementation block
@property (assign,setter=_setHasAppeared:,nonatomic) BOOL _hasAppeared;                                                                        //@synthesize _hasAppeared=__hasAppeared - In the implementation block
@property (setter=_setSwipeSelectionManager:,nonatomic,retain) PXSwipeSelectionManager * _swipeSelectionManager;                               //@synthesize _swipeSelectionManager=__swipeSelectionManager - In the implementation block
@property (nonatomic,readonly) Class _barsControllerClass;                                                                                     //@synthesize _barsControllerClass=__barsControllerClass - In the implementation block
@property (nonatomic,copy,readonly) id _unlockStatus;                                                                                          //@synthesize _unlockStatus=__unlockStatus - In the implementation block
@property (nonatomic,copy,readonly) id _unlockHandler;                                                                                         //@synthesize _unlockHandler=__unlockHandler - In the implementation block
@property (nonatomic,readonly) id<PXUIWidget> _previewWidget;                                                                                  //@synthesize _previewWidget=__previewWidget - In the implementation block
@property (assign,nonatomic) BOOL didAppearOnce;                                                                                               //@synthesize didAppearOnce=_didAppearOnce - In the implementation block
@property (assign,setter=_setShouldFocusHeader:,nonatomic) BOOL _shouldFocusHeader;                                                            //@synthesize _shouldFocusHeader=__shouldFocusHeader - In the implementation block
@property (setter=_setHeaderTileView:,nonatomic,retain) UIView * _headerTileView;                                                              //@synthesize _headerTileView=__headerTileView - In the implementation block
@property (setter=_ppt_setAllWidgetLoadingCompleteHandler:,nonatomic,copy) id _ppt_allWidgetLoadingCompleteHandler;                            //@synthesize _ppt_allWidgetLoadingCompleteHandler=__ppt_allWidgetLoadingCompleteHandler - In the implementation block
@property (setter=_ppt_setVariationsWidgetLoadingCompleteHandler:,nonatomic,copy) id _ppt_variationsWidgetLoadingCompleteHandler;              //@synthesize _ppt_variationsWidgetLoadingCompleteHandler=__ppt_variationsWidgetLoadingCompleteHandler - In the implementation block
@property (setter=_setContextMenuInteraction:,nonatomic,retain) UIContextMenuInteraction * _contextMenuInteraction;                            //@synthesize _contextMenuInteraction=__contextMenuInteraction - In the implementation block
@property (assign,setter=_setPreviewCommitting:,nonatomic) BOOL _previewCommitting;                                                            //@synthesize _previewCommitting=__previewCommitting - In the implementation block
@property (setter=_setPreviewViewController:,nonatomic,retain) UIViewController * _previewViewController;                                      //@synthesize _previewViewController=__previewViewController - In the implementation block
@property (setter=_setPointerInteraction:,nonatomic,retain) UIPointerInteraction * _pointerInteraction;                                        //@synthesize _pointerInteraction=__pointerInteraction - In the implementation block
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                                                              //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (nonatomic,readonly) PXAssetSelectionUserActivityController * userActivityController;                                                //@synthesize userActivityController=_userActivityController - In the implementation block
@property (nonatomic,retain) PXMiroMoviePresenter * miroMoviePresenter;                                                                        //@synthesize miroMoviePresenter=_miroMoviePresenter - In the implementation block
@property (nonatomic,readonly) PXBarsController * barsController;                                                                              //@synthesize barsController=_barsController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                                                                   //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * scrollViewController; 
@property (assign,nonatomic,__weak) id<PXAssetCollectionActionPerformerDelegate> actionPerformerDelegate;                                      //@synthesize actionPerformerDelegate=_actionPerformerDelegate - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                                                                        //@synthesize empty=_empty - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> presentedKeyAsset; 
@property (nonatomic,readonly) double captionWidgetPreferredHeight; 
@property (nonatomic,readonly) double captionWidgetCurrentContentHeight; 
@property (assign,nonatomic) unsigned long long occludedContentEdges;                                                                          //@synthesize occludedContentEdges=_occludedContentEdges - In the implementation block
@property (nonatomic,readonly) BOOL shouldUpdateStatusBarTitle; 
@property (nonatomic,readonly) UIScrollView * ppt_scrollView; 
@property (nonatomic,readonly) PXPhotosDetailsContext * context;                                                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                                                                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosDetailsUIViewControllerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
+(void)preloadResources;
-(id)preferredFocusEnvironments;
-(void)setEmpty:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(PXUIScrollViewController *)_scrollViewController;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(id<PXViewControllerEventTracker>)eventTracker;
-(NSUserActivity *)siriActionActivity;
-(PXWidgetComposition *)_composition;
-(BOOL)px_canPerformPinchTransitionWithMasterViewController:(id)arg1 ;
-(PXScrollViewController *)scrollViewController;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(void)_updateTitleAndSubtitle;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)initWithContext:(id)arg1 configuration:(id)arg2 ;
-(unsigned long long)occludedContentEdges;
-(void)editingDidChange:(BOOL)arg1 ;
-(void)editorHeightDidChange;
-(void)requestExitEditModeWithChangeSavingMode:(long long)arg1 ;
-(void)informFirstWidgetAvailableVisibleRectInEditMode:(CGRect)arg1 ;
-(double)captionWidgetPreferredHeight;
-(double)captionWidgetCurrentContentHeight;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController *)_previewViewController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(PXBarsController *)barsController;
-(NSArray *)_widgets;
-(PXAssetSelectionUserActivityController *)userActivityController;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(unsigned long long)options;
-(CGSize)preferredContentSize;
-(void)dealloc;
-(id<PXDisplayAsset>)presentedKeyAsset;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(id)contentScrollView;
-(id<PXAssetCollectionActionPerformerDelegate>)actionPerformerDelegate;
-(void)setActionPerformerDelegate:(id<PXAssetCollectionActionPerformerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_setSwipeSelectionManager:(id)arg1 ;
-(BOOL)_previewCommitting;
-(void)_setContextMenuInteraction:(id)arg1 ;
-(void)_setPreviewViewController:(id)arg1 ;
-(void)_setPreviewCommitting:(BOOL)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(PXPhotosDetailsSpecManager *)_specManager;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithContext:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_viewWillLayoutBeforeAppearing;
-(void)setDelegate:(id<PXPhotosDetailsUIViewControllerDelegate>)arg1 ;
-(void)scrollViewControllerWillLayoutSubviews:(id)arg1 ;
-(void)_updateScrollViewControllerContentInset;
-(Class)_barsControllerClass;
-(id)initWithCoder:(id)arg1 ;
-(void)widget:(id)arg1 didChangeEditingMode:(BOOL)arg2 ;
-(void)widgetEditorHeightDidChange:(id)arg1 ;
-(void)_loadWidgets;
-(PXPhotosDetailsContext *)context;
-(BOOL)widgetDeviceIsUnlocked:(id)arg1 ;
-(void)widget:(id)arg1 performAfterUnlockingDeviceIfNecessary:(/*^block*/id)arg2 failurehandler:(/*^block*/id)arg3 ;
-(BOOL)widgetComposition:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2 ;
-(BOOL)widgetCompositionHasContentAbove:(id)arg1 ;
-(void)_updateStatusBarTitle;
-(void)_setWidgetSpec:(id)arg1 ;
-(BOOL)widgetComposition:(id)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id)arg2 ;
-(long long)widgetComposition:(id)arg1 loadingPriorityForWidget:(id)arg2 ;
-(BOOL)widgetComposition:(id)arg1 widget:(id)arg2 transitionToViewController:(id)arg3 withTransitionType:(long long)arg4 ;
-(void)_updateTopTrailingBarButtons;
-(void)_loadComposition;
-(void)widgetComposition:(id)arg1 widgetHasLoadedContentDataDidChange:(id)arg2 ;
-(void)widgetComposition:(id)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id)arg2 ;
-(id)widgetComposition:(id)arg1 viewControllerHostingWidget:(id)arg2 ;
-(unsigned long long)_userEventSourceForDetailView:(id)arg1 ;
-(void)_updateBarSpec;
-(BOOL)_dismissSelfIfSafeAnimated:(BOOL)arg1 ;
-(BOOL)shouldUpdateStatusBarTitle;
-(void)_handleWidgetsLoadingDelay;
-(void)_ensureScrollViewController;
-(void)_ensureComposition;
-(BOOL)_shouldShowMovieHeader;
-(void)_updateAllWidgetsSpec;
-(void)_updateAllWidgetsSelectionState;
-(void)_updateAllWidgetsFaceModeState;
-(unsigned long long)_optionsForWidget:(id)arg1 ;
-(id)_photosDetailsContextForTransition:(id)arg1 ;
-(id)_photosDetailsContextForTransitionWithViewController:(id)arg1 ;
-(id)standaloneMapViewController;
-(void)_updateWidgetDisablingWithAnimationOptions:(id)arg1 ;
-(void)_handleDeviceDidUnlock;
-(void)_invalidateCompositionSpec;
-(void)_updateCompositionSpec;
-(void)_invalidateWidgetSpec;
-(void)_updateWidgetSpec;
-(void)_invalidateBarSpec;
-(BOOL)px_canPerformZoomTransitionWithMasterViewController:(id)arg1 ;
-(id)_regionOfInterestForContext:(id)arg1 ;
-(BOOL)px_canPerformSwipeDownTransitionWithMasterViewController:(id)arg1 ;
-(id)_widgetAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_previewViewControllerForLocation:(CGPoint)arg1 ;
-(void)_performAddToMemoriesAnimation;
-(void)ppt_toggleDiscloseWidgets;
-(PXPhotosDetailsHeaderTileWidget *)_headerWidget;
-(id)_unlockStatus;
-(void)ppt_performBlockAfterAllWidgetLoadingCompletes:(/*^block*/id)arg1 ;
-(void)ppt_performBlockAfterVariationsWidgetLoadingCompletes:(/*^block*/id)arg1 ;
-(void)_ppt_setAllWidgetLoadingCompleteHandler:(/*^block*/id)arg1 ;
-(void)_ppt_setVariationsWidgetLoadingCompleteHandler:(/*^block*/id)arg1 ;
-(NSMapTable *)_widgetOptions;
-(void)_ppt_informWidgetsLoadedHandlerIfNeeded;
-(PXPhotosDetailsAssetVariationsWidget *)_variationsWidget;
-(PXTilingController *)_headerAssetWidgetTilingController;
-(NSMutableArray *)_widgetDisablingDimmingViews;
-(id)_unlockHandler;
-(id<PXUIWidget>)_previewWidget;
-(BOOL)didAppearOnce;
-(void)setDidAppearOnce:(BOOL)arg1 ;
-(BOOL)_shouldFocusHeader;
-(UIScrollView *)ppt_scrollView;
-(void)_setShouldFocusHeader:(BOOL)arg1 ;
-(UIView *)_headerTileView;
-(void)_setHeaderTileView:(id)arg1 ;
-(id)_ppt_allWidgetLoadingCompleteHandler;
-(id)_ppt_variationsWidgetLoadingCompleteHandler;
-(void)_setPointerInteraction:(id)arg1 ;
-(void)setOccludedContentEdges:(unsigned long long)arg1 ;
-(BOOL)_hasAppeared;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg1 ;
-(id)contentViewForZoomTransition:(id)arg1 ;
-(id)regionOfInterestForTransition:(id)arg1 ;
-(void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2 ;
-(void)scrollRegionOfInterestToVisible:(id)arg1 forTransition:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(UIEdgeInsets)contentEdgeInsets;
-(PXMiroMoviePresenter *)miroMoviePresenter;
-(id)removeBackgroundColorForTransition:(id)arg1 ;
-(void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2 ;
-(void)prepareForInteractiveTransition:(id)arg1 ;
-(void)_setHasAppeared:(BOOL)arg1 ;
-(id)px_endPointForTransition:(id)arg1 ;
-(id<PXPhotosDetailsUIViewControllerDelegate>)delegate;
-(void)purgeIfPossible;
-(PXSwipeSelectionManager *)_swipeSelectionManager;
-(PXWidgetSpec *)_widgetSpec;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isEmpty;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(void)playMiroMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)ppt_navigateToMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMiroMoviePresenter:(PXMiroMoviePresenter *)arg1 ;
-(PXPhotosDetailsViewModel *)_viewModel;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(UIPointerInteraction *)_pointerInteraction;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(UIContextMenuInteraction *)_contextMenuInteraction;
@end
