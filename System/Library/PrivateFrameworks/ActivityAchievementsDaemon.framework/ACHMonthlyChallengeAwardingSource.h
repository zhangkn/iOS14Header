/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDCurrentActivitySummaryHelperObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/ACHEarnedInstanceAwarding.h>
#import <libobjc.A.dylib/ACHAchievementProgressProviding.h>

@class NSString, HDProfile, ACHEarnedInstanceAwardingEngine, ACHAchievementProgressEngine, ACHTemplateStore, ACHEarnedInstanceStore, ACHMonthlyChallengeDataSource;

@interface ACHMonthlyChallengeAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding> {

	unsigned char _creatorDevice;
	HDProfile* _profile;
	ACHEarnedInstanceAwardingEngine* _engine;
	ACHAchievementProgressEngine* _progressProvider;
	ACHTemplateStore* _templateStore;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	ACHMonthlyChallengeDataSource* _monthlyDataSource;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                            //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHEarnedInstanceAwardingEngine * engine;                       //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic,__weak) ACHAchievementProgressEngine * progressProvider;                //@synthesize progressProvider=_progressProvider - In the implementation block
@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;                               //@synthesize templateStore=_templateStore - In the implementation block
@property (assign,nonatomic,__weak) ACHEarnedInstanceStore * earnedInstanceStore;                   //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
@property (assign,nonatomic,__weak) ACHMonthlyChallengeDataSource * monthlyDataSource;              //@synthesize monthlyDataSource=_monthlyDataSource - In the implementation block
@property (assign,nonatomic) unsigned char creatorDevice;                                           //@synthesize creatorDevice=_creatorDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(void)setProfile:(HDProfile *)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)daemonReady:(id)arg1 ;
-(ACHEarnedInstanceAwardingEngine *)engine;
-(NSString *)uniqueName;
-(HDProfile *)profile;
-(void)setProgressProvider:(ACHAchievementProgressEngine *)arg1 ;
-(ACHAchievementProgressEngine *)progressProvider;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(void)setEngine:(ACHEarnedInstanceAwardingEngine *)arg1 ;
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(ACHTemplateStore *)templateStore;
-(unsigned char)creatorDevice;
-(void)setCreatorDevice:(unsigned char)arg1 ;
-(void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3 ;
-(void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3 ;
-(id)_earnedInstancesForInterval:(id)arg1 ;
-(void)_requestIncrementalEvaluation;
-(id)_evaluationEnvironmentForTemplate:(id)arg1 ;
-(ACHMonthlyChallengeDataSource *)monthlyDataSource;
-(id)_monthlyChallengeTemplatesForHistoricalInterval:(id)arg1 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)providesProgressForTemplate:(id)arg1 ;
-(id)currentProgressQuantityForTemplate:(id)arg1 ;
-(id)currentGoalQuantityForTemplate:(id)arg1 ;
-(id)initWithProfile:(id)arg1 awardingEngine:(id)arg2 templateStore:(id)arg3 earnedInstanceStore:(id)arg4 monthlyDataSource:(id)arg5 creatorDevice:(unsigned char)arg6 progressProvider:(id)arg7 ;
-(void)setMonthlyDataSource:(ACHMonthlyChallengeDataSource *)arg1 ;
@end
