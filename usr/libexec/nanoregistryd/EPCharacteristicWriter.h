//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CBCentralManagerPrivateDelegate-Protocol.h"
#import "CBPeripheralDelegate-Protocol.h"
#import "EPResourceOwnerDelegate-Protocol.h"

@class CBCharacteristic, CBUUID, EPCentralManager, EPPeripheralConnector, EPPeripheralObserver, NSMutableArray, NSString;

@interface EPCharacteristicWriter : NSObject <CBCentralManagerDelegate, CBCentralManagerPrivateDelegate, CBPeripheralDelegate, EPResourceOwnerDelegate>
{
    EPCentralManager *_central;	// 8 = 0x8
    EPPeripheralObserver *_peripheral;	// 16 = 0x10
    EPPeripheralConnector *_connector;	// 24 = 0x18
    CBUUID *_serviceUUID;	// 32 = 0x20
    CBUUID *_characteristicUUID;	// 40 = 0x28
    NSMutableArray *_services;	// 48 = 0x30
    CBCharacteristic *_characteristic;	// 56 = 0x38
    NSMutableArray *_writeFIFO;	// 64 = 0x40
    _Bool _invalidated;	// 72 = 0x48
    unsigned long long _state;	// 80 = 0x50
}

+ (id)stringForEPCharacteristicWriterState:(unsigned long long)arg1;	// IMP=0x00000001000d6174
- (void).cxx_destruct;	// IMP=0x00000001000d61fc
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d5e50
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d5844
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x00000001000d53dc
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000001000d53d8
- (void)resourceAvailabilityDidChange:(id)arg1;	// IMP=0x00000001000d53cc
- (void)update;	// IMP=0x00000001000d4fc4
- (void)write;	// IMP=0x00000001000d4c0c
- (void)_updateStateWithNewState:(unsigned long long)arg1;	// IMP=0x00000001000d46a8
- (void)_writeFinishedWithError:(id)arg1 withEntry:(id)arg2;	// IMP=0x00000001000d40a0
- (void)_writeTimedOutWithEntry:(id)arg1;	// IMP=0x00000001000d3f80
- (void)writeData:(id)arg1 timeout:(double)arg2 begin:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d3dcc
- (void)writeData:(id)arg1 begin:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d3d5c
- (id)newDispatchTimerOfDuration:(double)arg1 withTimeoutBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d3c70
- (id)initWithPeripheral:(id)arg1 serviceUUID:(id)arg2 characteristicUUID:(id)arg3;	// IMP=0x00000001000d3a54
- (void)invalidate;	// IMP=0x00000001000d3a40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

