//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFSSEWrapper : NSObject
{
}

+ (_Bool)supportsAuthorizeAndSign:(id *)arg1;	// IMP=0x0000000100081020
+ (id)getPlatformData:(id *)arg1 forSEID:(id)arg2;	// IMP=0x0000000100080924
+ (id)authorizeAndSign:(id)arg1 uid:(unsigned int)arg2 handle:(id)arg3 SEID:(id)arg4 usePIN:(_Bool)arg5 hasPrague:(_Bool)arg6 hostChallenge:(id)arg7 cardChallenge:(id)arg8 cardCryptogram:(id)arg9 confirmationBlob:(id *)arg10 confirmationBlobSignature:(id *)arg11 confirmationVersion:(long long *)arg12 certs:(id *)arg13;	// IMP=0x000000010008066c
+ (unsigned char)acmGetOlsoType:(id)arg1;	// IMP=0x00000001000800a8
+ (_Bool)checkPolicy:(char *)arg1 fromContext:(struct __ACMHandle *)arg2 status:(int *)arg3;	// IMP=0x000000010007ffcc
+ (id)sseAuthorize:(int)arg1 handle:(id)arg2 SEID:(id)arg3 uid:(unsigned int)arg4 challenge:(id)arg5 response:(id)arg6 validation:(unsigned char *)arg7 encryptedPIN:(id *)arg8 confirmationHash:(id *)arg9 confirmationSignature:(id *)arg10 confirmationVersion:(long long *)arg11 certs:(id *)arg12;	// IMP=0x000000010007fb7c
+ (int)getConfirmationVersion:(unsigned long long)arg1 usingPrague:(_Bool)arg2;	// IMP=0x000000010007fb74
+ (unsigned int)sseGetHostChallenge:(id *)arg1;	// IMP=0x000000010007fa10
+ (unsigned int)sseGetAuthorizationTimeout:(id)arg1 uid:(unsigned int)arg2 challenge:(id)arg3 response:(id)arg4 timeout:(unsigned short *)arg5 mac:(id *)arg6;	// IMP=0x000000010007f7f0
+ (unsigned int)sseResetAuthRandom:(id)arg1 uid:(unsigned int)arg2 authRandom:(id *)arg3 mac:(id *)arg4;	// IMP=0x000000010007f668
+ (unsigned int)sseEffaceAuthorization;	// IMP=0x000000010007f464

@end

