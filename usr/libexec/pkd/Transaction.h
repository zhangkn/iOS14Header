//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKDServer, PKDXpcClient;
@protocol OS_xpc_object;

@interface Transaction : NSObject
{
    const char *_type;	// 8 = 0x8
    unsigned long long _interval;	// 16 = 0x10
    PKDXpcClient *_client;	// 24 = 0x18
    NSObject<OS_xpc_object> *_request;	// 32 = 0x20
    NSObject<OS_xpc_object> *_reply;	// 40 = 0x28
    unsigned long long _version;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000112c0
@property unsigned long long version; // @synthesize version=_version;
@property(retain) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain) NSObject<OS_xpc_object> *request; // @synthesize request=_request;
@property(retain) PKDXpcClient *client; // @synthesize client=_client;
- (void)fail:(long long)arg1 error:(id)arg2;	// IMP=0x0000000100011150
- (void)fail:(long long)arg1 message:(id)arg2;	// IMP=0x0000000100011078
- (void)done;	// IMP=0x0000000100010f0c
- (void)addAnnotationForPlugIn:(id)arg1 in:(id)arg2;	// IMP=0x0000000100010d98
- (_Bool)pluginShouldBeAutoEnabled:(id)arg1;	// IMP=0x0000000100010d90
- (void)matchPlugIns;	// IMP=0x000000010000db98
- (void)findPlugIn;	// IMP=0x000000010000d768
- (id)findPlugInByPathURL:(id)arg1;	// IMP=0x000000010000d674
- (id)findPlugInByUUID:(id)arg1;	// IMP=0x000000010000d598
- (void)fetchAppStoreReceipt;	// IMP=0x000000010000d2d4
- (void)lockDownPlugIns;	// IMP=0x000000010000c764
- (void)bulkAnnotatePlugIns;	// IMP=0x000000010000c1c4
- (void)annotatePlugIns;	// IMP=0x000000010000bc70
- (void)accessPlugIns;	// IMP=0x000000010000b9f4
- (void)readyPlugIns;	// IMP=0x000000010000adc4
- (_Bool)processUuidList:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a640
- (void)bulkPlugIns;	// IMP=0x000000010000a5a4
- (void)removePlugIns;	// IMP=0x000000010000a37c
- (void)addPlugIns;	// IMP=0x000000010000a0b0
- (_Bool)processPaths:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009fe8
- (_Bool)marshalPaths:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009d58
- (void)dispatch;	// IMP=0x0000000100009a34
- (CDStruct_4c969caf)auditToken;	// IMP=0x00000001000099d8
@property(readonly) NSObject<OS_xpc_object> *connection;
@property(readonly) PKDServer *server;
- (id)initWithRequest:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100009750

@end
