//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASActivityRecorder : NSObject
{
}

+ (id)predicateForLaunchActivities;	// IMP=0x000000010001b510
+ (id)predicateForStartedActivities;	// IMP=0x000000010001b4d4
+ (id)predicateForPendingActivities;	// IMP=0x000000010001b49c
+ (id)predicateForUniqueRecord:(id)arg1;	// IMP=0x000000010001b330
+ (id)predicateForActivityWithSubmitDate:(id)arg1;	// IMP=0x000000010001b248
+ (id)predicateForActivityWithName:(id)arg1;	// IMP=0x000000010001b210
- (void)deleteActivitiesIfRequired:(id)arg1;	// IMP=0x000000010001cf84
- (void)deleteOldActivities:(id)arg1;	// IMP=0x000000010001ce14
- (void)deleteActivites:(id)arg1 moc:(id)arg2;	// IMP=0x000000010001cd58
- (void)deleteActivity:(id)arg1 context:(id)arg2;	// IMP=0x000000010001cc24
- (void)updateActivityCanceled:(id)arg1 context:(id)arg2;	// IMP=0x000000010001cbd0
- (void)updateActivityCompleted:(id)arg1 context:(id)arg2;	// IMP=0x000000010001cb7c
- (void)updateActivityStarted:(id)arg1 context:(id)arg2;	// IMP=0x000000010001cb28
- (void)updateActivity:(id)arg1 value:(int)arg2 context:(id)arg3;	// IMP=0x000000010001ca30
- (void)copyActivity:(id)arg1 toManagedObject:(id)arg2;	// IMP=0x000000010001c29c
- (id)getActivityFromManagedObject:(id)arg1;	// IMP=0x000000010001bad0
- (id)fetchAllActivities:(id)arg1;	// IMP=0x000000010001babc
- (id)fetchActivity:(id)arg1 context:(id)arg2;	// IMP=0x000000010001b9e4
- (id)fetchActivitiesUsingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x000000010001b894
- (id)createOrUpdateActivity:(id)arg1 context:(id)arg2;	// IMP=0x000000010001b6bc
- (id)createNewActivity:(id)arg1;	// IMP=0x000000010001b62c
- (id)entityName;	// IMP=0x000000010001b204

@end

