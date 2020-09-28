//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NFECommercePaymentRequest, NFPeerPaymentTransferRequest;

@interface NFPeerPaymentRequest : NSObject <NSSecureCoding>
{
    NFECommercePaymentRequest *_topUpRequest;	// 8 = 0x8
    NFPeerPaymentTransferRequest *_transferRequest;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100022390
- (void).cxx_destruct;	// IMP=0x00000001000223c0
@property(retain, nonatomic) NFPeerPaymentTransferRequest *transferRequest; // @synthesize transferRequest=_transferRequest;
@property(retain, nonatomic) NFECommercePaymentRequest *topUpRequest; // @synthesize topUpRequest=_topUpRequest;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100022324
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002223c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100022174

@end
