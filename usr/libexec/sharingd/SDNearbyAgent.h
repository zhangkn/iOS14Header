//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class CUBluetoothClient, CUSystemMonitor, IDSService, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPIdentity, SDStatusMonitor, SFBLEAdvertiser, SFBLEPipe, SFBLEScanner, SFSystemService, WPNearby;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDNearbyAgent : NSObject <IDSServiceDelegate>
{
    _Bool _activated;	// 8 = 0x8
    _Bool _activityCarPlayRegistered;	// 9 = 0x9
    int _activityLevelNotifyToken;	// 12 = 0xc
    unsigned char _activityLevel;	// 16 = 0x10
    _Bool _activityMonitorStarted;	// 17 = 0x11
    _Bool _activityMultipleUsersRegistered;	// 18 = 0x12
    int _activityPollSeconds;	// 20 = 0x14
    int _activityRecentSeconds;	// 24 = 0x18
    _Bool _activityScreenOn;	// 28 = 0x1c
    NSObject<OS_dispatch_source> *_activityTimer;	// 32 = 0x20
    _Bool _activityUIUnlocked;	// 40 = 0x28
    _Bool _activityUserActive;	// 41 = 0x29
    NSData *_bleAdvertisingAddress;	// 48 = 0x30
    NSData *_bleAudioRoutingScoreEncryptedData;	// 56 = 0x38
    NSData *_bleAuthTagOverride;	// 64 = 0x40
    NSMutableDictionary *_bleConnections;	// 72 = 0x48
    _Bool _bleDiagnosticAdvSuppressLogged;	// 80 = 0x50
    NSMutableSet *_bleDiagnosticModeClients;	// 88 = 0x58
    NSData *_bleHotspotEncryptedData;	// 96 = 0x60
    SFBLEAdvertiser *_bleNearbyActionAdvertiser;	// 104 = 0x68
    _Bool _bleNearbyActionAdvertiseActive;	// 112 = 0x70
    _Bool _bleNearbyActionAdvertiseDisabled;	// 113 = 0x71
    NSObject<OS_dispatch_source> *_bleNearbyActionAdvertiseLingerTimer;	// 120 = 0x78
    NSMutableDictionary *_bleNearbyActionDevices;	// 128 = 0x80
    _Bool _bleNearbyActionRSSILog;	// 136 = 0x88
    _Bool _bleNearbyActionScanAlways;	// 137 = 0x89
    _Bool _bleNearbyActionScanNever;	// 138 = 0x8a
    SFBLEScanner *_bleNearbyActionScanner;	// 144 = 0x90
    _Bool _bleNearbyInfoAdvertiseAlways;	// 152 = 0x98
    _Bool _bleNearbyInfoAdvertiseDisabled;	// 153 = 0x99
    double _bleNearbyInfoAdvertiseLingerSecs;	// 160 = 0xa0
    SFBLEAdvertiser *_bleNearbyInfoAdvertiser;	// 168 = 0xa8
    _Bool _bleNearbyInfoAdvertised;	// 176 = 0xb0
    NSObject<OS_dispatch_source> *_bleNearbyInfoAdvertiseLingerTimer;	// 184 = 0xb8
    _Bool _bleNearbyInfoAirDropUsable;	// 192 = 0xc0
    NSMutableDictionary *_bleNearbyInfoDevices;	// 200 = 0xc8
    _Bool _bleNearbyInfoRSSILog;	// 208 = 0xd0
    _Bool _bleNearbyInfoWiFiP2P;	// 209 = 0xd1
    SFBLEScanner *_bleNearbyInfoScanner;	// 216 = 0xd8
    WPNearby *_bleWPNearby;	// 224 = 0xe0
    _Bool _bleProximityEnabled;	// 232 = 0xe8
    NSDictionary *_bleProximityInfo;	// 240 = 0xf0
    NSDictionary *_bleProximityInfoOverride;	// 248 = 0xf8
    SFBLEScanner *_bleProximityPairingScanner;	// 256 = 0x100
    _Bool _bleProximityRSSILog;	// 264 = 0x108
    _Bool _btPipeEnabled;	// 265 = 0x109
    _Bool _btPipeForced;	// 266 = 0x10a
    SFBLEPipe *_btPipe;	// 272 = 0x110
    _Bool _caEnabled;	// 280 = 0x118
    int _caForce;	// 284 = 0x11c
    unsigned int _caMessageNoScans;	// 288 = 0x120
    unsigned int _caMessageScans;	// 292 = 0x124
    _Bool _caPhoneCalls;	// 296 = 0x128
    NSMutableSet *_caRequests;	// 304 = 0x130
    _Bool _caScanIfVeryActive;	// 312 = 0x138
    _Bool _caSingleDevice;	// 313 = 0x139
    NSData *_contactHashesCached;	// 320 = 0x140
    _Bool _contactHashesEnabled;	// 328 = 0x148
    unsigned long long _ddFastScanLastEndTicks;	// 336 = 0x150
    NSObject<OS_dispatch_source> *_ddFastScanTimer;	// 344 = 0x158
    NSMutableDictionary *_ddNearbyActionDevices;	// 352 = 0x160
    _Bool _ddNearbyActionEnabled;	// 360 = 0x168
    _Bool _ddNearbyActionScreenOff;	// 361 = 0x169
    NSMutableDictionary *_ddNearbyInfoDevices;	// 368 = 0x170
    _Bool _ddNearbyInfoEnabled;	// 376 = 0x178
    _Bool _ddNearbyInfoScreenOff;	// 377 = 0x179
    NSMutableDictionary *_ddProximityPairingDevices;	// 384 = 0x180
    _Bool _ddProximityPairingEnabled;	// 392 = 0x188
    _Bool _ddProximityPairingScreenOff;	// 393 = 0x189
    NSMutableSet *_ddRequests;	// 400 = 0x190
    unsigned long long _familyFlags;	// 408 = 0x198
    int _familyNotifyToken;	// 416 = 0x1a0
    int _idsAppleTVCountCache;	// 420 = 0x1a4
    NSArray *_idsBluetoothDevicesArray;	// 424 = 0x1a8
    NSSet *_idsBluetoothDevicesSet;	// 432 = 0x1b0
    NSArray *_idsBluetoothDeviceIDsForLEPipe;	// 440 = 0x1b8
    NSSet *_idsBluetoothDeviceIDsForMe;	// 448 = 0x1c0
    NSMutableDictionary *_idsBTtoIDSInfoMap;	// 456 = 0x1c8
    int _idsContinuityDeviceCountCache;	// 464 = 0x1d0
    NSArray *_idsDeviceArray;	// 472 = 0x1d8
    NSDictionary *_idsDeviceBTDictionary;	// 480 = 0x1e0
    int _idsHasActiveWatchCache;	// 488 = 0x1e8
    int _idsHomePodCountCache;	// 492 = 0x1ec
    int _idsIsSignedInCache;	// 496 = 0x1f0
    int _idsMacCountCache;	// 500 = 0x1f4
    int _idsShouldAdvertiseNearbyInfo;	// 504 = 0x1f8
    int _idsShouldEncryptActivityLevel;	// 508 = 0x1fc
    IDSService *_idsService;	// 512 = 0x200
    _Bool _logProxAdvFields;	// 520 = 0x208
    NSUUID *_remoteAppServiceUUID;	// 528 = 0x210
    NSMutableDictionary *_services;	// 536 = 0x218
    NSMutableDictionary *_sessions;	// 544 = 0x220
    NSMutableDictionary *_setupSessions;	// 552 = 0x228
    _Bool _shareAudioEnabled;	// 560 = 0x230
    double _startTime;	// 568 = 0x238
    SDStatusMonitor *_statusMonitor;	// 576 = 0x240
    CUSystemMonitor *_systemMonitor;	// 584 = 0x248
    SFSystemService *_systemService;	// 592 = 0x250
    _Bool _unlockAdvertiseAlways;	// 600 = 0x258
    _Bool _unlockAdvertiseAggressive;	// 601 = 0x259
    _Bool _unlockAdvertiseEnabled;	// 602 = 0x25a
    _Bool _unlockAdvertiseBackground;	// 603 = 0x25b
    _Bool _unlockAdvertiseWatch;	// 604 = 0x25c
    _Bool _unlockAdvertiseWatchLocked;	// 605 = 0x25d
    NSObject<OS_dispatch_source> *_unlockTestClientTimer;	// 608 = 0x260
    NSMutableDictionary *_idDevices;	// 616 = 0x268
    _Bool _idEnabled;	// 624 = 0x270
    int _idIdentitiesChangedNotifyToken;	// 628 = 0x274
    NSArray *_idIdentityArray;	// 632 = 0x278
    NSObject<OS_dispatch_source> *_idMaintenanceTimer;	// 640 = 0x280
    _Bool _systemWillPowerDown;	// 648 = 0x288
    _Bool _autoUnlockActive;	// 649 = 0x289
    _Bool _boostNearbyInfo;	// 650 = 0x28a
    int _audioRoutingScore;	// 652 = 0x28c
    unsigned int _hotspotInfo;	// 656 = 0x290
    NSData *_bleAuthTag;	// 664 = 0x298
    CUBluetoothClient *_btConnectedDeviceMonitor;	// 672 = 0x2a0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 680 = 0x2a8
    RPIdentity *_idSelfIdentity;	// 688 = 0x2b0
}

+ (id)sharedNearbyAgent;	// IMP=0x000000010022e738
- (void).cxx_destruct;	// IMP=0x000000010024e45c
@property(readonly, nonatomic) RPIdentity *idSelfIdentity; // @synthesize idSelfIdentity=_idSelfIdentity;
@property(nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) CUBluetoothClient *btConnectedDeviceMonitor; // @synthesize btConnectedDeviceMonitor=_btConnectedDeviceMonitor;
@property(nonatomic) _Bool boostNearbyInfo; // @synthesize boostNearbyInfo=_boostNearbyInfo;
@property(readonly, nonatomic) NSData *bleAuthTag; // @synthesize bleAuthTag=_bleAuthTag;
@property(nonatomic) int audioRoutingScore; // @synthesize audioRoutingScore=_audioRoutingScore;
@property(nonatomic) _Bool autoUnlockActive; // @synthesize autoUnlockActive=_autoUnlockActive;
- (void)_testPipePing;	// IMP=0x000000010024e294
- (void)testPipePing;	// IMP=0x000000010024e22c
- (void)_systemHasPoweredOn;	// IMP=0x000000010024e1bc
- (void)_systemWillSleep;	// IMP=0x000000010024e148
- (void)unlockStopTestServer;	// IMP=0x000000010024e0e8
- (void)unlockStartTestServer;	// IMP=0x000000010024e088
- (void)unlockStopTestClient;	// IMP=0x000000010024dffc
- (void)unlockStartTestClientWithDevice:(id)arg1;	// IMP=0x000000010024dc74
- (void)unlockUpdateAdvertising:(unsigned int)arg1 mask:(unsigned int)arg2;	// IMP=0x000000010024da98
- (void)_unlockDeviceFilterChangedForRequest:(id)arg1;	// IMP=0x000000010024d66c
- (void)_unlockApproveBluetoothIDsChanged:(id)arg1;	// IMP=0x000000010024d4c4
- (void)_unlockReceivedFrameData:(id)arg1 peer:(id)arg2 device:(id)arg3;	// IMP=0x000000010024d1fc
- (void)_sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 direct:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010024d050
- (void)sendUnlockDataDirect:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010024cfe0
- (void)sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010024cec8
- (void)_stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x000000010024cdac
- (void)stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x000000010024cd14
- (void)_startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x000000010024caac
- (void)startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x000000010024ca00
- (int)_setupSendData:(id)arg1 sessionIdentifier:(id)arg2 cnx:(id)arg3 clientSession:(id)arg4;	// IMP=0x000000010024c460
- (int)_setupSendCreateSession:(id)arg1 cnx:(id)arg2;	// IMP=0x000000010024c10c
- (int)_setupHandleSessionMessageType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4 session:(id)arg5;	// IMP=0x000000010024b970
- (int)_setupHandleSessionEncryptedFrame:(id)arg1 type:(unsigned char)arg2 cnx:(id)arg3;	// IMP=0x000000010024b4d8
- (int)_setupHandleSessionCreated:(id)arg1 data:(id)arg2;	// IMP=0x000000010024b00c
- (int)_setupHandleCreateSession:(id)arg1 data:(id)arg2;	// IMP=0x000000010024aab4
- (int)_sendMessage:(id)arg1 frameType:(unsigned char)arg2 service:(id)arg3 session:(id)arg4;	// IMP=0x0000000100249e20
- (void)sessionSendResponse:(id)arg1 session:(id)arg2;	// IMP=0x0000000100249dc8
- (void)sessionSendRequest:(id)arg1 session:(id)arg2;	// IMP=0x0000000100249b78
- (void)sessionSendEvent:(id)arg1 session:(id)arg2;	// IMP=0x00000001002496fc
- (void)sessionReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x000000010024950c
- (void)sessionStop:(id)arg1;	// IMP=0x00000001002492c0
- (int)sessionStart:(id)arg1;	// IMP=0x0000000100248d40
- (void)serviceSendResponse:(id)arg1 service:(id)arg2;	// IMP=0x0000000100248ce8
- (void)serviceSendRequest:(id)arg1 service:(id)arg2;	// IMP=0x0000000100248a98
- (void)serviceSendEvent:(id)arg1 service:(id)arg2;	// IMP=0x0000000100248a40
- (void)serviceReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x00000001002488a4
- (void)serviceStop:(id)arg1;	// IMP=0x0000000100248770
- (int)serviceStart:(id)arg1;	// IMP=0x00000001002484c4
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000100248100
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0000000100248038
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0000000100247f08
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100247e00
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x0000000100247d14
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0000000100247c00
- (int)_idsShouldEncryptActivityLevel;	// IMP=0x0000000100247a04
- (_Bool)_idsShouldAdvertiseNearbyInfo;	// IMP=0x00000001002476f8
- (void)_idsMeDeviceChanged;	// IMP=0x0000000100247560
- (int)_idsMacCount;	// IMP=0x00000001002473e0
- (_Bool)idsIsSignedIn;	// IMP=0x0000000100247108
- (int)_idsHomePodCount;	// IMP=0x0000000100246f4c
- (_Bool)_idsHasActiveWatch;	// IMP=0x0000000100246d4c
- (void)idsDevicesAppendDescription:(id *)arg1;	// IMP=0x0000000100246540
- (id)idsDeviceForBluetoothDeviceID:(id)arg1;	// IMP=0x0000000100246320
- (id)_idsDeviceArrayLocked;	// IMP=0x0000000100246280
- (id)idsDeviceArray;	// IMP=0x0000000100246214
- (int)_idsContinuityDeviceCount;	// IMP=0x00000001002460b8
- (id)_idsBluetoothDeviceIDsForSMSRelay;	// IMP=0x0000000100245eec
- (id)_idsBluetoothDeviceIDsForSharingLocked;	// IMP=0x0000000100245d60
- (id)_idsBluetoothDeviceIDsForSharing;	// IMP=0x0000000100245cf4
- (id)idsBluetoothDeviceIDsForWatches;	// IMP=0x0000000100245b34
- (id)idsBluetoothDeviceIDsForSharing;	// IMP=0x0000000100245a70
- (id)_idsBluetoothDeviceIDsForMe;	// IMP=0x0000000100245798
- (id)_idsBluetoothDeviceIDsForLEPipe;	// IMP=0x0000000100245530
- (id)idsBluetoothDeviceIDsForLEPipe;	// IMP=0x00000001002454a4
- (id)_idsBluetoothDeviceIDsForiMessage;	// IMP=0x000000010024530c
- (id)_idsBluetoothDeviceIDsForHomePods;	// IMP=0x000000010024514c
- (id)idsBluetoothDeviceIDsForAppleTVs;	// IMP=0x0000000100244f8c
- (int)_idsAppleTVCount;	// IMP=0x0000000100244e0c
- (void)idsAddCachedIDSIdentifierToDevice:(id)arg1;	// IMP=0x0000000100244c74
- (void)idsAddCachedIDSIdentifier:(id)arg1 device:(id)arg2;	// IMP=0x0000000100244874
- (void)_idsEnsureStopped;	// IMP=0x0000000100244784
- (void)_idsEnsureStarted;	// IMP=0x00000001002446c0
- (unsigned char)_identificationDecryptActivityLevel:(unsigned char)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x0000000100244514
- (void)_identificationDecryptHotspotData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x0000000100244310
- (void)_identificationDecryptAudioRoutingScoreData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x000000010024410c
- (_Bool)_identificationIdentifyDevice:(id)arg1 sfDevice:(id)arg2;	// IMP=0x0000000100243dd4
- (void)_identificationReIdentifySameAccountDevices:(id)arg1 type:(long long)arg2;	// IMP=0x00000001002439e8
- (void)_identificationReIdentify;	// IMP=0x000000010024378c
- (void)_identificationMaintenanceTimer;	// IMP=0x0000000100243508
- (void)_identificationHandleDiscoveryStop;	// IMP=0x000000010024341c
- (void)_identificationHandleDeviceLost:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000100243358
- (void)_identificationHandleDeviceFound:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000100242910
- (void)_identificationGetIdentities;	// IMP=0x0000000100242398
- (void)_identificationEnsureStopped;	// IMP=0x00000001002422d8
- (void)_identificationEnsureStarted;	// IMP=0x000000010024211c
- (void)diagnosticMockLost:(id)arg1;	// IMP=0x000000010024207c
- (void)diagnosticMockFound:(id)arg1;	// IMP=0x0000000100241fdc
- (void)diagnosticMockChanged:(id)arg1;	// IMP=0x0000000100241f38
- (void)diagnosticBLEModeStop:(id)arg1;	// IMP=0x0000000100241e90
- (void)diagnosticBLEModeStart:(id)arg1;	// IMP=0x0000000100241dc4
- (void)_deviceDiscoveryBLEScanStateChanged:(long long)arg1 type:(long long)arg2;	// IMP=0x0000000100241c1c
- (void)_deviceDiscoveryBLEDeviceChanged:(id)arg1 type:(long long)arg2 changes:(unsigned int)arg3;	// IMP=0x0000000100241538
- (void)_deviceDiscoveryBLEDeviceLost:(id)arg1 type:(long long)arg2;	// IMP=0x00000001002411fc
- (void)_deviceDiscoveryBLEDeviceFound:(id)arg1 type:(long long)arg2;	// IMP=0x0000000100240a48
- (void)_deviceDiscoveryFastScanStop:(id)arg1 reset:(_Bool)arg2 reason:(id)arg3;	// IMP=0x00000001002407fc
- (void)_deviceDiscoveryFastScanStart:(id)arg1 device:(id)arg2 reason:(id)arg3;	// IMP=0x0000000100240458
- (void)_deviceDiscoveryFastScanEvaluate:(id)arg1 device:(id)arg2;	// IMP=0x0000000100240260
- (void)deviceDiscoveryFastScanCancel:(id)arg1 reason:(id)arg2;	// IMP=0x00000001002401d8
- (void)deviceDiscoveryFastScanTrigger:(id)arg1 reason:(id)arg2;	// IMP=0x0000000100240164
- (void)deviceDiscoveryRequestUpdate:(id)arg1;	// IMP=0x000000010023fc54
- (void)deviceDiscoveryRequestStop:(id)arg1;	// IMP=0x000000010023f920
- (void)_deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x000000010023f330
- (void)deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x000000010023f298
- (void)coordinatedAlertRequestCancel:(id)arg1;	// IMP=0x000000010023f1f0
- (void)coordinatedAlertRequestFinish:(id)arg1;	// IMP=0x000000010023e6e0
- (void)coordinatedAlertRequestStart:(id)arg1;	// IMP=0x000000010023dd6c
- (void)nearbyDidUpdateState:(id)arg1;	// IMP=0x000000010023dbd0
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;	// IMP=0x000000010023da20
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;	// IMP=0x000000010023d134
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;	// IMP=0x000000010023cdb4
- (unsigned int)_bleProximityUpdateNearbyInfoDevice:(id)arg1;	// IMP=0x000000010023cc5c
- (unsigned int)_bleProximityUpdateNearbyActionDevice:(id)arg1;	// IMP=0x000000010023cae0
- (unsigned int)_bleProximityUpdateDeviceCloseNearbyActionDevice:(id)arg1;	// IMP=0x000000010023c55c
- (long long)bleProximityRSSIThreshold:(id)arg1;	// IMP=0x000000010023c4ac
- (long long)bleProximityRSSIThresholdForType:(long long)arg1 device:(id)arg2;	// IMP=0x000000010023c250
- (id)bleProximityRSSIEstimatorInfo;	// IMP=0x000000010023c210
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2 allInfo:(id)arg3;	// IMP=0x000000010023bbec
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2;	// IMP=0x000000010023baf8
- (id)bleProximityInfoForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x000000010023b9fc
- (id)bleProximityInfo;	// IMP=0x000000010023b9a0
- (void)bleProximityEstimatorsResetDeviceClose;	// IMP=0x000000010023b7a8
- (id)bleProximityEstimatorForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x000000010023b73c
- (void)_bleUpdateScanner:(id)arg1 typeFlag:(unsigned long long)arg2;	// IMP=0x000000010023aa10
- (void)_bleUpdateAuthTagIfNeeded;	// IMP=0x000000010023a830
- (void)_bleAdvertisingAddressChanged;	// IMP=0x000000010023a608
- (void)_btPipeHandleFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x000000010023a2f8
- (void)_btPipeEnsureStopped;	// IMP=0x000000010023a260
- (void)_btPipeEnsureStarted;	// IMP=0x000000010023a030
- (_Bool)_bleProximityPairingScannerShouldScan;	// IMP=0x0000000100239fc4
- (void)_bleProximityPairingScannerEnsureStopped;	// IMP=0x0000000100239dc8
- (void)_bleProximityPairingScannerEnsureStarted;	// IMP=0x00000001002396b4
- (_Bool)_bleNearbyInfoScannerShouldScan;	// IMP=0x00000001002394b4
- (void)_bleNearbyInfoScannerEnsureStopped;	// IMP=0x00000001002392c0
- (void)_bleNearbyInfoScannerEnsureStarted;	// IMP=0x0000000100238c6c
- (int)bleNearbyInfoSendFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 isSession:(_Bool)arg5;	// IMP=0x0000000100237e34
- (void)bleNearbyInfoStopConnectionToDevice:(id)arg1 owner:(id)arg2;	// IMP=0x0000000100237cf4
- (int)bleNearbyInfoStartConnectionToDevice:(id)arg1 owner:(id)arg2 connected:(_Bool *)arg3;	// IMP=0x0000000100237a68
- (int)_bleNearbyInfoReceivedFrameType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4;	// IMP=0x0000000100236ea0
- (void)_bleNearbyInfoReceivedData:(id)arg1 cnx:(id)arg2 peer:(id)arg3;	// IMP=0x0000000100236548
- (void)_bleNearbyInfoAdvertiserLingerStart:(id)arg1;	// IMP=0x0000000100236314
- (_Bool)_bleNearbyInfoAdvertiserLingerIfNeeded;	// IMP=0x00000001002362d8
- (unsigned char)_bleEncryptActivityLevel:(unsigned char)arg1;	// IMP=0x00000001002360f8
- (void)_bleNearbyInfoAdvertiserUpdateAddHotspotInfo:(id)arg1;	// IMP=0x0000000100235e6c
- (void)_bleNearbyInfoAdvertiserUpdateAddAudioRoutingScore:(id)arg1;	// IMP=0x0000000100235bb8
- (void)_bleNearbyInfoAdvertiserUpdate;	// IMP=0x0000000100235280
- (_Bool)_bleNearbyInfoAdvertiserShouldAdvertise;	// IMP=0x0000000100235068
- (void)_bleNearbyInfoAdvertiserEnsureStopped;	// IMP=0x0000000100234fb4
- (void)_bleNearbyInfoAdvertiserEnsureStarted;	// IMP=0x0000000100234ef8
- (_Bool)_bleNearbyActionScannerShouldScan;	// IMP=0x0000000100234ce8
- (void)_bleNearbyActionScannerEnsureStopped;	// IMP=0x0000000100234af4
- (void)_bleNearbyActionScannerEnsureStarted;	// IMP=0x00000001002344ec
- (_Bool)_bleNearbyActionAdvertiserShouldAdvertise;	// IMP=0x00000001002344a8
- (void)_bleNearbyActionAdvertiserEnsureStopped;	// IMP=0x00000001002343f0
- (void)_bleNearbyActionAdvertiserEnsureStarted;	// IMP=0x0000000100233668
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100233584
- (void)_activityMonitorWatchWristStateChanged:(id)arg1;	// IMP=0x0000000100233468
- (void)_activityMonitorUpdateUserActive:(_Bool)arg1;	// IMP=0x0000000100233430
- (void)_activityMonitorUILockStatusChanged:(id)arg1;	// IMP=0x00000001002332e8
- (void)_activityMonitorScreenStateChanged:(id)arg1;	// IMP=0x00000001002331a8
- (void)_activityMonitorMultipleUsersLoggedInChanged:(id)arg1;	// IMP=0x0000000100233084
- (double)_activityMonitorLastUserEventDelta;	// IMP=0x000000010023305c
- (void)_activityMonitorCarPlayStatusChanged:(id)arg1;	// IMP=0x0000000100232f38
- (unsigned char)_activityMonitorCurrentLevelAndNeedsPoll:(_Bool *)arg1 recentUserActivity:(_Bool *)arg2;	// IMP=0x0000000100232c8c
- (void)_activityMonitorUpdate;	// IMP=0x0000000100232b10
- (void)_activityMonitorEnsureStopped;	// IMP=0x00000001002329dc
- (void)_activityMonitorEnsureStarted;	// IMP=0x00000001002328cc
- (void)_update;	// IMP=0x00000001002325dc
- (void)update;	// IMP=0x00000001002325ac
- (void)prefsChanged;	// IMP=0x00000001002313ac
- (void)_handleBluetoothDeviceConnected:(id)arg1;	// IMP=0x0000000100231170
- (void)_handleAppleIDChanged:(id)arg1;	// IMP=0x0000000100231078
- (void)_handleAirDropDiscoverableModeChanged:(id)arg1;	// IMP=0x0000000100230f90
- (void)_invalidate;	// IMP=0x0000000100230a50
- (void)invalidate;	// IMP=0x00000001002309e8
- (void)_activate;	// IMP=0x000000010023022c
- (void)activate;	// IMP=0x00000001002301b8
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000010022e820
- (id)sharedNearbyPipe;	// IMP=0x000000010022e7ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

