//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSResultOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CKKSLockStateTracker, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface EscrowRequestInformCloudServicesOperation : CKKSResultOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_nextState;	// 8 = 0x8
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    CKKSLockStateTracker *_lockStateTracker;	// 24 = 0x18
}

+ (id)triggerCloudServicesPasscodeRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100192fc4
- (void).cxx_destruct;	// IMP=0x0000000100192f70
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)main;	// IMP=0x000000010019274c
- (id)initWithIntendedState:(id)arg1 errorState:(id)arg2 lockStateTracker:(id)arg3;	// IMP=0x0000000100192664

@end

