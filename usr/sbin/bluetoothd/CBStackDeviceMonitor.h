//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CBStackDeviceMonitor : NSObject
{
    _Bool _addedMonitor;	// 8 = 0x8
    NSMutableDictionary *_deviceMap;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    CDUnknownBlockType _deviceFoundHandler;	// 32 = 0x20
    CDUnknownBlockType _deviceLostHandler;	// 40 = 0x28
    unsigned long long _discoveryFlags;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100021e8c
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned long long discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
- (void)_updateDevice:(struct Device *)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000100021b5c
- (void)updateDevices;	// IMP=0x000000010002131c
- (void)localDeviceEvent:(int)arg1;	// IMP=0x0000000100021228
- (void)_invalidated;	// IMP=0x0000000100021144
- (void)invalidate;	// IMP=0x0000000100020ef8
- (void)activate;	// IMP=0x0000000100020bf4
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100020924
- (id)description;	// IMP=0x0000000100020914

@end

