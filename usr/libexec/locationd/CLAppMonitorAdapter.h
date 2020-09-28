//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLAppMonitorProtocol-Protocol.h"

@class NSString;

@interface CLAppMonitorAdapter : CLNotifierServiceAdapter <CLAppMonitorProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001009af70c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001009af6e8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001009af664
- (void)checkApplications:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001009afd68
- (int)syncgetAppType:(id)arg1;	// IMP=0x00000001009afbac
- (void)isApplicationInstalledIncludingPairedDevices:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001009afafc
- (_Bool)syncgetIsApplicationInstalledLocally:(struct __CFString *)arg1;	// IMP=0x00000001009afa0c
- (_Bool)syncgetForegroundApp:(struct NotificationData *)arg1;	// IMP=0x00000001009af9a8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001009af96c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001009af928
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001009af8f4
- (struct CLAppMonitor *)adaptee;	// IMP=0x00000001009af8b8
- (void)endService;	// IMP=0x00000001009af894
- (void)beginService;	// IMP=0x00000001009af7c8
- (id)init;	// IMP=0x00000001009af784

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
