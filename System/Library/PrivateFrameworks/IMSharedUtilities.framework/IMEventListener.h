/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface IMEventListener : NSObject {

	BOOL _willRepeat;
	double _timerStart;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	double _timeListeningStarted;
	double _timeListeningStopped;
	double _timeLastEventReceived;
	double _timeout;
	unsigned long long _eventCount;
	id _target;
	/*^block*/id _completionBlock;
	/*^block*/id _willInvokeCompletion;
	/*^block*/id _didInvokeCompletion;

}

@property (assign,nonatomic) double timerStart;                                         //@synthesize timerStart=_timerStart - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (__weak) id target;                                                           //@synthesize target=_target - In the implementation block
@property (copy) id completionBlock;                                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id willInvokeCompletion;                                               //@synthesize willInvokeCompletion=_willInvokeCompletion - In the implementation block
@property (copy) id didInvokeCompletion;                                                //@synthesize didInvokeCompletion=_didInvokeCompletion - In the implementation block
@property (assign) double timeout;                                                      //@synthesize timeout=_timeout - In the implementation block
@property (getter=isListening,readonly) BOOL listening; 
@property (readonly) double timeListeningStarted;                                       //@synthesize timeListeningStarted=_timeListeningStarted - In the implementation block
@property (readonly) double timeListeningStopped;                                       //@synthesize timeListeningStopped=_timeListeningStopped - In the implementation block
@property (readonly) double timeLastEventReceived;                                      //@synthesize timeLastEventReceived=_timeLastEventReceived - In the implementation block
@property (readonly) double elapsedWaitingTime; 
@property (readonly) unsigned long long eventCount;                                     //@synthesize eventCount=_eventCount - In the implementation block
@property (assign,nonatomic) BOOL willRepeat;                                           //@synthesize willRepeat=_willRepeat - In the implementation block
+(id)allListeners;
+(id)_mutableListenerDictionary;
+(id)eventListener;
+(id)eventListenerWithNotificationName:(id)arg1 object:(id)arg2 ;
-(void)setCompletionBlock:(id)arg1 ;
-(void)stopListening;
-(BOOL)isListening;
-(id)completionBlock;
-(double)timeout;
-(double)timerStart;
-(void)_cancelTimeoutTimer;
-(id)willInvokeCompletion;
-(id)createResult:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(id)didInvokeCompletion;
-(void)_invokeCompletion:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)willStartListening;
-(void)_addToListeners;
-(void)_startTimeoutTimerIfNeeded;
-(void)_removeFromListeners;
-(void)willStopListening;
-(void)_handleTimeout:(id)arg1 ;
-(void)startListeningForEventTarget:(id)arg1 sendStartingEvent:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startListening;
-(void)_dispatchStartEventBlock:(/*^block*/id)arg1 ;
-(void)waitForCompletion;
-(double)timeListeningStarted;
-(void)setTimerStart:(double)arg1 ;
-(void)startListeningForEventTarget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)timeListeningStopped;
-(double)timeLastEventReceived;
-(double)elapsedWaitingTime;
-(void)_didReceiveEvent:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)setWillInvokeCompletion:(id)arg1 ;
-(void)setDidInvokeCompletion:(id)arg1 ;
-(BOOL)willRepeat;
-(void)setWillRepeat:(BOOL)arg1 ;
-(void)_reset;
-(void)reset;
-(void)setTimeout:(double)arg1 ;
-(void)_stopListening;
-(id)target;
-(void)_startListening;
-(unsigned long long)eventCount;
-(void)setTarget:(id)arg1 ;
-(void)willReset;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
@end
