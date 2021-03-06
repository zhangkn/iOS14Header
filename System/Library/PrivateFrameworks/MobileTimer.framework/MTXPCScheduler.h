/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTSchedulingDelegate.h>

@class NSString;

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate> {

	NSString* _eventName;

}

@property (nonatomic,copy) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)xpcSchedulerWithEvent:(id)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)scheduleTimerForSeconds:(double)arg1 ;
-(void)unscheduleTimer;
-(NSString *)eventName;
-(void)unscheduleActivity;
-(void)setEventName:(NSString *)arg1 ;
-(void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(/*^block*/id)arg2 performImmediately:(BOOL)arg3 ;
-(void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(/*^block*/id)arg2 ;
@end

