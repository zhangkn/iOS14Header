/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath; 
@property (getter=isAdditive) BOOL additive; 
@property (getter=isCumulative) BOOL cumulative; 
@property (retain) CAValueFunction * valueFunction; 
+(id)animationWithKeyPath:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(BOOL)isAdditive;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(NSString *)keyPath;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(BOOL)cumulative;
-(CAValueFunction *)valueFunction;
-(BOOL)isCumulative;
-(void)setCumulative:(BOOL)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(BOOL)additive;
-(void)setValueFunction:(CAValueFunction *)arg1 ;
@end
