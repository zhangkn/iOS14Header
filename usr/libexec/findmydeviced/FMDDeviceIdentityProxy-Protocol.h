//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FMDIdentitySigningRequest;

@protocol FMDDeviceIdentityProxy <NSObject>
- (void)attestSigningRequest:(FMDIdentitySigningRequest *)arg1 completion:(void (^)(FMDBAAAttestation *, NSError *))arg2;
@end

