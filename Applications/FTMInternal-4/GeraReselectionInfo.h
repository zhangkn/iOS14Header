//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface GeraReselectionInfo : PBCodable <NSCopying>
{
    NSMutableArray *_geraNcells;	// 8 = 0x8
    unsigned int _sfHigh;	// 16 = 0x10
    unsigned int _sfMedium;	// 20 = 0x14
    unsigned int _tReselection;	// 24 = 0x18
    CDStruct_7f2df396 _has;	// 28 = 0x1c
}

+ (Class)geraNcellType;	// IMP=0x00000001000313bc
- (void).cxx_destruct;	// IMP=0x0000000100032574
@property(retain, nonatomic) NSMutableArray *geraNcells; // @synthesize geraNcells=_geraNcells;
@property(nonatomic) unsigned int sfHigh; // @synthesize sfHigh=_sfHigh;
@property(nonatomic) unsigned int sfMedium; // @synthesize sfMedium=_sfMedium;
@property(nonatomic) unsigned int tReselection; // @synthesize tReselection=_tReselection;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100032364
- (unsigned long long)hash;	// IMP=0x00000001000322c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100032198
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100031fa0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100031e4c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100031cac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100031ca4
- (id)dictionaryRepresentation;	// IMP=0x000000010003147c
- (id)description;	// IMP=0x00000001000313c8
- (id)geraNcellAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000313a4
- (unsigned long long)geraNcellsCount;	// IMP=0x000000010003138c
- (void)addGeraNcell:(id)arg1;	// IMP=0x0000000100031318
- (void)clearGeraNcells;	// IMP=0x0000000100031300
@property(nonatomic) _Bool hasSfHigh;
@property(nonatomic) _Bool hasSfMedium;
@property(nonatomic) _Bool hasTReselection;

@end

