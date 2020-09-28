/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKWorkoutRoute, NSArray, HDDaemonTransaction;

@interface HDSmoothingTask : NSObject {

	HKWorkoutRoute* _sample;
	NSArray* _unsmoothedLocations;
	/*^block*/id _completionHandler;
	HDDaemonTransaction* _transaction;
	unsigned long long _smoothingAttempts;

}

@property (nonatomic,retain) HKWorkoutRoute * sample;                        //@synthesize sample=_sample - In the implementation block
@property (nonatomic,retain) NSArray * unsmoothedLocations;                  //@synthesize unsmoothedLocations=_unsmoothedLocations - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) HDDaemonTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign) unsigned long long smoothingAttempts;                     //@synthesize smoothingAttempts=_smoothingAttempts - In the implementation block
-(HKWorkoutRoute *)sample;
-(HDDaemonTransaction *)transaction;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTransaction:(HDDaemonTransaction *)arg1 ;
-(void)setSample:(HKWorkoutRoute *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(id)description;
-(id)completionHandler;
-(NSArray *)unsmoothedLocations;
-(void)setUnsmoothedLocations:(NSArray *)arg1 ;
-(unsigned long long)smoothingAttempts;
-(void)setSmoothingAttempts:(unsigned long long)arg1 ;
@end
