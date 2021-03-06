/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSMetricsDataSource.h>

@protocol OS_dispatch_queue;
@class AMSMetricsDatabase, NSString, NSObject;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource> {

	AMSMetricsDatabase* _database;
	NSString* _containerIdentifier;
	NSString* _currentLockKey;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) AMSMetricsDatabase * database;                 //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSString * currentLockKey;                       //@synthesize currentLockKey=_currentLockKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) long long eventCount; 
-(void)cancel;
-(NSString *)containerIdentifier;
-(AMSMetricsDatabase *)database;
-(void)didFinishBatching;
-(void)setCurrentLockKey:(NSString *)arg1 ;
-(id)enqueueEvents:(id)arg1 ;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)removeAllEvents;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2 ;
-(NSString *)currentLockKey;
-(void)removeEvents:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)skipEvents:(id)arg1 error:(id*)arg2 ;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)eventCount;
@end

