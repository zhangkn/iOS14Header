//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface CellularUmtsRrcStateHist : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _numSubs;	// 16 = 0x10
    NSData *_plmn;	// 24 = 0x18
    unsigned int _psPref;	// 32 = 0x20
    NSMutableArray *_stateHists;	// 40 = 0x28
    unsigned int _subsId;	// 48 = 0x30
    unsigned int _totalDurationMs;	// 52 = 0x34
    _Bool _wcdma;	// 56 = 0x38
    struct {
        unsigned int timestamp:1;
        unsigned int numSubs:1;
        unsigned int psPref:1;
        unsigned int subsId:1;
        unsigned int totalDurationMs:1;
        unsigned int wcdma:1;
    } _has;	// 60 = 0x3c
}

+ (Class)stateHistType;	// IMP=0x000000010009cde0
- (void).cxx_destruct;	// IMP=0x000000010009e84c
@property(nonatomic) unsigned int psPref; // @synthesize psPref=_psPref;
@property(nonatomic) unsigned int subsId; // @synthesize subsId=_subsId;
@property(retain, nonatomic) NSData *plmn; // @synthesize plmn=_plmn;
@property(nonatomic) unsigned int numSubs; // @synthesize numSubs=_numSubs;
@property(retain, nonatomic) NSMutableArray *stateHists; // @synthesize stateHists=_stateHists;
@property(nonatomic) _Bool wcdma; // @synthesize wcdma=_wcdma;
@property(nonatomic) unsigned int totalDurationMs; // @synthesize totalDurationMs=_totalDurationMs;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010009e550
- (unsigned long long)hash;	// IMP=0x000000010009e418
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010009e238
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010009df94
- (void)copyTo:(id)arg1;	// IMP=0x000000010009dda8
- (void)writeTo:(id)arg1;	// IMP=0x000000010009db78
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010009db70
- (id)dictionaryRepresentation;	// IMP=0x000000010009cfd8
- (id)description;	// IMP=0x000000010009cf24
@property(nonatomic) _Bool hasPsPref;
@property(nonatomic) _Bool hasSubsId;
@property(readonly, nonatomic) _Bool hasPlmn;
@property(nonatomic) _Bool hasNumSubs;
- (id)stateHistAtIndex:(unsigned long long)arg1;	// IMP=0x000000010009cdc8
- (unsigned long long)stateHistsCount;	// IMP=0x000000010009cdb0
- (void)addStateHist:(id)arg1;	// IMP=0x000000010009cd3c
- (void)clearStateHists;	// IMP=0x000000010009cd24
@property(nonatomic) _Bool hasWcdma;
@property(nonatomic) _Bool hasTotalDurationMs;
@property(nonatomic) _Bool hasTimestamp;

@end

