//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCMCoarseElevationDeprecated : PBCodable <NSCopying>
{
    unsigned int _elevationAscended;	// 8 = 0x8
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001008c4e08
- (unsigned long long)hash;	// IMP=0x00000001008c4dec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001008c4d98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008c4d48
- (void)copyTo:(id)arg1;	// IMP=0x00000001008c4d34
- (void)writeTo:(id)arg1;	// IMP=0x00000001008c4d1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001008c4d14
- (id)dictionaryRepresentation;	// IMP=0x00000001008c4a98
- (id)description;	// IMP=0x00000001008c4a18

@end
