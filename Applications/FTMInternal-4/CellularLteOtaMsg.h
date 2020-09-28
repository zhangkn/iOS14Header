//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface CellularLteOtaMsg : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _cellId;	// 16 = 0x10
    int _channelType;	// 20 = 0x14
    NSData *_content;	// 24 = 0x18
    unsigned int _dlBw;	// 32 = 0x20
    int _dlCcchMsg;	// 36 = 0x24
    int _dlDcchMsg;	// 40 = 0x28
    unsigned int _freq;	// 44 = 0x2c
    unsigned int _freqBandInd;	// 48 = 0x30
    unsigned int _length;	// 52 = 0x34
    int _mcchMsg;	// 56 = 0x38
    unsigned int _msgType;	// 60 = 0x3c
    unsigned int _numMncDigits;	// 64 = 0x40
    unsigned int _phyCellId;	// 68 = 0x44
    unsigned int _rbId;	// 72 = 0x48
    unsigned int _selPlmnMcc;	// 76 = 0x4c
    unsigned int _selPlmnMnc;	// 80 = 0x50
    unsigned int _subsId;	// 84 = 0x54
    unsigned int _trackingAreaCode;	// 88 = 0x58
    int _ulCcchMsg;	// 92 = 0x5c
    int _ulDcchMsg;	// 96 = 0x60
    _Bool _scgEverConfigured;	// 100 = 0x64
    _Bool _upperLayerIndication;	// 101 = 0x65
    struct {
        unsigned int timestamp:1;
        unsigned int cellId:1;
        unsigned int channelType:1;
        unsigned int dlBw:1;
        unsigned int dlCcchMsg:1;
        unsigned int dlDcchMsg:1;
        unsigned int freq:1;
        unsigned int freqBandInd:1;
        unsigned int length:1;
        unsigned int mcchMsg:1;
        unsigned int msgType:1;
        unsigned int numMncDigits:1;
        unsigned int phyCellId:1;
        unsigned int rbId:1;
        unsigned int selPlmnMcc:1;
        unsigned int selPlmnMnc:1;
        unsigned int subsId:1;
        unsigned int trackingAreaCode:1;
        unsigned int ulCcchMsg:1;
        unsigned int ulDcchMsg:1;
        unsigned int scgEverConfigured:1;
        unsigned int upperLayerIndication:1;
    } _has;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100096a1c
@property(nonatomic) unsigned int subsId; // @synthesize subsId=_subsId;
@property(nonatomic) _Bool scgEverConfigured; // @synthesize scgEverConfigured=_scgEverConfigured;
@property(nonatomic) _Bool upperLayerIndication; // @synthesize upperLayerIndication=_upperLayerIndication;
@property(nonatomic) unsigned int numMncDigits; // @synthesize numMncDigits=_numMncDigits;
@property(nonatomic) unsigned int selPlmnMnc; // @synthesize selPlmnMnc=_selPlmnMnc;
@property(nonatomic) unsigned int selPlmnMcc; // @synthesize selPlmnMcc=_selPlmnMcc;
@property(nonatomic) unsigned int trackingAreaCode; // @synthesize trackingAreaCode=_trackingAreaCode;
@property(nonatomic) unsigned int freqBandInd; // @synthesize freqBandInd=_freqBandInd;
@property(nonatomic) unsigned int cellId; // @synthesize cellId=_cellId;
@property(nonatomic) unsigned int dlBw; // @synthesize dlBw=_dlBw;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int rbId; // @synthesize rbId=_rbId;
@property(nonatomic) unsigned int freq; // @synthesize freq=_freq;
@property(nonatomic) unsigned int phyCellId; // @synthesize phyCellId=_phyCellId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010009652c
- (unsigned long long)hash;	// IMP=0x0000000100096218
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100095dcc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000959d0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100095604
- (void)writeTo:(id)arg1;	// IMP=0x0000000100095290
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100095288
- (id)dictionaryRepresentation;	// IMP=0x00000001000935a0
- (id)description;	// IMP=0x00000001000934ec
@property(nonatomic) _Bool hasSubsId;
- (int)StringAsDlDcchMsg:(id)arg1;	// IMP=0x00000001000932e8
- (id)dlDcchMsgAsString:(int)arg1;	// IMP=0x0000000100093204
@property(nonatomic) _Bool hasDlDcchMsg;
@property(nonatomic) int dlDcchMsg; // @synthesize dlDcchMsg=_dlDcchMsg;
- (int)StringAsDlCcchMsg:(id)arg1;	// IMP=0x00000001000930bc
- (id)dlCcchMsgAsString:(int)arg1;	// IMP=0x000000010009302c
@property(nonatomic) _Bool hasDlCcchMsg;
@property(nonatomic) int dlCcchMsg; // @synthesize dlCcchMsg=_dlCcchMsg;
- (int)StringAsUlDcchMsg:(id)arg1;	// IMP=0x0000000100092d04
- (id)ulDcchMsgAsString:(int)arg1;	// IMP=0x0000000100092bc0
@property(nonatomic) _Bool hasUlDcchMsg;
@property(nonatomic) int ulDcchMsg; // @synthesize ulDcchMsg=_ulDcchMsg;
- (int)StringAsUlCcchMsg:(id)arg1;	// IMP=0x0000000100092ac4
- (id)ulCcchMsgAsString:(int)arg1;	// IMP=0x0000000100092a60
@property(nonatomic) _Bool hasUlCcchMsg;
@property(nonatomic) int ulCcchMsg; // @synthesize ulCcchMsg=_ulCcchMsg;
- (int)StringAsMcchMsg:(id)arg1;	// IMP=0x0000000100092964
- (id)mcchMsgAsString:(int)arg1;	// IMP=0x0000000100092900
@property(nonatomic) _Bool hasMcchMsg;
@property(nonatomic) int mcchMsg; // @synthesize mcchMsg=_mcchMsg;
@property(nonatomic) _Bool hasScgEverConfigured;
@property(nonatomic) _Bool hasUpperLayerIndication;
@property(nonatomic) _Bool hasNumMncDigits;
@property(nonatomic) _Bool hasSelPlmnMnc;
@property(nonatomic) _Bool hasSelPlmnMcc;
@property(nonatomic) _Bool hasTrackingAreaCode;
@property(nonatomic) _Bool hasFreqBandInd;
@property(nonatomic) _Bool hasCellId;
@property(nonatomic) _Bool hasDlBw;
@property(readonly, nonatomic) _Bool hasContent;
@property(nonatomic) _Bool hasLength;
@property(nonatomic) _Bool hasMsgType;
- (int)StringAsChannelType:(id)arg1;	// IMP=0x00000001000922d4
- (id)channelTypeAsString:(int)arg1;	// IMP=0x0000000100092214
@property(nonatomic) _Bool hasChannelType;
@property(nonatomic) int channelType; // @synthesize channelType=_channelType;
@property(nonatomic) _Bool hasRbId;
@property(nonatomic) _Bool hasFreq;
@property(nonatomic) _Bool hasPhyCellId;
@property(nonatomic) _Bool hasTimestamp;

@end
