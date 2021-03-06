//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APPBAdDataUpdate : PBCodable <NSCopying>
{
    double _expirationDate;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    int _impressionCountAdjustment;	// 24 = 0x18
    NSString *_uniqueIdentifier;	// 32 = 0x20
    struct {
        unsigned int expirationDate:1;
        unsigned int priority:1;
        unsigned int impressionCountAdjustment:1;
    } _has;	// 40 = 0x28
}

+ (id)options;	// IMP=0x000000010006e20c
- (void).cxx_destruct;	// IMP=0x000000010006eea8
@property(nonatomic) int impressionCountAdjustment; // @synthesize impressionCountAdjustment=_impressionCountAdjustment;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010006ed88
- (unsigned long long)hash;	// IMP=0x000000010006ec98
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010006eb6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006ea70
- (void)copyTo:(id)arg1;	// IMP=0x000000010006e9ac
- (void)writeTo:(id)arg1;	// IMP=0x000000010006e8e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010006e8e0
- (id)dictionaryRepresentation;	// IMP=0x000000010006e42c
- (id)description;	// IMP=0x000000010006e378
@property(nonatomic) _Bool hasImpressionCountAdjustment;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) _Bool hasExpirationDate;

@end

