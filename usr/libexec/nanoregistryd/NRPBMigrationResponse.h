//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface NRPBMigrationResponse : PBCodable <NSCopying>
{
    int _errorCode;	// 8 = 0x8
    CDStruct_70a7dc3e _has;	// 12 = 0xc
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000f1208
- (unsigned long long)hash;	// IMP=0x00000001000f11d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000f1128
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000f10bc
- (void)copyTo:(id)arg1;	// IMP=0x00000001000f108c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000f1060
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000f1058
- (id)dictionaryRepresentation;	// IMP=0x00000001000f0d94
- (id)description;	// IMP=0x00000001000f0ce0
@property(nonatomic) _Bool hasErrorCode;

@end
