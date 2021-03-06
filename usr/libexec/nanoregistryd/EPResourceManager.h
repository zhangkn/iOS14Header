//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPResourceManagerProtocol-Protocol.h"
#import "EPResourceManagerResourceDelegate-Protocol.h"

@class NSError, NSPointerArray, NSString;
@protocol OS_dispatch_queue;

@interface EPResourceManager : NSObject <EPResourceManagerResourceDelegate, EPResourceManagerProtocol>
{
    EPResourceManager *_me;	// 8 = 0x8
    NSPointerArray *_resources;	// 16 = 0x10
    _Bool _needsResource;	// 24 = 0x18
    _Bool _invalidated;	// 25 = 0x19
    unsigned long long _availability;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (id)stringForResourceAvailability:(unsigned long long)arg1;	// IMP=0x00000001000cd11c
+ (Class)resourceClass;	// IMP=0x00000001000cd110
- (void).cxx_destruct;	// IMP=0x00000001000cdc44
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long availability; // @synthesize availability=_availability;
@property(nonatomic) _Bool needsResource; // @synthesize needsResource=_needsResource;
- (void)destroyResource;	// IMP=0x00000001000cdb04
- (void)createResource;	// IMP=0x00000001000cda00
- (void)invalidate;	// IMP=0x00000001000cd8cc
- (void)enumerateResourcesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cd75c
- (void)updateResourceAvailability;	// IMP=0x00000001000cd6e8
- (void)setAvailability:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x00000001000cd5f8
- (void)removeResource:(void *)arg1 async:(_Bool)arg2;	// IMP=0x00000001000cd438
- (void)updateNeedsResource;	// IMP=0x00000001000cd3d8
@property(readonly, nonatomic) long long referenceCounter;
- (void)trackResource:(id)arg1;	// IMP=0x00000001000cd1e4
- (void)resourceWasRemoved;	// IMP=0x00000001000cd1e0
- (void)resourceWasAdded:(id)arg1;	// IMP=0x00000001000cd1dc
- (id)newResourceWithDelegate:(id)arg1;	// IMP=0x00000001000cd148
- (void)dealloc;	// IMP=0x00000001000cd0dc
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000cd038

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

