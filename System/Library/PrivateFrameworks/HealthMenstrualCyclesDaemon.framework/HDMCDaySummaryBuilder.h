/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKCalendarCache, NSMutableArray, NSMutableDictionary;

@interface HDMCDaySummaryBuilder : NSObject {

	HKCalendarCache* _calendarCache;
	NSMutableArray* _menstrualFlowSamples;
	NSMutableArray* _intermenstrualBleedingSamples;
	NSMutableArray* _symptomsSamples;
	NSMutableArray* _sexualActivitySamples;
	NSMutableArray* _ovulationTestResultSamples;
	NSMutableArray* _cervicalMucusQualitySamples;
	NSMutableArray* _basalBodyTemperatureSamples;
	NSMutableDictionary* _sampleCountByType;
	long long _dayIndex;

}

@property (nonatomic,readonly) long long dayIndex;              //@synthesize dayIndex=_dayIndex - In the implementation block
-(unsigned long long)_symptoms;
-(long long)_ovulationTestResult;
-(long long)dayIndex;
-(BOOL)_intermenstrualBleeding;
-(long long)_sexualActivity;
-(long long)_cervicalMucusQuality;
-(id)_basalBodyTemperature;
-(id)createDaySummaryWithDevice:(id)arg1 ;
-(id)initWithDayIndex:(long long)arg1 calendarCache:(id)arg2 ;
-(void)addCycleTrackingSample:(id)arg1 ;
-(long long)_menstrualFlowWithModificationDay:(long long*)arg1 startOfCycleFromCycleTracking:(id*)arg2 ;
@end

