//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface ALCLIDSStatus : PBCodable <NSCopying>
{
    unsigned int _connectionStatus;	// 8 = 0x8
    NSString *_pairedModelId;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *pairedModelId; // @synthesize pairedModelId=_pairedModelId;
@property(nonatomic) unsigned int connectionStatus; // @synthesize connectionStatus=_connectionStatus;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010055cbac
- (unsigned long long)hash;	// IMP=0x000000010055cb60
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010055cacc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010055ca44
- (void)copyTo:(id)arg1;	// IMP=0x000000010055ca0c
- (void)writeTo:(id)arg1;	// IMP=0x000000010055c9b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010055c9a8
- (id)dictionaryRepresentation;	// IMP=0x000000010055c6bc
- (id)description;	// IMP=0x000000010055c63c
@property(readonly, nonatomic) _Bool hasPairedModelId;
- (void)dealloc;	// IMP=0x000000010055c5d4

@end

