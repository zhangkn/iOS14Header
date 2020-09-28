//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDBluetoothDiscoveryDevice-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSString, NSUUID;

@interface FMDBluetoothDiscoveryXPCAdapterDevice : NSObject <FMDBluetoothDiscoveryDevice, NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSDictionary *_advertisementFields;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    long long _rssi;	// 32 = 0x20
    NSData *_bluetoothAddress;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100035e58
- (void).cxx_destruct;	// IMP=0x00000001000365c8
@property(copy, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *advertisementFields; // @synthesize advertisementFields=_advertisementFields;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)_xpcSafeAdvertisementKeys:(id)arg1;	// IMP=0x00000001000363c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100036268
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003600c
- (id)initWithBluetoothDevice:(id)arg1;	// IMP=0x0000000100035e60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
