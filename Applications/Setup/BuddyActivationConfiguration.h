//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CoreTelephonyClientDataDelegate-Protocol.h"

@class CoreTelephonyClient, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface BuddyActivationConfiguration : NSObject <CoreTelephonyClientDataDelegate>
{
    _Bool _activationStateChanged;	// 8 = 0x8
    _Bool _supportsCellularActivation;	// 9 = 0x9
    NSMutableSet *_delegates;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    CoreTelephonyClient *_telephonyClient;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_telephonyQueue;	// 40 = 0x28
}

+ (id)currentConfiguration;	// IMP=0x00000001000fc9f0
- (void).cxx_destruct;	// IMP=0x00000001000fd3b0
@property(nonatomic) _Bool supportsCellularActivation; // @synthesize supportsCellularActivation=_supportsCellularActivation;
@property _Bool activationStateChanged; // @synthesize activationStateChanged=_activationStateChanged;
@property(retain) NSObject<OS_dispatch_queue> *telephonyQueue; // @synthesize telephonyQueue=_telephonyQueue;
@property(retain) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) NSMutableSet *delegates; // @synthesize delegates=_delegates;
- (void)connectionAvailability:(id)arg1 availableConnections:(id)arg2;	// IMP=0x00000001000fd30c
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;	// IMP=0x00000001000fd2d4
@property(readonly, getter=isBricked) _Bool bricked;
- (void)notifyDelegatesConfigurationChanged;	// IMP=0x00000001000fcde8
- (void)removeDelegate:(id)arg1;	// IMP=0x00000001000fcce8
- (void)addDelegate:(id)arg1;	// IMP=0x00000001000fcbe8
- (id)init;	// IMP=0x00000001000fca5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

