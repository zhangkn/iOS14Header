/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RERelevanceEngineMetricsRecorder <NSObject>
@optional
-(void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;
-(BOOL)ignoreValidMetricCheck;
-(void)recordCallibrationCurveMetrics:(id)arg1 forInteraction:(id)arg2;
-(void)recordPredictionMetrics:(id)arg1 forInteraction:(id)arg2;

@end

