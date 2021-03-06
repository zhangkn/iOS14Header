//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NRPBNSError : PBCodable <NSCopying>
{
    long long _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    struct {
        unsigned int code:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000da4e4
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000da438
- (unsigned long long)hash;	// IMP=0x00000001000da3d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000da2fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000da254
- (void)copyTo:(id)arg1;	// IMP=0x00000001000da1dc
- (void)writeTo:(id)arg1;	// IMP=0x00000001000da16c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000da164
- (id)dictionaryRepresentation;	// IMP=0x00000001000d9e40
- (id)description;	// IMP=0x00000001000d9d8c
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasCode;

@end

