//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPFinderStateXPCProtocol-Protocol.h"

@class MISSING_TYPE;

@interface _TtC12searchpartydP33_A237235B9060AAA443FA0E26E38E988121FinderStateTrampoline : NSObject <SPFinderStateXPCProtocol>
{
    MISSING_TYPE *implementation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001bbd48
- (id)init;	// IMP=0x00000001001bbd64
- (void)setActiveCache:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bbc98
- (void)stateInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bbab0
- (void)fetchFinderState:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bba04
- (void)disableFinderModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bb8c8
- (void)enableFinderModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bb7bc
- (void)start;	// IMP=0x00000001001bb644

@end
