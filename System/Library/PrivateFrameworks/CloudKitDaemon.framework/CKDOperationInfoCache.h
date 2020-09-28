/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CKDOperationInfoCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSObject*<OS_dispatch_queue> _cacheDelegateQueue;
	NSMutableDictionary* _delegateWrappersByOperationID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;                          //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheDelegateQueue;                  //@synthesize cacheDelegateQueue=_cacheDelegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * delegateWrappersByOperationID;              //@synthesize delegateWrappersByOperationID=_delegateWrappersByOperationID - In the implementation block
+(id)dbFileName;
+(id)sharedCache;
-(id)_initWithCacheDir:(id)arg1 ;
-(void)registerCacheEvictionActivity;
-(id)operationInfoMetadataForOperationWithID:(id)arg1 ;
-(void)_lockedArchiveCallback:(id)arg1 forOperationID:(id)arg2 ;
-(void)_lockedSetOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4 ;
-(void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(id)_locked_operationInfoForID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(NSObject*<OS_dispatch_queue>)cacheDelegateQueue;
-(void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)enumerateCallbacksForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_locked_enumerateCallbacksForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)arg1 ;
-(id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1 accountID:(id)arg2 ;
-(void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4 ;
-(void)registerAttemptForOperationWithID:(id)arg1 ;
-(id)outstandingOperationInfosForIDs:(id)arg1 ;
-(void)archiveCallback:(id)arg1 forOperationID:(id)arg2 ;
-(void)setDelegateWrappersByOperationID:(NSMutableDictionary *)arg1 ;
-(void)setCacheDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)delegateWrappersByOperationID;
-(void)deleteAllInfoForOperationWithID:(id)arg1 ;
-(void)expungeOperationInfoForDeletedAccountID:(id)arg1 ;
@end
