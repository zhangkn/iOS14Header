//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface ExposureNotificationDiagnosisKeyResponse : PBCodable <NSCopying>
{
    long long _fetchResponseKeyTimestamp;	// 8 = 0x8
    NSMutableArray *_diagnosisInfos;	// 16 = 0x10
    NSString *_nextFetchToken;	// 24 = 0x18
    NSString *_serverConfigVersion;	// 32 = 0x20
    _Bool _partialResponse;	// 40 = 0x28
}

+ (Class)diagnosisInfoType;	// IMP=0x000000010007a9f0
- (void).cxx_destruct;	// IMP=0x000000010007ba20
@property(retain, nonatomic) NSString *serverConfigVersion; // @synthesize serverConfigVersion=_serverConfigVersion;
@property(nonatomic) long long fetchResponseKeyTimestamp; // @synthesize fetchResponseKeyTimestamp=_fetchResponseKeyTimestamp;
@property(retain, nonatomic) NSString *nextFetchToken; // @synthesize nextFetchToken=_nextFetchToken;
@property(nonatomic) _Bool partialResponse; // @synthesize partialResponse=_partialResponse;
@property(retain, nonatomic) NSMutableArray *diagnosisInfos; // @synthesize diagnosisInfos=_diagnosisInfos;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010007b7d8
- (unsigned long long)hash;	// IMP=0x000000010007b738
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007b600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010007b408
- (void)copyTo:(id)arg1;	// IMP=0x000000010007b2d8
- (void)writeTo:(id)arg1;	// IMP=0x000000010007b140
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010007b138
- (id)dictionaryRepresentation;	// IMP=0x000000010007aac8
- (id)description;	// IMP=0x000000010007aa14
@property(readonly, nonatomic) _Bool hasNextFetchToken;
- (id)diagnosisInfoAtIndex:(unsigned long long)arg1;	// IMP=0x000000010007a9d8
- (unsigned long long)diagnosisInfosCount;	// IMP=0x000000010007a9c0
- (void)addDiagnosisInfo:(id)arg1;	// IMP=0x000000010007a94c
- (void)clearDiagnosisInfos;	// IMP=0x000000010007a934

@end

