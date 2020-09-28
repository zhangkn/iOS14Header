/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKWorkoutBuilderClientInterface <NSObject>
@required
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1;
-(void)clientRemote_didUpdateStatistics:(id)arg1;
-(void)clientRemote_didUpdateMetadata:(id)arg1;
-(void)clientRemote_didUpdateEvents:(id)arg1;
-(void)clientRemote_didRecoverSeriesBuilders:(id)arg1;
-(void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2;
-(void)clientRemote_didFinishRecovery;
-(void)clientRemote_stateDidChange:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
-(void)clientRemote_finishedWorkout:(id)arg1;
-(void)clientRemote_didFailWithError:(id)arg1;

@end
