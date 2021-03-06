//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDImageSignalProcessorProjectorFaultTransitions : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _capacitance;	// 16 = 0x10
    int _transition;	// 20 = 0x14
    struct {
        unsigned int timestamp:1;
        unsigned int capacitance:1;
        unsigned int transition:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned int capacitance; // @synthesize capacitance=_capacitance;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000a7528
- (unsigned long long)hash;	// IMP=0x00000001000a74b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000a73e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000a7324
- (void)copyTo:(id)arg1;	// IMP=0x00000001000a72a0
- (void)writeTo:(id)arg1;	// IMP=0x00000001000a71fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000a71f4
- (id)dictionaryRepresentation;	// IMP=0x00000001000a6cec
- (id)description;	// IMP=0x00000001000a6c6c
@property(nonatomic) _Bool hasCapacitance;
- (int)StringAsTransition:(id)arg1;	// IMP=0x00000001000a6b68
- (id)transitionAsString:(int)arg1;	// IMP=0x00000001000a6ae0
@property(nonatomic) _Bool hasTransition;
@property(nonatomic) int transition; // @synthesize transition=_transition;
@property(nonatomic) _Bool hasTimestamp;

@end

