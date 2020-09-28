/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDContext, OS_dispatch_queue;
@class NSMutableArray, NSObject, SUCorePersistedState;

@interface SUCoreActivityScheduler : NSObject {

	id<_CDContext> _context;
	NSMutableArray* _activityArray;
	NSMutableArray* _registrationArray;
	NSObject*<OS_dispatch_queue> _stateQueue;
	SUCorePersistedState* _persistedState;

}
+(id)sharedInstance;
-(void)_loadPersistedRegistrationMap;
-(id)initWithPersistedStatePath:(id)arg1 ;
-(void)_queue_addRegistration:(id)arg1 forActivity:(id)arg2 ;
-(void)_queue_persistRegistrationMap;
-(id)_queue_registrationForActivity:(id)arg1 ;
-(void)_queue_removeRegistrationForActivity:(id)arg1 ;
-(id)_contextStoreRegisteredActivities;
-(id)sharedMemoryStore;
-(void)_registerRegistration:(id)arg1 forActivity:(id)arg2 ;
-(void)_unregisterRegistrationForActivity:(id)arg1 ;
-(void)_unregisterAllActivitiesWithName:(id)arg1 ;
-(id)_copyRegisteredActivities;
-(void)scheduleActivity:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)unregisterActivity:(id)arg1 ;
-(void)unregisterActivitiesWithName:(id)arg1 ;
-(id)copyScheduledActivities;
@end
