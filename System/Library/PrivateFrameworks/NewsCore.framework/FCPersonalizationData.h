/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCDerivedPersonalizationData.h>
#import <libobjc.A.dylib/FCPersonalizationDataSource.h>

@protocol OS_dispatch_queue, FCOperationThrottler;
@class NSData, NSMutableDictionary, NSMutableArray, CKRecord, NSObject, FCPersonalizationTreatment, NSString;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCAppActivityObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource> {

	BOOL _attemptingUpload;
	NSData* _pbData;
	NSMutableDictionary* _aggregates;
	NSMutableDictionary* _openChangeGroupDeltas;
	NSMutableArray* _closedChangeGroups;
	CKRecord* _remoteRecord;
	NSObject*<OS_dispatch_queue> _accessQueue;
	FCPersonalizationTreatment* _treatment;
	id<FCOperationThrottler> _saveThrottler;

}

@property (nonatomic,retain) NSMutableDictionary * aggregates;                                     //@synthesize aggregates=_aggregates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * openChangeGroupDeltas;                          //@synthesize openChangeGroupDeltas=_openChangeGroupDeltas - In the implementation block
@property (nonatomic,retain) NSMutableArray * closedChangeGroups;                                  //@synthesize closedChangeGroups=_closedChangeGroups - In the implementation block
@property (nonatomic,retain) CKRecord * remoteRecord;                                              //@synthesize remoteRecord=_remoteRecord - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (retain) FCPersonalizationTreatment * treatment;                                         //@synthesize treatment=_treatment - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> saveThrottler;                               //@synthesize saveThrottler=_saveThrottler - In the implementation block
@property (assign) BOOL attemptingUpload;                                                          //@synthesize attemptingUpload=_attemptingUpload - In the implementation block
@property (nonatomic,readonly) FCPersonalizationTreatment * personalizationTreatment; 
@property (nonatomic,readonly) NSData * pbData;                                                    //@synthesize pbData=_pbData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backingRecordZoneIDs;
+(BOOL)requiresBatchedSync;
+(id)backingRecordIDs;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(id)desiredKeys;
+(long long)commandQueueUrgency;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(BOOL)requiresHighPriorityFirstSync;
+(id)localStoreMigrator;
+(BOOL)requiresPushNotificationSupport;
-(id<FCOperationThrottler>)saveThrottler;
-(void)setSaveThrottler:(id<FCOperationThrottler>)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)d_allResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRemoteRecord:(CKRecord *)arg1 ;
-(id)aggregateForFeatureKey:(id)arg1 ;
-(void)prepareAggregatesForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 groupBias:(double)arg7 ;
-(void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 groupType:(long long)arg5 individually:(BOOL)arg6 configurableValues:(id)arg7 featuresUpdatedBlock:(/*^block*/id)arg8 ;
-(void)addObserver:(id)arg1 ;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(id)initWithAggregates:(id)arg1 ;
-(NSMutableArray *)closedChangeGroups;
-(void)removeObserver:(id)arg1 ;
-(NSData *)pbData;
-(NSMutableDictionary *)openChangeGroupDeltas;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(void)loadLocalCachesFromStore;
-(void)_applicationDidEnterForeground;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)setAggregates:(NSMutableDictionary *)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(void)_closeOpenChangeGroupFromInstance:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(void)saveReadableAggregates;
-(id)init;
-(id)createAggregateWith:(id)arg1 clicks:(double)arg2 impressions:(double)arg3 ;
-(CKRecord *)remoteRecord;
-(id)aggregatesForFeatures:(id)arg1 ;
-(FCPersonalizationTreatment *)treatment;
-(id)lookupAggregatesWith:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id)_instanceIdentifier;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)enumerateAggregatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setAttemptingUpload:(BOOL)arg1 ;
-(void)_reloadTreatment;
-(void)_updateWithRemoteRecord:(id)arg1 profile:(id)arg2 ;
-(void)setClosedChangeGroups:(NSMutableArray *)arg1 ;
-(BOOL)attemptingUpload;
-(void)updateAggregatesWith:(id)arg1 creationBlock:(/*^block*/id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)cacheGSToken;
-(void)activityObservingApplicationWindowDidBecomeBackground;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)clearPersonalizationData;
-(void)setTreatment:(FCPersonalizationTreatment *)arg1 ;
-(void)_writeToLocalStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setOpenChangeGroupDeltas:(NSMutableDictionary *)arg1 ;
-(void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(id)baselineAggregateWithConfigurableValues:(id)arg1 ;
-(id)d_allGlobalAggregates;
-(id)initWithPBData:(id)arg1 treatment:(id)arg2 ;
-(NSMutableDictionary *)aggregates;
-(void)submitPersonalizationVector;
-(void)activityObservingApplicationWillTerminate;
@end
