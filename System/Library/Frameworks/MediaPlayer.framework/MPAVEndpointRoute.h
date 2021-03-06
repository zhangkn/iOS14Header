/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoute.h>

@protocol OS_dispatch_queue;
@class MPAVRouteConnection, NSObject, NSString, MPMRAVEndpointWrapper;

@interface MPAVEndpointRoute : MPAVRoute {

	MPAVRouteConnection* _connection;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSString* _sortName;
	MPMRAVEndpointWrapper* _endpointWrapper;

}

@property (nonatomic,retain) MPAVRouteConnection * connection; 
@property (nonatomic,readonly) void* endpoint; 
@property (nonatomic,retain) MPMRAVEndpointWrapper * endpointWrapper;              //@synthesize endpointWrapper=_endpointWrapper - In the implementation block
@property (nonatomic,readonly) NSString * sortName; 
@property (nonatomic,readonly) BOOL canModifyGroupMembership; 
+(BOOL)supportsSecureCoding;
+(void)getActiveEndpointRouteWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(id)clusterComposition;
-(BOOL)canAccessRemoteAssets;
-(id)routeNames;
-(long long)originalRouteSubtype;
-(long long)routeSubtype;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(void*)endpoint;
-(long long)routeType;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(MPAVRouteConnection *)connection;
-(BOOL)isClusterRoute;
-(NSString *)sortName;
-(BOOL)canFetchMediaDataFromSender;
-(void)dealloc;
-(BOOL)isAppleTVRoute;
-(void)establishGroup;
-(void)setEndpointWrapper:(MPMRAVEndpointWrapper *)arg1 ;
-(MPMRAVEndpointWrapper *)endpointWrapper;
-(void)_endpointDidChange:(id)arg1 ;
-(void)_endpointOutputDevicesDidChange:(id)arg1 ;
-(BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned)arg1 ;
-(unsigned long long)_outputDevicesComposition;
-(id)initWithEndpoint:(void*)arg1 ;
-(id)groupUID;
-(id)routeName;
-(BOOL)isTVRoute;
-(id)routeUID;
-(BOOL)isDeviceSpeakerRoute;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSplitRoute;
-(id)designatedGroupLeaderName;
-(BOOL)isAirPlayingToDevice;
-(id)groupLeaderAirplayIdentifier;
-(BOOL)supportsRemoteControl;
-(long long)numberOfOutputDevices;
-(BOOL)isRoutingToWirelessDevice;
-(BOOL)supportsGrouping;
-(BOOL)isSplitterCapable;
-(BOOL)canModifyGroupMembership;
-(BOOL)isLowLatencyRoute;
-(BOOL)isHomePodRoute;
-(BOOL)isDeviceRoute;
-(id)description;
-(BOOL)isStereoPair;
-(void)setConnection:(MPAVRouteConnection *)arg1 ;
@end

