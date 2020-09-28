//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NEAgent : NSObject
{
    NSString *_description;	// 8 = 0x8
    int _pid;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    long long _pluginVersion;	// 40 = 0x28
    NSString *_pluginType;	// 48 = 0x30
    long long _pluginClass;	// 56 = 0x38
    NSArray *_pluginUUIDs;	// 64 = 0x40
    NSXPCConnection *_connection;	// 72 = 0x48
    NSNumber *_uid;	// 80 = 0x50
    NSDictionary *_pluginInfo;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001000785dc
@property(readonly) NSDictionary *pluginInfo; // @synthesize pluginInfo=_pluginInfo;
@property(readonly) NSNumber *uid; // @synthesize uid=_uid;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSArray *pluginUUIDs; // @synthesize pluginUUIDs=_pluginUUIDs;
@property(readonly, nonatomic) long long pluginClass; // @synthesize pluginClass=_pluginClass;
@property(readonly, nonatomic) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(readonly) long long pluginVersion; // @synthesize pluginVersion=_pluginVersion;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) _Bool isLocal;
- (_Bool)validateAfterStartWithAuditTokens:(id)arg1;	// IMP=0x0000000100078498
@property(readonly) _Bool isPerUser;
- (void)addUUIDs:(id)arg1;	// IMP=0x0000000100078204
- (void)setPluginPID:(int)arg1 uuids:(id)arg2;	// IMP=0x000000010007817c
- (_Bool)supportsMultipleInstancesOfExtension;	// IMP=0x000000010007810c
- (void)terminate;	// IMP=0x0000000100078078
- (void)disposeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077a98
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077524
- (void)sendSetupCommandWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100076e74
- (id)description;	// IMP=0x0000000100076e6c
- (_Bool)matchesAuditToken:(id)arg1 expectedCDHash:(id)arg2;	// IMP=0x0000000100076e64
- (id)initWithPluginType:(id)arg1 pluginVersion:(long long)arg2 pluginClass:(long long)arg3 pluginInfo:(id)arg4 userID:(id)arg5;	// IMP=0x0000000100076d04

@end
