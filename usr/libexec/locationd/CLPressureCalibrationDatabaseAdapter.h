//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLPressureCalibrationDatabaseProtocol-Protocol.h"

@class NSString;

@interface CLPressureCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLPressureCalibrationDatabaseProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100693e7c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100693e58
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100693dd4
+ (_Bool)isSupported;	// IMP=0x0000000100694120
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006940e4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001006940a0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010069406c
- (struct CLPressureCalibrationDatabase *)adaptee;	// IMP=0x0000000100694030
- (void)endService;	// IMP=0x000000010069400c
- (void)beginService;	// IMP=0x0000000100693f38
- (id)init;	// IMP=0x0000000100693ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
