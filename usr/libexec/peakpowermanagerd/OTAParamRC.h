//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class OTABMUResistance, OTAResistanceData;

@interface OTAParamRC : PBCodable <NSCopying>
{
    CDStruct_fae3dc92 _agingCoeffForR0TemperatureCoeffs;	// 8 = 0x8
    CDStruct_fae3dc92 _agingCoeffForR0s;	// 32 = 0x20
    CDStruct_fae3dc92 _agingCoeffForR1TemperatureCoeffs;	// 56 = 0x38
    CDStruct_fae3dc92 _agingCoeffForR1s;	// 80 = 0x50
    CDStruct_fae3dc92 _agingCoeffForR2TemperatureCoeffs;	// 104 = 0x68
    CDStruct_fae3dc92 _agingCoeffForR2s;	// 128 = 0x80
    CDStruct_fae3dc92 _agingCoeffForR3TemperatureCoeffs;	// 152 = 0x98
    CDStruct_fae3dc92 _agingCoeffForR3s;	// 176 = 0xb0
    CDStruct_fae3dc92 _agingCoeffForRCFreq1TemperatureCoeffs;	// 200 = 0xc8
    CDStruct_fae3dc92 _agingCoeffForRCFreq1s;	// 224 = 0xe0
    CDStruct_fae3dc92 _agingCoeffForRCFreq2TemperatureCoeffs;	// 248 = 0xf8
    CDStruct_fae3dc92 _agingCoeffForRCFreq2s;	// 272 = 0x110
    CDStruct_fae3dc92 _agingCoeffForRCFreq3TemperatureCoeffs;	// 296 = 0x128
    CDStruct_fae3dc92 _agingCoeffForRCFreq3s;	// 320 = 0x140
    CDStruct_fae3dc92 _agingCoeffForRCFreq4TemperatureCoeffs;	// 344 = 0x158
    CDStruct_fae3dc92 _agingCoeffForRCFreq4s;	// 368 = 0x170
    CDStruct_fae3dc92 _baselineRdcs;	// 392 = 0x188
    CDStruct_fae3dc92 _gridOCVs;	// 416 = 0x1a0
    CDStruct_fae3dc92 _slopeForR0Extraps;	// 440 = 0x1b8
    CDStruct_fae3dc92 _slopeForR1Extraps;	// 464 = 0x1d0
    CDStruct_fae3dc92 _slopeForR2Extraps;	// 488 = 0x1e8
    CDStruct_fae3dc92 _slopeForR3Extraps;	// 512 = 0x200
    OTAResistanceData *_baselineR0;	// 536 = 0x218
    OTAResistanceData *_baselineR1;	// 544 = 0x220
    OTAResistanceData *_baselineR2;	// 552 = 0x228
    OTAResistanceData *_baselineR3;	// 560 = 0x230
    OTAResistanceData *_baselineR4;	// 568 = 0x238
    OTAResistanceData *_baselineRCFreq1;	// 576 = 0x240
    OTAResistanceData *_baselineRCFreq2;	// 584 = 0x248
    OTAResistanceData *_baselineRCFreq3;	// 592 = 0x250
    OTAResistanceData *_baselineRCFreq4;	// 600 = 0x258
    float _baselineWRdc;	// 608 = 0x260
    OTABMUResistance *_bmuResistance;	// 616 = 0x268
    unsigned int _chemID;	// 624 = 0x270
    int _mLBConfig;	// 628 = 0x274
    float _maxRdcRatio;	// 632 = 0x278
    float _maxRdcRatioR2Extrap;	// 636 = 0x27c
    OTAResistanceData *_r0;	// 640 = 0x280
    OTAResistanceData *_r1;	// 648 = 0x288
    OTAResistanceData *_r2;	// 656 = 0x290
    OTAResistanceData *_r3;	// 664 = 0x298
    OTAResistanceData *_rCFreq1;	// 672 = 0x2a0
    OTAResistanceData *_rCFreq2;	// 680 = 0x2a8
    OTAResistanceData *_rCFreq3;	// 688 = 0x2b0
    OTAResistanceData *_rCFreq4;	// 696 = 0x2b8
    struct {
        unsigned int baselineWRdc:1;
        unsigned int mLBConfig:1;
        unsigned int maxRdcRatio:1;
        unsigned int maxRdcRatioR2Extrap:1;
    } _has;	// 704 = 0x2c0
}

- (void).cxx_destruct;	// IMP=0x000000010000aab4
@property(retain, nonatomic) OTAResistanceData *baselineRCFreq4; // @synthesize baselineRCFreq4=_baselineRCFreq4;
@property(retain, nonatomic) OTAResistanceData *baselineRCFreq3; // @synthesize baselineRCFreq3=_baselineRCFreq3;
@property(retain, nonatomic) OTAResistanceData *baselineRCFreq2; // @synthesize baselineRCFreq2=_baselineRCFreq2;
@property(retain, nonatomic) OTAResistanceData *baselineRCFreq1; // @synthesize baselineRCFreq1=_baselineRCFreq1;
@property(retain, nonatomic) OTAResistanceData *baselineR4; // @synthesize baselineR4=_baselineR4;
@property(retain, nonatomic) OTAResistanceData *rCFreq4; // @synthesize rCFreq4=_rCFreq4;
@property(retain, nonatomic) OTAResistanceData *r3; // @synthesize r3=_r3;
@property(nonatomic) float baselineWRdc; // @synthesize baselineWRdc=_baselineWRdc;
@property(nonatomic) float maxRdcRatioR2Extrap; // @synthesize maxRdcRatioR2Extrap=_maxRdcRatioR2Extrap;
@property(nonatomic) float maxRdcRatio; // @synthesize maxRdcRatio=_maxRdcRatio;
@property(retain, nonatomic) OTAResistanceData *baselineR3; // @synthesize baselineR3=_baselineR3;
@property(nonatomic) unsigned int chemID; // @synthesize chemID=_chemID;
@property(retain, nonatomic) OTABMUResistance *bmuResistance; // @synthesize bmuResistance=_bmuResistance;
@property(retain, nonatomic) OTAResistanceData *baselineR0; // @synthesize baselineR0=_baselineR0;
@property(retain, nonatomic) OTAResistanceData *rCFreq3; // @synthesize rCFreq3=_rCFreq3;
@property(retain, nonatomic) OTAResistanceData *rCFreq2; // @synthesize rCFreq2=_rCFreq2;
@property(retain, nonatomic) OTAResistanceData *rCFreq1; // @synthesize rCFreq1=_rCFreq1;
@property(retain, nonatomic) OTAResistanceData *baselineR2; // @synthesize baselineR2=_baselineR2;
@property(retain, nonatomic) OTAResistanceData *r2; // @synthesize r2=_r2;
@property(retain, nonatomic) OTAResistanceData *baselineR1; // @synthesize baselineR1=_baselineR1;
@property(retain, nonatomic) OTAResistanceData *r1; // @synthesize r1=_r1;
@property(retain, nonatomic) OTAResistanceData *r0; // @synthesize r0=_r0;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100009bbc
- (unsigned long long)hash;	// IMP=0x00000001000096c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000904c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100008ab0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100007d28
- (void)writeTo:(id)arg1;	// IMP=0x0000000100007520
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100007518
- (id)dictionaryRepresentation;	// IMP=0x0000000100005590
- (id)description;	// IMP=0x00000001000054dc
- (int)StringAsMLBConfig:(id)arg1;	// IMP=0x0000000100005470
- (id)mLBConfigAsString:(int)arg1;	// IMP=0x000000010000540c
@property(nonatomic) _Bool hasMLBConfig;
@property(nonatomic) int mLBConfig; // @synthesize mLBConfig=_mLBConfig;
- (void)setAgingCoeffForRCFreq4TemperatureCoeffs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010000536c
- (float)agingCoeffForRCFreq4TemperatureCoeffAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100005294
- (void)addAgingCoeffForRCFreq4TemperatureCoeff:(float)arg1;	// IMP=0x0000000100005284
- (void)clearAgingCoeffForRCFreq4TemperatureCoeffs;	// IMP=0x0000000100005274
@property(readonly, nonatomic) float *agingCoeffForRCFreq4TemperatureCoeffs;
@property(readonly, nonatomic) unsigned long long agingCoeffForRCFreq4TemperatureCoeffsCount;
- (void)setAgingCoeffForRCFreq3TemperatureCoeffs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100005238
- (float)agingCoeffForRCFreq3TemperatureCoeffAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100005160
- (void)addAgingCoeffForRCFreq3TemperatureCoeff:(float)arg1;	// IMP=0x0000000100005150
- (void)clearAgingCoeffForRCFreq3TemperatureCoeffs;	// IMP=0x0000000100005140
@property(readonly, nonatomic) float *agingCoeffForRCFreq3TemperatureCoeffs;
@property(readonly, nonatomic) unsigned long long agingCoeffForRCFreq3TemperatureCoeffsCount;
- (void)setAgingCoeffForRCFreq2TemperatureCoeffs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100005104
- (float)agingCoeffForRCFreq2TemperatureCoeffAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000502c
- (void)addAgingCoeffForRCFreq2TemperatureCoeff:(float)arg1;	// IMP=0x000000010000501c
- (void)clearAgingCoeffForRCFreq2TemperatureCoeffs;	// IMP=0x000000010000500c
@property(readonly, nonatomic) float *agingCoeffForRCFreq2TemperatureCoeffs;
@property(readonly, nonatomic) unsigned long long agingCoeffForRCFreq2TemperatureCoeffsCount;
- (void)setAgingCoeffForRCFreq1TemperatureCoeffs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004fd0
- (float)agingCoeffForRCFreq1TemperatureCoeffAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100004ef8
- (void)addAgingCoeffForRCFreq1TemperatureCoeff:(float)arg1;	// IMP=0x0000000100004ee8
- (void)clearAgingCoeffForRCFreq1TemperatureCoeffs;	// IMP=0x0000000100004ed8
@property(readonly, nonatomic) float *agingCoeffForRCFreq1TemperatureCoeffs;
@property(readonly, nonatomic) unsigned long long agingCoeffForRCFreq1TemperatureCoeffsCount;
- (void)setAgingCoeffForRCFreq4s:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004e9c
- (float)agingCoeffForRCFreq4AtIndex:(unsigned long long)arg1;	// IMP=0x0000000100004dc4
- (void)addAgingCoeffForRCFreq4:(float)arg1;	// IMP=0x0000000100004db4
- (void)clearAgingCoeffForRCFreq4s;	// IMP=0x0000000100004da4
@property(readonly, nonatomic) float *agingCoeffForRCFreq4s;
@property(readonly, nonatomic) unsigned long long agingCoeffForRCFreq4sCount;
- (void)setAgingCoeffForRCFreq3s:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004d68
- (float)agingCoeffForRCFreq3AtIndex:(unsigned long long)arg1;	// IMP=0x0000000100004c90
- (void)addAgingCoeffForRCFreq3:(float)arg1;	// IMP=0x0000000100004c80
- (void)clearAgingCoeffForRCFreq3s;	// IMP=0x0000000100004c70
@property(readonly, nonatomic) float *agingCoeffForRCFreq3s;
@property(readonly, nonatomic) unsigned long long agingCoeffForRCFreq3sCount;
- (void)setAgingCoeffForRCFreq2s:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004c34
- (float)agingCoeffForRCFreq2AtIndex:(unsigned long long)arg1;	// IMP=0x0000000100004b5c
- (void)addAgingCoeffForRCFreq2:(float)arg1;	// IMP=0x0000000100004b4c
- (void)clearAgingCoeffForRCFreq2s;	// IMP=0x0000000100004b3c
@property(readonly, nonatomic) float *agingCoeffForRCFreq2s;
@property(readonly, nonatomic) unsigned long long agingCoeffForRCFreq2sCount;
- (void)setAgingCoeffForRCFreq1s:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004b00
- (float)agingCoeffForRCFreq1AtIndex:(unsigned long long)arg1;	// IMP=0x0000000100004a28
- (void)addAgingCoeffForRCFreq1:(float)arg1;	// IMP=0x0000000100004a18
- (void)clearAgingCoeffForRCFreq1s;	// IMP=0x0000000100004a08
@property(readonly, nonatomic) float *agingCoeffForRCFreq1s;
@property(readonly, nonatomic) unsigned long long agingCoeffForRCFreq1sCount;
- (void)setAgingCoeffForR3TemperatureCoeffs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001000049cc
- (float)agingCoeffForR3TemperatureCoeffAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000048f4
- (void)addAgingCoeffForR3TemperatureCoeff:(float)arg1;	// IMP=0x00000001000048e4
- (void)clearAgingCoeffForR3TemperatureCoeffs;	// IMP=0x00000001000048d4
@property(readonly, nonatomic) float *agingCoeffForR3TemperatureCoeffs;
@property(readonly, nonatomic) unsigned long long agingCoeffForR3TemperatureCoeffsCount;
- (void)setAgingCoeffForR3s:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004898
- (float)agingCoeffForR3AtIndex:(unsigned long long)arg1;	// IMP=0x00000001000047c0
- (void)addAgingCoeffForR3:(float)arg1;	// IMP=0x00000001000047b0
- (void)clearAgingCoeffForR3s;	// IMP=0x00000001000047a0
@property(readonly, nonatomic) float *agingCoeffForR3s;
@property(readonly, nonatomic) unsigned long long agingCoeffForR3sCount;
@property(readonly, nonatomic) _Bool hasBaselineRCFreq4;
@property(readonly, nonatomic) _Bool hasBaselineRCFreq3;
@property(readonly, nonatomic) _Bool hasBaselineRCFreq2;
@property(readonly, nonatomic) _Bool hasBaselineRCFreq1;
@property(readonly, nonatomic) _Bool hasBaselineR4;
@property(readonly, nonatomic) _Bool hasRCFreq4;
@property(readonly, nonatomic) _Bool hasR3;
- (void)setSlopeForR3Extraps:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001000046bc
- (float)slopeForR3ExtrapAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000045e4
- (void)addSlopeForR3Extrap:(float)arg1;	// IMP=0x00000001000045d4
- (void)clearSlopeForR3Extraps;	// IMP=0x00000001000045c4
@property(readonly, nonatomic) float *slopeForR3Extraps;
@property(readonly, nonatomic) unsigned long long slopeForR3ExtrapsCount;
- (void)setSlopeForR2Extraps:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004588
- (float)slopeForR2ExtrapAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000044b0
- (void)addSlopeForR2Extrap:(float)arg1;	// IMP=0x00000001000044a0
- (void)clearSlopeForR2Extraps;	// IMP=0x0000000100004490
@property(readonly, nonatomic) float *slopeForR2Extraps;
@property(readonly, nonatomic) unsigned long long slopeForR2ExtrapsCount;
- (void)setSlopeForR1Extraps:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004454
- (float)slopeForR1ExtrapAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000437c
- (void)addSlopeForR1Extrap:(float)arg1;	// IMP=0x000000010000436c
- (void)clearSlopeForR1Extraps;	// IMP=0x000000010000435c
@property(readonly, nonatomic) float *slopeForR1Extraps;
@property(readonly, nonatomic) unsigned long long slopeForR1ExtrapsCount;
- (void)setSlopeForR0Extraps:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100004320
- (float)slopeForR0ExtrapAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100004248
- (void)addSlopeForR0Extrap:(float)arg1;	// IMP=0x0000000100004238
- (void)clearSlopeForR0Extraps;	// IMP=0x0000000100004228
@property(readonly, nonatomic) float *slopeForR0Extraps;
@property(readonly, nonatomic) unsigned long long slopeForR0ExtrapsCount;
@property(nonatomic) _Bool hasBaselineWRdc;
@property(nonatomic) _Bool hasMaxRdcRatioR2Extrap;
@property(nonatomic) _Bool hasMaxRdcRatio;
@property(readonly, nonatomic) _Bool hasBaselineR3;
- (void)setGridOCVs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001000040c0
- (float)gridOCVAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100003fe8
- (void)addGridOCV:(float)arg1;	// IMP=0x0000000100003fd8
- (void)clearGridOCVs;	// IMP=0x0000000100003fc8
@property(readonly, nonatomic) float *gridOCVs;
@property(readonly, nonatomic) unsigned long long gridOCVsCount;
@property(readonly, nonatomic) _Bool hasBmuResistance;
@property(readonly, nonatomic) _Bool hasBaselineR0;
- (void)setBaselineRdcs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100003f5c
- (float)baselineRdcAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100003e84
- (void)addBaselineRdc:(float)arg1;	// IMP=0x0000000100003e74
- (void)clearBaselineRdcs;	// IMP=0x0000000100003e64
@property(readonly, nonatomic) float *baselineRdcs;
@property(readonly, nonatomic) unsigned long long baselineRdcsCount;
- (void)setAgingCoeffForR2TemperatureCoeffs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100003e28
- (float)agingCoeffForR2TemperatureCoeffAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100003d50
- (void)addAgingCoeffForR2TemperatureCoeff:(float)arg1;	// IMP=0x0000000100003d40
- (void)clearAgingCoeffForR2TemperatureCoeffs;	// IMP=0x0000000100003d30
@property(readonly, nonatomic) float *agingCoeffForR2TemperatureCoeffs;
@property(readonly, nonatomic) unsigned long long agingCoeffForR2TemperatureCoeffsCount;
- (void)setAgingCoeffForR2s:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100003cf4
- (float)agingCoeffForR2AtIndex:(unsigned long long)arg1;	// IMP=0x0000000100003c1c
- (void)addAgingCoeffForR2:(float)arg1;	// IMP=0x0000000100003c0c
- (void)clearAgingCoeffForR2s;	// IMP=0x0000000100003bfc
@property(readonly, nonatomic) float *agingCoeffForR2s;
@property(readonly, nonatomic) unsigned long long agingCoeffForR2sCount;
- (void)setAgingCoeffForR1TemperatureCoeffs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100003bc0
- (float)agingCoeffForR1TemperatureCoeffAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100003ae8
- (void)addAgingCoeffForR1TemperatureCoeff:(float)arg1;	// IMP=0x0000000100003ad8
- (void)clearAgingCoeffForR1TemperatureCoeffs;	// IMP=0x0000000100003ac8
@property(readonly, nonatomic) float *agingCoeffForR1TemperatureCoeffs;
@property(readonly, nonatomic) unsigned long long agingCoeffForR1TemperatureCoeffsCount;
- (void)setAgingCoeffForR1s:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100003a8c
- (float)agingCoeffForR1AtIndex:(unsigned long long)arg1;	// IMP=0x00000001000039b4
- (void)addAgingCoeffForR1:(float)arg1;	// IMP=0x00000001000039a4
- (void)clearAgingCoeffForR1s;	// IMP=0x0000000100003994
@property(readonly, nonatomic) float *agingCoeffForR1s;
@property(readonly, nonatomic) unsigned long long agingCoeffForR1sCount;
- (void)setAgingCoeffForR0TemperatureCoeffs:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100003958
- (float)agingCoeffForR0TemperatureCoeffAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100003880
- (void)addAgingCoeffForR0TemperatureCoeff:(float)arg1;	// IMP=0x0000000100003870
- (void)clearAgingCoeffForR0TemperatureCoeffs;	// IMP=0x0000000100003860
@property(readonly, nonatomic) float *agingCoeffForR0TemperatureCoeffs;
@property(readonly, nonatomic) unsigned long long agingCoeffForR0TemperatureCoeffsCount;
- (void)setAgingCoeffForR0s:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100003824
- (float)agingCoeffForR0AtIndex:(unsigned long long)arg1;	// IMP=0x000000010000374c
- (void)addAgingCoeffForR0:(float)arg1;	// IMP=0x000000010000373c
- (void)clearAgingCoeffForR0s;	// IMP=0x000000010000372c
@property(readonly, nonatomic) float *agingCoeffForR0s;
@property(readonly, nonatomic) unsigned long long agingCoeffForR0sCount;
@property(readonly, nonatomic) _Bool hasRCFreq3;
@property(readonly, nonatomic) _Bool hasRCFreq2;
@property(readonly, nonatomic) _Bool hasRCFreq1;
@property(readonly, nonatomic) _Bool hasBaselineR2;
@property(readonly, nonatomic) _Bool hasR2;
@property(readonly, nonatomic) _Bool hasBaselineR1;
@property(readonly, nonatomic) _Bool hasR1;
@property(readonly, nonatomic) _Bool hasR0;
- (void)dealloc;	// IMP=0x00000001000034a8

@end

