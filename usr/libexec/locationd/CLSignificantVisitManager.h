//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLClientAuthorizationCacheClientProtocol-Protocol.h"
#import "CLRoutineMonitorClientProtocol-Protocol.h"
#import "CLSignificantVisitManagerProtocol-Protocol.h"

@class CLSettingsMirror, NSMutableArray, NSString;
@protocol CLClientAuthorizationCacheProtocol, CLClientManagerPublicProtocol, CLRoutineMonitorServiceProtocol;

@interface CLSignificantVisitManager : CLIntersiloService <CLRoutineMonitorClientProtocol, CLClientAuthorizationCacheClientProtocol, CLSignificantVisitManagerProtocol>
{
    struct unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    struct map<id<CLSignificantVisitManagerClientProtocol>, NSString *, std::__1::less<id<CLSignificantVisitManagerClientProtocol>>, std::__1::allocator<std::__1::pair<const id<CLSignificantVisitManagerClientProtocol>, NSString *>>> _clientToKey;	// 16 = 0x10
    CLSettingsMirror *fSettings;	// 40 = 0x28
    _Bool _monitoring;	// 48 = 0x30
    _Bool _leeching;	// 49 = 0x31
    _Bool _armed;	// 50 = 0x32
    struct CLPersistentStore *_clientInterest;	// 56 = 0x38
    struct CLPersistentStore *_clientAuthDate;	// 64 = 0x40
    id <CLClientAuthorizationCacheProtocol> _clientAuthorizationCache;	// 72 = 0x48
    NSMutableArray *_recentVisits;	// 80 = 0x50
    id <CLRoutineMonitorServiceProtocol> _routineMonitor;	// 88 = 0x58
    id <CLClientManagerPublicProtocol> _clientManager;	// 96 = 0x60
    unsigned long long _currentJournalIdentifier;	// 104 = 0x68
}

+ (_Bool)isSupported;	// IMP=0x0000000100344264
+ (id)getSilo;	// IMP=0x00000001003441ec
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001003441c8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100344144
- (id).cxx_construct;	// IMP=0x0000000100348a54
- (void).cxx_destruct;	// IMP=0x00000001003489fc
@property(nonatomic) unsigned long long currentJournalIdentifier; // @synthesize currentJournalIdentifier=_currentJournalIdentifier;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(retain, nonatomic) id <CLClientManagerPublicProtocol> clientManager; // @synthesize clientManager=_clientManager;
@property(retain, nonatomic) id <CLRoutineMonitorServiceProtocol> routineMonitor; // @synthesize routineMonitor=_routineMonitor;
@property(retain, nonatomic) NSMutableArray *recentVisits; // @synthesize recentVisits=_recentVisits;
@property(retain, nonatomic) id <CLClientAuthorizationCacheProtocol> clientAuthorizationCache; // @synthesize clientAuthorizationCache=_clientAuthorizationCache;
@property(nonatomic) struct CLPersistentStore *clientAuthDate; // @synthesize clientAuthDate=_clientAuthDate;
@property(nonatomic) struct CLPersistentStore *clientInterest; // @synthesize clientInterest=_clientInterest;
@property(nonatomic) _Bool leeching; // @synthesize leeching=_leeching;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void)settingsDidChange:(id)arg1;	// IMP=0x00000001003485ac
- (void)onAuthDateStoreTimer;	// IMP=0x0000000100348568
- (void)onInterestStoreTimer;	// IMP=0x0000000100348524
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00000001003482f0
- (void)onVisit:(id)arg1;	// IMP=0x0000000100348180
- (_Bool)clientInterestStoreSetValueForClientKey:(const char *)arg1 parameterKey:(const char *)arg2 value:(int)arg3;	// IMP=0x00000001003480a8
- (_Bool)clientInterestStoreGetValueForClientKey:(const char *)arg1 parameterKey:(const char *)arg2 value:(int *)arg3;	// IMP=0x0000000100347fe8
- (_Bool)interestTypeForClientKey:(const char *)arg1 outType:(int *)arg2;	// IMP=0x0000000100347f88
- (_Bool)interestForClientKey:(const char *)arg1 outInterest:(int *)arg2;	// IMP=0x0000000100347f28
- (void)migrateClientInterestData;	// IMP=0x0000000100347b28
- (void)checkForMonitoring;	// IMP=0x0000000100347560
- (id)authorizationDateForClientWithKey:(id)arg1;	// IMP=0x00000001003472d4
- (void)notifyClientsOfVisit:(id)arg1;	// IMP=0x0000000100346d4c
- (void)disconnectClient:(byref id)arg1;	// IMP=0x0000000100346c98
- (void)simulateVisit:(id)arg1;	// IMP=0x0000000100346ba4
- (void)actOnPendingDeleteForClientKey:(id)arg1;	// IMP=0x0000000100346844
- (void)removeInterestForClientKey:(id)arg1;	// IMP=0x0000000100346778
- (void)stopMonitoringSignificantVisitsForClient:(byref id)arg1;	// IMP=0x00000001003465e4
- (void)startMonitoringSignificantVisitsForClient:(byref id)arg1 type:(int)arg2;	// IMP=0x000000010034625c
- (void)connectClient:(byref id)arg1 withKey:(id)arg2;	// IMP=0x00000001003460a8
- (id)keyForClient:(byref id)arg1;	// IMP=0x0000000100346014
- (void)performBlockWhenArmed:(CDUnknownBlockType)arg1;	// IMP=0x0000000100345f98
- (void)deliverVisit:(id)arg1 toClient:(byref id)arg2;	// IMP=0x0000000100345bb4
- (void)sendVisitsToClient:(byref id)arg1;	// IMP=0x00000001003458a4
- (_Bool)isClientWithKeyInterested:(id)arg1;	// IMP=0x0000000100345760
- (void)removeOldVisits;	// IMP=0x00000001003455f0
- (void)ensureStop;	// IMP=0x0000000100345340
- (void)ensureMonitoringWithType:(int)arg1;	// IMP=0x0000000100344ee4
- (void)flushAll;	// IMP=0x0000000100344eb0
- (void)flushInterest;	// IMP=0x0000000100344dc4
- (void)flushAuthDates;	// IMP=0x0000000100344cd8
- (void)endService;	// IMP=0x0000000100344ae4
- (void)beginService;	// IMP=0x00000001003442b0
- (id)init;	// IMP=0x000000010034426c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
