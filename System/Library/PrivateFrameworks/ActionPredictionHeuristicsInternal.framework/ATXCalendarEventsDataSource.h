/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHeuristicDevice;

@interface ATXCalendarEventsDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(void)calendarEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)visibleCalendarsWithCallback:(/*^block*/id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end
