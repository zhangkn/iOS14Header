//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CCDError : NSObject
{
}

+ (id)_cloudConfigErrorResponses;	// IMP=0x0000000100009f80
+ (id)cloudConfigErrorInResponse:(id)arg1;	// IMP=0x0000000100009ef8
+ (id)_errorStringForResponse:(id)arg1;	// IMP=0x0000000100009db0
+ (id)nonceExpiredError;	// IMP=0x0000000100009ce4
+ (id)deviceNotEnrolledError;	// IMP=0x0000000100009c18
+ (id)deviceAlreadyEnrolledError;	// IMP=0x0000000100009b4c
+ (id)deviceNotFoundError;	// IMP=0x0000000100009a80
+ (id)profileNotFoundError;	// IMP=0x00000001000099b4
+ (id)profileNotActiveError;	// IMP=0x00000001000098e8
+ (id)invalidProfileError;	// IMP=0x000000010000981c
+ (id)invalidSignatureError;	// IMP=0x0000000100009750
+ (id)serverTrustError;	// IMP=0x0000000100009684
+ (id)serviceBusyError;	// IMP=0x00000001000095b8
+ (id)teslaServiceDownError;	// IMP=0x00000001000094ec
+ (id)invalidDeviceError;	// IMP=0x0000000100009420
+ (id)maxRetriesExceededError;	// IMP=0x0000000100009354
+ (id)badFormatError;	// IMP=0x0000000100009288
+ (id)internalErrorWithCode:(long long)arg1;	// IMP=0x00000001000091b8
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 errorType:(id)arg4;	// IMP=0x0000000100009008

@end
