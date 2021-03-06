//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface CellularLteScellInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _allowedAccess;	// 16 = 0x10
    unsigned int _cellId;	// 20 = 0x14
    unsigned int _dlBw;	// 24 = 0x18
    unsigned int _dlFreq;	// 28 = 0x1c
    unsigned int _freqBandInd;	// 32 = 0x20
    unsigned int _hstCellInfo;	// 36 = 0x24
    unsigned int _numMncDigits;	// 40 = 0x28
    unsigned int _numSubs;	// 44 = 0x2c
    unsigned int _phyCellId;	// 48 = 0x30
    unsigned int _prioOfCampedLteBand;	// 52 = 0x34
    unsigned int _psPref;	// 56 = 0x38
    unsigned int _selPlmnMcc;	// 60 = 0x3c
    unsigned int _selPlmnMnc;	// 64 = 0x40
    NSData *_simHplmn;	// 72 = 0x48
    unsigned int _subsId;	// 80 = 0x50
    unsigned int _tddSfAssignment;	// 84 = 0x54
    unsigned int _tddSsfPatterns;	// 88 = 0x58
    unsigned int _trackingAreaCode;	// 92 = 0x5c
    unsigned int _ulBw;	// 96 = 0x60
    unsigned int _ulFreq;	// 100 = 0x64
    _Bool _cellIsApo;	// 104 = 0x68
    struct {
        unsigned int timestamp:1;
        unsigned int allowedAccess:1;
        unsigned int cellId:1;
        unsigned int dlBw:1;
        unsigned int dlFreq:1;
        unsigned int freqBandInd:1;
        unsigned int hstCellInfo:1;
        unsigned int numMncDigits:1;
        unsigned int numSubs:1;
        unsigned int phyCellId:1;
        unsigned int prioOfCampedLteBand:1;
        unsigned int psPref:1;
        unsigned int selPlmnMcc:1;
        unsigned int selPlmnMnc:1;
        unsigned int subsId:1;
        unsigned int tddSfAssignment:1;
        unsigned int tddSsfPatterns:1;
        unsigned int trackingAreaCode:1;
        unsigned int ulBw:1;
        unsigned int ulFreq:1;
        unsigned int cellIsApo:1;
    } _has;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x000000010008de80
@property(nonatomic) unsigned int psPref; // @synthesize psPref=_psPref;
@property(nonatomic) unsigned int subsId; // @synthesize subsId=_subsId;
@property(retain, nonatomic) NSData *simHplmn; // @synthesize simHplmn=_simHplmn;
@property(nonatomic) unsigned int numSubs; // @synthesize numSubs=_numSubs;
@property(nonatomic) unsigned int prioOfCampedLteBand; // @synthesize prioOfCampedLteBand=_prioOfCampedLteBand;
@property(nonatomic) unsigned int hstCellInfo; // @synthesize hstCellInfo=_hstCellInfo;
@property(nonatomic) _Bool cellIsApo; // @synthesize cellIsApo=_cellIsApo;
@property(nonatomic) unsigned int tddSsfPatterns; // @synthesize tddSsfPatterns=_tddSsfPatterns;
@property(nonatomic) unsigned int tddSfAssignment; // @synthesize tddSfAssignment=_tddSfAssignment;
@property(nonatomic) unsigned int allowedAccess; // @synthesize allowedAccess=_allowedAccess;
@property(nonatomic) unsigned int selPlmnMnc; // @synthesize selPlmnMnc=_selPlmnMnc;
@property(nonatomic) unsigned int selPlmnMcc; // @synthesize selPlmnMcc=_selPlmnMcc;
@property(nonatomic) unsigned int numMncDigits; // @synthesize numMncDigits=_numMncDigits;
@property(nonatomic) unsigned int trackingAreaCode; // @synthesize trackingAreaCode=_trackingAreaCode;
@property(nonatomic) unsigned int freqBandInd; // @synthesize freqBandInd=_freqBandInd;
@property(nonatomic) unsigned int cellId; // @synthesize cellId=_cellId;
@property(nonatomic) unsigned int ulBw; // @synthesize ulBw=_ulBw;
@property(nonatomic) unsigned int dlBw; // @synthesize dlBw=_dlBw;
@property(nonatomic) unsigned int ulFreq; // @synthesize ulFreq=_ulFreq;
@property(nonatomic) unsigned int dlFreq; // @synthesize dlFreq=_dlFreq;
@property(nonatomic) unsigned int phyCellId; // @synthesize phyCellId=_phyCellId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010008d970
- (unsigned long long)hash;	// IMP=0x000000010008d67c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008d260
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008ce94
- (void)copyTo:(id)arg1;	// IMP=0x000000010008caf8
- (void)writeTo:(id)arg1;	// IMP=0x000000010008c7b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010008c7a8
- (id)dictionaryRepresentation;	// IMP=0x000000010008af18
- (id)description;	// IMP=0x000000010008ae64
@property(nonatomic) _Bool hasPsPref;
@property(nonatomic) _Bool hasSubsId;
@property(readonly, nonatomic) _Bool hasSimHplmn;
@property(nonatomic) _Bool hasNumSubs;
@property(nonatomic) _Bool hasPrioOfCampedLteBand;
@property(nonatomic) _Bool hasHstCellInfo;
@property(nonatomic) _Bool hasCellIsApo;
@property(nonatomic) _Bool hasTddSsfPatterns;
@property(nonatomic) _Bool hasTddSfAssignment;
@property(nonatomic) _Bool hasAllowedAccess;
@property(nonatomic) _Bool hasSelPlmnMnc;
@property(nonatomic) _Bool hasSelPlmnMcc;
@property(nonatomic) _Bool hasNumMncDigits;
@property(nonatomic) _Bool hasTrackingAreaCode;
@property(nonatomic) _Bool hasFreqBandInd;
@property(nonatomic) _Bool hasCellId;
@property(nonatomic) _Bool hasUlBw;
@property(nonatomic) _Bool hasDlBw;
@property(nonatomic) _Bool hasUlFreq;
@property(nonatomic) _Bool hasDlFreq;
@property(nonatomic) _Bool hasPhyCellId;
@property(nonatomic) _Bool hasTimestamp;

@end

