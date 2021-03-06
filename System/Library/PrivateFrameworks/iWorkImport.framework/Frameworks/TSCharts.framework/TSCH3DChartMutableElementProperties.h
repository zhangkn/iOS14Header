/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartElementProperties.h>

@class TSCH3DArray2D, TSCH3DLabelResources, TSCH3DTransform;

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties {

	TSCH3DArray2D* mLightingModels;
	TSCH3DLabelResources* mLabels;
	TSCH3DTransform* mChartTransform;
	TSCH3DTransform* mElementsTransform;

}

@property (nonatomic,retain) TSCH3DArray2D * lightingModels; 
@property (nonatomic,retain) TSCH3DLabelResources * labels; 
@property (nonatomic,retain) TSCH3DTransform * chartTransform; 
@property (nonatomic,retain) TSCH3DTransform * elementsTransform; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(TSCH3DLabelResources *)labels;
-(void)setLabels:(TSCH3DLabelResources *)arg1 ;
-(void)setChartTransform:(TSCH3DTransform *)arg1 ;
-(TSCH3DTransform *)chartTransform;
-(TSCH3DTransform *)elementsTransform;
-(id)renderingLightingModelForSeries:(id)arg1 ;
-(TSCH3DArray2D *)lightingModels;
-(void)setLightingModels:(TSCH3DArray2D *)arg1 ;
-(void)setElementsTransform:(TSCH3DTransform *)arg1 ;
@end

