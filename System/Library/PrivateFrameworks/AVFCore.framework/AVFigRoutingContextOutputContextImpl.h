/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputContextImpl.h>

@protocol AVFigRoutingContextOutputDeviceTranslator, AVFigRoutingContextCommunicationChannelManager, OS_dispatch_queue;
@class AVOutputContext, NSString, AVOutputDevice, NSArray, AVOutputContextCommunicationChannel, AVWeakReference, NSObject, NSDictionary;

@interface AVFigRoutingContextOutputContextImpl : NSObject <AVOutputContextImpl> {

	/*^block*/id _routingContextCreator;
	id<AVFigRoutingContextOutputDeviceTranslator> _deviceTranslator;
	OpaqueFigVolumeControllerStateRef _volumeController;
	/*^block*/id _commChannelManagerCreator;
	OpaqueFigRoutingContextRef _routingContext;
	id<AVFigRoutingContextCommunicationChannelManager> _commChannelManager;
	AVWeakReference* _weakObserver;
	AVOutputContext* _parentContext;
	BOOL _usesRouteConfigUpdatedNotification;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	NSDictionary* _destinationChangesForRouteChangeIDs;

}

@property (nonatomic,readonly) OpaqueFigRoutingContextRef figRoutingContext;                                    //@synthesize routingContext=_routingContext - In the implementation block
@property (__weak) AVOutputContext * parentOutputContext;                                                       //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) NSString * outputContextType; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,copy,readonly) NSString * associatedAudioDeviceID; 
@property (readonly) BOOL supportsMultipleOutputDevices; 
@property (readonly) BOOL supportsMultipleBluetoothOutputDevices; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) BOOL providesControlForAllVolumeFeatures; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)auxiliaryOutputContext;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(id)sharedAudioPresentationOutputContext;
+(id)defaultSharedOutputContextImpl;
+(id)outputContextImplForID:(id)arg1 type:(id)arg2 ;
+(id)routingContextFactory;
+(void)resetOutputDeviceForAllOutputContexts;
+(id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2 ;
+(id)sharedSystemScreenContext;
+(id)iTunesAudioContext;
+(id)platformDependentScreenOrVideoContext;
+(id)sharedSystemAudioContext;
+(OpaqueFigRoutingContextRef)copySystemVideoRoutingContext;
-(NSArray *)outputDevices;
-(BOOL)providesControlForAllVolumeFeatures;
-(NSString *)ID;
-(BOOL)canSetVolume;
-(void)setVolume:(float)arg1 ;
-(void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsMultipleOutputDevices;
-(id)initWithFigRoutingContext:(OpaqueFigRoutingContextRef)arg1 routingContextReplacementBlock:(/*^block*/id)arg2 ;
-(float)volume;
-(void)dealloc;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)_routeConfigUpdatedWithID:(CFStringRef)arg1 reason:(CFStringRef)arg2 initiator:(const CFStringRef)arg3 ;
-(AVOutputDevice *)outputDevice;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(AVOutputContext *)parentOutputContext;
-(NSString *)associatedAudioDeviceID;
-(id)init;
-(void)_canUseForRoutingContextDidChangeForRoutingContextWIthID:(CFStringRef)arg1 ;
-(id)routingContextUUID;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_sendCommand:(CFStringRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFigRoutingContextCreator:(/*^block*/id)arg1 ;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(void)_remoteControlChannelAvailabilityChanged;
-(void)_canSetMasterVolumeDidChangeForRoutingContextWithID:(CFStringRef)arg1 ;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_serverConnectionDied;
-(void)_routeChangeEndedWithID:(id)arg1 reason:(CFStringRef)arg2 ;
-(void)_routeConfigUpdateStartedWithID:(CFStringRef)arg1 ;
-(id)initWithFigRoutingContext:(OpaqueFigRoutingContextRef)arg1 routingContextReplacementBlock:(/*^block*/id)arg2 outputDeviceTranslator:(id)arg3 volumeController:(OpaqueFigVolumeControllerStateRef)arg4 communicationChannelManagerCreator:(/*^block*/id)arg5 ;
-(id)initWithRoutingContextUUID:(id)arg1 type:(id)arg2 ;
-(unsigned long long)hash;
-(const CFDictionaryRef)_createSelectRouteOptionsForSetOutputDeviceOptions:(id)arg1 ;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_masterVolumeDidChangeForRoutingContextWithID:(CFStringRef)arg1 ;
-(void)_currentRouteChanged;
-(NSString *)outputContextType;
-(OpaqueFigRoutingContextRef)figRoutingContext;
-(void)_systemPickerVideoRouteChanged;
-(void)_routeChangeStartedWithID:(id)arg1 ;
-(void)setParentOutputContext:(AVOutputContext *)arg1 ;
-(void)_routeConfigUpdateEndedWithID:(CFStringRef)arg1 reason:(CFStringRef)arg2 ;
-(void)outputContextDidChangeApplicationProcessID:(id)arg1 ;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_groupConfigurationChanged;
@end

