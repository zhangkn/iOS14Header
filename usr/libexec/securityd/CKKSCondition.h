//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CKKSCondition : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 8 = 0x8
    CKKSCondition *_chain;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100184ba0
@property(retain) CKKSCondition *chain; // @synthesize chain=_chain;
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (long long)wait:(unsigned long long)arg1;	// IMP=0x0000000100184ae4
- (void)fulfill;	// IMP=0x0000000100184a64
- (id)initToChain:(id)arg1;	// IMP=0x00000001001849d4
- (id)init;	// IMP=0x00000001001849c4

@end
