/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartCacheDataSource.h>

@class HKHealthStore, HKDisplayType, NSString;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {

	HKHealthStore* _healthStore;
	HKDisplayType* _displayType;

}

@property (nonatomic,readonly) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)queryDescription;
-(HKDisplayType *)displayType;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(/*^block*/id)mappingFunctionForContext:(id)arg1 ;
-(unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(id)_buildDescriptionFromStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 ;
-(id)operationForIdentifier:(id)arg1 priorityDelegate:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
