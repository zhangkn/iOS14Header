/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalReminderMigrationBackup : NSObject
+(BOOL)removeExistingBackupInCalendarDirectory:(id)arg1 error:(id*)arg2 ;
+(id)_backupFileInCalendarDirectory:(id)arg1 ;
+(BOOL)backupCalendarDirectory:(id)arg1 error:(id*)arg2 ;
+(BOOL)shouldBackupCalendarDirectory:(id)arg1 withPrivacySafePathProvider:(id)arg2 reminderMigrationDefaultsProvider:(id)arg3 ;
@end
