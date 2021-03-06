/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXPhotosDataSourceProvider.h>

@class NSArray, NSString;

@interface _PXPhotosViewSearchResultsDataSourceProvider : NSObject <PXPhotosDataSourceProvider> {

	NSArray* _assetUUIDs;
	NSString* _title;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadInitialPhotosDataSourceForDataSourceManager:(id)arg1 ;
-(id)localizedInitialLoadingStatusMessageForDataSourceManager:(id)arg1 ;
-(id)initWithAssetUUIDs:(id)arg1 searchTitle:(id)arg2 ;
-(id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1 ;
@end

