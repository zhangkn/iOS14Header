//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class APPBTransparencyDetails;

@interface APPBUserTransparencyResponse : PBCodable <NSCopying>
{
    APPBTransparencyDetails *_transparencyDetails;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000830d0
@property(retain, nonatomic) APPBTransparencyDetails *transparencyDetails; // @synthesize transparencyDetails=_transparencyDetails;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100083048
- (unsigned long long)hash;	// IMP=0x0000000100083030
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100082f90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100082f14
- (void)copyTo:(id)arg1;	// IMP=0x0000000100082ef4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100082eac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100082ea4
- (id)dictionaryRepresentation;	// IMP=0x0000000100082c30
- (id)description;	// IMP=0x0000000100082b7c

@end

