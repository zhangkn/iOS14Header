//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NFTrustObject.h"

@class NSString;

@interface KeyInSlot : NFTrustObject
{
    NSString *_keyIdentifier;	// 8 = 0x8
    unsigned long long _numQuery;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000e4430
- (void).cxx_destruct;	// IMP=0x00000001000e4624
@property unsigned long long numQuery; // @synthesize numQuery=_numQuery;
@property(retain, nonatomic) NSString *keyIdentifier; // @synthesize keyIdentifier=_keyIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000e453c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e4438

@end
