/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class UIColor;

@interface SXTextShadow : SXJSONObject

@property (nonatomic,readonly) double radius; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) CGPoint offset; 
@property (nonatomic,readonly) UIColor * color; 
-(UIColor *)color;
-(CGPoint)offset;
-(double)opacity;
-(double)radius;
-(id)TSDShadow;
@end
