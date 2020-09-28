/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHRenderer.h>

@class NSIndexSet;

@interface TSCHChartRadialElementsRenderer : TSCHRenderer {

	CGPoint mHitPoint;
	unsigned long long mHitSeries;
	float mHitStartAngle;
	float mHitRadius;
	float mHitExplosion;
	BOOL mDidMoveDuringTouchIfNotThenRotateChartForDemo;
	NSIndexSet* mPartialRenderingSeriesIndexSet;
	BOOL mPartialRenderingInclusionFlag;

}
-(void)dealloc;
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(int)chunkPlane;
-(void)p_drawWedgePathIntoContext:(CGContextRef)arg1 path:(CGPathRef)arg2 fill:(id)arg3 stroke:(id)arg4 opacity:(double)arg5 withinBounds:(CGRect)arg6 ;
-(BOOL)p_shouldRenderSeriesIndex:(unsigned long long)arg1 ;
-(CGLayerRef)p_newPreRenderedImageWithContext:(CGContextRef)arg1 wedgePath:(CGPathRef)arg2 fullWedgePath:(CGPathRef)arg3 fill:(id)arg4 stroke:(id)arg5 shadow:(id)arg6 outUserSpaceLayerBounds:(CGRect*)arg7 ;
-(void)p_drawOnlyShadow:(id)arg1 forImage:(CGLayerRef)arg2 intoRect:(CGRect)arg3 intoContext:(CGContextRef)arg4 atViewScale:(double)arg5 usingBlendMode:(int)arg6 opacity:(double)arg7 ;
-(void)p_drawOnlyShapeImage:(CGLayerRef)arg1 intoRect:(CGRect)arg2 intoContext:(CGContextRef)arg3 usingBlendMode:(int)arg4 opacity:(double)arg5 ;
-(void)p_drawLinePathsIntoContext:(CGContextRef)arg1 linePath:(CGPathRef)arg2 tailPath:(CGPathRef)arg3 headPath:(CGPathRef)arg4 fillTail:(BOOL)arg5 fillHead:(BOOL)arg6 stroke:(id)arg7 ;
-(double)p_calculateIntersectionAreaForRectangle:(CGRect)arg1 circleCenter:(CGPoint)arg2 circleRadius:(double)arg3 ;
-(void)renderLabelsWithWedgeLayoutInfo:(id)arg1 paragraphStyle:(id)arg2 context:(CGContextRef)arg3 ;
-(void)renderLabelWithPieLabel:(id)arg1 combinedLabelTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 paragraphStyle:(id)arg4 ;
-(CGRect)chartLayoutSpaceRenderingRect;
-(void)drawOnlySeriesIndicies:(id)arg1 ;
-(void)drawAllButSeriesIndicies:(id)arg1 ;
-(void)drawAll;
@end
