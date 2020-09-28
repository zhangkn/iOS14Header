/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, MTAlarmManager, SOAlarmsSnapshot, NSMutableOrderedSet, NSString;

@interface SOAlarmsPublisher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSHashTable* _subscribers;
	MTAlarmManager* _alarmManager;
	SOAlarmsSnapshot* _alarmsSnapshot;
	NSMutableOrderedSet* _dismissedAlarms;
	NSString* _typeName;

}

@property (nonatomic,readonly) NSString * typeName;              //@synthesize typeName=_typeName - In the implementation block
-(void)alarmsUpdated:(id)arg1 ;
-(NSString *)typeName;
-(void)alarmsAdded:(id)arg1 ;
-(void)alarmFired:(id)arg1 ;
-(void)dealloc;
-(void)stateReset:(id)arg1 ;
-(id)init;
-(void)firingAlarmChanged:(id)arg1 ;
-(void)firingAlarmDismissed:(id)arg1 ;
-(void)addSubscriber:(id)arg1 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)_startObserving;
-(void)alarmsRemoved:(id)arg1 ;
-(void)_createNewSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)getCurrentSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifySubscribersOfEvent:(long long)arg1 ;
@end
