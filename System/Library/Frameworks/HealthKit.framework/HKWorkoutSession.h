/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKStateMachineDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, HKWorkoutSessionDelegate;
@class NSObject, NSDate, HKWorkoutSessionTaskConfiguration, HKTaskServerProxyProvider, HKLiveWorkoutBuilder, HKStateMachine, HKHealthStore, NSUUID, HKWorkoutConfiguration, NSString;

@interface HKWorkoutSession : NSObject <_HKXPCExportable, HKStateMachineDelegate, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	id<HKWorkoutSessionDelegate> _delegate;
	long long _state;
	NSDate* _startDate;
	NSDate* _endDate;
	HKWorkoutSessionTaskConfiguration* _configuration;
	HKTaskServerProxyProvider* _proxyProvider;
	id<HKWorkoutSessionDelegate> _strongDelegate;
	HKLiveWorkoutBuilder* _associatedWorkoutBuilder;
	HKStateMachine* _targetStateMachine;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                           //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) BOOL isGymKitSession; 
@property (assign,nonatomic) BOOL shouldStopPreviousSession; 
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (readonly) unsigned long long activityType; 
@property (readonly) long long locationType; 
@property (copy,readonly) HKWorkoutConfiguration * workoutConfiguration; 
@property (__weak) id<HKWorkoutSessionDelegate> delegate; 
@property (readonly) long long state; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)serverInterface;
+(id)targetWorkoutSessionStateMachineForSessionUUID:(id)arg1 ;
+(void)_unitTest_clearAllRunningWorkouts;
+(id)clientInterface;
+(BOOL)_applicationHasRunningWorkout;
-(unsigned long long)activityType;
-(void)end;
-(void)connectionInterrupted;
-(NSUUID *)identifier;
-(void)pause;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)dealloc;
-(id)_privateDelegate;
-(void)prepare;
-(NSDate *)endDate;
-(HKHealthStore *)healthStore;
-(void)setDelegate:(id<HKWorkoutSessionDelegate>)arg1 ;
-(id)remoteInterface;
-(id)initWithCoder:(id)arg1 ;
-(void)resumeWithCompletion:(/*^block*/id)arg1 ;
-(void)resume;
-(void)stopActivity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)startActivity;
-(BOOL)isGymKitSession;
-(void)setShouldStopPreviousSession:(BOOL)arg1 ;
-(void)client_didChangeToState:(long long)arg1 date:(id)arg2 ;
-(id<HKWorkoutSessionDelegate>)delegate;
-(void)client_didUpdateStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)client_didGenerateEvents:(id)arg1 ;
-(void)client_didFailWithError:(id)arg1 ;
-(BOOL)shouldStopPreviousSession;
-(void)client_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)client_didUpdateWorkoutConfiguration:(id)arg1 ;
-(BOOL)_queue_shouldAttemptRecovery;
-(void)_queue_markRecoveryRequired;
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(void)stopActivityWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)associatedWorkoutBuilderWithDevice:(id)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 ;
-(void)startActivityWithDate:(id)arg1 ;
-(void)stopActivityWithDate:(id)arg1 ;
-(id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2 ;
-(id)initWithHealthStore:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)associatedWorkoutBuilder;
-(void)_unitTest_discardAssociatedWorkoutBuilder;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(NSDate *)startDate;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
-(void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6 ;
-(void)stateMachine:(id)arg1 didIgnoreEvent:(long long)arg2 state:(id)arg3 ;
-(void)_recoverWithCompletion:(/*^block*/id)arg1 ;
-(long long)locationType;
-(long long)state;
-(void)_setupWithHealthStore:(id)arg1 ;
-(void)startActivityWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pauseWithCompletion:(/*^block*/id)arg1 ;
-(void)_setAssociatedWorkoutBuilder:(id)arg1 ;
-(id)_initWithHealthStore:(id)arg1 taskConfiguration:(id)arg2 error:(id*)arg3 ;
-(NSString *)description;
@end
