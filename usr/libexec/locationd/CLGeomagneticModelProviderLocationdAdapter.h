//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLGeomagneticModelProviderProtocol-Protocol.h"

@class NSString;

@interface CLGeomagneticModelProviderLocationdAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100744a64
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100744a40
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001007449bc
- (void)fetchGeomagneticModelData:(CDUnknownBlockType)arg1;	// IMP=0x0000000100744c8c
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100744c50
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100744c0c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100744bd8
- (struct CLGeomagneticModelProvider *)adaptee;	// IMP=0x0000000100744b9c
- (void)endService;	// IMP=0x0000000100744b78
- (void)beginService;	// IMP=0x0000000100744b20
- (id)init;	// IMP=0x0000000100744adc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

