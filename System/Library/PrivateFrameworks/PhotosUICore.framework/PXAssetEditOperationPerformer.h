/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXDisplayAsset;
@class NSString, NSProgress;

@interface PXAssetEditOperationPerformer : NSObject {

	NSString* _type;
	id<PXDisplayAsset> _asset;
	NSProgress* _progress;

}

@property (nonatomic,copy,readonly) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                 //@synthesize progress=_progress - In the implementation block
-(id<PXDisplayAsset>)asset;
-(id)init;
-(id)initWithEditOperationType:(id)arg1 asset:(id)arg2 ;
-(NSString *)type;
-(NSProgress *)progress;
-(void)performEditOperationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

