//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CellularCallCount : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSMutableArray *_endStatusCountConnectedCdmas;	// 16 = 0x10
    NSMutableArray *_endStatusCountConnectedGws;	// 24 = 0x18
    NSMutableArray *_endStatusCountNotConnectedCdmas;	// 32 = 0x20
    NSMutableArray *_endStatusCountNotConnectedGws;	// 40 = 0x28
    unsigned int _numConnectedCallsCdma;	// 48 = 0x30
    unsigned int _numConnectedCallsGsm;	// 52 = 0x34
    unsigned int _numConnectedCallsGw;	// 56 = 0x38
    unsigned int _numConnectedCallsWcdma;	// 60 = 0x3c
    unsigned int _numMultiRabEndCalls;	// 64 = 0x40
    unsigned int _numMultiRabEverCalls;	// 68 = 0x44
    unsigned int _numNormalReleaseCallsCdma;	// 72 = 0x48
    unsigned int _numNormalReleaseCallsGsm;	// 76 = 0x4c
    unsigned int _numNormalReleaseCallsGw;	// 80 = 0x50
    unsigned int _numNormalReleaseCallsWcdma;	// 84 = 0x54
    unsigned int _numTotalCallsCdma;	// 88 = 0x58
    unsigned int _numTotalCallsGsm;	// 92 = 0x5c
    unsigned int _numTotalCallsGw;	// 96 = 0x60
    unsigned int _numTotalCallsWcdma;	// 100 = 0x64
    unsigned int _periodSeconds;	// 104 = 0x68
    NSMutableArray *_releaseCauseCountConnectedGsms;	// 112 = 0x70
    NSMutableArray *_releaseCauseCountConnectedWcdmas;	// 120 = 0x78
    NSMutableArray *_releaseCauseCountConnecteds;	// 128 = 0x80
    NSMutableArray *_releaseCauseCountNotConnectedGsms;	// 136 = 0x88
    NSMutableArray *_releaseCauseCountNotConnectedWcdmas;	// 144 = 0x90
    NSMutableArray *_releaseCauseCountNotConnecteds;	// 152 = 0x98
    unsigned int _totalConnectedSecondsCdma;	// 160 = 0xa0
    unsigned int _totalConnectedSecondsGsm;	// 164 = 0xa4
    unsigned int _totalConnectedSecondsWcdma;	// 168 = 0xa8
    struct {
        unsigned int timestamp:1;
        unsigned int numConnectedCallsCdma:1;
        unsigned int numConnectedCallsGsm:1;
        unsigned int numConnectedCallsGw:1;
        unsigned int numConnectedCallsWcdma:1;
        unsigned int numMultiRabEndCalls:1;
        unsigned int numMultiRabEverCalls:1;
        unsigned int numNormalReleaseCallsCdma:1;
        unsigned int numNormalReleaseCallsGsm:1;
        unsigned int numNormalReleaseCallsGw:1;
        unsigned int numNormalReleaseCallsWcdma:1;
        unsigned int numTotalCallsCdma:1;
        unsigned int numTotalCallsGsm:1;
        unsigned int numTotalCallsGw:1;
        unsigned int numTotalCallsWcdma:1;
        unsigned int periodSeconds:1;
        unsigned int totalConnectedSecondsCdma:1;
        unsigned int totalConnectedSecondsGsm:1;
        unsigned int totalConnectedSecondsWcdma:1;
    } _has;	// 172 = 0xac
}

+ (Class)releaseCauseCountNotConnectedWcdmaType;	// IMP=0x00000001000b4768
+ (Class)releaseCauseCountConnectedWcdmaType;	// IMP=0x00000001000b46a0
+ (Class)releaseCauseCountNotConnectedGsmType;	// IMP=0x00000001000b444c
+ (Class)releaseCauseCountConnectedGsmType;	// IMP=0x00000001000b4384
+ (Class)releaseCauseCountNotConnectedType;	// IMP=0x00000001000b4194
+ (Class)releaseCauseCountConnectedType;	// IMP=0x00000001000b40cc
+ (Class)endStatusCountNotConnectedGwType;	// IMP=0x00000001000b3f44
+ (Class)endStatusCountConnectedGwType;	// IMP=0x00000001000b3e7c
+ (Class)endStatusCountNotConnectedCdmaType;	// IMP=0x00000001000b3c28
+ (Class)endStatusCountConnectedCdmaType;	// IMP=0x00000001000b3b60
- (void).cxx_destruct;	// IMP=0x00000001000ba420
@property(nonatomic) unsigned int totalConnectedSecondsWcdma; // @synthesize totalConnectedSecondsWcdma=_totalConnectedSecondsWcdma;
@property(retain, nonatomic) NSMutableArray *releaseCauseCountNotConnectedWcdmas; // @synthesize releaseCauseCountNotConnectedWcdmas=_releaseCauseCountNotConnectedWcdmas;
@property(retain, nonatomic) NSMutableArray *releaseCauseCountConnectedWcdmas; // @synthesize releaseCauseCountConnectedWcdmas=_releaseCauseCountConnectedWcdmas;
@property(nonatomic) unsigned int numNormalReleaseCallsWcdma; // @synthesize numNormalReleaseCallsWcdma=_numNormalReleaseCallsWcdma;
@property(nonatomic) unsigned int numConnectedCallsWcdma; // @synthesize numConnectedCallsWcdma=_numConnectedCallsWcdma;
@property(nonatomic) unsigned int numTotalCallsWcdma; // @synthesize numTotalCallsWcdma=_numTotalCallsWcdma;
@property(nonatomic) unsigned int totalConnectedSecondsGsm; // @synthesize totalConnectedSecondsGsm=_totalConnectedSecondsGsm;
@property(retain, nonatomic) NSMutableArray *releaseCauseCountNotConnectedGsms; // @synthesize releaseCauseCountNotConnectedGsms=_releaseCauseCountNotConnectedGsms;
@property(retain, nonatomic) NSMutableArray *releaseCauseCountConnectedGsms; // @synthesize releaseCauseCountConnectedGsms=_releaseCauseCountConnectedGsms;
@property(nonatomic) unsigned int numNormalReleaseCallsGsm; // @synthesize numNormalReleaseCallsGsm=_numNormalReleaseCallsGsm;
@property(nonatomic) unsigned int numConnectedCallsGsm; // @synthesize numConnectedCallsGsm=_numConnectedCallsGsm;
@property(nonatomic) unsigned int numTotalCallsGsm; // @synthesize numTotalCallsGsm=_numTotalCallsGsm;
@property(retain, nonatomic) NSMutableArray *releaseCauseCountNotConnecteds; // @synthesize releaseCauseCountNotConnecteds=_releaseCauseCountNotConnecteds;
@property(retain, nonatomic) NSMutableArray *releaseCauseCountConnecteds; // @synthesize releaseCauseCountConnecteds=_releaseCauseCountConnecteds;
@property(nonatomic) unsigned int numMultiRabEndCalls; // @synthesize numMultiRabEndCalls=_numMultiRabEndCalls;
@property(nonatomic) unsigned int numMultiRabEverCalls; // @synthesize numMultiRabEverCalls=_numMultiRabEverCalls;
@property(retain, nonatomic) NSMutableArray *endStatusCountNotConnectedGws; // @synthesize endStatusCountNotConnectedGws=_endStatusCountNotConnectedGws;
@property(retain, nonatomic) NSMutableArray *endStatusCountConnectedGws; // @synthesize endStatusCountConnectedGws=_endStatusCountConnectedGws;
@property(nonatomic) unsigned int numNormalReleaseCallsGw; // @synthesize numNormalReleaseCallsGw=_numNormalReleaseCallsGw;
@property(nonatomic) unsigned int numConnectedCallsGw; // @synthesize numConnectedCallsGw=_numConnectedCallsGw;
@property(nonatomic) unsigned int numTotalCallsGw; // @synthesize numTotalCallsGw=_numTotalCallsGw;
@property(nonatomic) unsigned int totalConnectedSecondsCdma; // @synthesize totalConnectedSecondsCdma=_totalConnectedSecondsCdma;
@property(retain, nonatomic) NSMutableArray *endStatusCountNotConnectedCdmas; // @synthesize endStatusCountNotConnectedCdmas=_endStatusCountNotConnectedCdmas;
@property(retain, nonatomic) NSMutableArray *endStatusCountConnectedCdmas; // @synthesize endStatusCountConnectedCdmas=_endStatusCountConnectedCdmas;
@property(nonatomic) unsigned int numNormalReleaseCallsCdma; // @synthesize numNormalReleaseCallsCdma=_numNormalReleaseCallsCdma;
@property(nonatomic) unsigned int numConnectedCallsCdma; // @synthesize numConnectedCallsCdma=_numConnectedCallsCdma;
@property(nonatomic) unsigned int numTotalCallsCdma; // @synthesize numTotalCallsCdma=_numTotalCallsCdma;
@property(nonatomic) unsigned int periodSeconds; // @synthesize periodSeconds=_periodSeconds;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b971c
- (unsigned long long)hash;	// IMP=0x00000001000b9370
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b8e04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b81dc
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b78f8
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b6f28
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b6f20
- (id)dictionaryRepresentation;	// IMP=0x00000001000b488c
- (id)description;	// IMP=0x00000001000b47d8
@property(nonatomic) _Bool hasTotalConnectedSecondsWcdma;
- (id)releaseCauseCountNotConnectedWcdmaAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b4750
- (unsigned long long)releaseCauseCountNotConnectedWcdmasCount;	// IMP=0x00000001000b4738
- (void)addReleaseCauseCountNotConnectedWcdma:(id)arg1;	// IMP=0x00000001000b46c4
- (void)clearReleaseCauseCountNotConnectedWcdmas;	// IMP=0x00000001000b46ac
- (id)releaseCauseCountConnectedWcdmaAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b4688
- (unsigned long long)releaseCauseCountConnectedWcdmasCount;	// IMP=0x00000001000b4670
- (void)addReleaseCauseCountConnectedWcdma:(id)arg1;	// IMP=0x00000001000b45fc
- (void)clearReleaseCauseCountConnectedWcdmas;	// IMP=0x00000001000b45e4
@property(nonatomic) _Bool hasNumNormalReleaseCallsWcdma;
@property(nonatomic) _Bool hasNumConnectedCallsWcdma;
@property(nonatomic) _Bool hasNumTotalCallsWcdma;
@property(nonatomic) _Bool hasTotalConnectedSecondsGsm;
- (id)releaseCauseCountNotConnectedGsmAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b4434
- (unsigned long long)releaseCauseCountNotConnectedGsmsCount;	// IMP=0x00000001000b441c
- (void)addReleaseCauseCountNotConnectedGsm:(id)arg1;	// IMP=0x00000001000b43a8
- (void)clearReleaseCauseCountNotConnectedGsms;	// IMP=0x00000001000b4390
- (id)releaseCauseCountConnectedGsmAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b436c
- (unsigned long long)releaseCauseCountConnectedGsmsCount;	// IMP=0x00000001000b4354
- (void)addReleaseCauseCountConnectedGsm:(id)arg1;	// IMP=0x00000001000b42e0
- (void)clearReleaseCauseCountConnectedGsms;	// IMP=0x00000001000b42c8
@property(nonatomic) _Bool hasNumNormalReleaseCallsGsm;
@property(nonatomic) _Bool hasNumConnectedCallsGsm;
@property(nonatomic) _Bool hasNumTotalCallsGsm;
- (id)releaseCauseCountNotConnectedAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b417c
- (unsigned long long)releaseCauseCountNotConnectedsCount;	// IMP=0x00000001000b4164
- (void)addReleaseCauseCountNotConnected:(id)arg1;	// IMP=0x00000001000b40f0
- (void)clearReleaseCauseCountNotConnecteds;	// IMP=0x00000001000b40d8
- (id)releaseCauseCountConnectedAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b40b4
- (unsigned long long)releaseCauseCountConnectedsCount;	// IMP=0x00000001000b409c
- (void)addReleaseCauseCountConnected:(id)arg1;	// IMP=0x00000001000b4028
- (void)clearReleaseCauseCountConnecteds;	// IMP=0x00000001000b4010
@property(nonatomic) _Bool hasNumMultiRabEndCalls;
@property(nonatomic) _Bool hasNumMultiRabEverCalls;
- (id)endStatusCountNotConnectedGwAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b3f2c
- (unsigned long long)endStatusCountNotConnectedGwsCount;	// IMP=0x00000001000b3f14
- (void)addEndStatusCountNotConnectedGw:(id)arg1;	// IMP=0x00000001000b3ea0
- (void)clearEndStatusCountNotConnectedGws;	// IMP=0x00000001000b3e88
- (id)endStatusCountConnectedGwAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b3e64
- (unsigned long long)endStatusCountConnectedGwsCount;	// IMP=0x00000001000b3e4c
- (void)addEndStatusCountConnectedGw:(id)arg1;	// IMP=0x00000001000b3dd8
- (void)clearEndStatusCountConnectedGws;	// IMP=0x00000001000b3dc0
@property(nonatomic) _Bool hasNumNormalReleaseCallsGw;
@property(nonatomic) _Bool hasNumConnectedCallsGw;
@property(nonatomic) _Bool hasNumTotalCallsGw;
@property(nonatomic) _Bool hasTotalConnectedSecondsCdma;
- (id)endStatusCountNotConnectedCdmaAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b3c10
- (unsigned long long)endStatusCountNotConnectedCdmasCount;	// IMP=0x00000001000b3bf8
- (void)addEndStatusCountNotConnectedCdma:(id)arg1;	// IMP=0x00000001000b3b84
- (void)clearEndStatusCountNotConnectedCdmas;	// IMP=0x00000001000b3b6c
- (id)endStatusCountConnectedCdmaAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b3b48
- (unsigned long long)endStatusCountConnectedCdmasCount;	// IMP=0x00000001000b3b30
- (void)addEndStatusCountConnectedCdma:(id)arg1;	// IMP=0x00000001000b3abc
- (void)clearEndStatusCountConnectedCdmas;	// IMP=0x00000001000b3aa4
@property(nonatomic) _Bool hasNumNormalReleaseCallsCdma;
@property(nonatomic) _Bool hasNumConnectedCallsCdma;
@property(nonatomic) _Bool hasNumTotalCallsCdma;
@property(nonatomic) _Bool hasPeriodSeconds;
@property(nonatomic) _Bool hasTimestamp;

@end
