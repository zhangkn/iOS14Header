/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {

	TSCH3DChartSceneAreaLayoutItemCacheValues mValues;
	TSCH3DVector* _containingViewportVector;

}

@property (nonatomic,readonly) tvec4<float> infoChartScale; 
@property (nonatomic,readonly) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector;                               //@synthesize containingViewportVector=_containingViewportVector - In the implementation block
@property (nonatomic,readonly) tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace; 
@property (nonatomic,readonly) CGSize layoutSize; 
@property (nonatomic,readonly) CGSize requestLayoutSize; 
@property (nonatomic,readonly) CGSize chartBodyLayoutSize; 
@property (nonatomic,readonly) CGSize requestChartBodyLayoutSize; 
@property (nonatomic,readonly) tvec2<int> modelSize; 
@property (nonatomic,readonly) SCD_Struct_TS50 layoutSettings; 
@property (nonatomic,readonly) BOOL forcedValid; 
+(id)cacheWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(const TSCH3DChartSceneAreaLayoutItemCacheValues*)values;
-(SCD_Struct_TS50)layoutSettings;
-(CGSize)layoutSize;
-(id)init;
-(TSCH3DVector *)containingViewportVector;
-(tvec2<int>)containingViewport;
-(tvec4<float>)infoChartScale;
-(CGSize)chartBodyLayoutSize;
-(BOOL)forcedValid;
-(tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpace;
-(tvec2<int>)modelSize;
-(CGSize)requestLayoutSize;
-(CGSize)requestChartBodyLayoutSize;
-(id)initWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(void)printDebug;
@end
