//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol KmlBindingAttestationUpdateProtocol <NSObject>
- (oneway void)setBindingAttestation:(NSData *)arg1 forKeyWithIdentifier:(NSString *)arg2 callback:(void (^)(NSError *))arg3;
- (oneway void)requestBindingAttestationDataForKeyWithIdentifier:(NSString *)arg1 callback:(void (^)(DAKeyBindingAttestationRequestData *, NSError *))arg2;
@end
