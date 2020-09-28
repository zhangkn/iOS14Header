//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLFitnessMachineNotifierProtocol-Protocol.h"

@class NSString;

@interface CLFitnessMachineNotifierAdapter : CLNotifierServiceAdapter <CLFitnessMachineNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001009618d0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001009618ac
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100961828
+ (_Bool)isSupported;	// IMP=0x0000000100961c4c
- (void)feedFitnessMachineData:(id)arg1;	// IMP=0x0000000100961b6c
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100961b30
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100961aec
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100961ab8
- (struct CLFitnessMachineNotifier *)adaptee;	// IMP=0x0000000100961a7c
- (void)endService;	// IMP=0x0000000100961a58
- (void)beginService;	// IMP=0x000000010096198c
- (id)init;	// IMP=0x0000000100961948

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
