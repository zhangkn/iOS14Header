/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXActionResponse, ATXPredictionContext;

@interface ATXActionSessionLog : NSObject {

	unsigned long long _engagementType;
	ATXActionResponse* _actionResponse;
	ATXPredictionContext* _context;
	BOOL _isShadowLog;

}
+(double)roundedElapsedTimeWithStartDate:(id)arg1 endDate:(id)arg2 accuracy:(double)arg3 ;
+(void)performSessionLoggingWithActionResponse:(id)arg1 engagementType:(unsigned long long)arg2 context:(id)arg3 isShadowLog:(BOOL)arg4 forTestingMode:(BOOL)arg5 ;
+(void)logIntentPredictionSession:(id)arg1 ;
+(void)logActionData:(id)arg1 ;
+(double)_bucketize:(double)arg1 bucketSize:(double)arg2 ;
-(id)constructSessionLogDictionaryWithAWDSessionOut:(id*)arg1 forTestingMode:(BOOL)arg2 ;
-(id)initWithActionEngagementType:(unsigned long long)arg1 actionResponse:(id)arg2 context:(id)arg3 isShadowLog:(BOOL)arg4 ;
-(id)init;
-(id)constructActionDataDictionaryWithEngagedIndicesOut:(id*)arg1 andAWDActionOut:(id*)arg2 andEngagementTypeFound:(unsigned long long*)arg3 forTestingMode:(BOOL)arg4 ;
-(void)performSessionLogging:(BOOL)arg1 ;
@end

