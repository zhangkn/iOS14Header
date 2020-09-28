/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKStateMachineDelegate <NSObject>
@optional
-(void)stateMachine:(id)arg1 persistTransition:(id)arg2;
-(void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
-(void)stateMachine:(id)arg1 willEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 willLeaveState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didLeaveState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didIgnoreEvent:(long long)arg2 state:(id)arg3;

@end
