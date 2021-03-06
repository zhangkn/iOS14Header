/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableArray, NSPersistentStore, NSPersistentStoreCoordinator, NSManagedObjectContext, NSString, CKContainer, CKRecordZone, CKRecordZoneSubscription, CKDatabase, NSObject, APSConnection, NSError, NSURL;

@interface AXSSCloudKitHelper : NSObject <APSConnectionDelegate> {

	NSMutableArray* _accumulatedQueuedData;
	BOOL _observeLocalDatabaseChanges;
	BOOL _isProtectedDataAvailable;
	NSPersistentStore* _observedStore;
	NSPersistentStoreCoordinator* _observedCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _containerIdentifier;
	CKContainer* _container;
	CKRecordZone* _recordZone;
	CKRecordZoneSubscription* _zoneSubscription;
	CKDatabase* _database;
	NSObject*<OS_dispatch_queue> _cloudkitQueue;
	NSObject*<OS_dispatch_semaphore> _cloudKitQueueSemaphore;
	APSConnection* _apsConnection;
	NSError* _lastInitializationError;
	NSURL* _largeBlobDirectoryURL;

}

@property (nonatomic,__weak,readonly) NSPersistentStore * observedStore;                             //@synthesize observedStore=_observedStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * observedCoordinator;                   //@synthesize observedCoordinator=_observedCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                        //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                            //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneSubscription * zoneSubscription;                          //@synthesize zoneSubscription=_zoneSubscription - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                                //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cloudkitQueue;                           //@synthesize cloudkitQueue=_cloudkitQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitQueueSemaphore;              //@synthesize cloudKitQueueSemaphore=_cloudKitQueueSemaphore - In the implementation block
@property (nonatomic,readonly) APSConnection * apsConnection;                                        //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,readonly) NSError * lastInitializationError;                                    //@synthesize lastInitializationError=_lastInitializationError - In the implementation block
@property (nonatomic,readonly) NSURL * largeBlobDirectoryURL;                                        //@synthesize largeBlobDirectoryURL=_largeBlobDirectoryURL - In the implementation block
@property (assign,nonatomic) BOOL observeLocalDatabaseChanges;                                       //@synthesize observeLocalDatabaseChanges=_observeLocalDatabaseChanges - In the implementation block
@property (assign,nonatomic) BOOL isProtectedDataAvailable;                                          //@synthesize isProtectedDataAvailable=_isProtectedDataAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(APSConnection *)apsConnection;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(NSString *)containerIdentifier;
-(CKDatabase *)database;
-(NSManagedObjectContext *)managedObjectContext;
-(id)apsEnvironment;
-(NSError *)lastInitializationError;
-(NSObject*<OS_dispatch_semaphore>)cloudKitQueueSemaphore;
-(void)_setContainer:(id)arg1 ;
-(void)dealloc;
-(BOOL)_checkAccountStatus:(id*)arg1 ;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)setIsProtectedDataAvailable:(BOOL)arg1 ;
-(void)logMessage:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSPersistentStoreCoordinator *)observedCoordinator;
-(id)testRecordForSchemaCreation:(id)arg1 ;
-(Class)managedObjectClass;
-(CKRecordZoneSubscription *)zoneSubscription;
-(void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3 ;
-(void)retrieveLocalChangesForCloud:(/*^block*/id)arg1 ;
-(void)clearRecordsForPurging:(id)arg1 ;
-(void)beginWatchingForChanges;
-(id)createCKRecordFromObject:(id)arg1 ;
-(void)_setDatabase:(id)arg1 ;
-(id)recordType;
-(BOOL)isProtectedDataAvailable;
-(NSURL *)largeBlobDirectoryURL;
-(NSPersistentStore *)observedStore;
-(CKContainer *)container;
-(CKRecordZone *)recordZone;
-(BOOL)_createZoneIfNecessary:(id*)arg1 ;
-(void)setObserveLocalDatabaseChanges:(BOOL)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 zoneName:(id)arg2 ;
-(void)observeChangesForManagedContext:(id)arg1 ;
-(void)_initializeCloudkitForObservedStore;
-(void)openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(/*^block*/id)arg2 ;
-(BOOL)_setupZoneSubscriptionIfNecessary:(id*)arg1 ;
-(BOOL)_createSchemaIfNecessary:(id*)arg1 ;
-(BOOL)_setupPushConnection:(id*)arg1 ;
-(void)fetchChangesAndUpdateObservedStore;
-(id)zoneCreatedKey;
-(id)zoneSubscriptionKey;
-(id)serverChangeTokenMetadataKey;
-(void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4 ;
-(void)_processAccumulatedQueueData;
-(void)processLocalChangesAndPush;
-(id)cloudKitPushTopic;
-(BOOL)shouldExportManagedObject:(id)arg1 ;
-(void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2 ;
-(void)_setApsConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cloudkitQueue;
-(BOOL)observeLocalDatabaseChanges;
@end

