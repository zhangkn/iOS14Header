//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface TRANSITPbLocationFingerprintsV1 : PBCodable <NSCopying>
{
    NSMutableArray *_locationFingerprints;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001009c346c
- (unsigned long long)hash;	// IMP=0x00000001009c3454
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001009c33e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009c3274
- (void)copyTo:(id)arg1;	// IMP=0x00000001009c31cc
- (void)writeTo:(id)arg1;	// IMP=0x00000001009c30c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001009c30b8
- (id)dictionaryRepresentation;	// IMP=0x00000001009c2d0c
- (id)description;	// IMP=0x00000001009c2c8c
- (id)locationFingerprintAtIndex:(unsigned long long)arg1;	// IMP=0x00000001009c2c74
- (unsigned long long)locationFingerprintsCount;	// IMP=0x00000001009c2c5c
- (void)addLocationFingerprint:(id)arg1;	// IMP=0x00000001009c2c08
- (void)clearLocationFingerprints;	// IMP=0x00000001009c2bf0
- (void)dealloc;	// IMP=0x00000001009c2ba0

@end
