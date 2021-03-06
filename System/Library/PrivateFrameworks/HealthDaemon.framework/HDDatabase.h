/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>
#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDSQLiteDatabaseDelegate.h>
#import <libobjc.A.dylib/HDSQLiteDatabasePoolDelegate.h>
#import <libobjc.A.dylib/HDSQLiteDatabaseProvider.h>
#import <libobjc.A.dylib/HDDatabaseJournalDelegate.h>
#import <libobjc.A.dylib/HDHFDataStoreDelegate.h>
#import <libobjc.A.dylib/HDDatabaseMigrationTransactionDelegate.h>
#import <libobjc.A.dylib/HDHealthDatabase.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class NSObject, HDHFDataStore, NSLock, HKObserverSet, NSMutableArray, NSDate, NSMutableDictionary, HDDatabaseJournal, HDProfile, NSString, HDAssertionManager, NSConditionLock, NSMutableSet, NSHashTable, NSOperationQueue, NSDictionary, HDContentProtectionManager;

@interface HDDatabase : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDiagnosticObject, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate, HDSQLiteDatabaseProvider, HDDatabaseJournalDelegate, HDHFDataStoreDelegate, HDDatabaseMigrationTransactionDelegate, HDHealthDatabase> {

	AB _invalidated;
	NSObject*<OS_dispatch_queue> _serialAsynchronousQueue;
	HDHFDataStore* _hfDataStore;
	NSLock* _writeLock;
	NSObject*<OS_dispatch_queue> _protectedDataQueue;
	HKObserverSet* _protectedDataObservers;
	long long _protectedDataState;
	long long _observedContentProtectionState;
	BOOL _isObservingContentProtection;
	NSMutableArray* _firstUnlockBlocks;
	BOOL _shouldNotifyFirstUnlockObservers;
	NSDate* _protectedDataFlushDeadlineDate;
	NSObject*<OS_dispatch_source> _protectedDataFlushDeadlineTimer;
	BOOL _hasFlushedProtectedData;
	AB _hasPendingSecondaryJournalMerge;
	NSMutableDictionary* _databaseJournalMergeObserverSetByType;
	BOOL _didRunPostMigrationUpdates;
	HDDatabaseJournal* _journal;
	HDDatabaseJournal* _cloudSyncJournal;
	HDProfile* _profile;
	NSString* _profileDirectoryPath;
	NSString* _threadLocalTransactionKey;
	NSString* _threadLocalTransactionContextKey;
	NSString* _threadLocalIgnoreTransactionContextKey;
	HDAssertionManager* _assertionManager;
	NSLock* _schemaMigrationLock;
	NSConditionLock* _activeDatabasesLock;
	NSMutableSet* _activeDatabases;
	NSHashTable* _migratedDatabases;
	NSOperationQueue* _asynchronousOperationQueue;
	NSObject*<OS_dispatch_queue> _journalQueue;
	NSObject*<OS_dispatch_group> _journalGroup;
	unsigned long long _pendingJournalMerges;
	NSObject*<OS_dispatch_queue> _secondaryJournalMergeQueue;
	NSMutableDictionary* _extendedTransactions;
	NSDictionary* _databasePoolForType;
	HDContentProtectionManager* _contentProtectionManager;
	double _offsetTimeInterval;
	double _protectedDataFlushInterval;
	long long _corruptedMigrationAttemptsCount;
	/*^block*/id _unitTest_didWaitForJournalMergeHandler;

}

@property (nonatomic,copy,readonly) NSString * profileDirectoryPath;                                                               //@synthesize profileDirectoryPath=_profileDirectoryPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadLocalTransactionKey;                                                          //@synthesize threadLocalTransactionKey=_threadLocalTransactionKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadLocalTransactionContextKey;                                                   //@synthesize threadLocalTransactionContextKey=_threadLocalTransactionContextKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadLocalIgnoreTransactionContextKey;                                             //@synthesize threadLocalIgnoreTransactionContextKey=_threadLocalIgnoreTransactionContextKey - In the implementation block
@property (readonly) BOOL invalidated; 
@property (nonatomic,retain) HDAssertionManager * assertionManager;                                                                //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,retain) NSLock * schemaMigrationLock;                                                                         //@synthesize schemaMigrationLock=_schemaMigrationLock - In the implementation block
@property (nonatomic,retain) NSConditionLock * activeDatabasesLock;                                                                //@synthesize activeDatabasesLock=_activeDatabasesLock - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeDatabases;                                                                       //@synthesize activeDatabases=_activeDatabases - In the implementation block
@property (nonatomic,retain) NSHashTable * migratedDatabases;                                                                      //@synthesize migratedDatabases=_migratedDatabases - In the implementation block
@property (nonatomic,retain) NSOperationQueue * asynchronousOperationQueue;                                                        //@synthesize asynchronousOperationQueue=_asynchronousOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> journalQueue;                                                            //@synthesize journalQueue=_journalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> journalGroup;                                                            //@synthesize journalGroup=_journalGroup - In the implementation block
@property (assign,nonatomic) unsigned long long pendingJournalMerges;                                                              //@synthesize pendingJournalMerges=_pendingJournalMerges - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> secondaryJournalMergeQueue;                                              //@synthesize secondaryJournalMergeQueue=_secondaryJournalMergeQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extendedTransactions;                                                           //@synthesize extendedTransactions=_extendedTransactions - In the implementation block
@property (nonatomic,retain) NSDictionary * databasePoolForType;                                                                   //@synthesize databasePoolForType=_databasePoolForType - In the implementation block
@property (nonatomic,readonly) HDContentProtectionManager * contentProtectionManager;                                              //@synthesize contentProtectionManager=_contentProtectionManager - In the implementation block
@property (assign,nonatomic) double offsetTimeInterval;                                                                            //@synthesize offsetTimeInterval=_offsetTimeInterval - In the implementation block
@property (assign,nonatomic) double protectedDataFlushInterval;                                                                    //@synthesize protectedDataFlushInterval=_protectedDataFlushInterval - In the implementation block
@property (assign,nonatomic) BOOL didRunPostMigrationUpdates;                                                                      //@synthesize didRunPostMigrationUpdates=_didRunPostMigrationUpdates - In the implementation block
@property (assign,nonatomic) long long corruptedMigrationAttemptsCount;                                                            //@synthesize corruptedMigrationAttemptsCount=_corruptedMigrationAttemptsCount - In the implementation block
@property (nonatomic,copy) id unitTest_didWaitForJournalMergeHandler;                                                              //@synthesize unitTest_didWaitForJournalMergeHandler=_unitTest_didWaitForJournalMergeHandler - In the implementation block
@property (nonatomic,readonly) HDDatabaseJournal * journal;                                                                        //@synthesize journal=_journal - In the implementation block
@property (nonatomic,readonly) HDDatabaseJournal * cloudSyncJournal;                                                               //@synthesize cloudSyncJournal=_cloudSyncJournal - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                                                           //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDataProtectedByFirstUnlockAvailable,nonatomic,readonly) BOOL dataProtectedByFirstUnlockAvailable; 
@property (getter=isProtectedDataAvailable,nonatomic,readonly) BOOL protectedDataAvailable; 
+(id)allEntityClassesWithBehavior:(id)arg1 ;
+(long long)unitTest_createOrMigrateDatabaseAtDirectoryURL:(id)arg1 schemaProviders:(id)arg2 behavior:(id)arg3 error:(id*)arg4 ;
+(id)createDatabaseConnectionWithURL:(id)arg1 ;
+(id)allCurrentAndFutureEntityClasses;
+(BOOL)unitTest_prepareUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id*)arg3 ;
-(void)invalidateAndWait;
-(void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(HDAssertionManager *)assertionManager;
-(void)setProfile:(HDProfile *)arg1 ;
-(HDDatabaseJournal *)journal;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)migrationTransaction:(id)arg1 didCreateDatabasesWithIdentifier:(id)arg2 ;
-(BOOL)invalidated;
-(BOOL)performTransactionWithContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(void)_checkInDatabase:(id)arg1 type:(long long)arg2 flushImmediately:(BOOL)arg3 ;
-(NSDictionary *)databasePoolForType;
-(void)performWhenDataProtectedByFirstUnlockIsAvailable:(/*^block*/id)arg1 ;
-(unsigned long long)pendingJournalMerges;
-(id)initWithProfile:(id)arg1 ;
-(id)databaseSizeInBytesExcludingHFD;
-(void)databasePool:(id)arg1 didFlushDatabases:(id)arg2 ;
-(id)unitTest_currentTransaction;
-(void)_considerRebuildingHFDIndex;
-(NSHashTable *)migratedDatabases;
-(void)setAsynchronousOperationQueue:(NSOperationQueue *)arg1 ;
-(id)cloneAccessibilityAssertion:(id)arg1 ownerIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(void)setUnitTest_didWaitForJournalMergeHandler:(id)arg1 ;
-(void)performAsynchronouslySerial:(/*^block*/id)arg1 ;
-(void)unitTest_setContentProtectionStateAndWait:(long long)arg1 ;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 shouldPerformTransaction:(BOOL)arg2 timeout:(double)arg3 error:(id*)arg4 ;
-(id)unitTest_didWaitForJournalMergeHandler;
-(void)_protectedDataQueue_flushProtectedDataIfNecessary;
-(void)checkInDatabase:(id)arg1 type:(long long)arg2 ;
-(void)addProtectedDataObserver:(id)arg1 queue:(id)arg2 ;
-(void)setOffsetTimeInterval:(double)arg1 ;
-(HDProfile *)profile;
-(id)_createDatabaseConnectionWithType:(long long)arg1 ;
-(void)setExtendedTransactions:(NSMutableDictionary *)arg1 ;
-(void)setPendingJournalMerges:(unsigned long long)arg1 ;
-(id)_createAndVerifyDatabaseConnectionWithType:(long long)arg1 error:(id*)arg2 ;
-(NSOperationQueue *)asynchronousOperationQueue;
-(void)dealloc;
-(void)finalizeExtendedTransactionForIdentifier:(id)arg1 ;
-(long long)corruptedMigrationAttemptsCount;
-(BOOL)_protectedDataQueue_isProtectedDataFlushDeadlinePassed;
-(id)checkOutProtectedDatabase:(id)arg1 highFrequencyDataStore:(id*)arg2 error:(id*)arg3 ;
-(void)setCorruptedMigrationAttemptsCount:(long long)arg1 ;
-(unsigned long long)journalChapterCountForType:(long long)arg1 ;
-(void)setMigratedDatabases:(NSHashTable *)arg1 ;
-(BOOL)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)_canAttachProtectedDatabaseForTransaction:(id)arg1 error:(id*)arg2 ;
-(id)checkOutUnprotectedDatabase:(id)arg1 error:(id*)arg2 ;
-(long long)_performMigrationWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id*)arg3 ;
-(long long)databaseTypeForDatabasePool:(id)arg1 ;
-(NSString *)profileDirectoryPath;
-(id)_threadLocalTransactionContext;
-(id)progressForJournalMergeWithType:(long long)arg1 ;
-(BOOL)performWithJournalType:(long long)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)accessHighFrequencyDataStoreWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(id)diagnosticDescription;
-(void)_mergeSecondaryJournals;
-(void)performAsynchronously:(/*^block*/id)arg1 ;
-(NSString *)threadLocalTransactionKey;
-(void)databaseJournalMergeDidComplete:(id)arg1 ;
-(BOOL)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)_threadLocalTransaction;
-(id)_newDatabaseConnectionWithType:(long long)arg1 error:(id*)arg2 ;
-(id)_currentDatabaseJournal;
-(void)removeProtectedDataObserver:(id)arg1 ;
-(id)databasePoolForDatabaseType:(long long)arg1 ;
-(void)addProtectedDataObserver:(id)arg1 ;
-(long long)_fileSizeForURL:(id)arg1 error:(id*)arg2 ;
-(id)extendedDatabaseTransactionForIdentifier:(id)arg1 ;
-(id)HFDSizeInBytes;
-(long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id*)arg2 ;
-(id)_journalDirectoryPath;
-(NSConditionLock *)activeDatabasesLock;
-(NSString *)threadLocalTransactionContextKey;
-(void)setJournalGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setAssertionManager:(HDAssertionManager *)arg1 ;
-(void)setProtectedDataFlushInterval:(double)arg1 ;
-(NSMutableDictionary *)extendedTransactions;
-(void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)journalQueue;
-(BOOL)discardHighFrequencyDataStoreWithError:(id*)arg1 ;
-(NSMutableSet *)activeDatabases;
-(void)setDidRunPostMigrationUpdates:(BOOL)arg1 ;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(long long)_protectedDataState;
-(void)migrationTransaction:(id)arg1 didEncounterDatabaseMismatchWithUnprotectedIdentifier:(id)arg2 protectedIdentifier:(id)arg3 ;
-(id)protectedDatabaseURL;
-(void)_performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)highFrequencyDataStoreURL;
-(id)databaseURLForType:(long long)arg1 ;
-(id)_checkOutDatabaseForTransaction:(id)arg1 databaseType:(long long)arg2 error:(id*)arg3 ;
-(void)_reportMigrationResultIfNecessaryForStatus:(long long)arg1 database:(id)arg2 protectedDatabase:(BOOL)arg3 error:(id)arg4 ;
-(double)offsetTimeInterval;
-(id)_URLForWALForDatabaseAtURL:(id)arg1 ;
-(BOOL)didRunPostMigrationUpdates;
-(BOOL)performWithTransactionContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)_journalForType:(long long)arg1 ;
-(void)HFDataStore:(id)arg1 detectedCorruptionOfType:(long long)arg2 code:(int)arg3 error:(id)arg4 shouldPromptUser:(BOOL)arg5 ;
-(HDDatabaseJournal *)cloudSyncJournal;
-(NSLock *)schemaMigrationLock;
-(BOOL)_isDatabaseValidWithError:(id*)arg1 ;
-(void)setJournalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_protectedDataQueue_mergeJournalAsynchronously;
-(NSString *)threadLocalIgnoreTransactionContextKey;
-(void)setActiveDatabasesLock:(NSConditionLock *)arg1 ;
-(id)newDatabaseForDatabasePool:(id)arg1 error:(id*)arg2 ;
-(HDContentProtectionManager *)contentProtectionManager;
-(BOOL)isDataProtectedByFirstUnlockAvailable;
-(void)setActiveDatabases:(NSMutableSet *)arg1 ;
-(void)removeDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 ;
-(void)setSchemaMigrationLock:(NSLock *)arg1 ;
-(double)protectedDataFlushInterval;
-(BOOL)isProtectedDataAvailable;
-(void)setSecondaryJournalMergeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_allowProtectedDataAccessWhileLockedWithTransaction:(id)arg1 ;
-(BOOL)addJournalEntries:(id)arg1 error:(id*)arg2 ;
-(BOOL)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id*)arg2 ;
-(id)allEntityClassesWithProtectionClass:(long long)arg1 ;
-(id)beginExtendedTransactionWithContext:(id)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id*)arg4 ;
-(id)databaseSizeInBytesForTypeUnprotected:(BOOL)arg1 WAL:(BOOL)arg2 ;
-(BOOL)_journalQueue_performJournalMergeAndCleanup;
-(BOOL)performHighPriorityTransactionsWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(id)_cloudSyncJournalDirectoryPath;
-(void)addDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 queue:(id)arg3 ;
-(void)beginObservingContentProtection;
-(void)_protectedDataQueue_beginObservingContentProtection;
-(void)setDatabasePoolForType:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)secondaryJournalMergeQueue;
-(BOOL)addJournalEntry:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_group>)journalGroup;
-(BOOL)_waitForMergesWithCurrentJournal:(id)arg1 error:(id*)arg2 ;
-(void)_protectedDataQueue_cancelProtectedDataFlushTimer;
-(id)mainDatabaseURL;
@end

