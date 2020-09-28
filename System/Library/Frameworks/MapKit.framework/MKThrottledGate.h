/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VKTimer;

@interface MKThrottledGate : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _maxAvailableTickets;
	double _availableTickets;
	double _refreshRate;
	NSMutableArray* _waitingJobs;
	VKTimer* _timer;

}
-(void)_timerFired:(id)arg1 ;
-(void)dealloc;
-(BOOL)_dispatchWaitingJobsIfNecessary;
-(void)_ensureTimer;
-(BOOL)_replenishAvailableJobsIfNecessary;
-(id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3 ;
-(void)dispatch:(/*^block*/id)arg1 ;
-(id)description;
@end
