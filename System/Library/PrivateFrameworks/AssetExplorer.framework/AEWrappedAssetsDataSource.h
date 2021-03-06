/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class PUAssetsDataSource;

@interface AEWrappedAssetsDataSource : PXAssetsDataSource {

	PUAssetsDataSource* __reviewAssetsDataSource;

}

@property (nonatomic,readonly) PUAssetsDataSource * _reviewAssetsDataSource;              //@synthesize _reviewAssetsDataSource=__reviewAssetsDataSource - In the implementation block
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithReviewAssetsDataSource:(id)arg1 ;
-(PUAssetsDataSource *)_reviewAssetsDataSource;
@end

