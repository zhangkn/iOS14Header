//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface PDURLSessionProxyCredential : PBCodable <NSCopying>
{
    NSData *_archiveList;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000010004336c
@property(retain, nonatomic) NSData *archiveList; // @synthesize archiveList=_archiveList;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000432c0
- (unsigned long long)hash;	// IMP=0x000000010004325c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100043184
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000430dc
- (void)copyTo:(id)arg1;	// IMP=0x0000000100043064
- (void)writeTo:(id)arg1;	// IMP=0x0000000100042ff4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100042fec
- (id)dictionaryRepresentation;	// IMP=0x0000000100042f20
- (id)description;	// IMP=0x0000000100042e6c
@property(readonly, nonatomic) _Bool hasArchiveList;
@property(nonatomic) _Bool hasVersion;
- (id)_actualCredential;	// IMP=0x0000000100037e8c
- (id)_initWithActualCredential:(id)arg1;	// IMP=0x0000000100037dbc

@end

