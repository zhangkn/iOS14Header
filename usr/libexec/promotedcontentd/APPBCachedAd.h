//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APPBCachedAd : PBCodable <NSCopying>
{
    double _expirationDate;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    unsigned int _remainingImpressionCount;	// 24 = 0x18
    NSString *_uniqueIdentifier;	// 32 = 0x20
    struct {
        unsigned int expirationDate:1;
        unsigned int priority:1;
        unsigned int remainingImpressionCount:1;
    } _has;	// 40 = 0x28
}

+ (id)options;	// IMP=0x000000010006123c
- (void).cxx_destruct;	// IMP=0x0000000100061eb0
@property(nonatomic) unsigned int remainingImpressionCount; // @synthesize remainingImpressionCount=_remainingImpressionCount;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100061d90
- (unsigned long long)hash;	// IMP=0x0000000100061ca0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100061b74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100061a78
- (void)copyTo:(id)arg1;	// IMP=0x00000001000619ac
- (void)writeTo:(id)arg1;	// IMP=0x00000001000618e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000618e0
- (id)dictionaryRepresentation;	// IMP=0x0000000100061474
- (id)description;	// IMP=0x00000001000613c0
@property(nonatomic) _Bool hasRemainingImpressionCount;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) _Bool hasExpirationDate;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;

@end

