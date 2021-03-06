/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;

@interface PUJoiningAssetsDataSource : PUAssetsDataSource {

	NSArray* __dataSources;
	long long __totalNumberOfSections;
	NSDictionary* __containedDataSourceInfoByIdentifier;
	NSArray* __containedDataSourceInfos;

}

@property (nonatomic,readonly) NSArray * _dataSources;                                           //@synthesize _dataSources=__dataSources - In the implementation block
@property (nonatomic,readonly) long long _totalNumberOfSections;                                 //@synthesize _totalNumberOfSections=__totalNumberOfSections - In the implementation block
@property (nonatomic,readonly) NSDictionary * _containedDataSourceInfoByIdentifier;              //@synthesize _containedDataSourceInfoByIdentifier=__containedDataSourceInfoByIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * _containedDataSourceInfos;                              //@synthesize _containedDataSourceInfos=__containedDataSourceInfos - In the implementation block
-(id)startingAssetReference;
-(id)indexPathForAssetReference:(id)arg1 ;
-(id)containedAssetsDataSourceAtIndexPath:(id)arg1 ;
-(NSArray *)_dataSources;
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(id)assetCollectionAtIndexPath:(id)arg1 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1 ;
-(long long)numberOfAssetsWithMaximum:(long long)arg1 ;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
-(id)indexPathForAssetCollection:(id)arg1 ;
-(id)assetAtIndexPath:(id)arg1 ;
-(id)initWithDataSources:(id)arg1 ;
-(id)_assetsDataSourceForExternalIndexPath:(id)arg1 outDataSourceIndex:(out long long*)arg2 outLocalIndexPath:(out id*)arg3 ;
-(id)_externalIndexPathForLocalIndexPath:(id)arg1 inAssetsDataSource:(id)arg2 ;
-(long long)_totalNumberOfSections;
-(NSDictionary *)_containedDataSourceInfoByIdentifier;
-(NSArray *)_containedDataSourceInfos;
@end

