/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, HKAxisLabelStyle;

@interface HKQuantityDistributionSeries : HKGraphSeries {

	BOOL _excludeDistribution;
	HKStrokeStyle* _inactiveStrokeStyle;
	HKStrokeStyle* _unselectedStrokeStyle;
	HKStrokeStyle* _selectedStrokeStyle;
	HKAxisLabelStyle* _minMaxLabelStyle;
	HKAxisLabelStyle* _minMaxValueStyle;
	HKStrokeStyle* _minMaxPointStyle;
	long long _zeroCountForGap;

}

@property (nonatomic,copy) HKStrokeStyle * inactiveStrokeStyle;                //@synthesize inactiveStrokeStyle=_inactiveStrokeStyle - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * unselectedStrokeStyle;              //@synthesize unselectedStrokeStyle=_unselectedStrokeStyle - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * selectedStrokeStyle;                //@synthesize selectedStrokeStyle=_selectedStrokeStyle - In the implementation block
@property (nonatomic,copy) HKAxisLabelStyle * minMaxLabelStyle;                //@synthesize minMaxLabelStyle=_minMaxLabelStyle - In the implementation block
@property (nonatomic,copy) HKAxisLabelStyle * minMaxValueStyle;                //@synthesize minMaxValueStyle=_minMaxValueStyle - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * minMaxPointStyle;                   //@synthesize minMaxPointStyle=_minMaxPointStyle - In the implementation block
@property (assign,nonatomic) BOOL excludeDistribution;                         //@synthesize excludeDistribution=_excludeDistribution - In the implementation block
@property (assign,nonatomic) long long zeroCountForGap;                        //@synthesize zeroCountForGap=_zeroCountForGap - In the implementation block
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(id)init;
-(void)setUnselectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setSelectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setInactiveStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setMinMaxLabelStyle:(HKAxisLabelStyle *)arg1 ;
-(void)setMinMaxValueStyle:(HKAxisLabelStyle *)arg1 ;
-(void)setMinMaxPointStyle:(HKStrokeStyle *)arg1 ;
-(void)setZeroCountForGap:(long long)arg1 ;
-(id)marginsForYAxis:(id)arg1 chartRect:(CGRect)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(HKStrokeStyle *)unselectedStrokeStyle;
-(HKStrokeStyle *)selectedStrokeStyle;
-(id)_quickDate:(id)arg1 ;
-(HKStrokeStyle *)inactiveStrokeStyle;
-(HKAxisLabelStyle *)minMaxLabelStyle;
-(HKAxisLabelStyle *)minMaxValueStyle;
-(HKStrokeStyle *)minMaxPointStyle;
-(long long)zeroCountForGap;
-(void)setExcludeDistribution:(BOOL)arg1 ;
-(BOOL)excludeDistribution;
-(void)_drawMinMaxLabelsForMin:(CGPoint)arg1 max:(CGPoint)arg2 pointTransform:(CGAffineTransform)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(CGRect)_textRectForSize:(CGSize)arg1 location:(CGPoint)arg2 screenRect:(CGRect)arg3 yOffset:(double)arg4 ;
@end
