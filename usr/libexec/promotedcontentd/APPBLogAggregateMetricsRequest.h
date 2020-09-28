//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface APPBLogAggregateMetricsRequest : PBRequest <NSCopying>
{
    NSString *_deviceModel;	// 8 = 0x8
    NSMutableArray *_distributionMetrics;	// 16 = 0x10
    NSString *_operatingSystemDescription;	// 24 = 0x18
    NSMutableArray *_scalarMetrics;	// 32 = 0x20
}

+ (Class)scalarMetricsType;	// IMP=0x00000001000863d8
+ (Class)distributionMetricsType;	// IMP=0x0000000100086310
+ (id)options;	// IMP=0x00000001000861cc
- (void).cxx_destruct;	// IMP=0x000000010008758c
@property(retain, nonatomic) NSMutableArray *scalarMetrics; // @synthesize scalarMetrics=_scalarMetrics;
@property(retain, nonatomic) NSMutableArray *distributionMetrics; // @synthesize distributionMetrics=_distributionMetrics;
@property(retain, nonatomic) NSString *operatingSystemDescription; // @synthesize operatingSystemDescription=_operatingSystemDescription;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000872d0
- (unsigned long long)hash;	// IMP=0x0000000100087244
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100087118
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100086e7c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100086cd8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100086acc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100086ac4
- (id)dictionaryRepresentation;	// IMP=0x0000000100086498
- (id)description;	// IMP=0x00000001000863e4
- (id)scalarMetricsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000863c0
- (unsigned long long)scalarMetricsCount;	// IMP=0x00000001000863a8
- (void)addScalarMetrics:(id)arg1;	// IMP=0x0000000100086334
- (void)clearScalarMetrics;	// IMP=0x000000010008631c
- (id)distributionMetricsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000862f8
- (unsigned long long)distributionMetricsCount;	// IMP=0x00000001000862e0
- (void)addDistributionMetrics:(id)arg1;	// IMP=0x000000010008626c
- (void)clearDistributionMetrics;	// IMP=0x0000000100086254
@property(readonly, nonatomic) _Bool hasOperatingSystemDescription;
@property(readonly, nonatomic) _Bool hasDeviceModel;

@end
