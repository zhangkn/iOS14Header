/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSMutableSet, _PFContextMapTable, _PFManagedObjectReferenceQueue, NSString, NSArray, NSPersistentStoreCoordinator, NSUndoManager, NSMutableDictionary, NSSet, NSQueryGenerationToken;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {

	id _queueOwner;
	int _cd_rc;
	int _spinLock;
	void* _dispatchQueue;
	id _parentObjectStore;
	struct {
		unsigned _registeredForCallback : 1;
		unsigned _propagatesDeletesAtEndOfEvent : 1;
		unsigned _exhaustiveValidation : 1;
		unsigned _processingChanges : 1;
		unsigned _useCommittedSnapshot : 1;
		unsigned _registeredUndoTransactionID : 1;
		unsigned _retainsAllRegisteredObjects : 1;
		unsigned _savingInProgress : 1;
		unsigned _wasDisposed : 1;
		unsigned _unprocessedChangesPending : 1;
		unsigned _isDirty : 1;
		unsigned _ignoreUndoCheckpoints : 1;
		unsigned _propagatingDeletes : 1;
		unsigned _isNSEditorEditing : 1;
		unsigned _isMainThreadBlessed : 1;
		unsigned _isImportContext : 1;
		unsigned _preflightSaveInProgress : 1;
		unsigned _disableDiscardEditing : 1;
		unsigned _isParentStoreContext : 1;
		unsigned _postSaveNotifications : 1;
		unsigned _isMerging : 1;
		unsigned _concurrencyType : 1;
		unsigned _deleteInaccessible : 1;
		unsigned _priority : 2;
		unsigned _autoMerge : 1;
		unsigned _isXPCServerContext : 1;
		unsigned _pushSecureDelete : 1;
		unsigned _refreshAfterSave : 1;
		unsigned _allowAncillary : 1;
		unsigned _generatedMutatedIDsNotification : 1;
		unsigned _postSavedObjectNotifications : 1;
		unsigned _allowAdditionalUserInfoKeys : 1;
		unsigned _reservedFlags : 31;
	}  _flags;
	short _undoTransactionID;
	short _ignoreChangeNotification;
	int _lockCount;
	NSMutableSet* _unprocessedChanges;
	NSMutableSet* _unprocessedDeletes;
	NSMutableSet* _unprocessedInserts;
	NSMutableSet* _insertedObjects;
	NSMutableSet* _deletedObjects;
	NSMutableSet* _changedObjects;
	NSMutableSet* _lockedObjects;
	NSMutableSet* _refreshedObjects;
	_PFContextMapTable* _infoByGID;
	id* _cachedObsInfoByEntity;
	id _lock;
	double _fetchTimestamp;
	long long _referenceCallbackRegistration;
	_PFManagedObjectReferenceQueue* _referenceQueue;
	NSString* _contextLabel;
	NSArray* _persistentStoreIdentifiers;
	id* _additionalPrivateIvars;
	void* _reserved1;

}

@property (retain) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (retain) NSManagedObjectContext * parentContext; 
@property (copy) NSString * name; 
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) NSMutableDictionary * userInfo; 
@property (readonly) unsigned long long concurrencyType; 
@property (nonatomic,readonly) NSSet * insertedObjects; 
@property (nonatomic,readonly) NSSet * updatedObjects; 
@property (nonatomic,readonly) NSSet * deletedObjects; 
@property (nonatomic,readonly) NSSet * registeredObjects; 
@property (assign,nonatomic) BOOL propagatesDeletesAtEndOfEvent; 
@property (assign,nonatomic) BOOL retainsRegisteredObjects; 
@property (assign) BOOL shouldDeleteInaccessibleFaults; 
@property (assign) double stalenessInterval; 
@property (retain) id mergePolicy; 
@property (nonatomic,readonly) NSQueryGenerationToken * queryGenerationToken; 
@property (assign,nonatomic) BOOL automaticallyMergesChangesFromParent; 
@property (copy) NSString * transactionAuthor; 
+(id)new;
+(id)alloc;
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
+(id)createFutureForFileAtURL:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2 ;
+(void)mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(BOOL)save:(id*)arg1 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(NSUndoManager *)undoManager;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)undo;
-(BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)_delegate;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(BOOL)tryLock;
-(BOOL)_tryRetain;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldPerformSecureOperation;
-(void)lock;
-(void)_noop:(id)arg1 ;
-(NSSet *)deletedObjects;
-(void)refreshAllObjects;
-(BOOL)isEditing;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(oneway void)release;
-(void)unlock;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(void)reset;
-(void)setParentContext:(NSManagedObjectContext *)arg1 ;
-(id)objectWithID:(id)arg1 ;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(void)insertObject:(id)arg1 ;
-(id)init;
-(unsigned long long)retainCount;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(NSMutableDictionary *)userInfo;
-(id)_queryGenerationToken__;
-(double)stalenessInterval;
-(id)objectRegisteredForID:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)transactionAuthor;
-(void)redo;
-(void)setTransactionAuthor:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)setQueryGenerationFromToken:(id)arg1 error:(id*)arg2 ;
-(void)detectConflictsForObject:(id)arg1 ;
-(void)processPendingChanges;
-(void)setStalenessInterval:(double)arg1 ;
-(id)_retainedCurrentQueryGeneration:(id)arg1 ;
-(void)assignObject:(id)arg1 toPersistentStore:(id)arg2 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSQueryGenerationToken *)queryGenerationToken;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(void)setMergePolicy:(id)arg1 ;
-(unsigned long long)concurrencyType;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)evictFuture:(id)arg1 withError:(id*)arg2 ;
-(id)executeRequest:(id)arg1 error:(id*)arg2 ;
-(NSManagedObjectContext *)parentContext;
-(void)performWithOptions:(unsigned long long)arg1 andBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 triggeredByProperty:(id)arg3 ;
-(BOOL)_isDeallocating;
-(BOOL)shouldDeleteInaccessibleFaults;
-(BOOL)commitEditing;
-(id)retain;
-(void)discardEditing;
-(void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 removeFromRegistry:(BOOL)arg3 ;
-(BOOL)_setQueryGenerationFromToken:(id)arg1 error:(id*)arg2 ;
-(id)_changeTrackingToken__;
-(BOOL)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(NSSet *)registeredObjects;
-(BOOL)propagatesDeletesAtEndOfEvent;
-(void)setPropagatesDeletesAtEndOfEvent:(BOOL)arg1 ;
-(NSSet *)insertedObjects;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)automaticallyMergesChangesFromParent;
-(void)setAutomaticallyMergesChangesFromParent:(BOOL)arg1 ;
-(void)mergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(void)objectWillChange:(id)arg1 ;
-(void)_managedObjectContextEditor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(SCD_Struct_NS15*)arg3 ;
-(BOOL)retainsRegisteredObjects;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(void)setRetainsRegisteredObjects:(BOOL)arg1 ;
-(void)setShouldDeleteInaccessibleFaults:(BOOL)arg1 ;
-(BOOL)_setChangeTrackingTokenFromToken:(id)arg1 error:(id*)arg2 ;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(BOOL)commitEditingAndReturnError:(id*)arg1 ;
-(id)mergePolicy;
-(BOOL)_disableDiscardEditing;
-(id)_retainedObjectsFromRemovedStore:(id)arg1 ;
-(void)_setDisableDiscardEditing:(BOOL)arg1 ;
-(void)_undoInsertions:(id)arg1 ;
-(void)_undoDeletionsMovedToUpdates:(id)arg1 ;
-(void)_undoUpdates:(id)arg1 ;
-(void)_undoDeletions:(id)arg1 ;
-(void)_clearChangedThisTransaction:(id)arg1 ;
-(void)_undoManagerCheckpoint:(id)arg1 ;
-(void)_addObjectIDsInsertUpdatedByDATriggers:(id)arg1 ;
-(void)_addObjectIDsUpdatedByDATriggers:(id)arg1 ;
-(void)_storeConfigurationChanged:(id)arg1 ;
-(void)_processChangedStoreConfigurationNotification:(id)arg1 ;
-(void)setShouldRefreshAfterSave:(BOOL)arg1 ;
-(void)_setAllowsExpandedUserInfoKeys:(BOOL)arg1 ;
-(BOOL)shouldRefreshAfterSave;
-(id)performBlockWithResult:(/*^block*/id)arg1 ;
-(id)_orderedSetWithResultsFromFetchRequest:(id)arg1 ;
-(void)_stopConflictDetectionForObject:(id)arg1 ;
-(void)_mergeChangesFromRemoteContextSave:(id)arg1 ;
-(id)_orderKeysForRelationshipWithName__:(id)arg1 onObjectWithID:(id)arg2 ;
-(BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 onObjectWithID:(id)arg3 error:(id*)arg4 ;
-(BOOL)hasChanges;
-(NSSet *)updatedObjects;
-(void)rollback;
-(NSString *)name;
-(id)description;
-(void)_setDelegate:(id)arg1 ;
@end

