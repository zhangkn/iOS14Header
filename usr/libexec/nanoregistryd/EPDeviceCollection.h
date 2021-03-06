//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPDeviceInfoDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol EPDeviceCollectionDelegate, OS_dispatch_source;

@interface EPDeviceCollection : NSObject <EPDeviceInfoDelegate>
{
    id <EPDeviceCollectionDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_deviceInfos;	// 16 = 0x10
    NSMutableDictionary *_classicDeviceInfos;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_purgeTimer;	// 32 = 0x20
    EPDeviceCollection *me;	// 40 = 0x28
    long long _maxDevicesSeen;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    NSMutableDictionary *_devicesDictionary;	// 64 = 0x40
    NSMutableSet *_displayableDevices;	// 72 = 0x48
    NSMutableSet *_proximateDevices;	// 80 = 0x50
    NSMutableDictionary *_classicDevicesDictionary;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010008667c
@property(readonly, nonatomic) NSMutableDictionary *classicDevicesDictionary; // @synthesize classicDevicesDictionary=_classicDevicesDictionary;
@property(readonly, nonatomic) NSMutableSet *proximateDevices; // @synthesize proximateDevices=_proximateDevices;
@property(readonly, nonatomic) NSMutableSet *displayableDevices; // @synthesize displayableDevices=_displayableDevices;
@property(readonly, nonatomic) NSMutableDictionary *devicesDictionary; // @synthesize devicesDictionary=_devicesDictionary;
- (void)deviceInfoPairingSuccess:(id)arg1;	// IMP=0x0000000100086610
- (void)deviceInfoPairingFailure:(id)arg1;	// IMP=0x00000001000865c4
- (void)deviceInfoDeviceDidDeallocate:(id)arg1;	// IMP=0x0000000100086530
- (void)deviceInfo:(id)arg1 peerDidInvalidate:(id)arg2;	// IMP=0x00000001000864a8
- (id)newDeviceWithPeer:(id)arg1;	// IMP=0x00000001000862dc
- (id)newDeviceWithPeripheral:(id)arg1 withAdvertisementData:(id)arg2 withRSSI:(id)arg3;	// IMP=0x00000001000860a0
- (void)update;	// IMP=0x0000000100085218
- (void)clear;	// IMP=0x0000000100084828
- (void)_updateTimer;	// IMP=0x000000010008457c
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000843e8
- (void)dealloc;	// IMP=0x00000001000843b4
- (id)initBase;	// IMP=0x0000000100084380

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

