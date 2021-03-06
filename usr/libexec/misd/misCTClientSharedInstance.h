//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;
@protocol CoreTelephonyClientDataDelegate;

@interface misCTClientSharedInstance : NSObject
{
    CoreTelephonyClient *_ctClient;	// 8 = 0x8
    id <CoreTelephonyClientDataDelegate> _ctClientDataDelegate;	// 16 = 0x10
    CDUnknownFunctionPointerType _eventCallback;	// 24 = 0x18
    void *_eventCallbackArg;	// 32 = 0x20
    void *_CTAssertion;	// 40 = 0x28
    struct __CTServerConnection *_ctServerConnection;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000100019a64
- (void)handleCTNotification:(struct __CFString *)arg1 notificationInfo:(struct __CFDictionary *)arg2;	// IMP=0x000000010001a698
- (void)processCTConnectionStateChangeNotification:(id)arg1 connection:(int)arg2 connectionStatus:(id)arg3 ctInterfaceConnStatus:(struct mis_ctinterface_ct_conn_status *)arg4;	// IMP=0x000000010001a61c
- (void)processCTTetheringStatusChangeNotification:(id)arg1;	// IMP=0x000000010001a588
- (int)isDataPlanEnabled:(_Bool *)arg1;	// IMP=0x000000010001a518
- (int)getTetheringInterfaceName:(char *)arg1;	// IMP=0x000000010001a48c
- (int)getTetheringStatus:(struct mis_ctinterface_tethering_status *)arg1;	// IMP=0x000000010001a31c
- (void)convertTetheringStatus:(struct mis_ctinterface_tethering_status *)arg1 CTStatus:(id)arg2;	// IMP=0x000000010001a1c4
- (void)convertConnectionStatus:(id)arg1 ctInterfaceConnStatus:(struct mis_ctinterface_ct_conn_status *)arg2;	// IMP=0x000000010001a044
- (int)activateTethering:(_Bool)arg1;	// IMP=0x0000000100019e64
- (_Bool)registerCellularDataStatusNotification:(_Bool)arg1 callback:(CDUnknownFunctionPointerType)arg2 callbackArg:(void *)arg3;	// IMP=0x0000000100019da8
@property(readonly, nonatomic) struct __CTServerConnection *ctServerConnection; // @synthesize ctServerConnection=_ctServerConnection;
- (void)_setupCTServerConnection;	// IMP=0x0000000100019bf4
- (void)dealloc;	// IMP=0x0000000100019b70
- (id)init;	// IMP=0x0000000100019b14

@end

