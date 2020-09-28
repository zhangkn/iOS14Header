//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPService-Protocol.h"

@class NSDictionary, NSMapTable, NSMutableOrderedSet, NSString, NSUUID;
@protocol EPServiceRegistry;

@interface EPActiveDeviceAssertionFactory : NSObject <EPService>
{
    NSMutableOrderedSet *_observers;	// 8 = 0x8
    NSUUID *_pairingID;	// 16 = 0x10
    id <EPServiceRegistry> _serviceRegistry;	// 24 = 0x18
    NSMapTable *_managers;	// 32 = 0x20
}

+ (id)newService:(id)arg1;	// IMP=0x000000010008dadc
- (void).cxx_destruct;	// IMP=0x000000010008ec90
@property(readonly, nonatomic) NSMapTable *managers; // @synthesize managers=_managers;
@property(readonly, nonatomic) id <EPServiceRegistry> serviceRegistry; // @synthesize serviceRegistry=_serviceRegistry;
@property(retain, nonatomic) NSUUID *pairingID; // @synthesize pairingID=_pairingID;
- (void)removeObserver:(id)arg1;	// IMP=0x000000010008ea58
- (void)addObserver:(id)arg1;	// IMP=0x000000010008e860
@property(readonly, nonatomic) NSDictionary *assertions;
- (void)update;	// IMP=0x000000010008e40c
- (void)managerIsIdle:(id)arg1;	// IMP=0x000000010008e188
- (id)assertionWithPairingID:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010008ddd8
- (id)initWithServiceRegistry:(id)arg1;	// IMP=0x000000010008dbcc
- (id)init;	// IMP=0x000000010008db2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
