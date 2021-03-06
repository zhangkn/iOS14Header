/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {

	NSString* _path;

}
+(id)sideTableContext;
-(id)_persistentStoreCoordinator;
-(void)deleteAllAlarms;
-(id)nextAlarmFireTime;
-(id)delayedProximityAlarms;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(id)insertNewAlarm;
-(id)refiringAlarms;
-(id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_urlForPersistentStore;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(BOOL)refiringAlarmAlreadyExists:(int)arg1 ;
-(id)_pathForPersistentStore;
-(id)_settingForKey:(id)arg1 ;
-(id)_managedObjectModel;
-(id)rootDirectory;
-(id)settingForKey:(id)arg1 ;
-(BOOL)_removeSqliteFiles;
-(id)_alarmsMatchingPredicate:(id)arg1 ;
@end

