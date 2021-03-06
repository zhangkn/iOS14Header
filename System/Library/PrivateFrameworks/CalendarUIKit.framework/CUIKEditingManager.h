/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKEventStore, NSMutableSet, NSObject, NSMutableDictionary;

@interface CUIKEditingManager : NSObject {

	EKEventStore* _eventStore;
	NSMutableSet* _editingContextGroups;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _changeHistory;
	NSMutableDictionary* _changedObjectMap;

}

@property (__weak) EKEventStore * eventStore;                           //@synthesize eventStore=_eventStore - In the implementation block
@property (retain) NSMutableSet * editingContextGroups;                 //@synthesize editingContextGroups=_editingContextGroups - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableDictionary * changeHistory;                 //@synthesize changeHistory=_changeHistory - In the implementation block
@property (retain) NSMutableDictionary * changedObjectMap;              //@synthesize changedObjectMap=_changedObjectMap - In the implementation block
-(EKEventStore *)eventStore;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)changeHistory;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(NSMutableSet *)editingContextGroups;
-(void)setEditingContextGroups:(NSMutableSet *)arg1 ;
-(void)setChangeHistory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)changedObjectMap;
-(void)setChangedObjectMap:(NSMutableDictionary *)arg1 ;
@end

