/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOHoursTestHelper : NSObject
+(id)dateWithString:(id)arg1 ;
+(id)_pdHoursFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4 inTimeZone:(id)arg5 onDay:(long long)arg6 month:(long long)arg7 year:(long long)arg8 openingThreshold:(double)arg9 closingThreshold:(double)arg10 shouldGoOverMidnight:(BOOL)arg11 ;
+(GEOPDLocalTimeRange)_rangeWithFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4 ;
+(id)testBusinessHoursForMKLocalizedHoursBuilderTest;
+(id)testBusinessHoursWithPermanentlyClosedHoursTypeForMKLocalizedHoursBuilderTest;
+(id)testBusinessHoursWithTemporaryClosedHoursTypeForMKLocalizedHoursBuilderTest;
+(id)testDateForMKLocalizedHoursBuilderTest;
+(id)testTimeZoneForMKLocalizedHoursBuilderTest;
+(id)testTimeZoneForGEOPlaceDailyHoursTest;
+(id)testingDictionaryForIsWeekdayInRange;
@end

