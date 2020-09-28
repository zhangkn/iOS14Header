//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol OS_dispatch_queue;

@interface CBStackAddressMonitor : NSObject
{
    _Bool _addedMonitor;	// 8 = 0x8
    NSData *_connectableAddressData;	// 16 = 0x10
    NSData *_nonConnectableAddressData;	// 24 = 0x18
    CDUnknownBlockType _addressChangedHandler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010001d6c0
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType addressChangedHandler; // @synthesize addressChangedHandler=_addressChangedHandler;
@property(readonly, copy, nonatomic) NSData *nonConnectableAddressData; // @synthesize nonConnectableAddressData=_nonConnectableAddressData;
@property(readonly, copy, nonatomic) NSData *connectableAddressData; // @synthesize connectableAddressData=_connectableAddressData;
- (id)_dataWithBTAddress:(unsigned long long)arg1;	// IMP=0x000000010001d5fc
- (void)addressChanged:(_Bool)arg1;	// IMP=0x000000010001d314
- (void)invalidate;	// IMP=0x000000010001d1b8
- (void)activate;	// IMP=0x000000010001d040
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010001cf38
- (id)description;	// IMP=0x000000010001cf28

@end
