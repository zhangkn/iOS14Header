/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUTransientDataSourceChangeObserver.h>

@protocol PUTransientDataSource, PUDisplayAssetCollection;
@class NSString;

@interface PUCameraTransientAssetsDataSourceManager : PUAssetsDataSourceManager <PUTransientDataSourceChangeObserver> {

	id<PUTransientDataSource> __transientDataSource;
	id<PUDisplayAssetCollection> __containingAssetCollection;

}

@property (nonatomic,readonly) id<PUTransientDataSource> _transientDataSource;                       //@synthesize _transientDataSource=__transientDataSource - In the implementation block
@property (nonatomic,readonly) id<PUDisplayAssetCollection> _containingAssetCollection;              //@synthesize _containingAssetCollection=__containingAssetCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PUTransientDataSource>)_transientDataSource;
-(id)init;
-(void)transientDataSourceDidChange:(id)arg1 ;
-(id)initWithTransientDataSource:(id)arg1 ;
-(void)_updateWithTransientDataSource:(id)arg1 ;
-(id<PUDisplayAssetCollection>)_containingAssetCollection;
@end

