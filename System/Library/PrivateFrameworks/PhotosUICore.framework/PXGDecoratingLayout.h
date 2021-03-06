/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@protocol PXGShadowSource, PXGLayoutContentSource, PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGSelectionDecorationSource, PXGHighlightDecorationSource, PXGDragDecorationSource, PXGDebugDecorationSource;
@class NSMutableIndexSet, PXGLayout;

@interface PXGDecoratingLayout : PXGLayout {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingDecoratedLayout;
	NSMutableIndexSet* _invalidatedDecoratedSpriteIndexes;
	BOOL _wantsCaptionDecorations;
	long long _selectionDecorationStyle;
	unsigned long long _selectionDecorationOptions;
	id<PXGShadowSource> _shadowSource;
	BOOL _isChangingDecoratedLayout;
	BOOL _enabled;
	unsigned _numberOfDecoratingSpritesPerDecoratedSprite;
	PXGLayout* _decoratedLayout;
	id<PXGLayoutContentSource> _decorationSource;
	id<PXGAssetBadgeDecorationSource> _assetBadgeDecorationSource;
	id<PXGAssetBadgeDecorationSource> _assetProgressDecorationSource;
	id<PXGCaptionDecorationSource> _captionDecorationSource;
	id<PXGSelectionDecorationSource> _selectionDecorationSource;
	id<PXGHighlightDecorationSource> _highlightDecorationSource;
	id<PXGDragDecorationSource> _dragDecorationSource;
	id<PXGDebugDecorationSource> _debugDecorationSource;

}

@property (nonatomic,readonly) unsigned numberOfDecoratingSpritesPerDecoratedSprite;                                //@synthesize numberOfDecoratingSpritesPerDecoratedSprite=_numberOfDecoratingSpritesPerDecoratedSprite - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGAssetBadgeDecorationSource> assetBadgeDecorationSource;                 //@synthesize assetBadgeDecorationSource=_assetBadgeDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGAssetBadgeDecorationSource> assetProgressDecorationSource;              //@synthesize assetProgressDecorationSource=_assetProgressDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGCaptionDecorationSource> captionDecorationSource;                       //@synthesize captionDecorationSource=_captionDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGSelectionDecorationSource> selectionDecorationSource;                   //@synthesize selectionDecorationSource=_selectionDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGHighlightDecorationSource> highlightDecorationSource;                   //@synthesize highlightDecorationSource=_highlightDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGDragDecorationSource> dragDecorationSource;                             //@synthesize dragDecorationSource=_dragDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGDebugDecorationSource> debugDecorationSource;                           //@synthesize debugDecorationSource=_debugDecorationSource - In the implementation block
@property (nonatomic,readonly) unsigned debugDecorationIndex; 
@property (nonatomic,retain) PXGLayout * decoratedLayout;                                                           //@synthesize decoratedLayout=_decoratedLayout - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<PXGLayoutContentSource> decorationSource;                                    //@synthesize decorationSource=_decorationSource - In the implementation block
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(void)referenceSizeDidChange;
-(id<PXGHighlightDecorationSource>)highlightDecorationSource;
-(unsigned)numberOfDecoratingSpritesPerDecoratedSprite;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(id)axSpriteIndexes;
-(double)lastBaseline;
-(void)userInterfaceDirectionDidChange;
-(void)insertSublayout:(id)arg1 atIndex:(long long)arg2 ;
-(void)viewEnvironmentDidChange;
-(id<PXGCaptionDecorationSource>)captionDecorationSource;
-(id<PXGSelectionDecorationSource>)selectionDecorationSource;
-(unsigned)spriteIndexForDecorationIndex:(unsigned)arg1 decoratingSpriteIndex:(unsigned)arg2 ;
-(void)setLastBaseline:(double)arg1 ;
-(void)screenScaleDidChange;
-(void)_updateReloadSprites;
-(void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2 fromDescendentSublayout:(id)arg3 ;
-(void)_invalidateDecorationForSpriteRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(id)initWithDecoratedLayout:(id)arg1 ;
-(void)_updateDecoratedLayout;
-(void)alphaDidChange;
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1 ;
-(PXGDecorationSpriteInfo)decorationSpriteInfoForDecoratedSpriteIndex:(unsigned)arg1 decorationIndex:(unsigned)arg2 assetBadgeInfo:(PXAssetBadgeInfo)arg3 isItemSelected:(BOOL)arg4 isItemHighlighted:(BOOL)arg5 isItemDragged:(BOOL)arg6 ;
-(BOOL)spritesAreInSyncWithDecoratedLayout;
-(BOOL)enabled;
-(void)_applyDecoratedLayoutChangeDetails:(id)arg1 ;
-(void)visibleRectDidChange;
-(unsigned)debugDecorationIndex;
-(void)_updateDecorationSprites;
-(CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(CGRect)arg2 ;
-(id<PXGDebugDecorationSource>)debugDecorationSource;
-(void)update;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(PXGLayout *)decoratedLayout;
-(id)init;
-(id)layoutForItemChanges;
-(id<PXGDragDecorationSource>)dragDecorationSource;
-(id)itemsLayout;
-(id<PXGLayoutContentSource>)decorationSource;
-(BOOL)isSpriteIndex:(unsigned)arg1 decoratingSpriteWithIndex:(out unsigned*)arg2 ;
-(BOOL)canHandleVisibleRectRejection;
-(void)setEnabled:(BOOL)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setDecorationSource:(id<PXGLayoutContentSource>)arg1 ;
-(void)setDecoratedLayout:(PXGLayout *)arg1 ;
-(id<PXGAssetBadgeDecorationSource>)assetProgressDecorationSource;
-(void)_updateDecorationSources;
-(id)description;
-(id<PXGAssetBadgeDecorationSource>)assetBadgeDecorationSource;
-(void)setContentSource:(id)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(unsigned)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
@end

