//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, WADeviceAnalyticsClient;

@interface WiFiAnalyticsManager : NSObject
{
    WADeviceAnalyticsClient *_deviceAnalyticsClient;	// 8 = 0x8
    NSDateFormatter *_dateFormatterWAMessage;	// 16 = 0x10
    struct __WiFiManager *_wifiManager;	// 24 = 0x18
    double _managerInitTime;	// 32 = 0x20
}

+ (id)sharedWiFiAnalyticsManager;	// IMP=0x000000010000818c
@property(nonatomic) double managerInitTime; // @synthesize managerInitTime=_managerInitTime;
@property(nonatomic) struct __WiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) NSDateFormatter *dateFormatterWAMessage; // @synthesize dateFormatterWAMessage=_dateFormatterWAMessage;
@property(retain, nonatomic) WADeviceAnalyticsClient *deviceAnalyticsClient; // @synthesize deviceAnalyticsClient=_deviceAnalyticsClient;
- (void)getAdaptiveRoamParams:(struct __CFString *)arg1 ssid:(struct __CFString *)arg2;	// IMP=0x00000001000087b4
- (void)submit:(id)arg1;	// IMP=0x000000010000861c
- (void)_submit11axAsrSessionDuration:(double)arg1;	// IMP=0x0000000100008464
- (void)setWiFiManager:(struct __WiFiManager *)arg1;	// IMP=0x00000001000083d0
- (void)dealloc;	// IMP=0x0000000100008370
- (id)init;	// IMP=0x0000000100008258

@end

