//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBSystemServicesServerDelegate-Protocol.h"

@class CBWiFiManager, NSString, PCPersistentTimer;

@interface CBSystem : NSObject <CBSystemServicesServerDelegate>
{
    CBWiFiManager *_wifiManager;	// 8 = 0x8
    PCPersistentTimer *_inactivityTimer;	// 16 = 0x10
}

+ (void)_checkOutUserSettings;	// IMP=0x0000000100028ad0
+ (void)checkoutAndReboot:(_Bool)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00000001000289cc
- (void).cxx_destruct;	// IMP=0x00000001000295a4
@property(retain, nonatomic) PCPersistentTimer *inactivityTimer; // @synthesize inactivityTimer=_inactivityTimer;
@property(retain, nonatomic) CBWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
- (void)_inactivityTimerFired:(id)arg1;	// IMP=0x00000001000294dc
- (void)_stopInactivityTimer;	// IMP=0x00000001000293ec
- (void)_startInactivityTimer;	// IMP=0x0000000100029210
- (void)_stopInactivityTimer:(id)arg1;	// IMP=0x000000010002918c
- (void)_deregisterNotifications;	// IMP=0x00000001000290d0
- (void)_registerForNotifications;	// IMP=0x000000010002900c
- (void)enableNetworkReconnect;	// IMP=0x0000000100028fc0
- (void)disableNetworkReconnect;	// IMP=0x0000000100028f74
- (void)undimDisplay;	// IMP=0x0000000100028f2c
- (void)dimDisplay;	// IMP=0x0000000100028ee4
- (void)statusBarStyle:(long long)arg1;	// IMP=0x0000000100028e94
- (void)hideSceneStatusBar;	// IMP=0x0000000100028e4c
- (void)showSceneStatusBar;	// IMP=0x0000000100028e04
- (id)proxyServer;	// IMP=0x0000000100028d50
- (void)exitRequestedWithServer:(id)arg1;	// IMP=0x0000000100028cc4
- (void)start;	// IMP=0x0000000100028778
- (id)init;	// IMP=0x00000001000286b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
