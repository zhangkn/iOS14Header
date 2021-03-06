/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@interface MCTouchInput : MCKeyboardInput {

	double _radius;
	double _timestamp;
	CGPoint _touchPoint;

}

@property (nonatomic,readonly) CGPoint touchPoint;              //@synthesize touchPoint=_touchPoint - In the implementation block
@property (nonatomic,readonly) double radius;                   //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(double)radius;
-(id)description;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 ;
-(CGPoint)touchPoint;
@end

