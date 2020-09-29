/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSplitLayout.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGDisplayAssetSource.h>
#import <libobjc.A.dylib/PXZoomableInlineHeadersLayoutGeometrySource.h>
#import <libobjc.A.dylib/PXGItemsLayoutDelegate.h>
#import <libobjc.A.dylib/PXCuratedLibraryBodyLayout.h>
#import <libobjc.A.dylib/PXPhotosSectionedLayoutBody.h>

@protocol PXDisplayAssetFetchResult, PXZoomablePhotosContentLayout;
@class PXGZoomLayout, PXGPinchEffect, PXZoomableInlineHeadersLayout, PXAssetsDataSourceManager, PXAssetsDataSource, PXMediaProvider, NSArray, PXGItemsLayout, NSMutableSet, PXNumberAnimator, NSDateInterval, PXGBurstStackEffect, PXZoomablePhotosLayoutSpec, PXAssetReference, PXZoomablePhotosViewModel, PXPhotosGridAssetDecorationSource, PXGAnchor, NSMapTable, PXGOneColumnLayout, NSString;

@interface PXZoomablePhotosLayout : PXGSplitLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGDisplayAssetSource, PXZoomableInlineHeadersLayoutGeometrySource, PXGItemsLayoutDelegate, PXCuratedLibraryBodyLayout, PXPhotosSectionedLayoutBody> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _preUpdateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _postUpdateFlags;
	PXGZoomLayout* _zoomLayout;
	PXGPinchEffect* _pinchEffect;
	unsigned _pinchEffectCaptureSpriteIndex;
	PXGSpriteIndexRange _lightBackgroundSpriteIndexRange;
	unsigned _backgroundMediaVersion;
	PXZoomableInlineHeadersLayout* _inlineHeadersLayout;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXAssetsDataSource* _currentDataSource;
	PXMediaProvider* _preheatMediaProvider;
	NSRange _preheatedThumbsForItemsByColumnIndex[10];
	BOOL _isPreheatingByColumnIndex[10];
	BOOL _isPerformingUpdate;
	NSRange _prefetchedForLoadedItems;
	NSRange _cachedClampedItemRange;
	id<PXDisplayAssetFetchResult> _cachedClampedFetchResult;
	NSArray* _layers;
	NSArray* _itemLayouts;
	PXGItemsLayout*<PXZoomablePhotosContentLayout> _itemLayoutByHeaderLevel[2];
	PXGItemsLayout*<PXZoomablePhotosContentLayout> _decadesItemLayout;
	NSMutableSet* _itemLayoutsAllowedToLoad;
	PXNumberAnimator* _decorationAlphaAnimator;
	NSDateInterval* _lastReturnedDateInterval;
	unsigned long long _lastReturnedDateIntervalDataSourceIdentifier;
	NSArray* _lastReturnedLocationNames;
	unsigned long long _lastReturnedLocationNamesDataSourceIdentifier;
	BOOL _scrolledWhileAnimatingZoom;
	BOOL _performedInitialVisualShift;
	long long _visuallyStableAnchorItem;
	long long _visuallyStableAnchorItemDesiredColumn;
	BOOL _visuallyStableAnchorAllowedCloseToTop;
	PXGBurstStackEffect* _burstStackEffect;
	PXGSpriteIndexRange _debugVisualizationSpriteIndexRange;
	NSArray* _debugVisualizationSpriteTitles;
	UIEdgeInsets _surroundingScrollableContent;
	BOOL _preventFillingTopAreaInsets;
	BOOL _shouldAnimateTowardsAnchor;
	BOOL _wasTracking;
	BOOL _wantsOverBackgroundFloatingHeaderAppearance;
	BOOL _enableAddContentAccessoryItem;
	PXZoomablePhotosLayoutSpec* _spec;
	PXAssetReference* __anchorAssetReference;
	PXZoomablePhotosViewModel* _viewModel;
	PXAssetsDataSource* _presentedDataSource;
	PXPhotosGridAssetDecorationSource* _assetDecorationSource;
	/*^block*/id _addContentHandler;
	long long _bodyLayoutAXGroupRole;
	PXGAnchor* _anchor;
	NSMapTable* _visualAnchorAssetReferenceItemByLayout;
	PXGOneColumnLayout* _oneColLayout;
	CGPoint _scaleCenterTargetInViewport;
	CGPoint _normalizedScaleCenterInAnchorSprite;
	UIEdgeInsets _overlayInsets;
	UIEdgeInsets _inlineHeaderOverlayInsets;
	UIEdgeInsets _effectiveOverlayInsets;

}

@property (nonatomic,readonly) PXZoomablePhotosLayoutSpec * spec;                                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) PXGAnchor * anchor;                                                             //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) CGPoint scaleCenterTargetInViewport;                                            //@synthesize scaleCenterTargetInViewport=_scaleCenterTargetInViewport - In the implementation block
@property (nonatomic,retain) PXAssetReference * anchorAssetReference;                                          //@synthesize _anchorAssetReference=__anchorAssetReference - In the implementation block
@property (nonatomic,readonly) CGPoint normalizedScaleCenterInAnchorSprite;                                    //@synthesize normalizedScaleCenterInAnchorSprite=_normalizedScaleCenterInAnchorSprite - In the implementation block
@property (nonatomic,readonly) NSMapTable * visualAnchorAssetReferenceItemByLayout;                            //@synthesize visualAnchorAssetReferenceItemByLayout=_visualAnchorAssetReferenceItemByLayout - In the implementation block
@property (nonatomic,readonly) BOOL shouldAnimateTowardsAnchor;                                                //@synthesize shouldAnimateTowardsAnchor=_shouldAnimateTowardsAnchor - In the implementation block
@property (nonatomic,readonly) BOOL wasTracking;                                                               //@synthesize wasTracking=_wasTracking - In the implementation block
@property (nonatomic,readonly) PXGItemsLayout*<PXZoomablePhotosContentLayout> primaryItemsLayout; 
@property (nonatomic,readonly) PXGOneColumnLayout * oneColLayout;                                              //@synthesize oneColLayout=_oneColLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets effectiveOverlayInsets;                                              //@synthesize effectiveOverlayInsets=_effectiveOverlayInsets - In the implementation block
@property (assign,nonatomic) BOOL wantsOverBackgroundFloatingHeaderAppearance;                                 //@synthesize wantsOverBackgroundFloatingHeaderAppearance=_wantsOverBackgroundFloatingHeaderAppearance - In the implementation block
@property (nonatomic,readonly) PXGBurstStackEffect * burstStackEffect; 
@property (assign,nonatomic) BOOL enableAddContentAccessoryItem;                                               //@synthesize enableAddContentAccessoryItem=_enableAddContentAccessoryItem - In the implementation block
@property (nonatomic,readonly) PXZoomablePhotosViewModel * viewModel;                                          //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * presentedDataSource;                                       //@synthesize presentedDataSource=_presentedDataSource - In the implementation block
@property (nonatomic,readonly) PXPhotosGridAssetDecorationSource * assetDecorationSource;                      //@synthesize assetDecorationSource=_assetDecorationSource - In the implementation block
@property (assign,nonatomic) UIEdgeInsets overlayInsets;                                                       //@synthesize overlayInsets=_overlayInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets inlineHeaderOverlayInsets;                                           //@synthesize inlineHeaderOverlayInsets=_inlineHeaderOverlayInsets - In the implementation block
@property (assign,nonatomic) BOOL preventFillingTopAreaInsets;                                                 //@synthesize preventFillingTopAreaInsets=_preventFillingTopAreaInsets - In the implementation block
@property (nonatomic,copy) id addContentHandler;                                                               //@synthesize addContentHandler=_addContentHandler - In the implementation block
@property (assign,nonatomic) long long bodyLayoutAXGroupRole;                                                  //@synthesize bodyLayoutAXGroupRole=_bodyLayoutAXGroupRole - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)visualizeBestAnchorColumnsForLayouts:(id)arg1 imageWidth:(double)arg2 ;
+(void)getBestAnchorColumns:(long long*)arg1 forItemLayouts:(id)arg2 startingAtBaseLayout:(id)arg3 anchorItem:(long long)arg4 normalizedScaleCenterInAnchor:(CGPoint)arg5 biasTowardsCenter:(BOOL)arg6 ;
-(id)itemsLayout:(id)arg1 objectReferenceForItem:(long long)arg2 ;
-(unsigned short)itemsLayout:(id)arg1 effectIdForItem:(long long)arg2 ;
-(PXGAnchor *)anchor;
-(void)_updateDecorationSource;
-(long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_callAddContentActionHandler;
-(PXPhotosGridAssetDecorationSource *)assetDecorationSource;
-(id)addContentHandler;
-(PXZoomablePhotosLayoutSpec *)spec;
-(void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(SCD_Struct_PX15*)arg2 forItemsInRange:(NSRange)arg3 ;
-(CGRect)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3 ;
-(void)_updateSurroundingScrollableContent;
-(double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2 ;
-(PXGBurstStackEffect *)burstStackEffect;
-(id)initWithViewModel:(id)arg1 ;
-(BOOL)wantsOverBackgroundFloatingHeaderAppearance;
-(void)_configureLayout:(id)arg1 ;
-(BOOL)_isAllowedToShiftItem:(long long)arg1 inLayout:(id)arg2 ;
-(id)debugQuickLookObject;
-(id)axSpriteIndexes;
-(id)stringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(UIEdgeInsets)floatingHeadersMarginsForLevel:(unsigned long long)arg1 ;
-(long long)verticalAlignmentForStringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)screenScaleDidChange;
-(id)displayAssetRequestObserverForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(PXAssetsDataSource *)presentedDataSource;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(UIEdgeInsets)effectiveOverlayInsets;
-(void)_updateVisualShifting;
-(BOOL)_wantsDecorationForNumberOfColumns:(long long)arg1 ;
-(BOOL)wasTracking;
-(void)_updateDecorationVisibility;
-(id)attributedStringForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(unsigned long long)behaviorForCaptureSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_updateLayers;
-(id)presentedItemsGeometryForDataSource:(id)arg1 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 type:(unsigned long long)arg2 ;
-(id)_createLayoutWithNumberOfColumns:(long long)arg1 ;
-(id)_displayAssetForItem:(long long)arg1 ;
-(BOOL)preventFillingTopAreaInsets;
-(PXZoomablePhotosViewModel *)viewModel;
-(id)itemsGeometry;
-(void)visibleRectDidChange;
-(CGSize)_scaleForLayout:(id)arg1 ;
-(BOOL)_layoutIsAspectFit:(id)arg1 ;
-(void)_updateDataSource;
-(id)displayAssetFetchResultForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(void)update;
-(PXAssetReference *)anchorAssetReference;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)_updatePinchEffect;
-(BOOL)_performVisualShiftWithLayout:(id)arg1 movingItem:(long long)arg2 toColumn:(long long)arg3 ;
-(CGPoint)scaleCenterTargetInViewport;
-(double)_interItemSpacingForLayout:(id)arg1 ;
-(id)init;
-(void)setWantsOverBackgroundFloatingHeaderAppearance:(BOOL)arg1 ;
-(PXGOneColumnLayout *)oneColLayout;
-(unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1 ;
-(void)_ensureZoomingAnchor;
-(/*^block*/id)locationNamesFutureForContentInRect:(CGRect)arg1 ;
-(long long)bodyLayoutAXGroupRole;
-(UIEdgeInsets)overlayInsets;
-(void)scrollSpeedRegimeDidChange;
-(BOOL)enableAddContentAccessoryItem;
-(void)setEffectiveOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)_updateFloatingHeaderStyle;
-(void)setPreventFillingTopAreaInsets:(BOOL)arg1 ;
-(void)setAddContentHandler:(id)arg1 ;
-(void)_updateEffectiveOverlayInsets;
-(CGPoint)normalizedScaleCenterInAnchorSprite;
-(NSRange)_rangeOfItemsForContentInRect:(CGRect)arg1 ;
-(void)_updateBackgroundSprites;
-(void)setBodyLayoutAXGroupRole:(long long)arg1 ;
-(void)setInlineHeaderOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)invalidateItemsLayout;
-(BOOL)isAnimating;
-(NSMapTable *)visualAnchorAssetReferenceItemByLayout;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)zoomBehavior;
-(PXGItemsLayout*<PXZoomablePhotosContentLayout>)primaryItemsLayout;
-(SCD_Struct_PX32)_spriteTransformForLayout:(id)arg1 ;
-(BOOL)_layoutHasIndividualItems:(id)arg1 ;
-(CGRect)boundsForLevel:(unsigned long long)arg1 ;
-(long long)_estimatedItemsPerScreenForLayout:(id)arg1 ;
-(CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1 ;
-(void)setAnchorAssetReference:(PXAssetReference *)arg1 ;
-(void)setOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)_updatePrefetching;
-(void)_updateZoom;
-(void)setEnableAddContentAccessoryItem:(BOOL)arg1 ;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(void)_performAnchorAlignmentVisualShiftWithBaseLayout:(id)arg1 ;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)_updateZoomTransforms;
-(CGRect)frameForItemAtIndexPath:(PXSimpleIndexPath)arg1 level:(unsigned long long)arg2 ;
-(id)_debugColors;
-(BOOL)shouldAnimateTowardsAnchor;
-(unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1 ;
-(UIEdgeInsets)inlineHeaderOverlayInsets;
-(BOOL)_layoutWantsSingleDateTitle;
-(id)stringAttributesAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(double)_itemCaptionSpacingForLayout:(id)arg1 ;
-(void)containingScrollViewDidScroll:(CGPoint)arg1 ;
-(void)setSpec:(PXZoomablePhotosLayoutSpec *)arg1 ;
-(SCD_Struct_PX32)spriteTransformForLevel:(unsigned long long)arg1 ;
-(void)_updateDebugVisualizationSprites;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(id)colorAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
@end
