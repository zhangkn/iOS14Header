//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, NSMutableArray, NSMutableDictionary, NSString;

@interface CattManager : NSObject <CBCentralManagerDelegate>
{
    CBCentralManager *_centralManager;	// 8 = 0x8
    NSMutableDictionary *_clientServiceManagerMap;	// 16 = 0x10
    NSMutableArray *_services;	// 24 = 0x18
    NSMutableArray *_cattPeripheral;	// 32 = 0x20
    NSMutableDictionary *_options;	// 40 = 0x28
}

+ (id)instance;	// IMP=0x0000000100011120
- (void).cxx_destruct;	// IMP=0x00000001000121c4
@property(retain, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *cattPeripheral; // @synthesize cattPeripheral=_cattPeripheral;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableDictionary *clientServiceManagerMap; // @synthesize clientServiceManagerMap=_clientServiceManagerMap;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (id)centralManagerStateString;	// IMP=0x00000001000120a8
- (void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3;	// IMP=0x0000000100011edc
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x0000000100011d50
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x0000000100011bf8
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0000000100011a14
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0000000100011800
- (void)disconnectPeripheral:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000100011638
- (void)connectPeripheral:(id)arg1;	// IMP=0x00000001000114c4
- (id)init;	// IMP=0x00000001000112d8
- (void)registerServices;	// IMP=0x000000010001118c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

