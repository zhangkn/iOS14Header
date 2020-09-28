/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:35 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathPainter.h>

@class TSDShadow, NSString;

@interface TSDShadowSwatch : NSObject <TSDPathPainter> {

	TSDShadow* mShadow;

}

@property (nonatomic,readonly) TSDShadow * shadow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSDShadow *)shadow;
-(void)dealloc;
-(id)initWithShadow:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 forImage:(CGImageRef)arg3 swatchRect:(CGRect)arg4 wantsStroke:(BOOL)arg5 ;
-(void)p_drawContactShadowInContext:(CGContextRef)arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5 ;
@end
