/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:37 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDGradientStop.h>

@class TSUColor;

@interface TSDMutableGradientStop : TSDGradientStop

@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double fraction; 
@property (assign,nonatomic) double inflection; 
-(void)setFraction:(double)arg1 ;
-(void)setColor:(TSUColor *)arg1 ;
-(void)setInflection:(double)arg1 ;
@end
