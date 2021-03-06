//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ReselFromDoCount : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _endStatusCounts;	// 8 = 0x8
    unsigned int _total;	// 32 = 0x20
    _Bool _ehrpd;	// 36 = 0x24
    struct {
        unsigned int total:1;
        unsigned int ehrpd:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) unsigned int total; // @synthesize total=_total;
@property(nonatomic) _Bool ehrpd; // @synthesize ehrpd=_ehrpd;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010008204c
- (unsigned long long)hash;	// IMP=0x0000000100081fd0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100081ee8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100081e3c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100081d34
- (void)writeTo:(id)arg1;	// IMP=0x0000000100081c4c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100081c44
- (id)dictionaryRepresentation;	// IMP=0x0000000100081540
- (id)description;	// IMP=0x000000010008148c
- (void)setEndStatusCounts:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100081474
- (unsigned int)endStatusCountAtIndex:(unsigned long long)arg1;	// IMP=0x000000010008139c
- (void)addEndStatusCount:(unsigned int)arg1;	// IMP=0x0000000100081388
- (void)clearEndStatusCounts;	// IMP=0x0000000100081378
@property(readonly, nonatomic) unsigned int *endStatusCounts;
@property(readonly, nonatomic) unsigned long long endStatusCountsCount;
@property(nonatomic) _Bool hasTotal;
@property(nonatomic) _Bool hasEhrpd;
- (void)dealloc;	// IMP=0x0000000100081250

@end

