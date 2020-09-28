/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CHHapticServerInterface.h>

@class AVHapticServer, NSXPCConnection, AVServerWrapper, NSString;

@interface AVHapticServerInstance : NSObject <NSXPCListenerDelegate, CHHapticServerInterface> {

	AVHapticServer* _master;
	NSXPCConnection* _connection;
	unsigned long long _clientID;
	shared_ptr<HapticSession>* _hapticSession;
	shared_ptr<opaqueCMSession>* _clientSession;
	AVServerWrapper* _listenerWrapper;
	BOOL _clientSuspended;
	BOOL _wasPrewarmedAndSuspended;
	BOOL _wasRunningAndSuspended;
	BOOL _clientInterrupted;
	BOOL _runningInBackground;
	BOOL _prewarmIncludesAudio;
	BOOL _runIncludesAudio;

}

@property (readonly) AVHapticServer * master;                       //@synthesize master=_master - In the implementation block
@property (readonly) unsigned long long clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (assign) BOOL clientSuspended;                            //@synthesize clientSuspended=_clientSuspended - In the implementation block
@property (assign) BOOL wasPrewarmedAndSuspended;                   //@synthesize wasPrewarmedAndSuspended=_wasPrewarmedAndSuspended - In the implementation block
@property (assign) BOOL clientInterrupted;                          //@synthesize clientInterrupted=_clientInterrupted - In the implementation block
@property (assign) BOOL wasRunningAndSuspended;                     //@synthesize wasRunningAndSuspended=_wasRunningAndSuspended - In the implementation block
@property (assign) BOOL runningInBackground;                        //@synthesize runningInBackground=_runningInBackground - In the implementation block
@property (assign) BOOL prewarmIncludesAudio;                       //@synthesize prewarmIncludesAudio=_prewarmIncludesAudio - In the implementation block
@property (assign) BOOL runIncludesAudio;                           //@synthesize runIncludesAudio=_runIncludesAudio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)clientID;
-(AVHapticServer *)master;
-(void)stopPrewarm;
-(void)dealloc;
-(void)prewarm:(/*^block*/id)arg1 ;
-(void)stopRunning;
-(void)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)startRunning:(/*^block*/id)arg1 ;
-(void)stopRunning:(/*^block*/id)arg1 ;
-(id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)removeChannel:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestChannels:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)releaseChannels;
-(void)releaseClientResources;
-(void)setPlayerBehavior:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)configureWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)allocateClientResources:(/*^block*/id)arg1 ;
-(void)queryCapabilities:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getHapticLatency:(/*^block*/id)arg1 ;
-(void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)loadHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)loadHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)loadVibePattern:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prepareHapticSequence:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)detachSequence:(unsigned long long)arg1 ;
-(void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)clientSuspended;
-(void)notifyClientOnStopWithReason:(long long)arg1 error:(id)arg2 ;
-(void)handleClientRouteChange:(id)arg1 ;
-(void)handleClientApplicationStateChange:(id)arg1 ;
-(void)muteClientForRingerSwitch:(BOOL)arg1 ;
-(void)fadeClientForSessionInterruption:(BOOL)arg1 fadeTime:(float)arg2 fadeLevel:(float)arg3 stopAfterFade:(BOOL)arg4 ;
-(void)unmuteClientAfterSessionInterruption:(float)arg1 ;
-(void)handleClientSessionInterruptionCommand:(unsigned)arg1 dictionary:(id)arg2 ;
-(BOOL)runIncludesAudio;
-(id)initWithMaster:(id)arg1 id:(unsigned long long)arg2 connection:(id)arg3 outError:(id*)arg4 ;
-(void)handleConnectionError;
-(BOOL)setupAudioSessionFromID:(unsigned)arg1 isShared:(BOOL)arg2 error:(id*)arg3 ;
-(void)setClientSuspended:(BOOL)arg1 ;
-(BOOL)wasPrewarmedAndSuspended;
-(void)setWasPrewarmedAndSuspended:(BOOL)arg1 ;
-(BOOL)clientInterrupted;
-(void)setClientInterrupted:(BOOL)arg1 ;
-(BOOL)runningInBackground;
-(void)setRunningInBackground:(BOOL)arg1 ;
-(BOOL)prewarmIncludesAudio;
-(void)setPrewarmIncludesAudio:(BOOL)arg1 ;
-(void)setRunIncludesAudio:(BOOL)arg1 ;
-(BOOL)wasRunningAndSuspended;
-(void)setWasRunningAndSuspended:(BOOL)arg1 ;
@end
