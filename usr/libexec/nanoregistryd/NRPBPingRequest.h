//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface NRPBPingRequest : PBRequest <NSCopying>
{
    double _timeout;	// 8 = 0x8
    NSData *_payload;	// 16 = 0x10
    int _pingType;	// 24 = 0x18
    int _responseIDSPriority;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000001000f5550
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int pingType; // @synthesize pingType=_pingType;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int responseIDSPriority; // @synthesize responseIDSPriority=_responseIDSPriority;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000f547c
- (unsigned long long)hash;	// IMP=0x00000001000f53c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000f52d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000f522c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000f51d4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000f5148
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000f5140
- (id)dictionaryRepresentation;	// IMP=0x00000001000f4ca8
- (id)description;	// IMP=0x00000001000f4bf4
@property(readonly, nonatomic) _Bool hasPayload;

@end
