//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface APPBTagSet : PBCodable <NSCopying>
{
    NSMutableArray *_tags;	// 8 = 0x8
}

+ (Class)tagsType;	// IMP=0x00000001000b7634
+ (id)options;	// IMP=0x00000001000b7520
- (void).cxx_destruct;	// IMP=0x00000001000b7e8c
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b7d40
- (unsigned long long)hash;	// IMP=0x00000001000b7d28
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b7c88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b7b10
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b7a3c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b7910
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b7908
- (id)dictionaryRepresentation;	// IMP=0x00000001000b76f4
- (id)description;	// IMP=0x00000001000b7640
- (id)tagsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b761c
- (unsigned long long)tagsCount;	// IMP=0x00000001000b7604
- (void)addTags:(id)arg1;	// IMP=0x00000001000b7590
- (void)clearTags;	// IMP=0x00000001000b7578

@end
