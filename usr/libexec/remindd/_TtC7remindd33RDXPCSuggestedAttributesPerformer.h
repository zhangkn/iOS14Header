//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "REMXPCSuggestedAttributesPerformer-Protocol.h"

@class MISSING_TYPE;

@interface _TtC7remindd33RDXPCSuggestedAttributesPerformer : NSObject <REMXPCSuggestedAttributesPerformer>
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *configurationSource;	// 16 = 0x10
    MISSING_TYPE *cancellables;	// 80 = 0x50
    MISSING_TYPE *storePerformer;	// 88 = 0x58
    MISSING_TYPE *cachedMLModels;	// 96 = 0x60
    MISSING_TYPE *cachedContacts;	// 192 = 0xc0
    MISSING_TYPE *contactStore;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000001000d81a8
- (id)init;	// IMP=0x00000001000d9920
- (void)performSwiftInvocation:(id)arg1 withParametersData:(id)arg2 storages:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d8560
- (void)preWarmModels;	// IMP=0x00000001000d8534
- (void)dealloc;	// IMP=0x00000001000d80d0

@end

