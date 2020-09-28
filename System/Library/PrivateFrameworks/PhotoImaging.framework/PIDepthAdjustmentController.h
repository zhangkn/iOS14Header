/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSDictionary * depthInfo; 
@property (assign,nonatomic) double aperture; 
+(id)depthInfoKey;
+(id)apertureKey;
-(void)setDepthInfo:(NSDictionary *)arg1 ;
-(id)capturedAperture;
-(double)aperture;
-(void)setAperture:(double)arg1 ;
-(BOOL)canRenderDepth;
-(NSDictionary *)depthInfo;
-(id)initWithAdjustment:(id)arg1 ;
@end
