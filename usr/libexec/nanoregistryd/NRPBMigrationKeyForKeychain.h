//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface NRPBMigrationKeyForKeychain : PBCodable <NSCopying>
{
    NSData *_key;	// 8 = 0x8
    int _keyVersion;	// 16 = 0x10
    struct {
        unsigned int keyVersion:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000100019f0c
@property(nonatomic) int keyVersion; // @synthesize keyVersion=_keyVersion;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100019e60
- (unsigned long long)hash;	// IMP=0x0000000100019df8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100019d1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100019c74
- (void)copyTo:(id)arg1;	// IMP=0x0000000100019bfc
- (void)writeTo:(id)arg1;	// IMP=0x0000000100019b8c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100019b84
- (id)dictionaryRepresentation;	// IMP=0x0000000100019864
- (id)description;	// IMP=0x00000001000197b0
@property(nonatomic) _Bool hasKeyVersion;
@property(readonly, nonatomic) _Bool hasKey;

@end

