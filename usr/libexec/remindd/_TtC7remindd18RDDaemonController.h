//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "REMDaemonController-Protocol.h"

@class MISSING_TYPE;

@interface _TtC7remindd18RDDaemonController : NSObject <REMDaemonController>
{
    MISSING_TYPE *xpcDaemon;	// 8 = 0x8
    MISSING_TYPE *clientIdentity;	// 24 = 0x18
    MISSING_TYPE *storeContainerToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010023cd00
- (id)init;	// IMP=0x000000010023cca0
- (void)invalidate;	// IMP=0x000000010023cc90
- (void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023cbbc
- (id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023cb14
- (void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023cafc
- (id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023cae4
- (void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023cacc
- (id)syncStorePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023cab4
- (id)syncDebugPerformerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010023ca48
- (id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023ca30
- (id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023ca18

@end
