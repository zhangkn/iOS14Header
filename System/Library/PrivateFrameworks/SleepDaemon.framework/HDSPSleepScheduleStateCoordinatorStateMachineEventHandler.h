/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSPSleepScheduleStateCoordinatorStateMachineEventHandler <HKSPStateMachineEventHandler>
@required
-(void)significantTimeChange;
-(void)bedtimeReached;
-(void)bedtimeDelayed;
-(void)wakeTimeReached;
-(void)windDownSkipped;
-(void)windDownReached;
-(void)bedtimeSkipped;
-(void)wakeUpConfirmed;
-(void)scheduleModelChanged;
-(void)timeZoneChange;

@end

