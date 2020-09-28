/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartLabelsContainingSceneObject.h>

@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject
+(void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3 ;
+(CGSize)p_labelWrapSizeForScene:(id)arg1 returningSizeValue:(id*)arg2 ;
+(CGSize)labelWrapSizeForScene:(id)arg1 ;
+(BOOL)setLabelWrapBounds:(const box<glm::detail::tvec2<float> >*)arg1 forScene:(id)arg2 ;
+(id)partWithChartInfo:(id)arg1 ;
-(void)renderLabels:(id)arg1 ;
-(void)renderAnnotatedLabels:(id)arg1 ;
-(id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2 ;
-(BOOL)isAnnotated;
-(void)p_renderLabel:(id)arg1 ;
@end
