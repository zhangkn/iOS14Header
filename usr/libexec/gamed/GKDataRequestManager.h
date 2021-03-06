//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"
#import "GKLockStatusObserver-Protocol.h"
#import "GKNATObserverDelegate-Protocol.h"
#import "GKPreferencesDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class APSConnection, GKApplicationStateMonitor, GKNATObserver, GKReachability, NSCountedSet, NSData, NSDate, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface GKDataRequestManager : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, GKNATObserverDelegate, GKPreferencesDelegate, GKLockStatusObserver>
{
    NSXPCListener *_publicListener;	// 8 = 0x8
    long long _currentEnvironment;	// 16 = 0x10
    int _natType;	// 24 = 0x18
    GKNATObserver *_natObserver;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_natSemaphore;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_natQueue;	// 48 = 0x30
    NSData *_pushToken;	// 56 = 0x38
    _Bool _receivesMemoryWarnings;	// 64 = 0x40
    long long _activePushEnvironment;	// 72 = 0x48
    NSDate *_nearbyQueryLastCheckDate;	// 80 = 0x50
    double _nearbyQueryAllowance;	// 88 = 0x58
    APSConnection *_apsConnection;	// 96 = 0x60
    APSConnection *_pushConnectionProd;	// 104 = 0x68
    APSConnection *_pushConnectionDev;	// 112 = 0x70
    NSMutableDictionary *_transactionBag;	// 120 = 0x78
    NSCountedSet *_transactionCounts;	// 128 = 0x80
    GKApplicationStateMonitor *_applicationStateMonitor;	// 136 = 0x88
    NSString *_authenticatingWithSettingsBundleID;	// 144 = 0x90
    GKReachability *_reachability;	// 152 = 0x98
}

+ (id)ratingsQueue;	// IMP=0x0000000100064484
+ (id)statsQueue;	// IMP=0x000000010006441c
+ (_Bool)allowSelfSignedCertForEnvironment:(long long)arg1;	// IMP=0x000000010005f140
+ (id)syncQueue;	// IMP=0x000000010005cdbc
+ (id)pushQueue;	// IMP=0x000000010005cd54
+ (id)clientQueue;	// IMP=0x000000010005cd48
+ (id)sharedManager;	// IMP=0x000000010005cd3c
@property(retain, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSString *authenticatingWithSettingsBundleID; // @synthesize authenticatingWithSettingsBundleID=_authenticatingWithSettingsBundleID;
@property(retain, nonatomic) GKApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(retain, nonatomic) NSCountedSet *transactionCounts; // @synthesize transactionCounts=_transactionCounts;
@property(retain, nonatomic) NSMutableDictionary *transactionBag; // @synthesize transactionBag=_transactionBag;
@property(retain, nonatomic) APSConnection *pushConnectionDev; // @synthesize pushConnectionDev=_pushConnectionDev;
@property(retain, nonatomic) APSConnection *pushConnectionProd; // @synthesize pushConnectionProd=_pushConnectionProd;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property(retain) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property(nonatomic) _Bool receivesMemoryWarnings; // @synthesize receivesMemoryWarnings=_receivesMemoryWarnings;
@property(readonly) long long currentEnvironment; // @synthesize currentEnvironment=_currentEnvironment;
- (id)storeBag;	// IMP=0x00000001000644ec
- (void)terminate;	// IMP=0x0000000100064210
- (void)beginTransaction:(id)arg1;	// IMP=0x0000000100063fd0
- (void)endTransaction:(id)arg1;	// IMP=0x0000000100063dd8
- (void)processIncomingMessage:(id)arg1;	// IMP=0x0000000100063bec
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000001000632f4
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100062fc8
- (void)processIncomingiMessageInvite:(id)arg1;	// IMP=0x0000000100062940
- (void)didReceiveIncomingIDSMessage:(id)arg1;	// IMP=0x0000000100062934
- (void)gameCenterDidBecomeRestricted;	// IMP=0x00000001000627fc
- (void)loadLocalizedGameNameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000625d0
- (void)appStateChanged:(id)arg1;	// IMP=0x00000001000621b4
- (void)terminateClient:(id)arg1;	// IMP=0x0000000100062068
- (void)synchronizeBagWithPreferences;	// IMP=0x0000000100061e78
- (void)sendPushTokenForClient:(id)arg1;	// IMP=0x0000000100061608
- (void)loadConnectivitySettingsAndStartNATObserver;	// IMP=0x0000000100061298
- (void)_resetNATObserverWithSettings:(id)arg1;	// IMP=0x00000001000610ec
- (void)updateActivePushEnvironment;	// IMP=0x0000000100060e50
- (void)_updatePushEnvironmentWithStoreBag:(id)arg1;	// IMP=0x0000000100060bc8
@property(retain) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)_setPushToken:(id)arg1;	// IMP=0x00000001000609b0
@property long long activePushEnvironment; // @synthesize activePushEnvironment=_activePushEnvironment;
- (void)_setActivePushEnvironment:(long long)arg1;	// IMP=0x000000010006054c
- (void)getValidNATTypeWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100060194
- (void)NATTypeDidChange:(int)arg1;	// IMP=0x000000010006004c
@property int natType; // @synthesize natType=_natType;
- (void)_waitForValidNATType;	// IMP=0x000000010005fe08
- (void)_setConnectivitySettings:(id)arg1;	// IMP=0x000000010005fc08
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010005f320
- (void)resetEnvironment;	// IMP=0x000000010005f164
@property(readonly, nonatomic) long long preferredEnvironment;
- (void)dealloc;	// IMP=0x000000010005efec
- (void)clearPushEnvironment;	// IMP=0x000000010005ef04
- (void)_clearPushConnections;	// IMP=0x000000010005ecc4
- (void)updateNotificationTopics;	// IMP=0x000000010005ec5c
- (void)setUpCloudKitNotificationTopics;	// IMP=0x000000010005eb4c
- (void)_updateNotificationTopics;	// IMP=0x000000010005e498
@property(readonly, nonatomic) APSConnection *activePushConnection; // @dynamic activePushConnection;
- (id)pushConnectionForEnvironment:(long long)arg1;	// IMP=0x000000010005e448
- (void)storeBagChanged:(id)arg1;	// IMP=0x000000010005e154
- (void)finishStartup;	// IMP=0x000000010005d240
- (void)clientProxy:(id)arg1 didRefreshContentsForDataType:(unsigned int)arg2 userInfo:(id)arg3;	// IMP=0x000000010005d23c
- (void)reachabilityDidChange:(id)arg1;	// IMP=0x000000010005d1ec
- (void)iCloudAccountAvailabilityChanged:(id)arg1;	// IMP=0x000000010005d1d4
- (id)init;	// IMP=0x000000010005cf90
- (void)lockStatusDidChange;	// IMP=0x000000010005cf8c
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010005cf5c
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010005ce24
- (void)clearAllNearbyInvites;	// IMP=0x00000001000a5df8
- (void)handleNearbyInviteResponse:(id)arg1;	// IMP=0x00000001000a59dc
- (void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x00000001000a5748
- (void)presentNearbyInvite:(id)arg1;	// IMP=0x00000001000a4e34
- (id)updateRequestWithPushToken:(id)arg1;	// IMP=0x000000010019f020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

