/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>

@class PXPhotosDataSource, NSString;

@interface PUPhotoKitDataSourceManager : PUAssetsDataSourceManager <PXPhotosDataSourceChangeObserver> {

	PXPhotosDataSource* _photosDataSource;

}

@property (nonatomic,retain) PXPhotosDataSource * photosDataSource;              //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2 ;
-(void)dealloc;
-(PXPhotosDataSource *)photosDataSource;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(id)init;
-(id)initWithAssetsDataSourceManager:(id)arg1 ;
-(id)initWithPhotosDataSource:(id)arg1 ;
-(id)photosDataSourceInterestingAssetReferences:(id)arg1 ;
@end
