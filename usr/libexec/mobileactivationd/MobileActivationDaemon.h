//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MobileActivationProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class DataArk, NSData, NSString;
@protocol OS_dispatch_queue;

@interface MobileActivationDaemon : NSObject <NSXPCListenerDelegate, MobileActivationProtocol>
{
    NSString *_hostActivationNonce;	// 8 = 0x8
    NSString *_deviceActivationNonce;	// 16 = 0x10
    struct PSCSessionInternal_ *_session;	// 24 = 0x18
    NSData *_sessionHelloMessage;	// 32 = 0x20
    DataArk *_dark;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_creationQueue;	// 64 = 0x40
    NSString *_recertNonce;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100034058
@property(retain, nonatomic) NSString *recertNonce; // @synthesize recertNonce=_recertNonce;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *creationQueue; // @synthesize creationQueue=_creationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) DataArk *dark; // @synthesize dark=_dark;
- (void)updateBasebandTicket:(id)arg1 baaCertData:(id)arg2 baaIntermediateCert:(id)arg3 options:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000100032918
- (void)isInFieldCollectedWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032718
- (void)issueClientCertificateWithReferenceKey:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100030b6c
- (void)issueClientCertificateLegacy:(id)arg1 WithCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030464
- (void)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010002fefc
- (void)recertifyDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f9cc
- (void)unbrickDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f7d0
- (void)copyActivationRecordWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f514
- (void)requestDeviceReactivationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f448
- (void)getActivationBuildWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f30c
- (void)isDeviceBrickedWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f194
- (void)copyPCRTTokenWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ee38
- (void)copyUCRTWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002eacc
- (void)handleActivationInfo:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e6bc
- (void)createActivationInfoWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002e310
- (void)createTunnel1SessionInfoWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002d9b0
- (void)createTunnel1ActivationInfo:(id)arg1 options:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010002ca80
- (void)deactivateDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c9bc
- (void)getActivationStateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c86c
- (_Bool)validateActivationDataSignature:(id)arg1 activationSignature:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010002c470
- (_Bool)handleSessionResponse:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010002b798
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010002b6a8
- (id)valueForEntitlement:(id)arg1;	// IMP=0x000000010002b5f0
- (_Bool)isEntitled:(id)arg1;	// IMP=0x000000010002b500
@property(readonly, nonatomic) _Bool isHostConnection;
@property(retain, nonatomic) NSString *activationNonce;
- (id)callingProcessName;	// IMP=0x000000010002b2b0
@property(readonly, nonatomic) NSData *sessionHelloMessage; // @synthesize sessionHelloMessage=_sessionHelloMessage;
@property(readonly, nonatomic) struct PSCSessionInternal_ *session; // @synthesize session=_session;
- (void)generateSession;	// IMP=0x000000010002b090
- (void)dealloc;	// IMP=0x000000010002b044
- (id)initWithContext:(id)arg1 Queue:(id)arg2;	// IMP=0x000000010002af38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
