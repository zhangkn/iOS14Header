//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSSet, NSTimer;
@protocol OS_dispatch_queue;

@interface FMFXPCSessionManager : NSObject
{
    NSMapTable *_internalClientSessions;	// 8 = 0x8
    NSTimer *_refreshTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010003d71c
- (void).cxx_destruct;	// IMP=0x000000010003fbd0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSMapTable *internalClientSessions; // @synthesize internalClientSessions=_internalClientSessions;
- (void)networkReachabilityUpdated:(id)arg1;	// IMP=0x000000010003f9e4
- (void)stopListeningForModelLoadNotifications;	// IMP=0x000000010003f984
- (void)startListeningForModelChangeNotifications;	// IMP=0x000000010003f91c
- (void)stopListeningForNotifications;	// IMP=0x000000010003f910
- (void)startListeningForNotifications;	// IMP=0x000000010003f904
- (void)_modelDataDidLoad;	// IMP=0x000000010003f778
- (_Bool)_isApplicationForClientSessionInForeground:(id)arg1;	// IMP=0x000000010003f688
- (void)refreshLocations;	// IMP=0x000000010003ec28
- (id)handlesToLocate;	// IMP=0x000000010003e9a8
- (void)stopTimer;	// IMP=0x000000010003e8cc
- (void)scheduleRefreshBefore:(double)arg1;	// IMP=0x000000010003e6ac
- (void)refreshLocationsForSession:(id)arg1;	// IMP=0x000000010003e400
- (void)resetRefreshTimer;	// IMP=0x000000010003e3ec
- (void)updateTrackingTimestampForHandle:(id)arg1 timestamp:(id)arg2;	// IMP=0x000000010003e190
@property(readonly, nonatomic) NSSet *clientSessions;
- (void)removeClientSession:(id)arg1;	// IMP=0x000000010003dd5c
- (void)addClientSession:(id)arg1;	// IMP=0x000000010003da60
- (void)invalidateMaxCallbackTimer;	// IMP=0x000000010003d9e0
- (void)dealloc;	// IMP=0x000000010003d958
- (id)init;	// IMP=0x000000010003d894

@end

