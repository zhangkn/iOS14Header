/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _PASLock;

@interface _PASCoalescingTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	double _leewaySeconds;
	/*^block*/id _coalesceData;
	/*^block*/id _operation;
	_PASLock* _lock;

}
-(void)_replaceCoalescingTimerUsingLockWitness:(id)arg1 ;
-(id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 coalesceData:(/*^block*/id)arg3 operation:(/*^block*/id)arg4 ;
-(void)processData:(id)arg1 afterDelaySeconds:(double)arg2 coalescingBehavior:(unsigned char)arg3 ;
-(id)initWithQueue:(id)arg1 coalesceData:(/*^block*/id)arg2 operation:(/*^block*/id)arg3 ;
-(void)immediatelyProcessData:(id)arg1 ;
-(void)processData:(id)arg1 afterStrictDelaySeconds:(double)arg2 ;
-(void)cancelPendingOperations;
@end

