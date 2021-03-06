//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowItem-Protocol.h"
#import "BFFNavigationControllerDelegate-Protocol.h"
#import "BYEnvironmentDependencyReceiver-Protocol.h"
#import "BuddyActivationConfigurationDelegate-Protocol.h"
#import "WFBuddyViewControllerDelegate-Protocol.h"

@class BFFNavigationController, BuddyInternalSkipInfoProvider, NSString, NSTimer, OBAnimationController, UIAlertController, WFBuddyViewController, WFNetworkListController;
@protocol BFFFlowItemDelegate, BYDeviceProvider, OS_dispatch_source;

@interface BuddyWiFiController : NSObject <WFBuddyViewControllerDelegate, BFFNavigationControllerDelegate, BuddyActivationConfigurationDelegate, BFFFlowItem, BYEnvironmentDependencyReceiver>
{
    WFBuddyViewController *_viewController;	// 8 = 0x8
    BFFNavigationController *_navigationController;	// 16 = 0x10
    WFNetworkListController *_wifiManager;	// 24 = 0x18
    UIAlertController *_badWifiAlert;	// 32 = 0x20
    NSTimer *_wifiTimeoutTimer;	// 40 = 0x28
    _Bool _showingWifiTimeoutSpinner;	// 48 = 0x30
    _Bool _wifiWillPush;	// 49 = 0x31
    NSObject<OS_dispatch_source> *_autoJoinTimer;	// 56 = 0x38
    _Bool _showNetworkSettings;	// 64 = 0x40
    _Bool _supportsCellularActivation;	// 65 = 0x41
    id <BFFFlowItemDelegate> _delegate;	// 72 = 0x48
    BuddyInternalSkipInfoProvider *_internalSkipInfoProvider;	// 80 = 0x50
    OBAnimationController *_animationController;	// 88 = 0x58
}

+ (_Bool)isTrailing;	// IMP=0x00000001000e3244
+ (id)cloudConfigSkipKey;	// IMP=0x00000001000e323c
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000e31c8
+ (_Bool)deviceHasWiFi;	// IMP=0x00000001000e3104
+ (_Bool)controllerAffectedByTapFreeSetup;	// IMP=0x00000001000e30fc
+ (void)preheat;	// IMP=0x00000001000e2ff0
- (void).cxx_destruct;	// IMP=0x00000001000e5504
@property(retain, nonatomic) OBAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) BuddyInternalSkipInfoProvider *internalSkipInfoProvider; // @synthesize internalSkipInfoProvider=_internalSkipInfoProvider;
@property(nonatomic) _Bool supportsCellularActivation; // @synthesize supportsCellularActivation=_supportsCellularActivation;
@property(nonatomic) _Bool showNetworkSettings; // @synthesize showNetworkSettings=_showNetworkSettings;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)activationConfigurationChanged;	// IMP=0x00000001000e5438
- (void)buddyViewControllerDidPressAlternateSetupButton:(id)arg1;	// IMP=0x00000001000e5338
- (void)updateActivationState;	// IMP=0x00000001000e52cc
- (void)wifiTimeoutFired:(id)arg1;	// IMP=0x00000001000e4d2c
- (void)_clearWifiTimeoutTimer;	// IMP=0x00000001000e4cf8
- (void)wifiNetworkJoinStarted:(id)arg1;	// IMP=0x00000001000e4bc8
- (void)wifiNetworkJoinFinished:(id)arg1;	// IMP=0x00000001000e48cc
- (void)_resetWifiControllerTimeoutSpinner;	// IMP=0x00000001000e47f4
- (void)_showNavBarSpinner;	// IMP=0x00000001000e4734
- (void)updateNextButton;	// IMP=0x00000001000e4468
- (void)reachabilityChanged:(_Bool)arg1;	// IMP=0x00000001000e42f4
- (void)_wifiControllerDone:(id)arg1;	// IMP=0x00000001000e3d74
- (void)_wifiControllerReallyDone;	// IMP=0x00000001000e3c84
- (id)_createAnimationController;	// IMP=0x00000001000e3c5c
- (void)_autoJoinTimerDidFire;	// IMP=0x00000001000e3b4c
- (void)_stopAutoJoinTimer;	// IMP=0x00000001000e3ac0
- (void)_startOrStopAutoJoinTimer;	// IMP=0x00000001000e38fc
- (void)didReceiveInternalSkipInfo;	// IMP=0x00000001000e38f0
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x00000001000e37dc
- (void)controllerWasPopped;	// IMP=0x00000001000e3784
- (void)setNavigationController:(id)arg1;	// IMP=0x00000001000e3708
- (id)viewController;	// IMP=0x00000001000e3700
- (void)stopScanning;	// IMP=0x00000001000e36f0
- (void)startScanning;	// IMP=0x00000001000e36e0
- (void)dealloc;	// IMP=0x00000001000e3694
- (id)init;	// IMP=0x00000001000e32c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <BYDeviceProvider> deviceProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

