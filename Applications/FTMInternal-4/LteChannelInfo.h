//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface LteChannelInfo : PBCodable <NSCopying>
{
    int _rsrp;	// 8 = 0x8
    int _rsrq;	// 12 = 0xc
    int _sinr;	// 16 = 0x10
    int _snr;	// 20 = 0x14
    struct {
        unsigned int rsrp:1;
        unsigned int rsrq:1;
        unsigned int sinr:1;
        unsigned int snr:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) int sinr; // @synthesize sinr=_sinr;
@property(nonatomic) int snr; // @synthesize snr=_snr;
@property(nonatomic) int rsrq; // @synthesize rsrq=_rsrq;
@property(nonatomic) int rsrp; // @synthesize rsrp=_rsrp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100028f58
- (unsigned long long)hash;	// IMP=0x0000000100028ec4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100028da0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100028cb8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100028bec
- (void)writeTo:(id)arg1;	// IMP=0x0000000100028b20
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100028b18
- (id)dictionaryRepresentation;	// IMP=0x00000001000283c8
- (id)description;	// IMP=0x0000000100028314
@property(nonatomic) _Bool hasSinr;
@property(nonatomic) _Bool hasSnr;
@property(nonatomic) _Bool hasRsrq;
@property(nonatomic) _Bool hasRsrp;

@end
