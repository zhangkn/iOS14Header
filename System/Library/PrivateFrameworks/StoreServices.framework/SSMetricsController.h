/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSMetricsConfiguration, NSObject;

@interface SSMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSMetricsConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _flushSerialQueue;
	BOOL _flushTimerEnabled;
	BOOL _flushOnForeground;
	/*^block*/id _flushTimerBlock;
	NSObject*<OS_dispatch_queue> _flushTimerQueue;

}

@property (assign,getter=isFlushTimerEnabled,nonatomic) BOOL flushTimerEnabled;              //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
-(BOOL)isDisabled;
-(id)serialQueue;
-(void)setGlobalConfiguration:(id)arg1 ;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)pingURLs;
-(id)_userType;
-(void)_applicationWillEnterForeground;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)_connection;
-(void)recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2 ;
-(id)_cookieValuesForConfiguration:(id)arg1 ;
-(void)_flushUnreportedEventsIfEnabled;
-(void)_handleFlushTimer;
-(void)_setupFlushTimer;
-(void)insertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)_valueForField:(id)arg1 withFieldData:(id)arg2 ;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3 ;
-(void)setPageConfiguration:(id)arg1 ;
-(BOOL)isFlushTimerEnabled;
-(id)configuration;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
@end
