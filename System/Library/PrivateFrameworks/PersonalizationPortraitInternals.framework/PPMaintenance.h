/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PPMaintenance : NSObject
+(void)_registerProcessPendingFeedback;
+(id)_generateTopicExtractionsWithSamplingRate:(double)arg1 fromDate:(id)arg2 toDate:(id)arg3 error:(id*)arg4 ;
+(void)_registerLogNamedEntityPerplexity;
+(void)_registerTopicImport;
+(void)_registerTTLBasedDecayedFeedbackCountsCleanup;
+(id)singletonWarmupQueue;
+(BOOL)_logDailyTopicStatisticsWithError:(id*)arg1 shouldContinue:(/*^block*/id)arg2 ;
+(void)_registerTopicRepairAndExport;
+(BOOL)_logDailyLocationStatisticsWithError:(id*)arg1 shouldContinue:(/*^block*/id)arg2 ;
+(BOOL)_logTopicEngagementMetricsWithError:(id*)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
+(id)_quantizeTopics:(id)arg1 ;
+(void)_registerNamedEntityRepairAndExport;
+(void)_registerPendingFeedbackTTLCleanup;
+(void)processPendingFeedbackWithShouldContinueBlock:(/*^block*/id)arg1 ;
+(void)_registerContactsImport;
+(void)_logDonationIntervalStatsForSource:(id)arg1 domain:(unsigned char)arg2 lastDonationTimes:(id)arg3 lastBatchDonationTimes:(id)arg4 ;
+(void)_registerNamedEntityFiltering;
+(void)_registerDailyMetricsLogging;
+(void)registerMaintenanceTasksInternal;
+(void)_registerCoreRoutineImport;
+(void)_registerRemotelyDonatedRecordCleanup;
+(BOOL)_logDailyDatabaseStatisticsWithError:(id*)arg1 shouldContinue:(/*^block*/id)arg2 ;
+(id)runPortraitMusicDataCollectionWithTopicStore:(id)arg1 namedEntityStore:(id)arg2 collectIntents:(BOOL)arg3 error:(id*)arg4 shouldContinueBlock:(/*^block*/id)arg5 ;
+(void)_registerLogLocationPerplexity;
+(void)_registerRTCSendLogs;
+(BOOL)_logEngagementMetricsForDomain:(int)arg1 feedback:(id)arg2 count:(unsigned)arg3 shouldContinue:(/*^block*/id)arg4 ;
+(id)_objectToJsonString:(id)arg1 ;
+(BOOL)_logLocationEngagementMetricsWithError:(id*)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
+(void)_registerTTLBasedDonationCleanup;
+(void)_registerHealthKitImport;
+(BOOL)_runPortraitAnalyticsDataCollectionWithError:(id*)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
+(BOOL)_logNamedEntityEngagementMetricsWithError:(id*)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
+(void)_registerNamedEntityImport;
+(BOOL)_logDailyMetricsWithError:(id*)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
+(void)_registerMapsImport;
+(id)_quantizeAndFilterEntities:(id)arg1 withLimit:(unsigned)arg2 ;
+(BOOL)_runPortraitMusicDataCollectionWithError:(id*)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
+(void)_addMediaItem:(id)arg1 ofType:(int)arg2 withBundleId:(id)arg3 dateInterval:(id)arg4 to:(id)arg5 ;
+(void)_registerDecayedFeedbackCountsDecay;
+(void)_registerNowPlayingMPRequestResponseController;
+(void)_registerOptimizeDatabase;
+(void)_registerEntityBackfilling;
+(unsigned)_kValue;
+(void)_registerDecayedFeedbackCountsCleanup;
+(BOOL)_logDifferentiallyPrivateSourcesForTopicsWithError:(id*)arg1 ;
+(BOOL)_logDifferentiallyPrivateSourcesForLocationsWithError:(id*)arg1 ;
+(BOOL)_logDailyNamedEntityStatisticsWithError:(id*)arg1 shouldContinue:(/*^block*/id)arg2 ;
+(void)_logEngagementMetricsWithDomain:(int)arg1 feedback:(id)arg2 bucket:(unsigned)arg3 count:(unsigned)arg4 ;
+(void)_registerLogTopicPerplexity;
+(void)_registerEventKitImport;
+(void)_registerDataCollection;
+(BOOL)_logDifferentiallyPrivateSourcesForNamedEntitiesWithError:(id*)arg1 ;
@end
