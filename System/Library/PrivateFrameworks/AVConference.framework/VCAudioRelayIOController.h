/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOControllerControl.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VCAudioRelay, VCAudioRelayIOControllerSettings, NSString;

@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl> {

	unsigned _relayType;
	unsigned _relayIOType;
	unsigned _state;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _allClients;
	NSMutableArray* _startingIOClients;
	VCAudioRelay* _relay;
	VCAudioIOControllerIOState* _sinkData;
	VCAudioIOControllerIOState* _sourceData;
	VCAudioRelayIOControllerSettings* _currentSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeStateStrings;
+(id)sharedInstanceRemoteFacing;
+(id)sharedInstanceClientFacing;
+(id)sharedInstanceSafeViewRemoteFacing;
+(id)sharedInstanceSafeViewClientFacing;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(VCAudioIOControllerIOState*)sinkIO;
-(void)resetAudioTimestamps;
-(void)dealloc;
-(void)stopClient:(id)arg1 ;
-(void)flushEventQueue:(opaqueCMSimpleQueueRef)arg1 ;
-(VCAudioIOControllerIOState*)sourceIO;
-(void)registerClientIO:(VCAudioIOControllerClientIO*)arg1 controllerIO:(VCAudioIOControllerIOState*)arg2 ;
-(BOOL)addClient:(id)arg1 ;
-(void)startClient:(id)arg1 ;
-(void)unregisterClientIO:(VCAudioIOControllerClientIO*)arg1 controllerIO:(VCAudioIOControllerIOState*)arg2 ;
-(BOOL)removeClient:(id)arg1 ;
-(void)_cleanupDeadClients;
-(void)removeAllClientsForIO:(VCAudioIOControllerIOState*)arg1 ;
-(void)updateClient:(id)arg1 ;
-(id)initWithRelayType:(unsigned)arg1 relayIOType:(unsigned)arg2 ;
-(void)loadRelay;
-(void)addStartingClient:(id)arg1 controllerSettings:(id)arg2 ;
-(BOOL)updateStateWithClient:(id)arg1 ;
-(id)newRelayIOWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)startRelayIO:(id)arg1 ;
-(BOOL)handleTransitionPrepareToStarting;
-(void)unloadRelay;
-(id)newControllerSettingsWithNewClient:(id)arg1 ;
-(BOOL)stateIdleWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned*)arg3 ;
-(BOOL)statePrepareWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned*)arg3 ;
-(BOOL)stateStartingWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned*)arg3 ;
-(BOOL)stateRunningWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned*)arg3 ;
-(void)processEventQueue:(AudioEventQueue_tRef)arg1 clientList:(id)arg2 ;
@end
