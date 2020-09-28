/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, SDConnectionConfiguration, NSMutableOrderedSet;

@interface CSSearchClientConnection : NSObject {

	AI _outBatchCount;
	NSMutableDictionary* _queryTasks;
	SDConnectionConfiguration* _configuration;
	NSMutableOrderedSet* _pausedTasks;

}

@property (nonatomic,readonly) unsigned outBatchCount; 
@property (nonatomic,retain) NSMutableDictionary * queryTasks;                       //@synthesize queryTasks=_queryTasks - In the implementation block
@property (nonatomic,retain) SDConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pausedTasks;                      //@synthesize pausedTasks=_pausedTasks - In the implementation block
-(id)protectionClass;
-(void)_didReceiveResultsBatchCompletion;
-(id)queryTask:(long long)arg1 ;
-(NSMutableOrderedSet *)pausedTasks;
-(void)cancelQueryTasks;
-(void)dealloc;
-(void)cancelQueryTask:(long long)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2 ;
-(id)initWithConnectionConfiguration:(id)arg1 ;
-(void)setPausedTasks:(NSMutableOrderedSet *)arg1 ;
-(void)setQueryTask:(id)arg1 forQueryID:(long long)arg2 ;
-(BOOL)searchInternal;
-(NSMutableDictionary *)queryTasks;
-(SDConnectionConfiguration *)configuration;
-(void)setQueryTasks:(NSMutableDictionary *)arg1 ;
-(id)bundleID;
-(unsigned)outBatchCount;
-(void)setConfiguration:(SDConnectionConfiguration *)arg1 ;
@end
