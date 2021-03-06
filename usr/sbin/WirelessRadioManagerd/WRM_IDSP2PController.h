//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface WRM_IDSP2PController : NSObject <IDSServiceDelegate>
{
    _Bool _ServiceInitDone;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSArray *_ConnectedDevices;	// 32 = 0x20
    NSString *_CompanionWifiStatus;	// 40 = 0x28
    NSString *_CompanionBTVersusWiFiRecommendation;	// 48 = 0x30
    NSString *_CompanionInternetConnectionAvailable;	// 56 = 0x38
    NSString *_CompanionBTRssi;	// 64 = 0x40
    NSString *_CompanionWIFIRssi;	// 72 = 0x48
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e964
+ (id)wrm_IDSP2PControllerSingleton;	// IMP=0x000000010002e8d8
@property(retain, nonatomic) NSString *CompanionWIFIRssi; // @synthesize CompanionWIFIRssi=_CompanionWIFIRssi;
@property(retain, nonatomic) NSString *CompanionBTRssi; // @synthesize CompanionBTRssi=_CompanionBTRssi;
@property(retain, nonatomic) NSString *CompanionInternetConnectionAvailable; // @synthesize CompanionInternetConnectionAvailable=_CompanionInternetConnectionAvailable;
@property(retain, nonatomic) NSString *CompanionBTVersusWiFiRecommendation; // @synthesize CompanionBTVersusWiFiRecommendation=_CompanionBTVersusWiFiRecommendation;
@property(retain, nonatomic) NSString *CompanionWifiStatus; // @synthesize CompanionWifiStatus=_CompanionWifiStatus;
@property(nonatomic) _Bool ServiceInitDone; // @synthesize ServiceInitDone=_ServiceInitDone;
@property(retain, nonatomic) NSArray *ConnectedDevices; // @synthesize ConnectedDevices=_ConnectedDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
- (void)InitService;	// IMP=0x0000000100030578
- (unsigned char)IsIDSInitDone;	// IMP=0x000000010003053c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00000001000303b8
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0000000100030290
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010002ff38
- (_Bool)isDevicePaired;	// IMP=0x000000010002fd04
- (_Bool)isRemoteWiFiGood;	// IMP=0x000000010002fc88
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010002f6b8
- (void)WrmSendp2pMessage:(id)arg1 MessageBody:(id)arg2 withOptions:(id)arg3;	// IMP=0x000000010002ede4
- (void)dealloc;	// IMP=0x000000010002ed0c
- (id)init;	// IMP=0x000000010002ea90
- (id)autorelease;	// IMP=0x000000010002ea78
- (oneway void)release;	// IMP=0x000000010002ea64
- (unsigned long long)retainCount;	// IMP=0x000000010002ea08
- (id)retain;	// IMP=0x000000010002e9f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e9a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

