/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineEventHandler.h>

@class HDSPWakeDetectionDisabledState, HDSPWakeDetectionWaitingState, HDSPWakeDetectionDetectingState, HDSPWakeDetectionNotifiedState, NSString, NSDate, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel;

@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler> {

	HDSPWakeDetectionDisabledState* _disabledState;
	HDSPWakeDetectionWaitingState* _waitingState;
	HDSPWakeDetectionDetectingState* _detectingState;
	HDSPWakeDetectionNotifiedState* _notifiedState;

}

@property (nonatomic,__weak,readonly) id<HDSPWakeDetectionStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPWakeDetectionStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPWakeDetectionDisabledState * disabledState;                                 //@synthesize disabledState=_disabledState - In the implementation block
@property (nonatomic,readonly) HDSPWakeDetectionWaitingState * waitingState;                                   //@synthesize waitingState=_waitingState - In the implementation block
@property (nonatomic,readonly) HDSPWakeDetectionDetectingState * detectingState;                               //@synthesize detectingState=_detectingState - In the implementation block
@property (nonatomic,readonly) HDSPWakeDetectionNotifiedState * notifiedState;                                 //@synthesize notifiedState=_notifiedState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * relevantOccurrence; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL sleepModeIsOff; 
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(NSDate *)currentDate;
-(HDSPWakeDetectionWaitingState *)waitingState;
-(HDSPWakeDetectionNotifiedState *)notifiedState;
-(unsigned long long)sleepScheduleState;
-(id)stateMachineLog;
-(HDSPWakeDetectionDisabledState *)disabledState;
-(HDSPWakeDetectionDetectingState *)detectingState;
-(id)detectionWindowAfterDate:(id)arg1 ;
-(void)wakeDetectionEventDue;
-(void)wakeupEventDetected:(id)arg1 ;
-(void)postWakeDetectionNotification;
-(HKSPSleepScheduleOccurrence *)relevantOccurrence;
-(void)scheduleWakeDetection;
-(void)unscheduleWakeDetection;
-(void)startWakeDetection;
-(void)stopWakeDetection;
-(BOOL)sleepModeIsOff;
@end
