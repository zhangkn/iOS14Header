/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject {

	AMSPromiseCompletionBlocks* _completionBlocks;
	AMSPromiseResult* _promiseResult;
	NSConditionLock* _stateLock;

}

@property (nonatomic,retain) AMSPromiseCompletionBlocks * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) AMSPromiseResult * promiseResult;                           //@synthesize promiseResult=_promiseResult - In the implementation block
@property (nonatomic,retain) NSConditionLock * stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isTimedOut,nonatomic,readonly) BOOL timedOut; 
+(void)_finishPromise:(id)arg1 withPromise:(id)arg2 ;
+(void)_enumeratePromises:(id)arg1 startingAt:(long long)arg2 block:(/*^block*/id)arg3 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithFlattenedPromises:(id)arg1 ;
+(void)_configureFlattenedPromise:(id)arg1 withPromises:(id)arg2 results:(id)arg3 previousError:(id)arg4 currentPromiseIndex:(unsigned long long)arg5 ;
+(id)promiseWithAny:(id)arg1 ;
+(BOOL)_errorIsTimeOutError:(id)arg1 ;
+(BOOL)_errorIsCanceledError:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 timeout:(double)arg2 ;
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 ;
+(id)promiseWithResult:(id)arg1 ;
+(id)promiseWithAny:(id)arg1 timeout:(double)arg2 ;
+(id)promiseFinishedWithDefaultErrorOrResult:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isFinished;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)nilValueCompletionHandlerAdapter;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg1 ;
-(void)waitUntilFinished;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)isFinished;
-(/*^block*/id)completionHandlerAdapter;
-(/*^block*/id)boolCompletionHandlerAdapter;
-(AMSPromiseCompletionBlocks *)completionBlocks;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(void)setCompletionBlocks:(AMSPromiseCompletionBlocks *)arg1 ;
-(void)setPromiseResult:(AMSPromiseResult *)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(void)_addBlock:(/*^block*/id)arg1 orCallWithResult:(/*^block*/id)arg2 ;
-(void)setStateLock:(NSConditionLock *)arg1 ;
-(id)resultWithError:(id*)arg1 ;
-(AMSPromiseResult *)promiseResult;
-(NSConditionLock *)stateLock;
-(BOOL)isTimedOut;
-(BOOL)finishWithPromise:(id)arg1 ;
-(id)promiseWithTimeout:(double)arg1 ;
-(BOOL)_finishWithResult:(id)arg1 error:(id)arg2 logDuplicateFinishes:(BOOL)arg3 ;
-(id)init;
-(BOOL)isCancelled;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(void)startTimeout:(double)arg1 ;
-(id)binaryPromiseAdapter;
-(id)initWithTimeout:(double)arg1 ;
@end

