/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSCoalescingQueue, NSDictionary;

@interface SSMetricsTimingDefaults : NSObject {

	BOOL _runningTests;
	SSCoalescingQueue* _updateQueue;
	NSDictionary* _cachedValues;

}

@property (nonatomic,retain) SSCoalescingQueue * updateQueue;                      //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedValues;                          //@synthesize cachedValues=_cachedValues - In the implementation block
@property (assign,getter=isRunningTests,nonatomic) BOOL runningTests;              //@synthesize runningTests=_runningTests - In the implementation block
@property (readonly) NSDictionary * values; 
@property (readonly) double sessionDurationLoadURL; 
@property (readonly) double samplingPercentageUsersLoadURL; 
@property (readonly) double samplingPercentageCachedResponsesLoadURL; 
@property (readonly) double sessionDurationPageRender; 
@property (readonly) double samplingPercentageUsersPageRender; 
+(id)sharedInstance;
+(id)sharedInstanceWithSessionDelegate:(id)arg1 ;
-(NSDictionary *)values;
-(SSCoalescingQueue *)updateQueue;
-(double)samplingPercentageCachedResponsesLoadURL;
-(void)setRunningTests:(BOOL)arg1 ;
-(double)sessionDurationPageRender;
-(id)initWithSessionDelegate:(id)arg1 ;
-(void)setCachedValues:(NSDictionary *)arg1 ;
-(void)update;
-(NSDictionary *)cachedValues;
-(void)setUpdateQueue:(SSCoalescingQueue *)arg1 ;
-(double)samplingPercentageUsersLoadURL;
-(double)sessionDurationLoadURL;
-(BOOL)isRunningTests;
-(double)samplingPercentageUsersPageRender;
@end
