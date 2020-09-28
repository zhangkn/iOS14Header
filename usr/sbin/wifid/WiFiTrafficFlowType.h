//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WiFiTrafficFlow-Protocol.h"

@class NSString;

@interface WiFiTrafficFlowType : NSObject <WiFiTrafficFlow>
{
    _Bool flowClassification_ALT_LARGE;	// 8 = 0x8
    _Bool flowClassification_BURST;	// 9 = 0x9
    _Bool flowClassification_KNOWN_OTHER;	// 10 = 0xa
    _Bool flowClassification_LARGE_DL;	// 11 = 0xb
    _Bool flowClassification_LARGE_UL;	// 12 = 0xc
    _Bool flowClassification_LARGE;	// 13 = 0xd
    _Bool flowClassification_Mail;	// 14 = 0xe
    _Bool flowClassification_Maps;	// 15 = 0xf
    _Bool flowClassification_Mediaserverd;	// 16 = 0x10
    _Bool flowClassification_Music;	// 17 = 0x11
    _Bool flowClassification_News;	// 18 = 0x12
    _Bool flowClassification_NSURLSessiond;	// 19 = 0x13
    _Bool flowClassification_Podcasts;	// 20 = 0x14
    _Bool flowClassification_Webkit;	// 21 = 0x15
    _Bool flowClassification_Weather;	// 22 = 0x16
    _Bool flowClassification_UNKNOWN_OTHER;	// 23 = 0x17
    _Bool flowClassification_TC_VO;	// 24 = 0x18
    _Bool flowClassification_TC_VI;	// 25 = 0x19
    _Bool flowClassification_TC_RV;	// 26 = 0x1a
    _Bool flowClassification_TC_RD;	// 27 = 0x1b
    _Bool flowClassification_TC_OAM;	// 28 = 0x1c
    _Bool flowClassification_TC_CTL;	// 29 = 0x1d
    _Bool flowClassification_TC_BK;	// 30 = 0x1e
    _Bool flowClassification_TC_BK_SYS;	// 31 = 0x1f
    _Bool flowClassification_TC_AV;	// 32 = 0x20
    _Bool flowClassification_Stocks;	// 33 = 0x21
    _Bool flowClassification_SIRI;	// 34 = 0x22
    _Bool flowClassification_Safari;	// 35 = 0x23
    _Bool flowClassification_RTCReportingd;	// 36 = 0x24
    _Bool flowClassification_Reserved_2;	// 37 = 0x25
    _Bool flowClassification_Reserved_1;	// 38 = 0x26
    _Bool flowClassification_PUSH;	// 39 = 0x27
    _Bool _foreground;	// 40 = 0x28
    unsigned int latency;	// 44 = 0x2c
    unsigned int jitter;	// 48 = 0x30
    unsigned int lossTolerence;	// 52 = 0x34
    unsigned int duration;	// 56 = 0x38
    unsigned int requiredBw;	// 60 = 0x3c
    unsigned int prefBw;	// 64 = 0x40
    unsigned long long _combinedProperties;	// 72 = 0x48
    unsigned long long _classifications;	// 80 = 0x50
}

@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(nonatomic) unsigned long long classifications; // @synthesize classifications=_classifications;
@property(nonatomic) unsigned long long combinedProperties; // @synthesize combinedProperties=_combinedProperties;
@property(nonatomic) _Bool flowClassification_PUSH; // @synthesize flowClassification_PUSH;
@property(nonatomic) _Bool flowClassification_Reserved_1; // @synthesize flowClassification_Reserved_1;
@property(nonatomic) _Bool flowClassification_Reserved_2; // @synthesize flowClassification_Reserved_2;
@property(nonatomic) _Bool flowClassification_RTCReportingd; // @synthesize flowClassification_RTCReportingd;
@property(nonatomic) _Bool flowClassification_Safari; // @synthesize flowClassification_Safari;
@property(nonatomic) _Bool flowClassification_SIRI; // @synthesize flowClassification_SIRI;
@property(nonatomic) _Bool flowClassification_Stocks; // @synthesize flowClassification_Stocks;
@property(nonatomic) _Bool flowClassification_TC_AV; // @synthesize flowClassification_TC_AV;
@property(nonatomic) _Bool flowClassification_TC_BK_SYS; // @synthesize flowClassification_TC_BK_SYS;
@property(nonatomic) _Bool flowClassification_TC_BK; // @synthesize flowClassification_TC_BK;
@property(nonatomic) _Bool flowClassification_TC_CTL; // @synthesize flowClassification_TC_CTL;
@property(nonatomic) _Bool flowClassification_TC_OAM; // @synthesize flowClassification_TC_OAM;
@property(nonatomic) _Bool flowClassification_TC_RD; // @synthesize flowClassification_TC_RD;
@property(nonatomic) _Bool flowClassification_TC_RV; // @synthesize flowClassification_TC_RV;
@property(nonatomic) _Bool flowClassification_TC_VI; // @synthesize flowClassification_TC_VI;
@property(nonatomic) _Bool flowClassification_TC_VO; // @synthesize flowClassification_TC_VO;
@property(nonatomic) _Bool flowClassification_UNKNOWN_OTHER; // @synthesize flowClassification_UNKNOWN_OTHER;
@property(nonatomic) _Bool flowClassification_Weather; // @synthesize flowClassification_Weather;
@property(nonatomic) _Bool flowClassification_Webkit; // @synthesize flowClassification_Webkit;
@property(nonatomic) _Bool flowClassification_Podcasts; // @synthesize flowClassification_Podcasts;
@property(nonatomic) _Bool flowClassification_NSURLSessiond; // @synthesize flowClassification_NSURLSessiond;
@property(nonatomic) _Bool flowClassification_News; // @synthesize flowClassification_News;
@property(nonatomic) _Bool flowClassification_Music; // @synthesize flowClassification_Music;
@property(nonatomic) _Bool flowClassification_Mediaserverd; // @synthesize flowClassification_Mediaserverd;
@property(nonatomic) _Bool flowClassification_Maps; // @synthesize flowClassification_Maps;
@property(nonatomic) _Bool flowClassification_Mail; // @synthesize flowClassification_Mail;
@property(nonatomic) _Bool flowClassification_LARGE; // @synthesize flowClassification_LARGE;
@property(nonatomic) _Bool flowClassification_LARGE_UL; // @synthesize flowClassification_LARGE_UL;
@property(nonatomic) _Bool flowClassification_LARGE_DL; // @synthesize flowClassification_LARGE_DL;
@property(nonatomic) _Bool flowClassification_KNOWN_OTHER; // @synthesize flowClassification_KNOWN_OTHER;
@property(nonatomic) _Bool flowClassification_BURST; // @synthesize flowClassification_BURST;
@property(nonatomic) _Bool flowClassification_ALT_LARGE; // @synthesize flowClassification_ALT_LARGE;
@property(nonatomic) unsigned int prefBw; // @synthesize prefBw;
@property(nonatomic) unsigned int requiredBw; // @synthesize requiredBw;
@property(nonatomic) unsigned int duration; // @synthesize duration;
@property(nonatomic) unsigned int lossTolerence; // @synthesize lossTolerence;
@property(nonatomic) unsigned int jitter; // @synthesize jitter;
@property(nonatomic) unsigned int latency; // @synthesize latency;
- (id)copyStringRepresentationWithFlowClassification:(unsigned int)arg1;	// IMP=0x000000010013c620
- (id)copyStringRepresentationWithFlowProperty:(unsigned int)arg1 flowPropertyString:(id)arg2;	// IMP=0x000000010013c4a8
- (void)processFlowClassifications:(unsigned int)arg1;	// IMP=0x000000010013c1e0
- (void)processCombinedFlowProperties:(unsigned long long)arg1;	// IMP=0x000000010013bfd4
- (void)dealloc;	// IMP=0x000000010013bf84
- (id)initWithType:(_Bool)arg1;	// IMP=0x000000010013bf0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
