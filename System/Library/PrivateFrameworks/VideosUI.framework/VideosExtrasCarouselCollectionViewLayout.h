/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <VideosUI/VideosExtrasCarouselCollectionViewLayout.h>

@protocol VideosExtrasCarouselCollectionViewLayout
@required
-(double)itemWidth;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(BOOL)arg2;
-(unsigned long long)indexOfVisibleItem;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1;

@end


@class NSDictionary;

@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout <VideosExtrasCarouselCollectionViewLayout> {

	NSDictionary* _cachedLayoutAttributes;
	long long _indexOfVisibleItemForBoundsChange;
	CGSize _cachedCollectionViewContentSize;

}

@property (nonatomic,retain) NSDictionary * cachedLayoutAttributes;                    //@synthesize cachedLayoutAttributes=_cachedLayoutAttributes - In the implementation block
@property (assign,nonatomic) CGSize cachedCollectionViewContentSize;                   //@synthesize cachedCollectionViewContentSize=_cachedCollectionViewContentSize - In the implementation block
@property (assign,nonatomic) long long indexOfVisibleItemForBoundsChange;              //@synthesize indexOfVisibleItemForBoundsChange=_indexOfVisibleItemForBoundsChange - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(double)itemWidth;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)init;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(double)_spaceBetweenItems;
-(double)_neighboringItemVisibleWidth;
-(void)setCachedLayoutAttributes:(NSDictionary *)arg1 ;
-(void)setCachedCollectionViewContentSize:(CGSize)arg1 ;
-(CGSize)cachedCollectionViewContentSize;
-(NSDictionary *)cachedLayoutAttributes;
-(long long)_indexOfVisibleItemForContentOffset:(CGPoint)arg1 collectionViewBounds:(CGRect)arg2 ;
-(CGPoint)_contentOffsetForItemAtIndex:(long long)arg1 collectionViewBounds:(CGRect)arg2 ;
-(void)setIndexOfVisibleItemForBoundsChange:(long long)arg1 ;
-(long long)indexOfVisibleItemForBoundsChange;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)indexOfVisibleItem;
-(double)_spaceBetweenItemsForCollectionViewBounds:(CGRect)arg1 ;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 ;
@end

