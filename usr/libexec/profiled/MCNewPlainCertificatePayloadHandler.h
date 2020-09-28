//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewCertificatePayloadHandler.h"

@interface MCNewPlainCertificatePayloadHandler : MCNewCertificatePayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010002b440
- (id)_malformedCertificateError;	// IMP=0x000000010002b360
- (id)_cannotStoreRootCertificateError;	// IMP=0x000000010002b280
- (id)_cannotStoreCertificateError;	// IMP=0x000000010002b1a0
- (id)_tooManyCertificatesError;	// IMP=0x000000010002b0c0
- (id)_invalidPasscodeError;	// IMP=0x000000010002afe0
- (int)_grantPartialNonSSLTrustPolicyForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000010002ad8c
- (void)_revertFullSSLTrustIfNeeded;	// IMP=0x000000010002a700
- (void)remove;	// IMP=0x000000010002a674
- (void)unsetAside;	// IMP=0x000000010002a478
- (void)setAside;	// IMP=0x000000010002a42c
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100029f84
- (id)_storeCertificate:(struct __SecCertificate *)arg1 allowSSLTrust:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x0000000100029790
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100029638
- (struct __SecIdentity *)_copyContentsOfPKCS12DataWithPasscode:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100029468
- (void)dealloc;	// IMP=0x0000000100029414
- (id)userInputFields;	// IMP=0x0000000100029228

@end
