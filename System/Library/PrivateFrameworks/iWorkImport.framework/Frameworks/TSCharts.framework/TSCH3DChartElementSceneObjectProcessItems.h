/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHUnretainedParent.h>

@class TSCH3DChartElementSceneObject, TSCH3DSceneRenderPipeline, TSCH3DChartElementProperties, NSMutableArray, TSCH3DRenderProcessor;

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent> {

	TSCH3DChartElementSceneObject* mSceneObject;
	TSCH3DSceneRenderPipeline* mPipeline;
	TSCH3DChartElementProperties* mProperties;
	NSMutableArray* mDelayedItems;

}

@property (nonatomic,readonly) BOOL pushStates; 
@property (nonatomic,readonly) BOOL useBoundsGeometry; 
@property (nonatomic,readonly) BOOL geometryOnly; 
@property (nonatomic,readonly) TSCH3DRenderProcessor * processor; 
+(id)processItemsWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3 ;
-(void)processItems;
-(void)dealloc;
-(TSCH3DRenderProcessor *)processor;
-(void)clearParent;
-(BOOL)useBoundsGeometry;
-(BOOL)geometryOnly;
-(id)initWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3 ;
-(id)elementInfoWithSeries:(id)arg1 position:(const tvec2<int>*)arg2 ;
-(BOOL)pushStates;
-(void)p_processElementInfoWithSeries:(id)arg1 position:(const tvec2<int>*)arg2 ;
-(void)performItemsProcessing;
-(BOOL)p_delayedItemsAreUnique;
-(void)processDelayedItemsWithOpacity:(float)arg1 ;
@end
