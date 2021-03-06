/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PHAdjustmentData, NSData;

@interface _PUPhotoEditSnapshot : NSObject {

	long long _workImageVersion;
	PHAdjustmentData* _adjustmentData;
	NSData* _imageData;
	NSData* _baseImageData;

}

@property (assign,nonatomic) long long workImageVersion;                     //@synthesize workImageVersion=_workImageVersion - In the implementation block
@property (nonatomic,retain) PHAdjustmentData * adjustmentData;              //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (nonatomic,retain) NSData * imageData;                             //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSData * baseImageData;                         //@synthesize baseImageData=_baseImageData - In the implementation block
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(id)_copyData:(id)arg1 ;
-(long long)workImageVersion;
-(NSData *)baseImageData;
-(void)setBaseImageData:(NSData *)arg1 ;
-(void)setWorkImageVersion:(long long)arg1 ;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(PHAdjustmentData *)adjustmentData;
@end

