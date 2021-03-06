/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@protocol PXDisplayAssetCollection;
@class NSArray;

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource {

	id<PXDisplayAssetCollection> _collection;
	NSArray* _assets;

}

@property (nonatomic,copy) NSArray * assets;              //@synthesize assets=_assets - In the implementation block
+(id)new;
-(NSArray *)assets;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForAssetReference:(id)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)initWithDisplayAssets:(id)arg1 collection:(id)arg2 ;
-(id)init;
-(long long)numberOfSections;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(void)setAssets:(NSArray *)arg1 ;
@end

