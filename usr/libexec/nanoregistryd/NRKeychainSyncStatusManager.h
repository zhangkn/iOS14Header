//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPService-Protocol.h"

@class NSHashTable, NSMutableArray, NSString;
@protocol AbstractTimer, OS_dispatch_queue;

@interface NRKeychainSyncStatusManager : NSObject <EPService>
{
    NSHashTable *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_keychainQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_propertyQueue;	// 32 = 0x20
    int _keychainViewNotificationToken;	// 40 = 0x28
    id <AbstractTimer> _keychainQueryTimer;	// 48 = 0x30
    _Bool _queryInProgress;	// 56 = 0x38
    _Bool _outstandingRequest;	// 57 = 0x39
    _Bool _enabledFlag;	// 58 = 0x3a
    _Bool _skipNotificationOnLaunch;	// 59 = 0x3b
    NSMutableArray *_updateBlocks;	// 64 = 0x40
}

+ (id)newService:(id)arg1;	// IMP=0x00000001000f5564
- (void).cxx_destruct;	// IMP=0x00000001000f69dc
@property(retain, nonatomic) NSMutableArray *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000f6508
- (void)addObserver:(id)arg1;	// IMP=0x00000001000f6490
@property(readonly, nonatomic) _Bool enabled;
- (void)dealloc;	// IMP=0x00000001000f6104
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000f5a18
@property(nonatomic) _Bool outstandingRequest; // @synthesize outstandingRequest=_outstandingRequest;
@property(nonatomic) _Bool enabledFlag; // @synthesize enabledFlag=_enabledFlag;
@property(nonatomic) _Bool skipNotificationOnLaunch; // @synthesize skipNotificationOnLaunch=_skipNotificationOnLaunch;
@property(nonatomic) _Bool queryInProgress; // @synthesize queryInProgress=_queryInProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
