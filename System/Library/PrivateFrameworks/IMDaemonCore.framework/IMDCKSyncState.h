/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMKeyValueCollectionDelegate.h>

@protocol IMDCKSyncStateDelegate;
@class IMKeyValueCollection, NSDate, NSDictionary, NSArray, NSString;

@interface IMDCKSyncState : NSObject <IMKeyValueCollectionDelegate> {

	IMKeyValueCollection* _storage;
	id<IMDCKSyncStateDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long syncControllerSyncState; 
@property (assign,nonatomic) long long syncControllerRecordType; 
@property (assign,getter=isSyncing,nonatomic) BOOL syncing; 
@property (assign,getter=isStartingPeriodicSyncSetByCloudKitHooks,nonatomic) BOOL startingPeriodicSyncSetByCloudKitHooks; 
@property (assign,getter=isStartingInitialSyncSetByCloudKitHooks,nonatomic) BOOL startingInitialSyncSetByCloudKitHooks; 
@property (nonatomic,readonly) IMKeyValueCollection * keyValueCollection;                                                              //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic,__weak) id<IMDCKSyncStateDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isFeatureEnabled,nonatomic) BOOL featureEnabled; 
@property (assign,nonatomic) BOOL createdChatZone; 
@property (assign,nonatomic) BOOL deletedZones; 
@property (assign,getter=isEligibleForTruthZone,nonatomic) BOOL eligibleForTruthZone; 
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled; 
@property (assign,getter=isRemovedFromBackup,nonatomic) BOOL removedFromBackup; 
@property (assign,getter=isInExitState,nonatomic) BOOL inExitState; 
@property (assign,getter=isSyncingPaused,nonatomic) BOOL syncingPaused; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (assign,getter=isDisablingDevices,nonatomic) BOOL disablingDevices; 
@property (assign,getter=isStartingEnabledSettingChange,nonatomic) BOOL startingEnabledSettingChange; 
@property (nonatomic,copy) NSDictionary * analyticSyncDatesDictionary; 
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (assign,nonatomic) long long accountStatus; 
@property (nonatomic,readonly) NSArray * syncErrors; 
@property (assign,nonatomic) long long syncControllerSyncType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logHandle;
+(void)removeBuildObjectsFromDict:(id)arg1 ;
-(BOOL)isSyncingEnabled;
-(void)setExitDate:(NSDate *)arg1 ;
-(void)clearLocalCloudKitSyncState;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(void)setStartingInitialSyncWithRecordType:(long long)arg1 ;
-(void)setDeletedZones:(BOOL)arg1 ;
-(id)serializedRepresentation;
-(void)setInExitState:(BOOL)arg1 ;
-(void)setErrorToKeyRollingError;
-(BOOL)isFeatureEnabled;
-(BOOL)isStartingInitialSyncSetByCloudKitHooks;
-(long long)syncControllerSyncType;
-(BOOL)isStartingPeriodicSyncSetByCloudKitHooks;
-(void)setSyncingFinished;
-(id)initWithKeyValueCollection:(id)arg1 ;
-(void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2 ;
-(BOOL)isSyncingPaused;
-(BOOL)isRemovedFromBackup;
-(BOOL)isInExitState;
-(id)describeErrors;
-(BOOL)deletedZones;
-(BOOL)isSyncing;
-(long long)syncControllerRecordType;
-(void)setEligibleForTruthZone:(BOOL)arg1 ;
-(unsigned long long)syncControllerSyncState;
-(void)_removeObjectForKey:(id)arg1 forDictionary:(id)arg2 ;
-(NSArray *)syncErrors;
-(id)syncReportDictionaryForAttempt:(unsigned long long)arg1 withSuccess:(BOOL)arg2 ;
-(void)addSyncError:(id)arg1 ;
-(BOOL)createdChatZone;
-(void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2 ;
-(id)syncReportDictionary;
-(id)init;
-(void)_setStartingSync;
-(void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)arg1 ;
-(void)setStartingEnabledSettingChange:(BOOL)arg1 ;
-(void)clearSyncErrors;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)setDelegate:(id<IMDCKSyncStateDelegate>)arg1 ;
-(void)_finishBatchChange;
-(long long)accountStatus;
-(void)setErrorToAccountNeedsRepair;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 ;
-(NSDate *)exitDate;
-(BOOL)isDisablingDevices;
-(void)setAccountStatus:(long long)arg1 ;
-(id)syncUserType;
-(void)setAnalyticSyncDatesDictionaryObject:(id)arg1 forKey:(id)arg2 shouldOverrideIfExists:(BOOL)arg3 ;
-(id<IMDCKSyncStateDelegate>)delegate;
-(BOOL)isStartingEnabledSettingChange;
-(void)setStartingPeriodicSyncWithRecordType:(long long)arg1 ;
-(void)setSyncControllerSyncType:(long long)arg1 ;
-(void)setDisablingDevices:(BOOL)arg1 ;
-(BOOL)_shouldReportNewUserIfCreatedChatZones:(BOOL)arg1 deletedZones:(BOOL)arg2 ;
-(void)setSyncControllerRecordType:(long long)arg1 ;
-(void)setStartingPeriodicSyncSetByCloudKitHooks:(BOOL)arg1 ;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 withRecordType:(long long)arg2 ;
-(id)logHandle;
-(void)setAnalyticSyncDatesDictionary:(NSDictionary *)arg1 ;
-(BOOL)isEligibleForTruthZone;
-(IMKeyValueCollection *)keyValueCollection;
-(void)setRemovedFromBackup:(BOOL)arg1 ;
-(void)setCreatedChatZone:(BOOL)arg1 ;
-(id)_describeErrors:(id)arg1 ;
-(void)broadcastSyncState;
-(NSDate *)lastSyncDate;
-(NSDictionary *)analyticSyncDatesDictionary;
-(void)setStartingInitialSyncSetByCloudKitHooks:(BOOL)arg1 ;
-(void)setSyncingPaused:(BOOL)arg1 ;
-(id)getAnalyticSyncDatesObjectForKey:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3 shouldSetBuild:(BOOL)arg4 ;
-(void)setFeatureEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(void)setSyncing:(BOOL)arg1 ;
-(void)_startBatchChange;
@end
