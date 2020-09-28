/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeAndDistanceUpdaterDelegate <NSObject>
@required
-(void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;

@end
