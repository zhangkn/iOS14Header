/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class HDMCAnalysisManager, HDPeriodicActivity, HDProfile, NSObject, NSString;

@interface HDMCAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {

	HDMCAnalysisManager* _analysisManager;
	HDPeriodicActivity* _activity;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)_queue_performActivityWithCompletion:(/*^block*/id)arg1 ;
-(double)_submissionInterval;
-(id)initWithProfile:(id)arg1 analysisManager:(id)arg2 ;
-(void)_queue_submitAnalyticsWithActivityCompletion:(/*^block*/id)arg1 ;
-(double)_retryInterval;
@end
