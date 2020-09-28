//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDXPCDaemon.h"

#import "IDSServiceDelegate-Protocol.h"
#import "SFPairedDeviceDaemonInterface-Protocol.h"

@class CUCoalescer, IDSDevice, IDSService, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString, RPCompanionLinkClient, SFBLEPipe, SFPowerSource, SFPowerSourceMonitor;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDPairedDeviceAgent : SDXPCDaemon <IDSServiceDelegate, SFPairedDeviceDaemonInterface>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    NSDate *_animationDateReceived;	// 16 = 0x10
    NSDate *_animationDateForIDS;	// 24 = 0x18
    NSDate *_animationDateToSend;	// 32 = 0x20
    _Bool _animationDateSupported;	// 40 = 0x28
    NSNumber *_animationMessageID;	// 48 = 0x30
    SFBLEPipe *_blePipe;	// 56 = 0x38
    RPCompanionLinkClient *_companionLinkClient;	// 64 = 0x40
    CDUnknownBlockType _chargingUIHandler;	// 72 = 0x48
    CUCoalescer *_idsConnectionCoalescer;	// 80 = 0x50
    IDSDevice *_idsConnectedDevice;	// 88 = 0x58
    IDSService *_idsService;	// 96 = 0x60
    CUCoalescer *_idsSyncCoalescer;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_idsInfoTimer;	// 112 = 0x70
    _Bool _infoRequestForced;	// 120 = 0x78
    int _lockStatePairedDevice;	// 124 = 0x7c
    NSMutableArray *_messageIDs;	// 128 = 0x80
    NSMutableDictionary *_nrRegisteredDevices;	// 136 = 0x88
    SFPowerSource *_powerSourceLocal;	// 144 = 0x90
    NSDictionary *_powerSourceMessage;	// 152 = 0x98
    SFPowerSourceMonitor *_powerSourceMonitor;	// 160 = 0xa0
    SFPowerSource *_powerSourcePairedDevice;	// 168 = 0xa8
    _Bool _powerSourceWasCharging;	// 176 = 0xb0
    int _testingChargingToken;	// 180 = 0xb4
    _Bool _uiShowing;	// 184 = 0xb8
    long long _wristStateLocal;	// 192 = 0xc0
    long long _wristStatePairedDevice;	// 200 = 0xc8
    SFPowerSource *_powerSource;	// 208 = 0xd0
}

+ (id)sharedAgent;	// IMP=0x000000010005bf00
- (void).cxx_destruct;	// IMP=0x00000001000621f8
@property(retain, nonatomic) SFPowerSource *powerSource; // @synthesize powerSource=_powerSource;
- (void)_postPowerStatusNotificationForPowerSource:(id)arg1;	// IMP=0x00000001000620f8
- (void)sendDashboardEntryWithName:(id)arg1 dict:(id)arg2;	// IMP=0x0000000100061fb8
- (void)sendDismissUIWithReason:(long long)arg1;	// IMP=0x0000000100061f80
- (void)triggerChargingUIWithDismissHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061d58
- (void)sendAnimationDate:(id)arg1;	// IMP=0x0000000100061d20
- (void)requestAnimationDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061d04
- (void)initialViewControllerDidDisappear;	// IMP=0x0000000100061c64
- (void)initialViewControllerDidAppear;	// IMP=0x0000000100061bc0
- (void)connectionInvalidated:(id)arg1;	// IMP=0x0000000100061adc
- (void)connectionEstablished:(id)arg1;	// IMP=0x00000001000619f8
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000619f0
- (id)remoteObjectInterface;	// IMP=0x00000001000619d4
- (id)exportedInterface;	// IMP=0x00000001000619b8
- (id)machServiceName;	// IMP=0x00000001000619ac
- (void)_wristStateUpdate:(long long)arg1;	// IMP=0x0000000100061904
- (void)_wristStateHandleMessage:(id)arg1;	// IMP=0x00000001000617f0
- (void)_wristStateChanged;	// IMP=0x00000001000616fc
- (void)wristStateChanged:(id)arg1;	// IMP=0x0000000100061620
@property(readonly, nonatomic) long long wristState;
- (void)_testingOnCharger;	// IMP=0x0000000100061578
- (void)_testingUnregisterNotifications;	// IMP=0x0000000100061548
- (void)_testingRegisterNotifications;	// IMP=0x0000000100061510
- (void)_disablePowerStateMonitor;	// IMP=0x00000001000614b0
- (void)_setupWristStateMonitor;	// IMP=0x0000000100061424
- (void)_setupPowerSourceMonitor;	// IMP=0x0000000100060e4c
- (void)_setupLockStateMonitor;	// IMP=0x0000000100060dc0
- (void)_systemStateUnregisterObservers;	// IMP=0x0000000100060d3c
- (void)_systemStateRegisterObservers;	// IMP=0x0000000100060cf0
- (void)_powerSourceUpdatePairedDeviceInfo:(id)arg1;	// IMP=0x00000001000604a8
- (void)_powerSourceLost:(id)arg1;	// IMP=0x0000000100060378
- (void)_powerSourceChanged:(id)arg1;	// IMP=0x000000010005ffb0
- (void)_nanoRegistryUnregisterChanges;	// IMP=0x000000010005fdcc
- (void)_nanoRegistryRegisterChangesForDevice:(id)arg1;	// IMP=0x000000010005f8e8
- (void)_messageIDRemove:(id)arg1;	// IMP=0x000000010005f784
- (void)_messageIDAdd:(id)arg1;	// IMP=0x000000010005f5f4
- (id)_messageFromPowerSource:(id)arg1;	// IMP=0x000000010005f330
- (void)_messageHandleDashboardEntry:(id)arg1;	// IMP=0x000000010005f110
- (void)_messageHandlePowerSourceUpdate:(id)arg1;	// IMP=0x000000010005f000
- (void)_messageHandleAllUpdate:(id)arg1;	// IMP=0x000000010005ed60
- (void)_messageHandleIncomingData:(id)arg1;	// IMP=0x000000010005eb54
- (void)_lockStateUpdate:(int)arg1;	// IMP=0x000000010005eaac
- (void)_lockStateHandleMessage:(id)arg1;	// IMP=0x000000010005e998
- (void)_lockStateChanged:(id)arg1;	// IMP=0x000000010005e8d8
@property(readonly, nonatomic) int lockState;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000010005e7ec
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010005e710
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x000000010005e634
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010005e458
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000010005e2b0
- (void)_idsUpdateConnectedState;	// IMP=0x000000010005dbf0
- (void)_idsTriggerSyncForAnimation:(_Bool)arg1;	// IMP=0x000000010005db40
- (void)_idsTriggerSync;	// IMP=0x000000010005db30
- (void)_idsTimerInfoInvalidate;	// IMP=0x000000010005da78
- (void)_idsTimerInfoFired;	// IMP=0x000000010005d9b0
- (void)_idsTimerInfoRestart;	// IMP=0x000000010005d834
- (void)_idsSendDashboardEntryToCompanion:(id)arg1;	// IMP=0x000000010005d830
- (void)_idsSendStateUpdate:(id)arg1 asWaking:(_Bool)arg2;	// IMP=0x000000010005d35c
- (_Bool)_idsHasDefaultDevice;	// IMP=0x000000010005d218
- (void)_idsEnsureSynced;	// IMP=0x000000010005d0c8
- (void)_idsEnsureCoalescersStopped;	// IMP=0x000000010005d060
- (void)_idsEnsureCoalescersStarted;	// IMP=0x000000010005cd60
- (id)_idsActiveDevice;	// IMP=0x000000010005cc10
- (void)_companionLinkRegisterEvents;	// IMP=0x000000010005cc0c
- (void)_companionLinkDevicesChanged;	// IMP=0x000000010005cb24
- (_Bool)_companionLinkConnected;	// IMP=0x000000010005c958
- (void)_companionLinkDisable;	// IMP=0x000000010005c91c
- (void)_companionLinkEnable;	// IMP=0x000000010005c5e8
- (id)_queueWithFallbackQOS;	// IMP=0x000000010005c588
- (void)_invalidate;	// IMP=0x000000010005c3f0
- (void)invalidate;	// IMP=0x000000010005c364
- (void)_activate;	// IMP=0x000000010005c114
- (void)activate;	// IMP=0x000000010005c088
- (id)init;	// IMP=0x000000010005bf6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
