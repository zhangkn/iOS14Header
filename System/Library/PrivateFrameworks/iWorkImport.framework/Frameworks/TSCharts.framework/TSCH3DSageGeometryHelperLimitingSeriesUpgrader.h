/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartResizerHelper, TSCH3DChartBoundsLayout;

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {

	TSCH3DChartResizerHelper* mResizerHelper;
	TSCH3DChartBoundsLayout* mBoundsLayout;

}

@property (nonatomic,readonly) TSCH3DChartResizerHelper * resizerHelper; 
@property (nonatomic,readonly) TSCH3DChartBoundsLayout * boundsLayout; 
-(void)dealloc;
-(id)sceneResetWithLayoutSettings:(SCD_Struct_TS0)arg1 ;
-(CGRect)oldResizingFrame;
-(id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2 ;
-(id)boundsLayoutByResizingToLayoutSize:(const tvec2<float>*)arg1 ;
-(TSCH3DChartResizerHelper *)resizerHelper;
-(TSCH3DChartBoundsLayout *)boundsLayout;
@end

