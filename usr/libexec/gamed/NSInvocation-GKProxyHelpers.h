//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;	// IMP=0x0000000100120038
- (void)_gkInvokeOnceWithTarget:(id)arg1;	// IMP=0x000000010011ff44
- (void)_gkInvokeOnce;	// IMP=0x000000010011ff10
- (void)_gkClearTarget;	// IMP=0x000000010011fed0
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011fe6c
- (void)__gkPrepareForFakeCallbackWithNoData:(_Bool)arg1 orError:(id)arg2;	// IMP=0x000000010011fc00
- (void)_gkPrepareForCallWithError:(id)arg1;	// IMP=0x000000010011fb18
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;	// IMP=0x000000010011fa60
- (id)_gkReplyHandlerInvocation;	// IMP=0x000000010011f9bc
- (void)_gkClearCopiedArguments;	// IMP=0x000000010011f800
- (void)_gkCopyArguments;	// IMP=0x000000010011f588
- (void)_gkPrintBlockSignature;	// IMP=0x000000010011f490
- (_Bool)_gkHasReplyBlock;	// IMP=0x00000001001200a4
@end

