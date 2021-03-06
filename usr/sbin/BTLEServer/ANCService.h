//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ServerService.h"

#import "ANCAlertSourceDelegate-Protocol.h"

@class ANCAlertSource, CBMutableCharacteristic, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ANCService : ServerService <ANCAlertSourceDelegate>
{
    unsigned int _uidGenerator;	// 8 = 0x8
    CBMutableCharacteristic *_controlPointCharacteristic;	// 16 = 0x10
    CBMutableCharacteristic *_notificationSourceCharacteristic;	// 24 = 0x18
    CBMutableCharacteristic *_dataSourceCharacteristic;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableSet *_activeCentrals;	// 48 = 0x30
    NSMutableDictionary *_uidMap;	// 56 = 0x38
    NSMutableDictionary *_alertMap;	// 64 = 0x40
    ANCAlertSource *_alertSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100010d78
@property(retain, nonatomic) ANCAlertSource *alertSource; // @synthesize alertSource=_alertSource;
@property(retain, nonatomic) NSMutableDictionary *alertMap; // @synthesize alertMap=_alertMap;
@property(retain, nonatomic) NSMutableDictionary *uidMap; // @synthesize uidMap=_uidMap;
@property(nonatomic) unsigned int uidGenerator; // @synthesize uidGenerator=_uidGenerator;
@property(retain, nonatomic) NSMutableSet *activeCentrals; // @synthesize activeCentrals=_activeCentrals;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CBMutableCharacteristic *dataSourceCharacteristic; // @synthesize dataSourceCharacteristic=_dataSourceCharacteristic;
@property(retain, nonatomic) CBMutableCharacteristic *notificationSourceCharacteristic; // @synthesize notificationSourceCharacteristic=_notificationSourceCharacteristic;
@property(retain, nonatomic) CBMutableCharacteristic *controlPointCharacteristic; // @synthesize controlPointCharacteristic=_controlPointCharacteristic;
- (id)appAttributeIDToString:(unsigned char)arg1;	// IMP=0x0000000100010be8
- (id)notificationAttributeIDToString:(unsigned char)arg1;	// IMP=0x0000000100010b2c
- (id)eventFlagsToString:(unsigned char)arg1;	// IMP=0x00000001000109e8
- (id)categoryIDToString:(unsigned char)arg1;	// IMP=0x0000000100010928
- (id)eventIDToString:(unsigned char)arg1;	// IMP=0x00000001000108fc
- (id)responseForAppAttributeID:(unsigned char)arg1 appIdentifier:(id)arg2;	// IMP=0x00000001000107f4
- (id)responseForNotificationAttributeID:(unsigned char)arg1 maxLength:(unsigned short)arg2 notification:(id)arg3;	// IMP=0x0000000100010528
- (id)responseForAttributeID:(unsigned char)arg1 maxLength:(unsigned short)arg2 attribute:(id)arg3;	// IMP=0x00000001000103e4
- (id)notificationForAlert:(id)arg1;	// IMP=0x0000000100010364
- (id)notificationForUID:(unsigned int)arg1;	// IMP=0x00000001000102d0
- (void)alertRemoved:(id)arg1;	// IMP=0x0000000100010164
- (void)alertModified:(id)arg1;	// IMP=0x00000001000100b0
- (void)alertAdded:(id)arg1 isPreExisting:(_Bool)arg2;	// IMP=0x000000010000fed4
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUpdateANCSAuthorization:(_Bool)arg3;	// IMP=0x000000010000fc90
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;	// IMP=0x000000010000f9f4
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;	// IMP=0x000000010000f3f0
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;	// IMP=0x000000010000f328
- (void)stopNotifications;	// IMP=0x000000010000f1dc
- (void)startNotifications;	// IMP=0x000000010000f0cc
- (void)updateDataSource:(id)arg1 central:(id)arg2;	// IMP=0x000000010000ef10
- (void)updateNotificationSource:(unsigned char)arg1 notification:(id)arg2 sourceFlags:(unsigned char)arg3 centrals:(id)arg4;	// IMP=0x000000010000ea78
- (void)updateNotificationSource:(unsigned char)arg1 notification:(id)arg2 sourceFlags:(unsigned char)arg3;	// IMP=0x000000010000e990
- (long long)handlePerformNotificationActionCommand:(id)arg1;	// IMP=0x000000010000e7dc
- (long long)handleGetAppAttributesCommand:(id)arg1 responseData:(id *)arg2;	// IMP=0x000000010000e5c8
- (long long)handleGetNotificationAttributesCommand:(id)arg1 responseData:(id *)arg2;	// IMP=0x000000010000e334
- (long long)handleControlPointWrite:(id)arg1 responseData:(id *)arg2;	// IMP=0x000000010000e210
- (void)handleWriteRequests:(id)arg1;	// IMP=0x000000010000df50
- (void)dealloc;	// IMP=0x000000010000df04
- (id)init;	// IMP=0x000000010000db90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

