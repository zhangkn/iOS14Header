/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGViewSource.h>
#import <libobjc.A.dylib/PXPhotosSectionHeaderLayoutViewProvider.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXPhotosGridFooterStatusControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotosGridFooterPresentationDelegate.h>
#import <libobjc.A.dylib/PXZoomablePhotosInteractionDelegate.h>
#import <libobjc.A.dylib/PXPhotosLayoutDelegate.h>
#import <libobjc.A.dylib/PXGAXResponder.h>
#import <libobjc.A.dylib/PXSectionedDirectionSelectionScrollableDelegate.h>

@protocol PXGAXResponder, PXPhotosViewEventTracker, PXPhotosContentControllerDelegate, PXPhotosViewDelegate;
@class PXPhotosGridFooterStatusController, PXPhotosGridFooterPresentation, PXGView, PXPhotosViewModel, PXMediaProvider, PXAssetsDataSourceCountsController, UIView, PXExtendedTraitCollection, PXUpdater, PXZoomablePhotosInteraction, PXPhotosLayout, NSString;

@interface PXPhotosContentController : NSObject <PXGViewSource, PXPhotosSectionHeaderLayoutViewProvider, PXScrollViewControllerObserver, PXPhotosGridFooterStatusControllerDelegate, PXPhotosGridFooterPresentationDelegate, PXZoomablePhotosInteractionDelegate, PXPhotosLayoutDelegate, PXGAXResponder, PXSectionedDirectionSelectionScrollableDelegate> {

	BOOL _needsCountsInitially;
	PXPhotosGridFooterStatusController* _footerStatusController;
	PXPhotosGridFooterPresentation* _footerPresentation;
	id<PXGAXResponder> _axNextResponder;
	PXGView* _gridView;
	PXPhotosViewModel* _viewModel;
	PXMediaProvider* _mediaProvider;
	id<PXPhotosViewEventTracker> _eventTracker;
	PXAssetsDataSourceCountsController* _countsController;
	id<PXPhotosContentControllerDelegate> _delegate;
	Class _customDecorationViewClass;
	UIView* _headerView;
	PXExtendedTraitCollection* _traitCollection;
	PXUpdater* _updater;
	id _dataSourceManagerPauseToken;
	unsigned long long _viewDelegateRespondsTo;
	id<PXPhotosViewDelegate> _viewDelegate;
	PXZoomablePhotosInteraction* _zoomablePhotosInteraction;

}

@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;                              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) PXUpdater * updater;                                                      //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) id dataSourceManagerPauseToken;                                             //@synthesize dataSourceManagerPauseToken=_dataSourceManagerPauseToken - In the implementation block
@property (nonatomic,readonly) unsigned long long viewDelegateRespondsTo;                                //@synthesize viewDelegateRespondsTo=_viewDelegateRespondsTo - In the implementation block
@property (nonatomic,readonly) BOOL needsCountsInitially;                                                //@synthesize needsCountsInitially=_needsCountsInitially - In the implementation block
@property (nonatomic,readonly) PXPhotosGridFooterStatusController * footerStatusController;              //@synthesize footerStatusController=_footerStatusController - In the implementation block
@property (nonatomic,readonly) PXPhotosGridFooterPresentation * footerPresentation;                      //@synthesize footerPresentation=_footerPresentation - In the implementation block
@property (nonatomic,__weak,readonly) id<PXPhotosViewDelegate> viewDelegate;                             //@synthesize viewDelegate=_viewDelegate - In the implementation block
@property (nonatomic,readonly) PXZoomablePhotosInteraction * zoomablePhotosInteraction;                  //@synthesize zoomablePhotosInteraction=_zoomablePhotosInteraction - In the implementation block
@property (nonatomic,readonly) PXGView * gridView;                                                       //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                          //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXPhotosViewEventTracker> eventTracker;                                //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,readonly) PXPhotosLayout * layout; 
@property (nonatomic,readonly) PXAssetsDataSourceCountsController * countsController;                    //@synthesize countsController=_countsController - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosContentControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) Class customDecorationViewClass;                                            //@synthesize customDecorationViewClass=_customDecorationViewClass - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                        //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder;                                  //@synthesize axNextResponder=_axNextResponder - In the implementation block
-(id<PXGAXResponder>)axNextResponder;
-(BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg1 ;
-(PXGView *)gridView;
-(id)indexPathsForItemsInRect:(CGRect)arg1 coordinateSpace:(id)arg2 ;
-(BOOL)canSelectObjectAtIndexPath:(PXSimpleIndexPath)arg1 inDataSource:(id)arg2 ;
-(PXSimpleIndexPath)selectionManager:(id)arg1 indexPathClosestToIndexPath:(PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3 ;
-(void)setAxNextResponder:(id<PXGAXResponder>)arg1 ;
-(void)contentViewDidScrollToInitialPosition;
-(id)zoomablePhotosInteraction:(id)arg1 assetReferenceAtLocation:(CGPoint)arg2 ;
-(void)zoomablePhotosInteractionWillBegin:(id)arg1 ;
-(id)indexPathsFromIndexPath:(PXSimpleIndexPath)arg1 toIndexPath:(PXSimpleIndexPath)arg2 inDataSource:(id)arg3 ;
-(void)scrollToRevealAssetReference:(id)arg1 padding:(UIEdgeInsets)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PXZoomablePhotosInteraction *)zoomablePhotosInteraction;
-(id<PXPhotosViewEventTracker>)eventTracker;
-(PXPhotosGridFooterPresentation *)footerPresentation;
-(void)setViewDelegate:(id<PXPhotosViewDelegate>)arg1 ;
-(void)suspendDataSourceChangesWithTimeout:(double)arg1 ;
-(void)_invalidateHeaderView;
-(id)axContainingViewForAXGroup:(id)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)setDataSourceManagerPauseToken:(id)arg1 ;
-(PXExtendedTraitCollection *)traitCollection;
-(void)_setNeedsUpdate;
-(PXMediaProvider *)mediaProvider;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)presentingViewControllerForFooterStatusController:(id)arg1 ;
-(void)selectionManager:(id)arg1 revealObjectAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(long long)selectionBasisForSelectionManager:(id)arg1 ;
-(void)_invalidateHasScrollableContent;
-(PXUpdater *)updater;
-(void)setCustomDecorationViewClass:(Class)arg1 ;
-(id<PXPhotosViewDelegate>)viewDelegate;
-(BOOL)viewDelegateRespondsTo:(unsigned long long)arg1 ;
-(void)contentViewDidAppear:(BOOL)arg1 ;
-(PXAssetsDataSourceCountsController *)countsController;
-(void)setHeaderView:(UIView *)arg1 ;
-(PXPhotosViewModel *)viewModel;
-(void)footerPresentation:(id)arg1 presentViewController:(id)arg2 ;
-(PXSimpleIndexPath)_selectableIndexPathClosestToIndexPath:(PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3 ;
-(void)updateIfNeeded;
-(void)_updateHeaderView;
-(BOOL)needsCountsInitially;
-(void)scrollToRevealAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)viewDelegateRespondsTo;
-(id)init;
-(PXPhotosLayout *)layout;
-(BOOL)zoomablePhotosInteractionShouldBegin:(id)arg1 ;
-(void)setDelegate:(id<PXPhotosContentControllerDelegate>)arg1 ;
-(void)scrollToInitialPositionAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)resumeDataSourceChangesIfNeeded;
-(id)regionOfInterestForAssetReference:(id)arg1 ;
-(id<PXPhotosContentControllerDelegate>)delegate;
-(void)stopForceIncludingAllAssetsInDataSource;
-(PXSimpleIndexPath)_indexPathClosestToIndexPath:(PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3 ;
-(UIView *)headerView;
-(id)assetHitTestResultAtPoint:(CGPoint)arg1 coordinateSpace:(id)arg2 ;
-(id)selectionManager:(id)arg1 indexPathsBetweenIndexPath:(PXSimpleIndexPath)arg2 andIndexPath:(PXSimpleIndexPath)arg3 inDirection:(unsigned long long)arg4 ;
-(void)dismissPresentedViewControllerForFooterPresentation:(id)arg1 ;
-(id)dataSourceManagerPauseToken;
-(PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2 ;
-(void)enumerateAssetHitTestResultsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)contentViewWillAppear:(BOOL)arg1 ;
-(PXPhotosGridFooterStatusController *)footerStatusController;
-(id)initWithConfiguration:(id)arg1 traitCollection:(id)arg2 ;
-(void)scrollToEdge:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateHasScrollableContent;
-(Class)customDecorationViewClass;
-(void)enumerateAssetHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)regionOfInterestForAssetReference:(id)arg1 image:(CGImage*)arg2 ;
-(void)scrollToRevealAssetReference:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)photosLayout:(id)arg1 animationForProposedAnimation:(id)arg2 ;
-(id)sectionHeaderLayout:(id)arg1 viewForSpriteReference:(id)arg2 ;
@end

