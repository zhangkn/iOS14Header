//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface CellMetric : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _sfScheduledByStates;	// 8 = 0x8
    CDStruct_9f2792e4 _sfScheduledByTypes;	// 32 = 0x20
    CDStruct_62a50c50 _sizeTbTotalByStates;	// 56 = 0x38
    CDStruct_62a50c50 _sizeTbTotalByTypes;	// 80 = 0x50
    CDStruct_9f2792e4 _ulSfScheduledByStates;	// 104 = 0x68
    CDStruct_9f2792e4 _ulSfScheduledByTypes;	// 128 = 0x80
    CDStruct_62a50c50 _ulSizeTbTotalByStates;	// 152 = 0x98
    CDStruct_62a50c50 _ulSizeTbTotalByTypes;	// 176 = 0xb0
    unsigned int _elapsedMs;	// 200 = 0xc8
    unsigned int _wakeupMs;	// 204 = 0xcc
    struct {
        unsigned int elapsedMs:1;
        unsigned int wakeupMs:1;
    } _has;	// 208 = 0xd0
}

@property(nonatomic) unsigned int wakeupMs; // @synthesize wakeupMs=_wakeupMs;
@property(nonatomic) unsigned int elapsedMs; // @synthesize elapsedMs=_elapsedMs;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010006e50c
- (unsigned long long)hash;	// IMP=0x000000010006e400
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010006e278
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006e140
- (void)copyTo:(id)arg1;	// IMP=0x000000010006dcd4
- (void)writeTo:(id)arg1;	// IMP=0x000000010006da78
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010006da70
- (id)dictionaryRepresentation;	// IMP=0x000000010006c6e8
- (id)description;	// IMP=0x000000010006c634
- (void)setUlSizeTbTotalByTypes:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010006c61c
- (unsigned long long)ulSizeTbTotalByTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000010006c544
- (void)addUlSizeTbTotalByType:(unsigned long long)arg1;	// IMP=0x000000010006c530
- (void)clearUlSizeTbTotalByTypes;	// IMP=0x000000010006c520
@property(readonly, nonatomic) unsigned long long *ulSizeTbTotalByTypes;
@property(readonly, nonatomic) unsigned long long ulSizeTbTotalByTypesCount;
- (void)setUlSfScheduledByTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010006c4e4
- (unsigned int)ulSfScheduledByTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000010006c40c
- (void)addUlSfScheduledByType:(unsigned int)arg1;	// IMP=0x000000010006c3f8
- (void)clearUlSfScheduledByTypes;	// IMP=0x000000010006c3e8
@property(readonly, nonatomic) unsigned int *ulSfScheduledByTypes;
@property(readonly, nonatomic) unsigned long long ulSfScheduledByTypesCount;
- (void)setUlSizeTbTotalByStates:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010006c3ac
- (unsigned long long)ulSizeTbTotalByStateAtIndex:(unsigned long long)arg1;	// IMP=0x000000010006c2d4
- (void)addUlSizeTbTotalByState:(unsigned long long)arg1;	// IMP=0x000000010006c2c0
- (void)clearUlSizeTbTotalByStates;	// IMP=0x000000010006c2b0
@property(readonly, nonatomic) unsigned long long *ulSizeTbTotalByStates;
@property(readonly, nonatomic) unsigned long long ulSizeTbTotalByStatesCount;
- (void)setUlSfScheduledByStates:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010006c274
- (unsigned int)ulSfScheduledByStateAtIndex:(unsigned long long)arg1;	// IMP=0x000000010006c19c
- (void)addUlSfScheduledByState:(unsigned int)arg1;	// IMP=0x000000010006c188
- (void)clearUlSfScheduledByStates;	// IMP=0x000000010006c178
@property(readonly, nonatomic) unsigned int *ulSfScheduledByStates;
@property(readonly, nonatomic) unsigned long long ulSfScheduledByStatesCount;
- (void)setSizeTbTotalByTypes:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010006c13c
- (unsigned long long)sizeTbTotalByTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000010006c064
- (void)addSizeTbTotalByType:(unsigned long long)arg1;	// IMP=0x000000010006c050
- (void)clearSizeTbTotalByTypes;	// IMP=0x000000010006c040
@property(readonly, nonatomic) unsigned long long *sizeTbTotalByTypes;
@property(readonly, nonatomic) unsigned long long sizeTbTotalByTypesCount;
- (void)setSfScheduledByTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010006c004
- (unsigned int)sfScheduledByTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000010006bf2c
- (void)addSfScheduledByType:(unsigned int)arg1;	// IMP=0x000000010006bf18
- (void)clearSfScheduledByTypes;	// IMP=0x000000010006bf08
@property(readonly, nonatomic) unsigned int *sfScheduledByTypes;
@property(readonly, nonatomic) unsigned long long sfScheduledByTypesCount;
- (void)setSizeTbTotalByStates:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010006becc
- (unsigned long long)sizeTbTotalByStateAtIndex:(unsigned long long)arg1;	// IMP=0x000000010006bdf4
- (void)addSizeTbTotalByState:(unsigned long long)arg1;	// IMP=0x000000010006bde0
- (void)clearSizeTbTotalByStates;	// IMP=0x000000010006bdd0
@property(readonly, nonatomic) unsigned long long *sizeTbTotalByStates;
@property(readonly, nonatomic) unsigned long long sizeTbTotalByStatesCount;
- (void)setSfScheduledByStates:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010006bd94
- (unsigned int)sfScheduledByStateAtIndex:(unsigned long long)arg1;	// IMP=0x000000010006bcbc
- (void)addSfScheduledByState:(unsigned int)arg1;	// IMP=0x000000010006bca8
- (void)clearSfScheduledByStates;	// IMP=0x000000010006bc98
@property(readonly, nonatomic) unsigned int *sfScheduledByStates;
@property(readonly, nonatomic) unsigned long long sfScheduledByStatesCount;
@property(nonatomic) _Bool hasWakeupMs;
@property(nonatomic) _Bool hasElapsedMs;
- (void)dealloc;	// IMP=0x000000010006bb00

@end
