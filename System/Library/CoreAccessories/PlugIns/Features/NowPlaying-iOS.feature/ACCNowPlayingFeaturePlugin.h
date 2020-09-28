/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AccessoryNowPlayingClientProtocol.h>
#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class AccessoryNowPlayingClient, NSObject, ACCSettingsState, NSMutableDictionary, NSData, ACCMemUsageStat, MPMusicPlayerController, NSString;

@interface ACCNowPlayingFeaturePlugin : NSObject <AccessoryNowPlayingClientProtocol, ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	unsigned _nowPlayingInfoDebounceTimerRunningMask;
	AccessoryNowPlayingClient* _nowPlayingClient;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_source> _nowPlayingInfoDebounceTimer;
	ACCSettingsState* _nowPlayingInfoDebounceTimerValue;
	NSMutableDictionary* _cachedMediaItemAttributes;
	NSData* _cachedMediaItemArtworkHash;
	NSMutableDictionary* _cachedPlaybackAttributes;
	NSMutableDictionary* _pbqUpdateAccessoryList;
	ACCSettingsState* _maxPlaybackQueueInfoCount;
	ACCSettingsState* _playbackQueueInfoTimeoutMs;
	ACCSettingsState* _playbackQueueInfoSendPartialOnTimeout;
	ACCSettingsState* _measureMemoryUsage;
	ACCMemUsageStat* _memUse;
	NSObject*<OS_dispatch_queue> _nowPlayingInfoPBQueueListQ;
	MPMusicPlayerController* _mpMusicPlayerControllerHandler;
	NSObject*<OS_dispatch_queue> _mpMusicPlayerControllerQueue;

}

@property (assign,nonatomic) BOOL isRunning;                                                         //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) AccessoryNowPlayingClient * nowPlayingClient;                           //@synthesize nowPlayingClient=_nowPlayingClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                           //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> nowPlayingInfoDebounceTimer;              //@synthesize nowPlayingInfoDebounceTimer=_nowPlayingInfoDebounceTimer - In the implementation block
@property (assign,nonatomic) unsigned nowPlayingInfoDebounceTimerRunningMask;                        //@synthesize nowPlayingInfoDebounceTimerRunningMask=_nowPlayingInfoDebounceTimerRunningMask - In the implementation block
@property (nonatomic,readonly) ACCSettingsState * nowPlayingInfoDebounceTimerValue;                  //@synthesize nowPlayingInfoDebounceTimerValue=_nowPlayingInfoDebounceTimerValue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedMediaItemAttributes;                        //@synthesize cachedMediaItemAttributes=_cachedMediaItemAttributes - In the implementation block
@property (nonatomic,retain) NSData * cachedMediaItemArtworkHash;                                    //@synthesize cachedMediaItemArtworkHash=_cachedMediaItemArtworkHash - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPlaybackAttributes;                         //@synthesize cachedPlaybackAttributes=_cachedPlaybackAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pbqUpdateAccessoryList;                           //@synthesize pbqUpdateAccessoryList=_pbqUpdateAccessoryList - In the implementation block
@property (nonatomic,retain) ACCSettingsState * maxPlaybackQueueInfoCount;                           //@synthesize maxPlaybackQueueInfoCount=_maxPlaybackQueueInfoCount - In the implementation block
@property (nonatomic,retain) ACCSettingsState * playbackQueueInfoTimeoutMs;                          //@synthesize playbackQueueInfoTimeoutMs=_playbackQueueInfoTimeoutMs - In the implementation block
@property (nonatomic,retain) ACCSettingsState * playbackQueueInfoSendPartialOnTimeout;               //@synthesize playbackQueueInfoSendPartialOnTimeout=_playbackQueueInfoSendPartialOnTimeout - In the implementation block
@property (nonatomic,retain) ACCSettingsState * measureMemoryUsage;                                  //@synthesize measureMemoryUsage=_measureMemoryUsage - In the implementation block
@property (nonatomic,retain) ACCMemUsageStat * memUse;                                               //@synthesize memUse=_memUse - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nowPlayingInfoPBQueueListQ;                //@synthesize nowPlayingInfoPBQueueListQ=_nowPlayingInfoPBQueueListQ - In the implementation block
@property (nonatomic,retain) MPMusicPlayerController * mpMusicPlayerControllerHandler;               //@synthesize mpMusicPlayerControllerHandler=_mpMusicPlayerControllerHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mpMusicPlayerControllerQueue;              //@synthesize mpMusicPlayerControllerQueue=_mpMusicPlayerControllerQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
+(BOOL)isMusicAppVisible;
+(id)getItemDictionaryForContentItem:(id)arg1 infoMask:(unsigned)arg2 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)stopPlugin;
-(BOOL)isRunning;
-(unsigned)currentPlaybackStateMR;
-(id)currentMediaItemAttributes;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(NSMutableDictionary *)pbqUpdateAccessoryList;
-(void)nowPlayingInfoDidChange:(id)arg1 ;
-(void)setNowPlayingInfoDebounceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)startPlugin;
-(NSString *)pluginName;
-(void)setMpMusicPlayerControllerHandler:(MPMusicPlayerController *)arg1 ;
-(void)initPlugin;
-(void)setCachedPlaybackAttributes:(NSMutableDictionary *)arg1 ;
-(void)setNowPlayingInfoDebounceTimerRunningMask:(unsigned)arg1 ;
-(id)currentPlaybackAppName;
-(void)setMemUse:(ACCMemUsageStat *)arg1 ;
-(void)setMaxPlaybackQueueInfoCount:(ACCSettingsState *)arg1 ;
-(ACCSettingsState *)maxPlaybackQueueInfoCount;
-(void)setPlaybackQueueInfoSendPartialOnTimeout:(ACCSettingsState *)arg1 ;
-(BOOL)setPlaybackQueueIndex:(id)arg1 ;
-(void)_nowPlayingArtworkDidChange;
-(void)_nowPlayingAppDidChange;
-(id)currentPlaybackAttributes;
-(NSObject*<OS_dispatch_source>)nowPlayingInfoDebounceTimer;
-(ACCSettingsState *)nowPlayingInfoDebounceTimerValue;
-(void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned)arg3 upToCount:(unsigned)arg4 infoMask:(unsigned)arg5 ;
-(BOOL)_nowPlayingAppIsIPodApp;
-(BOOL)_nowPlayingAppIsIPodRadio;
-(void)_nowPlayingStateDidChange;
-(NSData *)cachedMediaItemArtworkHash;
-(void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 ;
-(BOOL)_nowPlayingIsStreaming;
-(AccessoryNowPlayingClient *)nowPlayingClient;
-(void)setNowPlayingClient:(AccessoryNowPlayingClient *)arg1 ;
-(void)setNowPlayingInfoPBQueueListQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMeasureMemoryUsage:(ACCSettingsState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_queue>)mpMusicPlayerControllerQueue;
-(NSObject*<OS_dispatch_queue>)nowPlayingInfoPBQueueListQ;
-(void)_nowPlayingInfoDebounceTimerKick:(int)arg1 ;
-(unsigned)nowPlayingInfoDebounceTimerRunningMask;
-(BOOL)setPlaybackElapsedTime:(id)arg1 ;
-(void)setCachedMediaItemAttributes:(NSMutableDictionary *)arg1 ;
-(void)setPlaybackQueueInfoTimeoutMs:(ACCSettingsState *)arg1 ;
-(void)_nowPlayingPlaybackQueueDidChange;
-(ACCMemUsageStat *)memUse;
-(void)nowPlayingArtworkDidChange:(id)arg1 ;
-(ACCSettingsState *)playbackQueueInfoSendPartialOnTimeout;
-(void)_generatePlaybackQueueItemsWithPropertyList:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 continueQuery:(/*^block*/id)arg4 ;
-(ACCSettingsState *)measureMemoryUsage;
-(void)setPbqUpdateAccessoryList:(NSMutableDictionary *)arg1 ;
-(void)nowPlayingStateDidChange:(id)arg1 ;
-(void)_nowPlayingInfoDebounceTimerStop:(int)arg1 ;
-(id)currentPlaybackAppBundleID;
-(MPMusicPlayerController *)mpMusicPlayerControllerHandler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ACCSettingsState *)playbackQueueInfoTimeoutMs;
-(id)currentMediaItemArtwork;
-(NSMutableDictionary *)cachedPlaybackAttributes;
-(NSMutableDictionary *)cachedMediaItemAttributes;
-(id)currentMediaItemArtworkOriginal;
-(void)setCachedMediaItemArtworkHash:(NSData *)arg1 ;
-(void)setMpMusicPlayerControllerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)nowPlayingAppDidChange:(id)arg1 ;
-(void)nowPlayingPlaybackQueueDidChange:(id)arg1 ;
-(NSString *)description;
-(void)_nowPlayingInfoDidChange;
@end
