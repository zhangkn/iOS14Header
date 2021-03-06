//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface NRGPBResourceResponse : PBCodable <NSCopying>
{
    NSData *_checksumData;	// 8 = 0x8
    NSData *_resource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000059b0
@property(retain, nonatomic) NSData *checksumData; // @synthesize checksumData=_checksumData;
@property(retain, nonatomic) NSData *resource; // @synthesize resource=_resource;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000058fc
- (unsigned long long)hash;	// IMP=0x00000001000058a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000057cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000571c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000056b0
- (void)writeTo:(id)arg1;	// IMP=0x000000010000564c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100005644
- (id)dictionaryRepresentation;	// IMP=0x00000001000053ec
- (id)description;	// IMP=0x0000000100005338
@property(readonly, nonatomic) _Bool hasChecksumData;
@property(readonly, nonatomic) _Bool hasResource;

@end

