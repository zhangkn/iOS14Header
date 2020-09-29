/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHAsset, NSString;

@interface _PXAssetAnalyzerRequest : NSObject <PXPhotoLibraryUIChangeObserver> {

	/*^block*/id _resultHandler;
	BOOL _finished;
	PHAsset* _asset;
	long long _workerType;

}

@property (readonly) PHAsset * asset;                               //@synthesize asset=_asset - In the implementation block
@property (readonly) long long workerType;                          //@synthesize workerType=_workerType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHAsset *)asset;
-(long long)workerType;
-(void)runWithResultHandler:(/*^block*/id)arg1 ;
-(id)initWithAsset:(id)arg1 workerType:(long long)arg2 ;
-(void)_handleFinishWithSuccess:(BOOL)arg1 ;
@end
