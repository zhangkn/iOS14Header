//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSYInitialSyncStateObserverDelegate-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"
#import "SYServiceDelegate-Protocol.h"
#import "SYSessionDelegate-Protocol.h"

@class CLSilo, NSString, PSYServiceSyncSession;

@interface CLTileSyncDelegate : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, SYServiceDelegate, SYSessionDelegate>
{
    struct CLTileSyncManager *fManager;	// 8 = 0x8
    CLSilo *fSilo;	// 16 = 0x10
    PSYServiceSyncSession *fPsSession;	// 24 = 0x18
}

- (void)initialSyncStateObserverClientCanRetryFailedRequests:(id)arg1;	// IMP=0x00000001000e0d4c
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;	// IMP=0x00000001000e0c88
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x00000001000e09a8
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x00000001000e08e4
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x00000001000e0350
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x00000001000e0154
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x00000001000df8f8
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x00000001000df51c
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x00000001000df1d0
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x00000001000df108
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x00000001000deb00
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000de588
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000001000de350
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;	// IMP=0x00000001000de070
- (void)serviceDidUnpairDevice:(id)arg1;	// IMP=0x00000001000ddf60
- (void)serviceDidPairDevice:(id)arg1;	// IMP=0x00000001000dde50
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;	// IMP=0x00000001000ddd8c
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000ddabc
- (id)initWithSyncManager:(struct CLTileSyncManager *)arg1 silo:(id)arg2;	// IMP=0x00000001000dda6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

