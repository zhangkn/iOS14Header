/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@protocol PXGItemsLayoutDelegate, PXGLayoutContentSource, PXGItemsGeometry;
@class PXGLayout;

@interface PXGItemsLayout : PXGLayout {

	BOOL _loadedItemsNeedUpdate;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned long long _delegateRespondsTo;
	long long _applyingItemChangesCount;
	long long* _currentStylableItems;
	long long* _pendingStylableItems;
	BOOL* _pendingAnimations;
	long long* _styleableAnimations;
	double* _stylablePaddings;
	BOOL _accessoryItemsNeedUpdate;
	PXGLayout* _accessoryItemsContainerLayout;
	BOOL _lazy;
	id<PXGItemsLayoutDelegate> _delegate;
	long long _numberOfAccessoryItems;
	id<PXGLayoutContentSource> _accessoryItemContentSource;
	id _dropTargetObjectReference;
	unsigned long long _dropTargetStyle;
	id<PXGItemsGeometry> _itemsGeometry;
	long long __numberOfItems;
	NSRange _loadedItems;

}

@property (assign,nonatomic) NSRange loadedItems;                                                       //@synthesize loadedItems=_loadedItems - In the implementation block
@property (assign,nonatomic) long long _numberOfItems;                                                  //@synthesize _numberOfItems=__numberOfItems - In the implementation block
@property (assign,getter=isLazy,nonatomic) BOOL lazy;                                                   //@synthesize lazy=_lazy - In the implementation block
@property (assign,nonatomic,__weak) id<PXGItemsLayoutDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long numberOfItems; 
@property (assign,nonatomic) long long numberOfAccessoryItems;                                          //@synthesize numberOfAccessoryItems=_numberOfAccessoryItems - In the implementation block
@property (assign,nonatomic,__weak) id<PXGLayoutContentSource> accessoryItemContentSource;              //@synthesize accessoryItemContentSource=_accessoryItemContentSource - In the implementation block
@property (nonatomic,readonly) BOOL isApplyingItemChanges; 
@property (nonatomic,retain) id dropTargetObjectReference;                                              //@synthesize dropTargetObjectReference=_dropTargetObjectReference - In the implementation block
@property (assign,nonatomic) unsigned long long dropTargetStyle;                                        //@synthesize dropTargetStyle=_dropTargetStyle - In the implementation block
@property (nonatomic,readonly) id<PXGItemsGeometry> itemsGeometry;                                      //@synthesize itemsGeometry=_itemsGeometry - In the implementation block
-(void)setAccessoryItemContentSource:(id<PXGLayoutContentSource>)arg1 ;
-(id)loadedItemsForItems:(id)arg1 ;
-(id)axSpriteIndexes;
-(long long)itemForObjectReference:(id)arg1 ;
-(unsigned)spriteIndexForItem:(long long)arg1 ;
-(NSRange)itemsToLoad;
-(BOOL)shouldInvalidateDecorationForModifiedSprites;
-(id)dropTargetObjectReference;
-(void)setDropTargetStyle:(unsigned long long)arg1 ;
-(id)objectReferenceForItem:(long long)arg1 ;
-(void)setDropTargetObjectReference:(id)arg1 ;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(/*^block*/id)arg3 ;
-(void)_handleFocusChangeWithUserInfo:(id)arg1 ;
-(void)dealloc;
-(id)spriteIndexesForItems:(id)arg1 ;
-(NSRange)loadedItems;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)spriteIndexIsItem:(unsigned)arg1 ;
-(void)setItem:(long long)arg1 forStylableType:(long long)arg2 animated:(BOOL)arg3 ;
-(void)endApplyingItemChanges;
-(id<PXGItemsGeometry>)itemsGeometry;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(CGSize)sizeForItem:(long long)arg1 ;
-(void)_handleSelectionChangeWithUserInfo:(id)arg1 ;
-(void)update;
-(long long)_numberOfItems;
-(void)_updateAccessoryItems;
-(id)init;
-(BOOL)delegateRespondsTo:(unsigned long long)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(unsigned long long)dropTargetStyle;
-(void)updateLoadedItemsIfNeeded;
-(id)layoutForItemChanges;
-(void)setDelegate:(id<PXGItemsLayoutDelegate>)arg1 ;
-(void)_updateHoveredItemIfNeeded;
-(id<PXGLayoutContentSource>)accessoryItemContentSource;
-(void)_updateFocusedItemIfNeeded;
-(long long)accessoryItemForSpriteIndex:(unsigned)arg1 ;
-(void)_updateLoadedItems;
-(void)beginApplyingItemChanges;
-(void)updateAccessoryItemsIfNeeded;
-(void)_updateStylableType:(long long)arg1 ;
-(id)itemsLayout;
-(void)set_numberOfItems:(long long)arg1 ;
-(void)modifyAccessoryItemSpritesInRange:(PXGSpriteIndexRange)arg1 state:(/*^block*/id)arg2 ;
-(void)invalidateStylableType:(long long)arg1 ;
-(void)numberOfAccessoryItemsDidChange;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 ;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(id<PXGItemsLayoutDelegate>)delegate;
-(unsigned)spriteIndexForAccessoryItem:(long long)arg1 ;
-(void)setLazy:(BOOL)arg1 ;
-(id)axVisibleSpriteIndexes;
-(void)accessoryItemsDidChange;
-(BOOL)spriteIndexIsAccessoryItem:(unsigned)arg1 ;
-(long long)itemForSpriteIndex:(unsigned)arg1 ;
-(long long)numberOfItems;
-(BOOL)isLazy;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(BOOL)isApplyingItemChanges;
-(long long)numberOfAccessoryItems;
-(void)invalidateLoadedItems;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(id)itemsForSpriteIndexes:(id)arg1 ;
-(void)dropTargetObjectReferenceDidChange;
-(void)_invalidateAccessoryItems;
-(void)loadedItemsDidChange;
-(void)setNumberOfAccessoryItems:(long long)arg1 ;
-(id)description;
-(void)setLoadedItems:(NSRange)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(long long)itemForObjectReference:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setAnimationParameters:(SCD_Struct_PX58)arg1 forStylableType:(long long)arg2 ;
@end

