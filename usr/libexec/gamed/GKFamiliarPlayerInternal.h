//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerInternal.h"

@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal
{
    NSString *_firstName;	// 184 = 0xb8
    NSString *_lastName;	// 192 = 0xc0
    NSString *_compositeName;	// 200 = 0xc8
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010012174c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001216d4
+ (int)familiarity;	// IMP=0x00000001001332a0
+ (id)propertiesToFetch;	// IMP=0x0000000100133220
- (void)setCompositeName:(id)arg1;	// IMP=0x0000000100121928
- (id)compositeName;	// IMP=0x0000000100121918
- (void)setLastName:(id)arg1;	// IMP=0x000000010012190c
- (id)lastName;	// IMP=0x00000001001218fc
- (void)setFirstName:(id)arg1;	// IMP=0x00000001001218f0
- (id)firstName;	// IMP=0x00000001001218e0
- (void)dealloc;	// IMP=0x00000001001216dc
- (void)updateWithProperties:(id)arg1;	// IMP=0x00000001001332a8
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100133154

@end

