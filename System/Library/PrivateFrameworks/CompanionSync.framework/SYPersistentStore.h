/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction, OS_dispatch_queue;
#import <CompanionSync/CompanionSync-Structs.h>
@class NSString, NSObject, NSMutableDictionary, NSMutableSet, NSSet, _SYSharedServiceDB, NSDate, NSError, NSDictionary;

@interface SYPersistentStore : NSObject {

	NSString* _path;
	CFStringRef _loggingFacility;
	double _timeToLiveCache;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _changeTrackingEnabled;
	NSString* _peerID;
	NSMutableDictionary* _peerSeqnoSets;
	NSMutableSet* _ignoringMessageIDs;
	NSObject*<OS_dispatch_queue> _syncQ;
	sqlite3Ref _db;
	sqlite3_stmtRef _getInFullSync;
	sqlite3_stmtRef _getChangeCount;
	sqlite3_stmtRef _getNextExpireTime;
	sqlite3_stmtRef _purgeExpiredChanges;
	sqlite3_stmtRef _insertChange;
	sqlite3_stmtRef _getFullsyncSent;
	sqlite3_stmtRef _setFullsyncSent;
	sqlite3_stmtRef _logSyncComplete;
	sqlite3_stmtRef _getChangeIDsSinceVersion;
	sqlite3_stmtRef _getLocalVersion;
	sqlite3_stmtRef _getOldestVersion;
	sqlite3_stmtRef _setVectorClock;
	sqlite3_stmtRef _setPeerSeqNo;
	sqlite3_stmtRef _getPeerSeqNo;
	sqlite3_stmtRef _setPeerSeqNoSet;
	sqlite3_stmtRef _enterFullSync;
	sqlite3_stmtRef _exitFullSync;
	sqlite3_stmtRef _getIgnoringSyncID;
	sqlite3_stmtRef _getCurrentSyncID;
	sqlite3_stmtRef _getCurrentSyncStartTime;
	sqlite3_stmtRef _getLastEndedSyncID;
	sqlite3_stmtRef _getWaitingForSyncID;
	sqlite3_stmtRef _setWaitingForSyncID;
	sqlite3_stmtRef _setAllSentForSyncID;
	sqlite3_stmtRef _getAllSentForCurrentSync;
	sqlite3_stmtRef _getLastSyncError;
	sqlite3_stmtRef _setSyncUserInfo;
	sqlite3_stmtRef _getSyncUserInfo;
	sqlite3_stmtRef _setSyncIDSOptions;
	sqlite3_stmtRef _getSyncIDSOptions;
	BOOL _cachedVersionStale;
	double _unfinishedSyncTimeout;
	NSSet* _cachedChangedSyncIDs;
	unsigned long long _cachedChangedSyncIDsVersion;
	_SYSharedServiceDB* _sharedDB;

}

@property (nonatomic,retain) NSSet * cachedChangedSyncIDs;                                       //@synthesize cachedChangedSyncIDs=_cachedChangedSyncIDs - In the implementation block
@property (assign,nonatomic) unsigned long long cachedChangedSyncIDsVersion;                     //@synthesize cachedChangedSyncIDsVersion=_cachedChangedSyncIDsVersion - In the implementation block
@property (assign,nonatomic) BOOL cachedVersionStale;                                            //@synthesize cachedVersionStale=_cachedVersionStale - In the implementation block
@property (nonatomic,retain) _SYSharedServiceDB * sharedDB;                                      //@synthesize sharedDB=_sharedDB - In the implementation block
@property (assign,getter=isPerformingDeltaSync,nonatomic) BOOL performingDeltaSync; 
@property (nonatomic,readonly) NSString * path; 
@property (assign,nonatomic) double timeToLive; 
@property (nonatomic,readonly) unsigned long long changeCount; 
@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,retain) NSString * vectorClockJSON; 
@property (nonatomic,copy) NSDate * overflowResyncTime; 
@property (nonatomic,copy) NSDate * lastMessageReceived; 
@property (assign,nonatomic) double unfinishedSyncTimeout;                                       //@synthesize unfinishedSyncTimeout=_unfinishedSyncTimeout - In the implementation block
@property (nonatomic,readonly) BOOL canStartNewSyncSession; 
@property (nonatomic,readonly) BOOL currentSyncSendComplete; 
@property (nonatomic,readonly) BOOL lastSyncFailed; 
@property (nonatomic,readonly) NSError * lastSyncError; 
@property (nonatomic,readonly) NSString * currentFullSyncID; 
@property (nonatomic,readonly) BOOL inFullSync; 
@property (nonatomic,readonly) NSString * lastSyncEndID; 
@property (nonatomic,copy) NSString * waitingForSyncEndID; 
@property (nonatomic,copy) NSDictionary * fullSyncUserInfo; 
@property (nonatomic,copy) NSDictionary * fullSyncIDSOptions; 
@property (assign,nonatomic) BOOL completedSync; 
@property (nonatomic,readonly) double durationOfLastFullSync; 
@property (nonatomic,readonly) unsigned long long currentLocalVersion; 
@property (nonatomic,readonly) unsigned long long lastSeenRemoteVersion; 
+(BOOL)_tableEmpty:(id)arg1 db:(sqlite3Ref)arg2 ;
+(id)sharedPersistentStoreForService:(id)arg1 ;
+(id)_loadOrCreatePeerIDForDB:(sqlite3Ref)arg1 ;
-(unsigned long long)changeCount;
-(unsigned long long)currentLocalVersion;
-(double)timeToLive;
-(id)dbPath;
-(id)initWithSharedDatabase:(id)arg1 ;
-(void)_convertTimestamps;
-(NSDate *)overflowResyncTime;
-(NSString *)peerID;
-(BOOL)reassignCurrentSyncID:(id)arg1 ;
-(NSString *)path;
-(sqlite3Ref)_dbRef;
-(void)clearAllChanges;
-(NSError *)lastSyncError;
-(void)setTimeToLive:(double)arg1 ;
-(void)_fixPeerInfo;
-(void)setCachedVersionStale:(BOOL)arg1 ;
-(NSString *)currentFullSyncID;
-(void)_verifyInTransactionForFullSync;
-(unsigned long long)_oldestVersion;
-(void)_setupSharedDB;
-(void)setPerformingDeltaSync:(BOOL)arg1 ;
-(double)unfinishedSyncTimeout;
-(void)setCachedChangedSyncIDsVersion:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)lastSyncFailed;
-(BOOL)logChanges:(id)arg1 error:(id*)arg2 ;
-(BOOL)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2 ;
-(void)setFullSyncIDSOptions:(NSDictionary *)arg1 ;
-(BOOL)ignoringFullSyncWithID:(id)arg1 ;
-(unsigned long long)nextSequenceNumber;
-(void)_loadIgnoreList_LOCKED:(sqlite3Ref)arg1 ;
-(double)durationOfLastFullSync;
-(void)resetSequenceNumbersForPeer:(id)arg1 ;
-(NSDictionary *)fullSyncIDSOptions;
-(void)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2 ;
-(id)init;
-(BOOL)_openDBAtPath:(id)arg1 ;
-(void)exitFullSyncWithID:(id)arg1 error:(id)arg2 ;
-(void)setFullSyncUserInfo:(NSDictionary *)arg1 ;
-(void)changeTrackingToggled:(BOOL)arg1 ;
-(void)removeMessageIDFromIgnoreList:(id)arg1 ;
-(void)enterFullSyncWithID:(id)arg1 ignoring:(BOOL)arg2 ;
-(unsigned long long)_lastSequenceNumberForPeerID_LOCKED:(id)arg1 db:(sqlite3Ref)arg2 ;
-(BOOL)sequenceNumberIsDuplicate:(unsigned long long)arg1 forPeer:(id)arg2 ;
-(BOOL)isPerformingDeltaSync;
-(void)setCachedChangedSyncIDs:(NSSet *)arg1 ;
-(void)setWaitingForSyncEndID:(NSString *)arg1 ;
-(NSSet *)cachedChangedSyncIDs;
-(NSString *)vectorClockJSON;
-(void)setUnfinishedSyncTimeout:(double)arg1 ;
-(BOOL)inFullSync;
-(void)setLastMessageReceived:(NSDate *)arg1 ;
-(unsigned long long)cachedChangedSyncIDsVersion;
-(void)_withDB:(/*^block*/id)arg1 ;
-(id)_decodeIndexSet:(id)arg1 ;
-(void)_saveIgnoreList_LOCKED:(sqlite3Ref)arg1 ;
-(BOOL)logSyncCompletionToRemoteVersion:(unsigned long long)arg1 ;
-(BOOL)_inTransaction:(BOOL)arg1 do:(/*^block*/id)arg2 ;
-(unsigned long long)lastSeenRemoteVersion;
-(void)sendCompletedForSyncWithID:(id)arg1 ;
-(BOOL)completedSync;
-(id)lastDBErrorInfo;
-(BOOL)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2 error:(id*)arg3 ;
-(BOOL)canStartNewSyncSession;
-(BOOL)currentSyncSendComplete;
-(void)setCompletedSync:(BOOL)arg1 ;
-(void)setVectorClockJSON:(NSString *)arg1 ;
-(void)addMessageIDsToIgnore:(id)arg1 ;
-(NSString *)waitingForSyncEndID;
-(NSDate *)lastMessageReceived;
-(BOOL)cachedVersionStale;
-(unsigned long long)lastSequenceNumberForPeerID:(id)arg1 ;
-(void)_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2 ;
-(BOOL)_LOCKED_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2 db:(sqlite3Ref)arg3 error:(id*)arg4 ;
-(void)_prepareStatements;
-(_SYSharedServiceDB *)sharedDB;
-(NSString *)lastSyncEndID;
-(BOOL)shouldIgnoreMessageID:(id)arg1 ;
-(void)setPeerID:(NSString *)arg1 ;
-(id)_encodeIndexSet:(id)arg1 ;
-(id)_sequenceNumberSetForPeerID:(id)arg1 inDB:(sqlite3Ref)arg2 ;
-(int)_getSchemaVersion;
-(void)setOverflowResyncTime:(NSDate *)arg1 ;
-(id)initWithPath:(id)arg1 loggingFacility:(const CFStringRef)arg2 changeTrackingEnabled:(BOOL)arg3 ;
-(NSDictionary *)fullSyncUserInfo;
-(void)resetSequenceNumber:(unsigned long long)arg1 ;
-(void)_cacheTTL;
-(void)setSharedDB:(_SYSharedServiceDB *)arg1 ;
@end
