/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIActivityItemImageRep : NSObject {

	id _asset;
	/*^block*/id _thumbnailProvider;
	/*^block*/id _dataProvider;

}

@property (nonatomic,retain) id asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id thumbnailProvider;              //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy) id dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(/*^block*/id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(id)data;
-(id)asset;
-(void)setThumbnailProvider:(id)arg1 ;
-(id)thumbnailProvider;
-(void)setAsset:(id)arg1 ;
-(id)thumbnail;
-(void)setDataProvider:(id)arg1 ;
-(id)dataProvider;
@end
