//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RadiosPreferencesDelegate-Protocol.h"

@class RadiosPreferences, UIImage;
@protocol OS_dispatch_queue;

@interface PHDevice : NSObject <RadiosPreferencesDelegate>
{
    _Bool _cellularRadioEnabled;	// 8 = 0x8
    _Bool _ringerSwitchEnabled;	// 9 = 0x9
    _Bool _proximitySensorState;	// 10 = 0xa
    int _ringerStateNotifyToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    RadiosPreferences *_radiosPreferences;	// 24 = 0x18
}

+ (_Bool)isGeminiCapable;	// IMP=0x0000000100092d28
+ (id)currentDevice;	// IMP=0x0000000100092cbc
- (void).cxx_destruct;	// IMP=0x00000001000939c8
@property(nonatomic) _Bool proximitySensorState; // @synthesize proximitySensorState=_proximitySensorState;
@property(nonatomic) int ringerStateNotifyToken; // @synthesize ringerStateNotifyToken=_ringerStateNotifyToken;
@property(retain, nonatomic) RadiosPreferences *radiosPreferences; // @synthesize radiosPreferences=_radiosPreferences;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)airplaneModeChanged;	// IMP=0x0000000100093950
- (unsigned long long)stateForNotifyToken:(int)arg1;	// IMP=0x0000000100093914
- (void)unregisterForRingerStateNotifications;	// IMP=0x00000001000938b4
- (void)registerForRingerStateNotifications;	// IMP=0x0000000100093758
- (_Bool)fetchRingerSwitchEnabled;	// IMP=0x0000000100093714
- (_Bool)fetchCellularRadioEnabled;	// IMP=0x00000001000936f0
@property(readonly, nonatomic) UIImage *audioRouteGlyphImage;
@property(nonatomic, getter=isRingerSwitchEnabled) _Bool ringerSwitchEnabled; // @synthesize ringerSwitchEnabled=_ringerSwitchEnabled;
@property(nonatomic, getter=isCellularRadioEnabled) _Bool cellularRadioEnabled; // @synthesize cellularRadioEnabled=_cellularRadioEnabled;
- (void)dealloc;	// IMP=0x0000000100092ff4
- (id)init;	// IMP=0x0000000100092e3c

@end
