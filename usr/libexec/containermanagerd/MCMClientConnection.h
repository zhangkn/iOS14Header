//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMClientIdentity, MCMCommandQueue, MCMUserIdentityCache, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCMClientConnection : NSObject
{
    NSMutableDictionary *_sanitizedLookup;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_deathrowBackgroundQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_deathrowQueue;	// 32 = 0x20
    _Bool _entitled;	// 40 = 0x28
    _Bool _allowOtherIdLookup;	// 41 = 0x29
    _Bool _allowGroupIdLookup;	// 42 = 0x2a
    _Bool _unrestricted;	// 43 = 0x2b
    MCMClientIdentity *_clientIdentity;	// 48 = 0x30
    MCMCommandQueue *_commandQueue;	// 56 = 0x38
    NSString *_clientBundleIdentifier;	// 64 = 0x40
    NSArray *_entitledWipeIdentifiers;	// 72 = 0x48
    NSDictionary *_lookup;	// 80 = 0x50
    MCMUserIdentityCache *_userIdentityCache;	// 88 = 0x58
}

+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1;	// IMP=0x000000010006ff70
+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;	// IMP=0x000000010006fecc
+ (id)sharedClientConnection;	// IMP=0x000000010006fe8c
- (void).cxx_destruct;	// IMP=0x000000010006e6dc
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) NSDictionary *lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSArray *entitledWipeIdentifiers; // @synthesize entitledWipeIdentifiers=_entitledWipeIdentifiers;
@property(retain, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) MCMCommandQueue *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(nonatomic) _Bool unrestricted; // @synthesize unrestricted=_unrestricted;
@property(nonatomic) _Bool allowGroupIdLookup; // @synthesize allowGroupIdLookup=_allowGroupIdLookup;
@property(nonatomic) _Bool allowOtherIdLookup; // @synthesize allowOtherIdLookup=_allowOtherIdLookup;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) MCMClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
- (void)_performOnDemandContainerMigrationIfNecessaryWithMetadata:(id)arg1;	// IMP=0x000000010006e250
- (int)_desiredDataProtectionClassForMetadata:(id)arg1;	// IMP=0x000000010006e134
- (int)_intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 info:(id)arg3;	// IMP=0x000000010006dea8
- (id)_setOfStringsFromArray:(id)arg1;	// IMP=0x000000010006ddc0
- (id)_lookupForContainerClass:(unsigned long long)arg1;	// IMP=0x000000010006d998
- (void)flushCacheForContainerClass:(unsigned long long)arg1 transient:(_Bool)arg2;	// IMP=0x000000010006d8e0
- (_Bool)completeWithError:(unsigned long long *)arg1;	// IMP=0x000000010006d88c
- (id)groupContainersForOwnerIdentifier:(id)arg1 userIdentity:(id)arg2 groupContainerClass:(unsigned long long)arg3 withError:(unsigned long long *)arg4;	// IMP=0x000000010006d278
- (_Bool)isEntitledForLookupWithClass:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000010006d0e0
- (void)deleteUserManagedAssetWithContainerIdentity:(id)arg1 relativePath:(id)arg2 withError:(unsigned long long *)arg3;	// IMP=0x000000010006c614
- (id)userManagedAssetsPathWithContainerIdentity:(id)arg1 isRelative:(_Bool)arg2 createIfNecessary:(_Bool)arg3 existed:(_Bool *)arg4 withError:(unsigned long long *)arg5;	// IMP=0x000000010006b66c
- (id)stageSharedContentForContainerIdentity:(id)arg1 sourceRelativePath:(id)arg2 destRelativePath:(id)arg3 withError:(unsigned long long *)arg4;	// IMP=0x000000010006a790
- (void)retryTestWithNumCrashes:(unsigned long long)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100069d88
- (unsigned long long)diskUsageWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100069500
- (void)deleteDataContainerContentWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100068904
- (void)deleteContainerWithMetadata:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100068650
- (void)deleteContainerWithContainerIdentity:(id)arg1 transient:(_Bool)arg2 withError:(unsigned long long *)arg3;	// IMP=0x000000010006848c
- (void)regenerateDirectoryUUIDWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100067b0c
- (void)_regenerateAllSystemContainerPaths;	// IMP=0x0000000100067460
- (void)recreateDefaultStructureWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100066e3c
- (id)metadataWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100066b90
- (id)infoValueForKey:(id)arg1 containerIdentity:(id)arg2 useLocking:(_Bool)arg3 withError:(unsigned long long *)arg4;	// IMP=0x000000010006675c
- (void)setInfoValue:(id)arg1 forKey:(id)arg2 containerIdentity:(id)arg3 useLocking:(_Bool)arg4 withError:(unsigned long long *)arg5;	// IMP=0x00000001000661ec
- (void)deleteContainersOnDeathRowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000660f8
- (void)replaceContainerIdentity:(id)arg1 withContainerIdentity:(id)arg2 preserveOldPathIdentifier:(_Bool)arg3 preserveOldInternalUUID:(_Bool)arg4 startDeletionThread:(_Bool)arg5 withError:(unsigned long long *)arg6;	// IMP=0x0000000100063b4c
- (id)containersWithClass:(unsigned long long)arg1 transient:(_Bool)arg2 withError:(unsigned long long *)arg3;	// IMP=0x00000001000638ac
- (id)createOrLookupContainerWithContainerIdentity:(id)arg1 createIfNecessary:(_Bool)arg2 transient:(_Bool)arg3 useLocking:(_Bool)arg4 withError:(unsigned long long *)arg5;	// IMP=0x00000001000616b4
- (void)rebootContainerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100060f0c
- (void)rebootContainerManagerSetup;	// IMP=0x000000010005ff34
- (void)_cleanupOprhanedCodeSigningMappingData;	// IMP=0x000000010005fde0
- (void)_cleanupOrphanedDataForDirectories:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x000000010005f708
- (void)containerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005f548
- (void)containerManagerSetup;	// IMP=0x000000010005f2c8
- (id)_sharedDeathrowQueue;	// IMP=0x000000010005f234
- (id)_sharedDeathrowBackgroundQueue;	// IMP=0x000000010005f1f4
- (id)_sharedBackgroundQueue;	// IMP=0x000000010005f1b4
- (id)initWithClientIdentity:(id)arg1 entitled:(_Bool)arg2 allowOtherIdLookup:(_Bool)arg3 unrestricted:(_Bool)arg4 lookup:(id)arg5 entitledWipeIdentifiers:(id)arg6 commandQueue:(id)arg7;	// IMP=0x000000010005efec
- (id)init;	// IMP=0x000000010005ee88
- (_Bool)_recoverFromReplaceOperationsWithError:(id *)arg1;	// IMP=0x000000010007125c
- (_Bool)_writeToDiskReplaceAt:(id)arg1 old:(id)arg2 withNew:(id)arg3 usingStaging:(id)arg4 toDestination:(id)arg5 error:(id *)arg6;	// IMP=0x0000000100070e64
- (id)_readAndValidateReplaceFileAtUrl:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007054c
- (_Bool)_moveItemAtURLToDeathRow:(id)arg1 isDir:(_Bool)arg2 startDeletionThread:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000010007026c
- (_Bool)_removeItemOrMoveToTempAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006ffac

@end

