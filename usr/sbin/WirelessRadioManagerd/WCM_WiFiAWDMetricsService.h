//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection;

@interface WCM_WiFiAWDMetricsService : NSObject
{
    AWDServerConnection *mConnection;	// 8 = 0x8
    unsigned short _reason;	// 16 = 0x10
    unsigned short _coexMode;	// 18 = 0x12
    unsigned int _a2dpConnectionCount;	// 20 = 0x14
    unsigned int _hidConnectionCount;	// 24 = 0x18
    unsigned int _scoConnectionCount;	// 28 = 0x1c
    unsigned int _escoConnectionCount;	// 32 = 0x20
    unsigned int _wifiInfraChannel;	// 36 = 0x24
    unsigned int _wifiInfraChainConfig;	// 40 = 0x28
    unsigned int _wifiInfraPhyMode;	// 44 = 0x2c
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006dce8
+ (id)singleton;	// IMP=0x000000010006dc5c
@property(nonatomic) unsigned int wifiInfraPhyMode; // @synthesize wifiInfraPhyMode=_wifiInfraPhyMode;
@property(nonatomic) unsigned int wifiInfraChainConfig; // @synthesize wifiInfraChainConfig=_wifiInfraChainConfig;
@property(nonatomic) unsigned int wifiInfraChannel; // @synthesize wifiInfraChannel=_wifiInfraChannel;
@property(nonatomic) unsigned int escoConnectionCount; // @synthesize escoConnectionCount=_escoConnectionCount;
@property(nonatomic) unsigned int scoConnectionCount; // @synthesize scoConnectionCount=_scoConnectionCount;
@property(nonatomic) unsigned int hidConnectionCount; // @synthesize hidConnectionCount=_hidConnectionCount;
@property(nonatomic) unsigned int a2dpConnectionCount; // @synthesize a2dpConnectionCount=_a2dpConnectionCount;
@property(nonatomic) unsigned short coexMode; // @synthesize coexMode=_coexMode;
@property(nonatomic) unsigned short reason; // @synthesize reason=_reason;
- (void)submitBTCoexModeChangeMetric:(unsigned short)arg1;	// IMP=0x000000010006e144
- (id)getMetricData:(unsigned long long)arg1;	// IMP=0x000000010006df00
- (unsigned int)wifiInfraPhyModeConvertToApple80211Type:(unsigned int)arg1;	// IMP=0x000000010006de50
- (void)dealloc;	// IMP=0x000000010006de00
- (id)init;	// IMP=0x000000010006dd6c
- (id)autorelease;	// IMP=0x000000010006dd54
- (oneway void)release;	// IMP=0x000000010006dd40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006dd24

@end
