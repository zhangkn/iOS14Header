/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSLocale, NSCalendar, SCLTimeIntervalsFormatter, NSListFormatter, NSDateFormatter, NSDateIntervalFormatter;

@interface SCLScheduleFormatter : NSFormatter {

	NSLocale* _locale;
	NSCalendar* _calendar;
	SCLTimeIntervalsFormatter* _timeIntervalsFormatter;
	NSListFormatter* _listFormatter;
	NSDateFormatter* _standaloneWeekdayFormatter;
	NSDateIntervalFormatter* _weekdayIntervalFormatter;

}

@property (nonatomic,readonly) SCLTimeIntervalsFormatter * timeIntervalsFormatter;              //@synthesize timeIntervalsFormatter=_timeIntervalsFormatter - In the implementation block
@property (nonatomic,readonly) NSListFormatter * listFormatter;                                 //@synthesize listFormatter=_listFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * standaloneWeekdayFormatter;                    //@synthesize standaloneWeekdayFormatter=_standaloneWeekdayFormatter - In the implementation block
@property (nonatomic,readonly) NSDateIntervalFormatter * weekdayIntervalFormatter;              //@synthesize weekdayIntervalFormatter=_weekdayIntervalFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                               //@synthesize calendar=_calendar - In the implementation block
-(NSCalendar *)calendar;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)init;
-(void)_regenerateFormatters;
-(id)formatterItemsForSchedule:(id)arg1 ;
-(SCLTimeIntervalsFormatter *)timeIntervalsFormatter;
-(id)stringForWeekdaysInItem:(id)arg1 ;
-(NSListFormatter *)listFormatter;
-(id)stringFromSchedule:(id)arg1 ;
-(NSDateFormatter *)standaloneWeekdayFormatter;
-(NSDateIntervalFormatter *)weekdayIntervalFormatter;
@end

