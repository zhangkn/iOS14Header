/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MCJobQueueObserver, OS_dispatch_group;
@class NSObject, NSString;

@interface MCJobQueue : NSObject {

	unsigned _nextJobSequenceNumber;
	NSObject*<OS_dispatch_queue> _executionQueue;
	id<MCJobQueueObserver> _observer;
	NSObject*<OS_dispatch_queue> _jobQueue;
	NSObject*<OS_dispatch_group> _jobGroup;
	NSString* _queueID;
	/*^block*/id _executionQueueAbortCompletionBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> jobQueue;                    //@synthesize jobQueue=_jobQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> jobGroup;                    //@synthesize jobGroup=_jobGroup - In the implementation block
@property (nonatomic,retain) NSString * queueID;                                       //@synthesize queueID=_queueID - In the implementation block
@property (assign) unsigned nextJobSequenceNumber;                                     //@synthesize nextJobSequenceNumber=_nextJobSequenceNumber - In the implementation block
@property (nonatomic,copy) id executionQueueAbortCompletionBlock;                      //@synthesize executionQueueAbortCompletionBlock=_executionQueueAbortCompletionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (assign,nonatomic,__weak) id<MCJobQueueObserver> observer;                   //@synthesize observer=_observer - In the implementation block
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSString *)queueID;
-(NSObject*<OS_dispatch_group>)jobGroup;
-(NSObject*<OS_dispatch_queue>)jobQueue;
-(void)setJobQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setJobGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setQueueID:(NSString *)arg1 ;
-(void)setExecutionQueueAbortCompletionBlock:(id)arg1 ;
-(id)executionQueueAbortCompletionBlock;
-(void)fromFunction:(const char*)arg1 enqueueJob:(/*^block*/id)arg2 ;
-(void)jobDidFinishFromFunction:(const char*)arg1 ;
-(void)waitForEnqueuedJobsToCompleteCompletionBlock:(/*^block*/id)arg1 ;
-(void)abortEnqueuedJobsCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned)nextJobSequenceNumber;
-(void)setNextJobSequenceNumber:(unsigned)arg1 ;
-(id)init;
-(void)setObserver:(id<MCJobQueueObserver>)arg1 ;
-(id<MCJobQueueObserver>)observer;
-(NSObject*<OS_dispatch_queue>)executionQueue;
@end

