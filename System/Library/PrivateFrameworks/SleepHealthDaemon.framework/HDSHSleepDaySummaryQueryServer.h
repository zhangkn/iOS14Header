/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKSHSleepDaySummaryQueryConfiguration;

@interface HDSHSleepDaySummaryQueryServer : HDQueryServer {

	HKSHSleepDaySummaryQueryConfiguration* _configuration;

}
+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(id)objectTypes;
-(BOOL)_queue_surfaceDaySummariesWithError:(id*)arg1 ;
@end

