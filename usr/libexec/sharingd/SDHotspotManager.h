//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDMISManagerDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString, NSTimer, SDMISManager;
@protocol OS_dispatch_queue, SDHotspotManagerDelegate;

__attribute__((visibility("hidden")))
@interface SDHotspotManager : NSObject <SDMISManagerDelegate>
{
    SDMISManager *_misManager;	// 8 = 0x8
    _Bool _tetheringSupported;	// 16 = 0x10
    _Bool _maxConnectionsReached;	// 17 = 0x11
    _Bool _startedHostAP;	// 18 = 0x12
    _Bool _capturingTailspin;	// 19 = 0x13
    _Bool _flippedHotspotSwitch;	// 20 = 0x14
    id <SDHotspotManagerDelegate> _delegate;	// 24 = 0x18
    NSNumber *_p2pAllowedCache;	// 32 = 0x20
    id _hostAPNetwork;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSTimer *_networkTimer;	// 56 = 0x38
    NSMutableArray *_handlers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001001ac238
@property(retain) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(retain) NSTimer *networkTimer; // @synthesize networkTimer=_networkTimer;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) id hostAPNetwork; // @synthesize hostAPNetwork=_hostAPNetwork;
@property _Bool flippedHotspotSwitch; // @synthesize flippedHotspotSwitch=_flippedHotspotSwitch;
@property _Bool capturingTailspin; // @synthesize capturingTailspin=_capturingTailspin;
@property _Bool startedHostAP; // @synthesize startedHostAP=_startedHostAP;
@property(retain) NSNumber *p2pAllowedCache; // @synthesize p2pAllowedCache=_p2pAllowedCache;
@property __weak id <SDHotspotManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool maxConnectionsReached; // @synthesize maxConnectionsReached=_maxConnectionsReached;
@property(getter=isTetheringSupported) _Bool tetheringSupported; // @synthesize tetheringSupported=_tetheringSupported;
- (void)onqueue_handleHostAPChanged:(id)arg1;	// IMP=0x00000001001abdf4
- (void)handleHostAPChanged:(id)arg1;	// IMP=0x00000001001abd5c
- (_Bool)isNetworkHostAP:(struct __WiFiNetwork *)arg1;	// IMP=0x00000001001abcf4
- (void)misStateChanged:(id)arg1;	// IMP=0x00000001001abc64
- (void)notifyHostAPError:(id)arg1;	// IMP=0x00000001001abb24
- (void)notifyHostAPActivated;	// IMP=0x00000001001ab974
- (id)hotspotChannel;	// IMP=0x00000001001ab894
@property(readonly) NSString *hotspotPassword;
- (id)_createDefaultPassword;	// IMP=0x00000001001ab5b0
- (_Bool)setHotspotPassword:(id)arg1;	// IMP=0x00000001001ab4d4
@property(readonly) NSString *hotspotName;
- (void)onqueue_captureTailspin;	// IMP=0x00000001001aafd4
- (void)invalidateNetworkTimer;	// IMP=0x00000001001aaf40
- (void)networkTimerFired:(id)arg1;	// IMP=0x00000001001aae68
- (void)restartNetworkTimer;	// IMP=0x00000001001aad40
- (void)onqueue_cleanUpFailedNetworkBringUp;	// IMP=0x00000001001aabe8
- (void)disableMISImmediately;	// IMP=0x00000001001aab24
- (void)turnOffDiscovery;	// IMP=0x00000001001aaa3c
- (void)stopTethering;	// IMP=0x00000001001aa9bc
- (void)onqueue_startTetheringWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aa3d0
- (void)startTetheringWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aa2cc
@property(readonly, getter=isTetheringInUse) _Bool tetheringInUse;
@property(readonly, getter=isP2PAllowed) _Bool p2pAllowed;
- (_Bool)isTethering;	// IMP=0x00000001001aa00c
- (_Bool)shouldTurnOffTethering;	// IMP=0x00000001001a9dbc
- (void)onqueue_handleSwitchCondtionsChanged;	// IMP=0x00000001001a9ca0
- (void)onqueue_updateHostAPNetwork;	// IMP=0x00000001001a9a48
- (void)onqueue_updateTetheringSupported;	// IMP=0x00000001001a96e8
- (_Bool)netRBTetheringSupported;	// IMP=0x00000001001a9698
- (void)personalHotspotAllowedChanged:(id)arg1;	// IMP=0x00000001001a95c0
- (void)simStateChanged:(id)arg1;	// IMP=0x00000001001a9558
- (void)firstUnlockStateChanged:(id)arg1;	// IMP=0x00000001001a94f0
- (void)debugInfoRequest:(id)arg1;	// IMP=0x00000001001a9180
- (void)removeObservers;	// IMP=0x00000001001a9130
- (void)addObservers;	// IMP=0x00000001001a901c
- (void)dealloc;	// IMP=0x00000001001a8fc4
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001001a8e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
