//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface MIHelperServiceClient : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100041710
- (void).cxx_destruct;	// IMP=0x0000000100042bec
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)createAppSnapshotWithBundleID:(id)arg1 snapshotToURL:(id)arg2 onlyV1AppIfPresent:(_Bool)arg3 placeholderOnly:(_Bool)arg4 withError:(id *)arg5;	// IMP=0x0000000100042894
- (_Bool)createSafeHarborWithIdentifier:(id)arg1 containerType:(long long)arg2 andMigrateDataFrom:(id)arg3 withError:(id *)arg4;	// IMP=0x0000000100042690
- (_Bool)makeSymlinkFromAppDataContainerToBundleForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001000424b8
- (id)stageItemAtURL:(id)arg1 options:(id)arg2 containedSymlink:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000100042114
- (_Bool)wipeStagingRootWithError:(id *)arg1;	// IMP=0x0000000100041f5c
- (_Bool)migrateMobileContentWithError:(id *)arg1;	// IMP=0x0000000100041d8c
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041cac
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041bcc
- (id)_sharedConnection;	// IMP=0x0000000100041888
- (void)dealloc;	// IMP=0x000000010004183c
- (void)_invalidateObject;	// IMP=0x00000001000417b0

@end

