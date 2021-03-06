//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BluetoothDevice, CBCentralManager, CBPeripheral;

@interface W5BluetoothDeviceInternal : NSObject
{
    CBPeripheral *_peripheral;	// 8 = 0x8
    CBCentralManager *_centralManager;	// 16 = 0x10
    BluetoothDevice *_device;	// 24 = 0x18
}

- (unsigned long long)__minorClass;	// IMP=0x0000000100062084
- (unsigned long long)__majorClass;	// IMP=0x0000000100062060
- (_Bool)__isLowEnergy;	// IMP=0x0000000100062020
- (_Bool)__isConnected;	// IMP=0x0000000100061ff8
- (_Bool)__isCloudPaired;	// IMP=0x0000000100061fa4
- (_Bool)__isPaired;	// IMP=0x0000000100061f50
- (id)__address;	// IMP=0x0000000100061f0c
- (id)__name;	// IMP=0x0000000100061ef0
- (id)device;	// IMP=0x0000000100061d9c
- (void)dealloc;	// IMP=0x0000000100061d44
- (void)setBluetoothDevice:(id)arg1;	// IMP=0x0000000100061d10
- (void)setPeripheral:(id)arg1 centralManager:(id)arg2;	// IMP=0x0000000100061cbc

@end

