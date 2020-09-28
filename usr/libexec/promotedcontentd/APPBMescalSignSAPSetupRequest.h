//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface APPBMescalSignSAPSetupRequest : PBRequest <NSCopying>
{
    NSData *_buffer;	// 8 = 0x8
}

+ (id)options;	// IMP=0x000000010008374c
- (void).cxx_destruct;	// IMP=0x0000000100083c34
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100083bf0
- (unsigned long long)hash;	// IMP=0x0000000100083bd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100083b38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100083abc
- (void)copyTo:(id)arg1;	// IMP=0x0000000100083a94
- (void)writeTo:(id)arg1;	// IMP=0x0000000100083a74
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100083a6c
- (id)dictionaryRepresentation;	// IMP=0x0000000100083870
- (id)description;	// IMP=0x00000001000837bc
@property(readonly, nonatomic) _Bool hasBuffer;

@end
