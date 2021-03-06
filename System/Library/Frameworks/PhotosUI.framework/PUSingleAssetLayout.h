/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTilingLayout.h>

@class PUAssetReference;

@interface PUSingleAssetLayout : PUTilingLayout {

	PUAssetReference* _assetReference;
	CGRect _assetRect;
	UIEdgeInsets _cropInsets;
	CGRect _contentsRect;

}

@property (nonatomic,retain) PUAssetReference * assetReference;              //@synthesize assetReference=_assetReference - In the implementation block
@property (assign,nonatomic) CGRect assetRect;                               //@synthesize assetRect=_assetRect - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cropInsets;                        //@synthesize cropInsets=_cropInsets - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                            //@synthesize contentsRect=_contentsRect - In the implementation block
-(void)setContentsRect:(CGRect)arg1 ;
-(CGRect)assetRect;
-(CGRect)contentsRect;
-(void)_invalidateSingleAssetLayout;
-(UIEdgeInsets)cropInsets;
-(void)setCropInsets:(UIEdgeInsets)arg1 ;
-(CGRect)contentBounds;
-(PUAssetReference *)assetReference;
-(void)setAssetReference:(PUAssetReference *)arg1 ;
-(CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2 ;
-(id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(id)layoutInfosForTilesInRect:(CGRect)arg1 ;
-(void)setAssetRect:(CGRect)arg1 ;
@end

