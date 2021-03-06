/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol PUHorizontalCollectionViewLayoutDelegate;
@class NSArray;

@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout {

	CGSize _contentSize;
	NSArray* _cachedItemLayoutAttributes;
	NSArray* _cachedSectionFrames;
	CGRect _lastRequestedRect;
	NSArray* _lastRequestedLayoutAttributesInRect;
	double _interitemSpacing;
	id<PUHorizontalCollectionViewLayoutDelegate> _delegate;
	CGSize _itemSize;
	UIEdgeInsets _itemsContentInset;

}

@property (nonatomic,readonly) CGRect collectionViewBounds; 
@property (assign,nonatomic) CGSize itemSize;                                                           //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                                   //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets itemsContentInset;                                            //@synthesize itemsContentInset=_itemsContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<PUHorizontalCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)invalidationContextClass;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(CGRect)arg1 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGRect)collectionViewBounds;
-(void)setItemsContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)itemsContentInset;
-(CGSize)itemSize;
-(id)init;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setDelegate:(id<PUHorizontalCollectionViewLayoutDelegate>)arg1 ;
-(id<PUHorizontalCollectionViewLayoutDelegate>)delegate;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
@end

