//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APPBParameter : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)options;	// IMP=0x0000000100082104
- (void).cxx_destruct;	// IMP=0x00000001000827dc
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100082728
- (unsigned long long)hash;	// IMP=0x00000001000826cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000825f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100082548
- (void)copyTo:(id)arg1;	// IMP=0x00000001000824d8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100082470
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100082468
- (id)dictionaryRepresentation;	// IMP=0x0000000100082210
- (id)description;	// IMP=0x000000010008215c

@end

