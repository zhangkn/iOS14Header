/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PXUIViewControllerZoomTransitionEndPoint.h>
#import <libobjc.A.dylib/PXTilingControllerZoomAnimationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXMemoriesUITileSourceDelegate.h>
#import <libobjc.A.dylib/PXUserInterfaceFeatureViewController.h>

@protocol PXViewControllerEventTracker;
@class PXMemoriesDataSourceManager, PXMemoriesFeedViewControllerHelper, PXMemoriesSpecManager, PXMemoriesUITileSource, PXSectionedLayoutEngine, PXSectionedObjectReference, PXPhotosDetailsContext, PXBasicUIViewTileAnimator, PXMemoriesSpec, PXUITapGestureRecognizer, PXTouchingUIGestureRecognizer, PXTilingController, PXUIScrollViewController, NSString;

@interface PXMemoriesUIViewController : UIViewController <UIContextMenuInteractionDelegate, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXSectionedDataSourceManagerObserver, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController> {

	SCD_Struct_PX59 _updateFlags;
	BOOL __performNextTransitionWithoutAnimation;
	BOOL _embedded;
	PXMemoriesDataSourceManager* _dataSourceManager;
	PXMemoriesFeedViewControllerHelper* __helper;
	PXMemoriesSpecManager* __specManager;
	PXMemoriesUITileSource* __tileSource;
	PXSectionedLayoutEngine* __layoutEngine;
	id<PXViewControllerEventTracker> _eventTracker;
	PXSectionedObjectReference* _anchorMemoryReference;
	PXSectionedObjectReference* __highlightedMemoryReference;
	PXSectionedObjectReference* __actionPresentationMemoryReference;
	PXSectionedObjectReference* __activatedMemoryReference;
	PXPhotosDetailsContext* __selectedItemDetailsContext;
	PXBasicUIViewTileAnimator* __tileAnimator;
	PXMemoriesSpec* __spec;
	unsigned long long __memoriesStyle;
	PXUITapGestureRecognizer* __tapRecognizer;
	PXTouchingUIGestureRecognizer* __touchRecognizer;
	unsigned long long _pageIndex;
	PXTilingController* _tilingController;
	PXUIScrollViewController* _scrollViewController;
	CGPoint _anchorMemoryOrigin;

}

@property (nonatomic,readonly) PXMemoriesFeedViewControllerHelper * _helper;                                                                             //@synthesize _helper=__helper - In the implementation block
@property (nonatomic,readonly) PXMemoriesSpecManager * _specManager;                                                                                     //@synthesize _specManager=__specManager - In the implementation block
@property (nonatomic,readonly) PXMemoriesUITileSource * _tileSource;                                                                                     //@synthesize _tileSource=__tileSource - In the implementation block
@property (nonatomic,readonly) PXSectionedLayoutEngine * _layoutEngine;                                                                                  //@synthesize _layoutEngine=__layoutEngine - In the implementation block
@property (nonatomic,readonly) id<PXViewControllerEventTracker> eventTracker;                                                                            //@synthesize eventTracker=_eventTracker - In the implementation block
@property (setter=_setAnchorMemoryReference:,nonatomic,retain) PXSectionedObjectReference * anchorMemoryReference;                                       //@synthesize anchorMemoryReference=_anchorMemoryReference - In the implementation block
@property (assign,setter=_setAnchorMemoryOrigin:,nonatomic) CGPoint anchorMemoryOrigin;                                                                  //@synthesize anchorMemoryOrigin=_anchorMemoryOrigin - In the implementation block
@property (setter=_setHighlightedMemoryReference:,nonatomic,retain) PXSectionedObjectReference * _highlightedMemoryReference;                            //@synthesize _highlightedMemoryReference=__highlightedMemoryReference - In the implementation block
@property (setter=_setActionPresentationMemoryReference:,nonatomic,retain) PXSectionedObjectReference * _actionPresentationMemoryReference;              //@synthesize _actionPresentationMemoryReference=__actionPresentationMemoryReference - In the implementation block
@property (setter=_setActivatedMemoryReference:,nonatomic,retain) PXSectionedObjectReference * _activatedMemoryReference;                                //@synthesize _activatedMemoryReference=__activatedMemoryReference - In the implementation block
@property (setter=_setSelectedItemDetailsContext:,nonatomic,retain) PXPhotosDetailsContext * _selectedItemDetailsContext;                                //@synthesize _selectedItemDetailsContext=__selectedItemDetailsContext - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                                                                                //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (setter=_setSpec:,nonatomic,retain) PXMemoriesSpec * _spec;                                                                                    //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) unsigned long long _memoriesStyle;                                                                                        //@synthesize _memoriesStyle=__memoriesStyle - In the implementation block
@property (nonatomic,readonly) PXUITapGestureRecognizer * _tapRecognizer;                                                                                //@synthesize _tapRecognizer=__tapRecognizer - In the implementation block
@property (nonatomic,readonly) PXTouchingUIGestureRecognizer * _touchRecognizer;                                                                         //@synthesize _touchRecognizer=__touchRecognizer - In the implementation block
@property (assign,setter=_setPerformNextTransitionWithoutAnimation:,nonatomic) BOOL _performNextTransitionWithoutAnimation;                              //@synthesize _performNextTransitionWithoutAnimation=__performNextTransitionWithoutAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                                                                                               //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,readonly) PXTilingController * tilingController;                                                                                    //@synthesize tilingController=_tilingController - In the implementation block
@property (nonatomic,readonly) PXUIScrollViewController * scrollViewController;                                                                          //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) BOOL embedded;                                                                                            //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,readonly) PXMemoriesDataSourceManager * dataSourceManager;                                                                          //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@property (nonatomic,readonly) long long userInterfaceFeature; 
-(id)preferredFocusEnvironments;
-(PXMemoriesSpec *)_spec;
-(PXMemoriesDataSourceManager *)dataSourceManager;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(void)_configureLayout:(id)arg1 ;
-(void)_updateIfNeeded;
-(id<PXViewControllerEventTracker>)eventTracker;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)tilingController:(id)arg1 prepareForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(CGPoint)arg3 ;
-(PXUIScrollViewController *)scrollViewController;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_setNeedsUpdate;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)setEmbedded:(BOOL)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isEmbedded;
-(long long)userInterfaceFeature;
-(void)_updateLayoutIfNeeded;
-(void)viewDidLoad;
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)_handleScrollViewTap:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(PXMemoriesFeedViewControllerHelper *)_helper;
-(PXMemoriesSpecManager *)_specManager;
-(PXUITapGestureRecognizer *)_tapRecognizer;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setSpec:(id)arg1 ;
-(id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)initWithDataSourceManager:(id)arg1 style:(unsigned long long)arg2 ;
-(void)invalidateLayoutEngine;
-(void)_updateLayoutEngineIfNeeded;
-(id)_createNewLayout;
-(void)_saveAnchor;
-(PXSimpleIndexPath)_indexPathForMemoryAtPoint:(CGPoint)arg1 ;
-(PXSimpleIndexPath)_indexPathForMemoryInScrollViewAtPoint:(CGPoint)arg1 ;
-(void)_presentMemoryAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_handleTouch:(id)arg1 ;
-(void)_reconfigureTargetLayout;
-(id)_memoryTileViewForLocation:(CGPoint)arg1 ;
-(id)_previewActionMenusForIndexPath:(PXSimpleIndexPath)arg1 ;
-(CGPoint)anchorMemoryOrigin;
-(void)_setActionPresentationMemoryReference:(id)arg1 ;
-(void)_setHighlightedMemoryReference:(id)arg1 ;
-(id)_photosDetailsContextForIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1 ;
-(PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1 ;
-(void)datasourceManagerDidChange;
-(void)_updateScrollViewControllerContentInset;
-(id)_sourceViewForMemoryActionsController;
-(PXSectionedObjectReference *)anchorMemoryReference;
-(void)_setAnchorMemoryReference:(id)arg1 ;
-(void)_setAnchorMemoryOrigin:(CGPoint)arg1 ;
-(PXSectionedObjectReference *)_highlightedMemoryReference;
-(PXSectionedObjectReference *)_actionPresentationMemoryReference;
-(PXSectionedObjectReference *)_activatedMemoryReference;
-(void)_setActivatedMemoryReference:(id)arg1 ;
-(PXPhotosDetailsContext *)_selectedItemDetailsContext;
-(void)_setSelectedItemDetailsContext:(id)arg1 ;
-(unsigned long long)_memoriesStyle;
-(PXTouchingUIGestureRecognizer *)_touchRecognizer;
-(BOOL)_performNextTransitionWithoutAnimation;
-(PXTilingController *)tilingController;
-(void)_setPerformNextTransitionWithoutAnimation:(BOOL)arg1 ;
-(void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg1 ;
-(id)regionOfInterestForTransition:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)prepareForInteractiveTransition:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg1 ;
-(PXSectionedLayoutEngine *)_layoutEngine;
-(void)_invalidateLayout;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndex;
-(id)createNewLayoutGenerator;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(PXMemoriesUITileSource *)_tileSource;
-(BOOL)_needsUpdate;
@end
