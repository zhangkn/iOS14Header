//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPDaemonXPCServerInterface-Protocol.h"

@class NSMutableSet, NSXPCConnection, RPDaemon;
@protocol OS_dispatch_queue;

@interface RPDaemonXPCConnection : NSObject <RPDaemonXPCServerInterface>
{
    RPDaemon *_daemon;	// 8 = 0x8
    _Bool _entitledClient;	// 16 = 0x10
    NSMutableSet *_assertions;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSXPCConnection *_xpcCnx;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002e1e0
@property(retain, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableSet *assertions; // @synthesize assertions=_assertions;
- (void)primaryAccountSignedOutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002dd04
- (void)primaryAccountSignedInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002db14
- (void)getIdentitiesWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d658
- (void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002d450
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d2c4
- (void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002d058
- (void)_invalidateAssertions;	// IMP=0x000000010002ce30
- (void)addOrUpdateIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002cd10
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x000000010002cac0
- (_Bool)_entitledForLabel:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002c960
- (void)connectionInvalidated;	// IMP=0x000000010002c8c4
- (id)initWithDaemon:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x000000010002c810

@end

