//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface CellConfig : PBCodable <NSCopying>
{
    unsigned int _band;	// 8 = 0x8
    unsigned int _dlBw;	// 12 = 0xc
    unsigned int _dlFreq;	// 16 = 0x10
    unsigned int _state;	// 20 = 0x14
    unsigned int _ulState;	// 24 = 0x18
    struct {
        unsigned int band:1;
        unsigned int dlBw:1;
        unsigned int dlFreq:1;
        unsigned int state:1;
        unsigned int ulState:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned int dlBw; // @synthesize dlBw=_dlBw;
@property(nonatomic) unsigned int ulState; // @synthesize ulState=_ulState;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned int dlFreq; // @synthesize dlFreq=_dlFreq;
@property(nonatomic) unsigned int band; // @synthesize band=_band;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002e80c
- (unsigned long long)hash;	// IMP=0x000000010002e758
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002e60c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e4fc
- (void)copyTo:(id)arg1;	// IMP=0x000000010002e408
- (void)writeTo:(id)arg1;	// IMP=0x000000010002e318
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002e310
- (id)dictionaryRepresentation;	// IMP=0x000000010002daf0
- (id)description;	// IMP=0x000000010002da3c
@property(nonatomic) _Bool hasDlBw;
@property(nonatomic) _Bool hasUlState;
@property(nonatomic) _Bool hasState;
@property(nonatomic) _Bool hasDlFreq;
@property(nonatomic) _Bool hasBand;

@end
