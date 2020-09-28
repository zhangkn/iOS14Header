//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDF200CommunicatorDelegate-Protocol.h"

@class MSDF200EACommunicator, MSDF200EventsManager, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface MSDF200Manager : NSObject <MSDF200CommunicatorDelegate>
{
    _Bool _heartBeatAcked;	// 8 = 0x8
    _Bool _alarmSoundingAcked;	// 9 = 0x9
    NSObject<OS_xpc_object> *_eventObserver;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_controlQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_heartbeatTimer;	// 32 = 0x20
    MSDF200EACommunicator *_communicator;	// 40 = 0x28
    MSDF200EventsManager *_eventsManager;	// 48 = 0x30
    unsigned long long _ctrlState;	// 56 = 0x38
    NSMutableArray *_messagesAwaitingReply;	// 64 = 0x40
    unsigned long long _heartBeatLostCount;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x000000010005579c
- (void).cxx_destruct;	// IMP=0x000000010005bd6c
@property _Bool alarmSoundingAcked; // @synthesize alarmSoundingAcked=_alarmSoundingAcked;
@property unsigned long long heartBeatLostCount; // @synthesize heartBeatLostCount=_heartBeatLostCount;
@property _Bool heartBeatAcked; // @synthesize heartBeatAcked=_heartBeatAcked;
@property(retain, nonatomic) NSMutableArray *messagesAwaitingReply; // @synthesize messagesAwaitingReply=_messagesAwaitingReply;
@property(nonatomic) unsigned long long ctrlState; // @synthesize ctrlState=_ctrlState;
@property(retain, nonatomic) MSDF200EventsManager *eventsManager; // @synthesize eventsManager=_eventsManager;
@property(retain, nonatomic) MSDF200EACommunicator *communicator; // @synthesize communicator=_communicator;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *controlQueue; // @synthesize controlQueue=_controlQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *eventObserver; // @synthesize eventObserver=_eventObserver;
- (void)didFinishReadRequestWithMessages:(id)arg1;	// IMP=0x000000010005ba84
- (void)didFinishWriteRequestForMessage:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000010005b884
- (void)didConnectionStatusChange:(unsigned long long)arg1;	// IMP=0x000000010005b554
- (void)informObserverOfStatusInfoChange;	// IMP=0x000000010005b330
- (void)informObserverOfEvent:(id)arg1;	// IMP=0x000000010005b19c
- (void)informHubOfEvent:(id)arg1;	// IMP=0x000000010005b154
- (id)prepareStatusInfoDictionary;	// IMP=0x000000010005afd4
- (void)requestDemoLoopAppToSilenceAlarmWithReason:(id)arg1;	// IMP=0x000000010005ac8c
- (void)launchDemoLoopAppInAlarmingMode;	// IMP=0x000000010005a8f0
- (void)requestDemoLoopAppToSoundAlarmWithReason:(id)arg1;	// IMP=0x000000010005a604
- (id)loadStorePasscodeFromHubSuppliedettings;	// IMP=0x000000010005a52c
- (void)handleMessageReceivedFromF200:(id)arg1;	// IMP=0x00000001000595d8
- (void)handleMessageSentToF200:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000593c8
- (void)replyMessageToF200ForCommand:(unsigned char)arg1 withResult:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100059134
- (void)replyToOriginatingXpcRequester:(id)arg1 hasResult:(_Bool)arg2 resultData:(id)arg3 error:(id)arg4;	// IMP=0x0000000100058e98
- (unsigned long long)getCtrlState;	// IMP=0x0000000100058ba4
- (void)handleHearBeatTimerTicking;	// IMP=0x0000000100058a68
- (void)stopSendingPeriodicHeartBeatCommand;	// IMP=0x0000000100058978
- (void)startSendingPeriodicHeartBeatCommand;	// IMP=0x0000000100058700
- (void)discardAllMessagesAwaitingReply;	// IMP=0x000000010005851c
- (void)requestCommunicatorToSendMessage:(id)arg1;	// IMP=0x0000000100058348
- (void)requestCommunicatorToSendMessageInQueue:(id)arg1;	// IMP=0x0000000100058214
- (_Bool)performAdmissionCheckBeforeSendingMessage:(id)arg1;	// IMP=0x0000000100057ed8
- (_Bool)performAdmissionCheckForXPCRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100057a40
- (_Bool)shouldSuspendStorePasscode;	// IMP=0x0000000100057854
- (id)extractNSDataFromXPCDictionary:(id)arg1 forKey:(const char *)arg2;	// IMP=0x00000001000577bc
- (void)prepareAndSendArmCommand;	// IMP=0x0000000100057758
- (void)prepareAndSendHeartBeatCommand:(_Bool)arg1;	// IMP=0x000000010005767c
- (void)prepareAndSendHandshakeCommand;	// IMP=0x00000001000574b0
- (void)processXPCRequestForGenericCommand:(id)arg1;	// IMP=0x0000000100057380
- (void)processXPCRequestForDisarmCommand:(id)arg1;	// IMP=0x00000001000571f8
- (void)processXPCRequestForArmCommand:(id)arg1;	// IMP=0x0000000100057070
- (void)processXPCRequestForConfigCommand:(id)arg1;	// IMP=0x0000000100056f40
- (void)processXPCRequestForQueryCommand:(id)arg1;	// IMP=0x0000000100056e10
- (void)processXPCRequestForEchoCommand:(id)arg1;	// IMP=0x0000000100056c7c
- (void)processXPCRequestForFetchEvents:(id)arg1;	// IMP=0x00000001000565b0
- (void)processXPCRequestForAckAlarmSounding;	// IMP=0x0000000100056378
- (void)processXPCRequestForStatusInfo:(id)arg1;	// IMP=0x0000000100056178
- (void)prepareForRebootIfNeeded;	// IMP=0x0000000100055e20
- (void)deactivate;	// IMP=0x0000000100055c94
- (void)activate;	// IMP=0x0000000100055a58
- (id)init;	// IMP=0x0000000100055808

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
