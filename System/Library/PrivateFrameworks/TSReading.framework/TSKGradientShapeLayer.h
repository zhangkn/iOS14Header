/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:34 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class CAGradientLayer, CAShapeLayer, NSArray, NSString;

@interface TSKGradientShapeLayer : CAShapeLayer {

	CAGradientLayer* _gradient;
	CAShapeLayer* _shapeMask;

}

@property (nonatomic,retain) CAGradientLayer * gradient;              //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeMask;                //@synthesize shapeMask=_shapeMask - In the implementation block
@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
-(void)setLineWidth:(double)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(NSArray *)colors;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(NSArray *)locations;
-(void)setColors:(NSArray *)arg1 ;
-(void)dealloc;
-(NSString *)type;
-(void)setDelegate:(id)arg1 ;
-(void)setFillRule:(id)arg1 ;
-(void)setLineCap:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setStrokeStart:(double)arg1 ;
-(void)setLineDashPhase:(double)arg1 ;
-(CAGradientLayer *)gradient;
-(void)setLineJoin:(id)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
-(void)setLineDashPattern:(id)arg1 ;
-(void)setGradient:(CAGradientLayer *)arg1 ;
-(CAShapeLayer *)shapeMask;
-(void)setShapeMask:(CAShapeLayer *)arg1 ;
-(BOOL)isGradientTree;
-(void)p_flatten;
-(void)p_createGradientTreeIfNeeded;
@end

