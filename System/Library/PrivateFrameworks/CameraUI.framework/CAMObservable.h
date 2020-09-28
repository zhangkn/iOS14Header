/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMapTable;

@interface CAMObservable : NSObject {

	long long _nestedChanges;
	NSMutableArray* _pendingChangeBlocks;
	long long _numAppliedPendingChanges;
	unsigned long long _currentChange;
	BOOL _isEnumeratingObservers;
	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
	NSMapTable* _observersQueue_changeObserversWithContexts;

}
-(void)didPerformChanges;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(id)mutableChangeObject;
-(void)didPublishChanges;
-(void)willPerformChanges;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)init;
-(void)_applyPendingChanges;
-(void)signalChange:(unsigned long long)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)_publishChanges;
-(void)_didChange;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)_willChange;
@end
