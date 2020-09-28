/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADMigrationInterface.h>

@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(void)CADMigrateDatabaseIfNeeded:(/*^block*/id)arg1 ;
@end
