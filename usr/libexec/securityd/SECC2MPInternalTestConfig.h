//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPInternalTestConfig : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000c9944
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c9890
- (unsigned long long)hash;	// IMP=0x00000001000c9834
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c9760
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c96b0
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c9644
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c95e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c95d8
- (id)dictionaryRepresentation;	// IMP=0x00000001000c9544
- (id)description;	// IMP=0x00000001000c9490
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end
