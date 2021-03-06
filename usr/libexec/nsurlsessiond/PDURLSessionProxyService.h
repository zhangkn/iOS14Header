//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface PDURLSessionProxyService : NSObject <IDSServiceDelegate>
{
    IDSService *_idsService;	// 8 = 0x8
    NSMutableDictionary *_outstandingReplies;	// 16 = 0x10
    NSMutableDictionary *_outstandingMessages;	// 24 = 0x18
    NSString *_startupMessageIdentifier;	// 32 = 0x20
    NSMutableDictionary *_outgoingSequenceNumbersByPriority;	// 40 = 0x28
    NSMutableDictionary *_incomingSequenceNumbersByPriority;	// 48 = 0x30
    NSMutableSet *_receivedLaunchUUIDs;	// 56 = 0x38
    NSString *_currentRemoteLaunchUUID;	// 64 = 0x40
    _Bool _prefersInfraWiFi;	// 72 = 0x48
    _Bool _startupMessageFailed;	// 73 = 0x49
    _Bool _haveReceivedLegacyStartupMessage;	// 74 = 0x4a
    _Bool _haveReceivedMessage;	// 75 = 0x4b
    _Bool _connected;	// 76 = 0x4c
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSString *_launchUUID;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010000a90c
@property(retain) NSString *launchUUID; // @synthesize launchUUID=_launchUUID;
@property(getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a728
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x000000010000a5e4
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000010000a5d8
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010000a5cc
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000a35c
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100009980
- (void)_onqueue_messageWithIdentifier:(id)arg1 didSendWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000097ac
- (void)_onqueue_handleReceivedReply:(id)arg1 forIdentifier:(id)arg2 ofType:(unsigned short)arg3 withError:(id)arg4;	// IMP=0x0000000100009614
- (void)_onqueue_handleFailedMessageSend:(id)arg1 ofType:(unsigned short)arg2;	// IMP=0x0000000100009564
- (void)_onqueue_handleReceivedMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000949c
- (void)sendProtobufMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000093c8
- (void)_onqueue_sendMessage:(id)arg1 ofType:(unsigned short)arg2 responseIdentifier:(id)arg3 forSourceApplication:(id)arg4 withUrgency:(_Bool)arg5 withIDSMessageTimeout:(long long)arg6 withReply:(CDUnknownBlockType)arg7;	// IMP=0x0000000100008850
- (_Bool)verifyAndUpdateIncomingSequenceNumber:(unsigned long long)arg1 forPriority:(long long)arg2;	// IMP=0x0000000100008658
- (unsigned long long)bumpAndReturnOutgoingSequenceNumberForPriority:(long long)arg1;	// IMP=0x0000000100008510
- (id)_onqueue_loggableDescriptionForMessage:(id)arg1;	// IMP=0x0000000100008508
- (long long)_onqueue_IDSTimoutForMessage:(id)arg1;	// IMP=0x0000000100008500
- (id)_onqueue_sourceApplicationForMessage:(id)arg1;	// IMP=0x00000001000084f8
- (long long)_onqueue_priorityForMessage:(id)arg1 ofType:(unsigned short)arg2 isReply:(_Bool)arg3;	// IMP=0x00000001000084f0
- (void)_onqueue_setPrefersInfraWiFi:(_Bool)arg1;	// IMP=0x0000000100008364
- (void)_onqueue_receivedNewLaunchUUID:(id)arg1 isStartupMessage:(_Bool)arg2;	// IMP=0x0000000100008360
- (void)_onqueue_remoteDeviceStartedUp;	// IMP=0x0000000100008350
- (void)_onqueue_devicesDisconnected;	// IMP=0x000000010000834c
- (void)_onqueue_devicesConnected;	// IMP=0x0000000100008348
- (void)_onqueue_updateDeviceState;	// IMP=0x0000000100007fe4
- (id)defaultPairedDevice;	// IMP=0x0000000100007e7c
- (void)withWorkQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007e70
- (void)_onqueue_sendStartupMessage;	// IMP=0x0000000100007a40
- (void)newDeviceBecameActive:(id)arg1;	// IMP=0x0000000100007a3c
- (void)devicesDidUnpair:(id)arg1;	// IMP=0x0000000100007908
- (void)start;	// IMP=0x00000001000078b0
- (id)init;	// IMP=0x00000001000076fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

