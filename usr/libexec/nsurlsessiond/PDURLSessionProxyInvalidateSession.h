//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyInvalidateSession : PBCodable <NSCopying>
{
    PDURLSessionProxySessionMessage *_session;	// 8 = 0x8
    _Bool _shouldCancel;	// 16 = 0x10
    struct {
        unsigned int shouldCancel:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000001000461bc
@property(nonatomic) _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000460f8
- (unsigned long long)hash;	// IMP=0x0000000100046090
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100045fac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100045f04
- (void)copyTo:(id)arg1;	// IMP=0x0000000100045e8c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100045e1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100045b70
- (id)dictionaryRepresentation;	// IMP=0x0000000100045a80
- (id)description;	// IMP=0x00000001000459cc
@property(nonatomic) _Bool hasShouldCancel;
@property(readonly, nonatomic) _Bool hasSession;

@end
