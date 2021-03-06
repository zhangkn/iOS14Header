/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSpringTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	BOOL fTrackingStarted;
	/*^block*/id fHandler;

}
-(void)dealloc;
-(void)_handleStartStopResponse:(shared_ptr<CLConnectionMessage>*)arg1 handler:(/*^block*/id)arg2 ;
-(void)_startWithHandler:(/*^block*/id)arg1 ;
-(void)_stopWithHandler:(/*^block*/id)arg1 ;
-(void)_querySpringDataFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(void)_teardown;
-(BOOL)_isTracking;
@end

