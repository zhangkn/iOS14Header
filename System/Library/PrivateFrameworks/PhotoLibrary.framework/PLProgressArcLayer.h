/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <QuartzCore/CALayer.h>

@interface PLProgressArcLayer : CALayer {

	double _radius;
	double _startAngle;
	double _endAngle;
	double _lineWidth;

}

@property (assign,nonatomic) double radius;                  //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double startAngle;              //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) double lineWidth;               //@synthesize lineWidth=_lineWidth - In the implementation block
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)drawInContext:(CGContextRef)arg1 ;
-(double)radius;
-(double)endAngle;
-(void)setRadius:(double)arg1 ;
-(id)init;
-(double)startAngle;
-(void)setEndAngle:(double)arg1 ;
-(void)setStartAngle:(double)arg1 ;
@end
