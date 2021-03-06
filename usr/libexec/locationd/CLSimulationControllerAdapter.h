//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLSimulationControllerProtocol-Protocol.h"
#import "CLSimulationXPCServerInterface-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListener;

@interface CLSimulationControllerAdapter : CLIntersiloService <CLSimulationControllerProtocol, NSXPCListenerDelegate, CLSimulationXPCServerInterface>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    struct CLSimulationController *_controller;	// 24 = 0x18
}

+ (id)getSilo;	// IMP=0x000000010064e910
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010064e8ec
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010064e868
@property(nonatomic) struct CLSimulationController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100650020
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;	// IMP=0x000000010064fea0
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;	// IMP=0x000000010064fd10
- (void)getFencesForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010064fb8c
- (void)simulateSignificantLocationChange:(id)arg1;	// IMP=0x000000010064fa40
- (void)simulateVisit:(id)arg1;	// IMP=0x000000010064f918
- (void)setLocationTravellingSpeed:(double)arg1;	// IMP=0x000000010064f7f0
- (void)setLocationInterval:(double)arg1;	// IMP=0x000000010064f6c8
- (void)setIntermediateLocationDistance:(double)arg1;	// IMP=0x000000010064f5a0
- (void)setLocationRepeatBehavior:(unsigned char)arg1;	// IMP=0x000000010064f49c
- (void)setLocationDeliveryBehavior:(unsigned char)arg1;	// IMP=0x000000010064f358
- (void)clearSimulatedLocations;	// IMP=0x000000010064f344
- (void)appendSimulatedLocations:(id)arg1;	// IMP=0x000000010064f0dc
- (void)setSimulationScenario:(id)arg1;	// IMP=0x000000010064f074
- (void)startLocationSimulation;	// IMP=0x000000010064ee70
- (void)stopLocationSimulation;	// IMP=0x000000010064ec60
- (void)shutdown;	// IMP=0x000000010064ec5c
- (void)endService;	// IMP=0x000000010064ec30
- (void)beginService;	// IMP=0x000000010064e9cc
- (id)init;	// IMP=0x000000010064e988

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

