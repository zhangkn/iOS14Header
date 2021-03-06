//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface APPBLogSubscriptionEventRequest : PBRequest <NSCopying>
{
    double _eventTime;	// 8 = 0x8
    NSData *_anonymousDemandiAdID;	// 16 = 0x10
    NSData *_contentiAdID;	// 24 = 0x18
    int _event;	// 32 = 0x20
    NSData *_iAdID;	// 40 = 0x28
    NSMutableArray *_infos;	// 48 = 0x30
    NSString *_qToken;	// 56 = 0x38
    NSString *_subscriptionSourceID;	// 64 = 0x40
    struct {
        unsigned int eventTime:1;
        unsigned int event:1;
    } _has;	// 72 = 0x48
}

+ (Class)infoType;	// IMP=0x00000001000c6710
+ (id)options;	// IMP=0x00000001000c632c
- (void).cxx_destruct;	// IMP=0x00000001000c7c00
@property(retain, nonatomic) NSMutableArray *infos; // @synthesize infos=_infos;
@property(nonatomic) double eventTime; // @synthesize eventTime=_eventTime;
@property(retain, nonatomic) NSString *qToken; // @synthesize qToken=_qToken;
@property(retain, nonatomic) NSString *subscriptionSourceID; // @synthesize subscriptionSourceID=_subscriptionSourceID;
@property(retain, nonatomic) NSData *contentiAdID; // @synthesize contentiAdID=_contentiAdID;
@property(retain, nonatomic) NSData *anonymousDemandiAdID; // @synthesize anonymousDemandiAdID=_anonymousDemandiAdID;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c78ec
- (unsigned long long)hash;	// IMP=0x00000001000c77a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c75bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c732c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c7168
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c6f68
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c6f60
- (id)dictionaryRepresentation;	// IMP=0x00000001000c67d0
- (id)description;	// IMP=0x00000001000c671c
- (id)infoAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000c66f8
- (unsigned long long)infosCount;	// IMP=0x00000001000c66e0
- (void)addInfo:(id)arg1;	// IMP=0x00000001000c666c
- (void)clearInfos;	// IMP=0x00000001000c6654
@property(nonatomic) _Bool hasEventTime;
- (int)StringAsEvent:(id)arg1;	// IMP=0x00000001000c6520
- (id)eventAsString:(int)arg1;	// IMP=0x00000001000c6484
@property(nonatomic) _Bool hasEvent;
@property(nonatomic) int event; // @synthesize event=_event;
@property(readonly, nonatomic) _Bool hasQToken;
@property(readonly, nonatomic) _Bool hasSubscriptionSourceID;
@property(readonly, nonatomic) _Bool hasContentiAdID;
@property(readonly, nonatomic) _Bool hasAnonymousDemandiAdID;
@property(readonly, nonatomic) _Bool hasIAdID;

@end

