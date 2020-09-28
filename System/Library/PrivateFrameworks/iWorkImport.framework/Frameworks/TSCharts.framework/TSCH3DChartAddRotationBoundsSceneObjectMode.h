/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartAddBoundsSceneObjectMode.h>

@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode {

	int mRotationType;

}

@property (assign,nonatomic) int rotationType; 
-(int)rotationType;
-(void)getBounds:(id)arg1 ;
-(double)p_radiusFromBounds:(const box<glm::detail::tvec3<float> >*)arg1 pivot:(const tvec3<float>*)arg2 ;
-(void)p_submitGeometryForChartBounds:(const box<glm::detail::tvec3<float> >*)arg1 pivot:(const tvec3<float>*)arg2 thicknessIndex:(unsigned long long)arg3 pipeline:(id)arg4 ;
-(void)setRotationType:(int)arg1 ;
@end
