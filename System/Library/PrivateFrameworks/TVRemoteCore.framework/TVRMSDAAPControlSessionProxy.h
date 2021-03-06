/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:44 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRMSSessionProxy.h>
#import <TVRemoteCore/TVRMSDAAPControlSession.h>

@protocol TVRMSDAAPControlSessionDelegate;
@class TVRMSIDSClient, TVRMSNowPlayingInfo, TVRMSService, NSString;

@interface TVRMSDAAPControlSessionProxy : TVRMSSessionProxy <TVRMSDAAPControlSession> {

	TVRMSIDSClient* _idsClient;
	TVRMSNowPlayingInfo* _nowPlayingInfo;
	id<TVRMSDAAPControlSessionDelegate> _delegate;
	TVRMSService* _service;

}

@property (assign,nonatomic,__weak) id<TVRMSDAAPControlSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TVRMSService * service;                                         //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)logout;
-(id)init;
-(void)setDelegate:(id<TVRMSDAAPControlSessionDelegate>)arg1 ;
-(TVRMSService *)service;
-(id<TVRMSDAAPControlSessionDelegate>)delegate;
-(void)_handleSessionDidEndNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(void)beginObservingNowPlaying;
-(void)endObservingNowPlaying;
-(void)sendPlaybackCommand:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pickAudioRoute:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToPlaybackTime:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 ;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 ;
-(void)sendNavigationCommand:(long long)arg1 ;
-(void)_handleNowPlayingInfoDidUpdateNotification:(id)arg1 ;
-(void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)arg1 ;
-(void)_handleAudioRoutesDidUpdateNotification:(id)arg1 ;
-(void)_handleVolumeDidUpdateNotification:(id)arg1 ;
-(void)_notifyDelegateForArtworkChange;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendKeyboardReturnCommand;
-(void)setKeyboardText:(id)arg1 ;
-(void)clearKeyboardText;
@end

