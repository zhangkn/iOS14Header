//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyOpenBodyStream : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100049104
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010004907c
- (unsigned long long)hash;	// IMP=0x0000000100049064
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100048fc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100048f48
- (void)copyTo:(id)arg1;	// IMP=0x0000000100048f20
- (void)writeTo:(id)arg1;	// IMP=0x0000000100048f00
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100048d18
- (id)dictionaryRepresentation;	// IMP=0x0000000100048c8c
- (id)description;	// IMP=0x0000000100048bd8
@property(readonly, nonatomic) _Bool hasTask;

@end

