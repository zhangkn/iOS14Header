//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FMDNanoSupportProtoNeedSignature : PBCodable <NSCopying>
{
    NSString *_dsid;	// 8 = 0x8
    NSString *_productType;	// 16 = 0x10
    NSString *_serialNumber;	// 24 = 0x18
    NSString *_udid;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000bb2d8
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000bb19c
- (unsigned long long)hash;	// IMP=0x00000001000bb110
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000bafe4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000baee4
- (void)copyTo:(id)arg1;	// IMP=0x00000001000bae3c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000bad94
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000bad8c
- (id)dictionaryRepresentation;	// IMP=0x00000001000bab00
- (id)description;	// IMP=0x00000001000baa4c

@end
