/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADAlarmEngineInterface.h>

@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
+(BOOL)requiresReminderAccess;
-(BOOL)_hasAccessToAlarmsOnCalendar:(void*)arg1 ;
-(void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseGetLocationBasedAlarmsWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(/*^block*/id)arg1 ;
@end
