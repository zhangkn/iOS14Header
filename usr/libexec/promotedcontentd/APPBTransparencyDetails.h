//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APPBTransparencyDetails : PBCodable <NSCopying>
{
    NSString *_transparencyDetailsUnavailableMessage;	// 8 = 0x8
    NSString *_transparencyRendererPayload;	// 16 = 0x10
    NSString *_transparencyRendererURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b865c
@property(retain, nonatomic) NSString *transparencyRendererURL; // @synthesize transparencyRendererURL=_transparencyRendererURL;
@property(retain, nonatomic) NSString *transparencyRendererPayload; // @synthesize transparencyRendererPayload=_transparencyRendererPayload;
@property(retain, nonatomic) NSString *transparencyDetailsUnavailableMessage; // @synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b8564
- (unsigned long long)hash;	// IMP=0x00000001000b84f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b83f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b8318
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b828c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b820c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b8204
- (id)dictionaryRepresentation;	// IMP=0x00000001000b7f9c
- (id)description;	// IMP=0x00000001000b7ee8
@property(readonly, nonatomic) _Bool hasTransparencyRendererURL;
@property(readonly, nonatomic) _Bool hasTransparencyRendererPayload;
@property(readonly, nonatomic) _Bool hasTransparencyDetailsUnavailableMessage;

@end

