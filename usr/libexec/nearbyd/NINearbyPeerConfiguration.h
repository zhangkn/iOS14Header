//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NIConfiguration.h"

@class NIDiscoveryToken;

@interface NINearbyPeerConfiguration : NIConfiguration
{
    NIDiscoveryToken *_peerDiscoveryToken;	// 8 = 0x8
}

+ (id)new;	// IMP=0x0000000100133e88
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100133c70
- (void).cxx_destruct;	// IMP=0x00000001001341a8
@property(copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken; // @synthesize peerDiscoveryToken=_peerDiscoveryToken;
- (id)descriptionInternal;	// IMP=0x00000001001340a8
- (id)description;	// IMP=0x0000000100133fdc
- (unsigned long long)hash;	// IMP=0x0000000100133fb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100133eb0
- (id)init;	// IMP=0x0000000100133e3c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100133d50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100133cbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100133c78
- (id)initWithPeerToken:(id)arg1;	// IMP=0x0000000100133b4c

@end
