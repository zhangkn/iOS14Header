/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADReminderInterface
@required
-(void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(/*^block*/id)arg1;
-(void)CADScheduledTaskCacheGetDaysAndTaskCounts:(/*^block*/id)arg1;
-(void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg1;
-(void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(/*^block*/id)arg3;

@end

