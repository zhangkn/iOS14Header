/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface AATracker : NSObject {

	 name;
	 identifier;
	 tracker;
	 eventMirrorStore;

}

@property (readonly,nonatomic) NSArray * path; 
@property (readonly,nonatomic) NSArray * debugPath; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * identifier; 
-(NSArray *)path;
-(void)leaveGroup;
-(void)enterGroup;
-(void)suspend;
-(NSArray *)debugPath;
-(void)resume;
-(void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(BOOL)arg2 ;
-(void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(BOOL)arg2 startTime:(id)arg3 ;
-(void)submitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 ;
-(void)submitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)submitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 ;
-(void)timeEventType:(Class)arg1 ;
-(void)submitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 ;
-(void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)timeEventType:(Class)arg1 startTime:(id)arg2 ;
-(void)timeEventType:(Class)arg1 submitAndRestartWithSession:(BOOL)arg2 ;
-(void)timeEventType:(Class)arg1 submitAndRestartWithSession:(BOOL)arg2 startTime:(id)arg3 ;
-(void)timeRawEvent:(id)arg1 ;
-(void)timeRawEvent:(id)arg1 startTime:(id)arg2 ;
-(void)submitEventType:(Class)arg1 ;
-(void)submitEventType:(Class)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitRawEvent:(id)arg1 ;
-(void)submitRawEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ifSession:(/*^block*/id)arg1 ;
-(void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2 ;
-(void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)popDataEventType:(Class)arg1 ;
-(void)pushDataEvent:(id)arg1 traits:(id)arg2 file:(id)arg3 line:(long long)arg4 ;
-(void)popDataEventByName:(id)arg1 ;
-(id)delayedSubmitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)delayedSubmitEventType:(Class)arg1 ;
-(id)delayedSubmitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)explicitSubmitEvent:(Class)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)delayedSubmitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 ;
-(id)delayedSubmitEventType:(Class)arg1 completion:(/*^block*/id)arg2 ;
-(id)delayedSubmitRawEvent:(id)arg1 ;
-(id)delayedSubmitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 ;
-(id)delayedSubmitRawEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)explicitSubmitEvent:(Class)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 ;
-(void)explicitSubmitEvent:(Class)arg1 submitTime:(id)arg2 ;
-(void)explicitSubmitEvent:(Class)arg1 submitTime:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)chainWithName:(id)arg1 ;
-(id)chainWithName:(id)arg1 identifier:(id)arg2 ;
-(id)onSessionChangeWithBlock:(/*^block*/id)arg1 ;
-(void)whenSession:(/*^block*/id)arg1 ;
-(void)removeSessionObserversForObject:(id)arg1 ;
-(void)enterGroupWithName:(id)arg1 ;
-(void)transactionWithBlock:(/*^block*/id)arg1 ;
-(NSString *)identifier;
-(id)init;
-(NSString *)name;
@end

