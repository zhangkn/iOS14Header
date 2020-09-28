/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;
#import <HealthHearingDaemon/HealthHearingDaemon-Structs.h>
@class HDStatisticsCollectionCalculator, NSDate, NSNumber, HKStatistics, HDStatisticsCollectionCalculatorDefaultDataSource, NSDateInterval;

@interface HDHeadphoneAudioExposureStatisticsBucket : NSObject {

	os_unfair_lock_s _lock;
	HDStatisticsCollectionCalculator* _primaryCalculator;
	HDStatisticsCollectionCalculator* _journaledCalculator;
	NSDate* _startDate;
	NSDate* _earliestStartDate;
	BOOL _boundedInterval;
	NSNumber* _anchor;
	HKStatistics* _previousStatistics;
	BOOL _includesPrunableData;
	HDStatisticsCollectionCalculatorDefaultDataSource* _dataSource;
	id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;

}

@property (nonatomic,readonly) HDStatisticsCollectionCalculator * primaryCalculator;                                   //@synthesize primaryCalculator=_primaryCalculator - In the implementation block
@property (nonatomic,readonly) HDStatisticsCollectionCalculator * journaledCalculator;                                 //@synthesize journaledCalculator=_journaledCalculator - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * earliestStartDate;                                                             //@synthesize earliestStartDate=_earliestStartDate - In the implementation block
@property (nonatomic,readonly) BOOL boundedInterval;                                                                   //@synthesize boundedInterval=_boundedInterval - In the implementation block
@property (nonatomic,readonly) NSNumber * anchor;                                                                      //@synthesize anchor=_anchor - In the implementation block
@property (setter=unitTesting_setPreviousStatistics:,nonatomic,retain) HKStatistics * previousStatistics;              //@synthesize previousStatistics=_previousStatistics - In the implementation block
@property (assign,setter=unitTesting_setIncludesPrunableData:,nonatomic) BOOL includesPrunableData;                    //@synthesize includesPrunableData=_includesPrunableData - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) BOOL includesJournaledSamples; 
@property (nonatomic,readonly) BOOL hasPreviousStatistics; 
+(id)_currentDoseStringForEndDate:(id)arg1 earliestStartDate:(id)arg2 profile:(id)arg3 ;
+(id)_makeBucketsForNowDate:(id)arg1 earliestStartDate:(id)arg2 profile:(id)arg3 ;
+(id)_makePrimaryCalculator;
+(id)_makeDataSourceWithProfile:(id)arg1 ;
+(id)_makeSourceOrderProviderWithProfile:(id)arg1 ;
+(id)_makeJournaledCalculator;
+(id)makeBucketsForProfile:(id)arg1 earliestStartDate:(id)arg2 ;
+(id)bucketForArchivedRepresentation:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(NSNumber *)anchor;
-(id)archivedRepresentationWithError:(id*)arg1 ;
-(NSDateInterval *)dateInterval;
-(id)queryForInitialStatisticsWithError:(id*)arg1 ;
-(NSDate *)startDate;
-(NSDate *)earliestStartDate;
-(id)copyWithEarliestStartDate:(id)arg1 resetDoseToZero:(BOOL)arg2 error:(id*)arg3 ;
-(id)snapshotStatisticsWithError:(id*)arg1 ;
-(BOOL)isExpiredForNowDate:(id)arg1 ;
-(id)updateWithSampleBatch:(id)arg1 error:(id*)arg2 ;
-(id)_initWithProfile:(id)arg1 startDate:(id)arg2 earliestStartDate:(id)arg3 boundedInterval:(BOOL)arg4 ;
-(id)_lock_copyWithEarliestStartDate:(id)arg1 resetDoseToZero:(BOOL)arg2 error:(id*)arg3 ;
-(id)_lock_currentStatisticsWithError:(id*)arg1 ;
-(id)_lock_archivedRepresentationWithError:(id*)arg1 ;
-(id)_initWithProfile:(id)arg1 primaryCalculator:(id)arg2 journaledCalculator:(id)arg3 startDate:(id)arg4 earliestStartDate:(id)arg5 boundedInterval:(BOOL)arg6 anchor:(id)arg7 previousStatistics:(id)arg8 includesPrunableData:(BOOL)arg9 ;
-(id)_lock_dateInterval;
-(id)_lock_queryForInitialStatisticsWithError:(id*)arg1 ;
-(id)_lock_journalQuantitySamples:(id)arg1 error:(id*)arg2 ;
-(id)_lock_addQuantitySamples:(id)arg1 anchor:(id)arg2 error:(id*)arg3 ;
-(id)_lock_fetchIncludesPrunableDataWithError:(id*)arg1 ;
-(BOOL)includesJournaledSamples;
-(BOOL)hasPreviousStatistics;
-(void)unitTesting_setPreviousStatistics:(id)arg1 ;
-(void)unitTesting_setIncludesPrunableData:(BOOL)arg1 ;
-(HDStatisticsCollectionCalculator *)primaryCalculator;
-(HDStatisticsCollectionCalculator *)journaledCalculator;
-(BOOL)boundedInterval;
-(HKStatistics *)previousStatistics;
-(BOOL)includesPrunableData;
@end
