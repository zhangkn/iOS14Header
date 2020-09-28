//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLCarrierSettingsProtocol-Protocol.h"

@class NSString;

@interface CLCarrierSettingsAdapter : CLNotifierServiceAdapter <CLCarrierSettingsProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010034d9d0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010034d9ac
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010034d928
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010034dc38
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010034dbf4
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010034dbc0
- (struct CLCarrierSettings *)adaptee;	// IMP=0x000000010034db84
- (void)endService;	// IMP=0x000000010034db60
- (void)beginService;	// IMP=0x000000010034da8c
- (id)init;	// IMP=0x000000010034da48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
