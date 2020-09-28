//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DMDActivationPredicateObserverManagerDelegate-Protocol.h"
#import "DMDConfigurationOrganizationControllerDelegate-Protocol.h"
#import "DMDEngineDatabaseProcessingOperationDelegate-Protocol.h"
#import "DMDEngineRegisterConfigurationSourceOperationDelegate-Protocol.h"

@class CATOperation, CATOperationQueue, DMDActivationPredicateObserverManager, DMDConfigurationDatabase, DMDEngineDatabaseInitializationOperation, DMDEventSubscriptionManager, DMDPolicyPersistence, NSError, NSMutableDictionary, NSString;
@protocol DMDConfigurationEngineDelegate, DMDDeviceStateProvider, DMDTaskOperationProvider;

@interface DMDConfigurationEngine : NSObject <DMDActivationPredicateObserverManagerDelegate, DMDConfigurationOrganizationControllerDelegate, DMDEngineDatabaseProcessingOperationDelegate, DMDEngineRegisterConfigurationSourceOperationDelegate>
{
    DMDPolicyPersistence *_policyPersistence;	// 8 = 0x8
    id <DMDConfigurationEngineDelegate> _delegate;	// 16 = 0x10
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 24 = 0x18
    NSObject<DMDTaskOperationProvider> *_taskOperationProvider;	// 32 = 0x20
    DMDActivationPredicateObserverManager *_activationPredicateObserverManager;	// 40 = 0x28
    DMDConfigurationDatabase *_database;	// 48 = 0x30
    CATOperationQueue *_queue;	// 56 = 0x38
    NSError *_initializationError;	// 64 = 0x40
    DMDEngineDatabaseInitializationOperation *_databaseInitializationOperation;	// 72 = 0x48
    CATOperation *_initializationOperation;	// 80 = 0x50
    NSMutableDictionary *_organizationControllerByIdentifier;	// 88 = 0x58
    DMDEventSubscriptionManager *_eventSubscriptionManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000322b4
@property(retain, nonatomic) DMDEventSubscriptionManager *eventSubscriptionManager; // @synthesize eventSubscriptionManager=_eventSubscriptionManager;
@property(retain, nonatomic) NSMutableDictionary *organizationControllerByIdentifier; // @synthesize organizationControllerByIdentifier=_organizationControllerByIdentifier;
@property(retain, nonatomic) CATOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
@property(retain, nonatomic) DMDEngineDatabaseInitializationOperation *databaseInitializationOperation; // @synthesize databaseInitializationOperation=_databaseInitializationOperation;
@property(retain) NSError *initializationError; // @synthesize initializationError=_initializationError;
@property(retain, nonatomic) CATOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) DMDConfigurationDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) DMDActivationPredicateObserverManager *activationPredicateObserverManager; // @synthesize activationPredicateObserverManager=_activationPredicateObserverManager;
@property(retain, nonatomic) NSObject<DMDTaskOperationProvider> *taskOperationProvider; // @synthesize taskOperationProvider=_taskOperationProvider;
@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
@property(nonatomic) __weak id <DMDConfigurationEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) DMDPolicyPersistence *policyPersistence; // @synthesize policyPersistence=_policyPersistence;
- (void)delegateWillSuspend;	// IMP=0x0000000100032164
- (void)delegateDidResume;	// IMP=0x0000000100032100
- (void)registerConfigurationSourceOperation:(id)arg1 didUpdateRegistrationForConfigurationSource:(id)arg2;	// IMP=0x0000000100031ba0
- (id)engineProcessingOperation:(id)arg1 assetResolverForOrganizationWithIdentifier:(id)arg2;	// IMP=0x0000000100031abc
- (id)engineProcessingOperation:(id)arg1 enqueuedOperationsForOrganizationWithIdentifier:(id)arg2;	// IMP=0x0000000100031a68
- (void)configurationSourceController:(id)arg1 fetchEventsWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000312e0
- (void)configurationSourceController:(id)arg1 fetchStatusUpdatesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000302e8
- (void)activationPredicateObserverManager:(id)arg1 didObserveChangeForPredicateWithIdentifier:(id)arg2;	// IMP=0x000000010003029c
- (void)_cleanupOrphanedPolicies;	// IMP=0x000000010002f99c
- (void)updateEventSubscriptions;	// IMP=0x000000010002f750
- (void)updateOrganizationControllers;	// IMP=0x000000010002f258
- (void)_updateOrganizationControllers;	// IMP=0x000000010002f23c
- (void)enqueueOperations:(id)arg1;	// IMP=0x000000010002f024
- (void)enqueueOperation:(id)arg1;	// IMP=0x000000010002ee90
- (void)enqueueDeclarationProcessingOperationIfNeeded;	// IMP=0x000000010002e8ec
- (void)declarationModificationOperationDidFinish:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e84c
- (void)enqueueDatabaseModificationOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e7c4
- (void)databaseInitializationOperationDidFinish;	// IMP=0x000000010002e52c
- (void)initializationOperationDidFinish:(id)arg1;	// IMP=0x000000010002e4a4
- (void)sendEvents:(id)arg1 organizationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002dd00
- (void)handleRemoveSubscriptionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d910
- (void)handleInstallSubscriptionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d414
- (void)handleUpdateCommandsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d2f4
- (void)refreshStatusForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d0c4
- (void)processStatusForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ced8
- (void)processDeclarationsForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c8c0
- (void)handleFetchDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c6d8
- (void)handleUpdateDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c504
- (void)handleSetDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c330
- (void)handleConfigurationSourceRegistrationRequest:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002c1cc
- (void)handleFetchStreamEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002bd04
- (void)handleFetchConfigurationOrganizationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b97c
- (void)handleDeactivateConfigurationOrganizationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b80c
- (void)handleCreateConfigurationOrganizationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b648
- (void)suspend;	// IMP=0x000000010002b454
- (void)resume;	// IMP=0x000000010002b238
@property(readonly, copy) NSString *description;
- (id)initWithDatabase:(id)arg1 policyPersistence:(id)arg2 activationManager:(id)arg3;	// IMP=0x000000010002a9ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
