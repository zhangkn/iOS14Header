/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSDate, NSObject, NSMutableDictionary;

@interface DADClientAccountTimers : NSObject {

	NSDate* _lastAllFolderContentsRequestDate;
	NSDate* _lastFolderListRequestDate;
	NSDate* _lastFolderWipeRequestDate;
	NSObject*<OS_dispatch_source> _deferredAllFolderContentsSource;
	NSObject*<OS_dispatch_source> _deferredFolderListSource;
	NSObject*<OS_dispatch_source> _deferredFolderContentsSource;
	NSMutableDictionary* _folderIdToLastFolderContentsRequestDate;

}

@property (nonatomic,retain) NSMutableDictionary * folderIdToLastFolderContentsRequestDate;                     //@synthesize folderIdToLastFolderContentsRequestDate=_folderIdToLastFolderContentsRequestDate - In the implementation block
@property (nonatomic,retain) NSDate * lastAllFolderContentsRequestDate;                                         //@synthesize lastAllFolderContentsRequestDate=_lastAllFolderContentsRequestDate - In the implementation block
@property (nonatomic,retain) NSDate * lastFolderListRequestDate;                                                //@synthesize lastFolderListRequestDate=_lastFolderListRequestDate - In the implementation block
@property (nonatomic,retain) NSDate * lastFolderWipeRequestDate;                                                //@synthesize lastFolderWipeRequestDate=_lastFolderWipeRequestDate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredAllFolderContentsSource;              //@synthesize deferredAllFolderContentsSource=_deferredAllFolderContentsSource - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredFolderListSource;                     //@synthesize deferredFolderListSource=_deferredFolderListSource - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredFolderContentsSource;                 //@synthesize deferredFolderContentsSource=_deferredFolderContentsSource - In the implementation block
-(long long)clientBehaviorForFolderList;
-(NSMutableDictionary *)folderIdToLastFolderContentsRequestDate;
-(NSObject*<OS_dispatch_source>)deferredFolderContentsSource;
-(NSObject*<OS_dispatch_source>)deferredAllFolderContentsSource;
-(NSObject*<OS_dispatch_source>)deferredFolderListSource;
-(void)dealloc;
-(void)killAllTimers;
-(void)setDeferredAllFolderContentsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(double)deferredTimerInterval;
-(NSDate *)lastFolderListRequestDate;
-(void)setDeferredFolderContentsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)clientBehaviorForFolderContents;
-(void)setDeferredFolderListSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)clientBehaviorForFolderIds:(id)arg1 ;
-(NSDate *)lastFolderWipeRequestDate;
-(void)setLastAllFolderContentsRequestDate:(NSDate *)arg1 ;
-(void)setFolderIdToLastFolderContentsRequestDate:(NSMutableDictionary *)arg1 ;
-(void)setLastFolderContentRequestDate:(id)arg1 forFolderWithId:(id)arg2 ;
-(NSDate *)lastAllFolderContentsRequestDate;
-(BOOL)allowFolderWipe;
-(void)setLastFolderWipeRequestDate:(NSDate *)arg1 ;
-(void)setLastFolderListRequestDate:(NSDate *)arg1 ;
@end
