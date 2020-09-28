//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "CKKSKeySetProviderOperationProtocol-Protocol.h"

@class CKKSCurrentKeySet, NSObject, NSOperation, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKKSProvideKeySetOperation : CKKSGroupOperation <CKKSKeySetProviderOperationProtocol>
{
    NSString *_zoneName;	// 16 = 0x10
    CKKSCurrentKeySet *_keyset;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSOperation *_startDependency;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010009b2b4
@property(retain) NSOperation *startDependency; // @synthesize startDependency=_startDependency;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) CKKSCurrentKeySet *keyset; // @synthesize keyset=_keyset;
@property(retain) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)provideKeySet:(id)arg1;	// IMP=0x000000010009b194
- (id)initWithZoneName:(id)arg1;	// IMP=0x000000010009b070

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
