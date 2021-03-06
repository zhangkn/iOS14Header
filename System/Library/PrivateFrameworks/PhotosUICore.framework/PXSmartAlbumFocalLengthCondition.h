/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFocalLengthCondition : PXSmartAlbumEXIFCondition {

	NSArray* _focalLengthValues;

}

@property (nonatomic,readonly) NSArray * focalLengthValues; 
@property (nonatomic,retain) PXLabeledValue * focalLengthValue; 
@property (nonatomic,retain) PXLabeledValue * secondFocalLengthValue; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
+(id)formatter;
-(NSArray *)focalLengthValues;
-(PXLabeledValue *)focalLengthValue;
-(void)setFocalLengthValue:(PXLabeledValue *)arg1 ;
-(PXLabeledValue *)secondFocalLengthValue;
-(void)setSecondFocalLengthValue:(PXLabeledValue *)arg1 ;
@end

