/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPRemoteCommandDelegate_Internal.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, MRPlayerPath, MPRemoteCommand, MPSkipIntervalCommand, MPRatingCommand, MPChangePlaybackRateCommand, MPFeedbackCommand, MPChangePlaybackPositionCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPAdvanceShuffleModeCommand, MPAdvanceRepeatModeCommand, MPSetPlaybackQueueCommand, MPInsertIntoPlaybackQueueCommand, MPReorderQueueCommand, MPSetPlaybackSessionCommand, MPChangeQueueEndActionCommand, NSString;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal> {

	NSMutableArray* _activeCommands;
	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _mediaRemoteCommandHandler;
	BOOL _scheduledSupportedCommandsChangedNotification;
	BOOL _canBeNowPlayingApplication;
	MRPlayerPath* _playerPath;
	BOOL _processingEvent;
	NSMutableArray* _eventQueue;
	unsigned long long _stateHandler;
	BOOL _disableAutomaticCanBeNowPlaying;
	BOOL _wantsSerializedEventDelivery;
	MPRemoteCommand* _pauseCommand;
	MPRemoteCommand* _playCommand;
	MPRemoteCommand* _stopCommand;
	MPRemoteCommand* _togglePlayPauseCommand;
	MPRemoteCommand* _enableLanguageOptionCommand;
	MPRemoteCommand* _disableLanguageOptionCommand;
	MPRemoteCommand* _nextTrackCommand;
	MPRemoteCommand* _previousTrackCommand;
	MPSkipIntervalCommand* _skipForwardCommand;
	MPSkipIntervalCommand* _skipBackwardCommand;
	MPRemoteCommand* _seekForwardCommand;
	MPRemoteCommand* _seekBackwardCommand;
	MPRatingCommand* _ratingCommand;
	MPChangePlaybackRateCommand* _changePlaybackRateCommand;
	MPFeedbackCommand* _likeCommand;
	MPFeedbackCommand* _dislikeCommand;
	MPFeedbackCommand* _bookmarkCommand;
	MPChangePlaybackPositionCommand* _changePlaybackPositionCommand;
	MPChangeRepeatModeCommand* _changeRepeatModeCommand;
	MPChangeShuffleModeCommand* _changeShuffleModeCommand;
	MPRemoteCommand* _specialSeekForwardCommand;
	MPRemoteCommand* _specialSeekBackwardCommand;
	MPAdvanceShuffleModeCommand* _advanceShuffleModeCommand;
	MPAdvanceRepeatModeCommand* _advanceRepeatModeCommand;
	MPRemoteCommand* _createRadioStationCommand;
	MPSetPlaybackQueueCommand* _setPlaybackQueueCommand;
	MPRemoteCommand* _prepareForSetPlaybackQueueCommand;
	MPInsertIntoPlaybackQueueCommand* _insertIntoPlaybackQueueCommand;
	MPRemoteCommand* _removeFromPlaybackQueueCommand;
	MPReorderQueueCommand* _reorderQueueCommand;
	MPRemoteCommand* _playItemInQueueCommand;
	MPFeedbackCommand* _addNowPlayingItemToLibraryCommand;
	MPFeedbackCommand* _addItemToLibraryCommand;
	MPSetPlaybackSessionCommand* _setPlaybackSessionCommand;
	MPRemoteCommand* _reshuffleCommand;
	MPChangeQueueEndActionCommand* _changeQueueEndActionCommand;
	NSString* _playerID;

}

@property (nonatomic,readonly) MPRemoteCommand * specialSeekForwardCommand;                                    //@synthesize specialSeekForwardCommand=_specialSeekForwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * specialSeekBackwardCommand;                                   //@synthesize specialSeekBackwardCommand=_specialSeekBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPAdvanceShuffleModeCommand * advanceShuffleModeCommand;                        //@synthesize advanceShuffleModeCommand=_advanceShuffleModeCommand - In the implementation block
@property (nonatomic,readonly) MPAdvanceRepeatModeCommand * advanceRepeatModeCommand;                          //@synthesize advanceRepeatModeCommand=_advanceRepeatModeCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * removeFromPlaybackQueueCommand;                               //@synthesize removeFromPlaybackQueueCommand=_removeFromPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPReorderQueueCommand * reorderQueueCommand;                                    //@synthesize reorderQueueCommand=_reorderQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * playItemInQueueCommand;                                       //@synthesize playItemInQueueCommand=_playItemInQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * createRadioStationCommand;                                    //@synthesize createRadioStationCommand=_createRadioStationCommand - In the implementation block
@property (nonatomic,readonly) MPSetPlaybackQueueCommand * setPlaybackQueueCommand;                            //@synthesize setPlaybackQueueCommand=_setPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * prepareForSetPlaybackQueueCommand;                            //@synthesize prepareForSetPlaybackQueueCommand=_prepareForSetPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPInsertIntoPlaybackQueueCommand * insertIntoPlaybackQueueCommand;              //@synthesize insertIntoPlaybackQueueCommand=_insertIntoPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * addNowPlayingItemToLibraryCommand;                          //@synthesize addNowPlayingItemToLibraryCommand=_addNowPlayingItemToLibraryCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * addItemToLibraryCommand;                                    //@synthesize addItemToLibraryCommand=_addItemToLibraryCommand - In the implementation block
@property (nonatomic,readonly) MPSetPlaybackSessionCommand * setPlaybackSessionCommand;                        //@synthesize setPlaybackSessionCommand=_setPlaybackSessionCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * reshuffleCommand;                                             //@synthesize reshuffleCommand=_reshuffleCommand - In the implementation block
@property (nonatomic,readonly) MPChangeQueueEndActionCommand * changeQueueEndActionCommand;                    //@synthesize changeQueueEndActionCommand=_changeQueueEndActionCommand - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerID;                                                       //@synthesize playerID=_playerID - In the implementation block
@property (assign,nonatomic) BOOL disableAutomaticCanBeNowPlaying;                                             //@synthesize disableAutomaticCanBeNowPlaying=_disableAutomaticCanBeNowPlaying - In the implementation block
@property (assign,nonatomic) BOOL wantsSerializedEventDelivery;                                                //@synthesize wantsSerializedEventDelivery=_wantsSerializedEventDelivery - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * pauseCommand;                                                 //@synthesize pauseCommand=_pauseCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * playCommand;                                                  //@synthesize playCommand=_playCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * stopCommand;                                                  //@synthesize stopCommand=_stopCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * togglePlayPauseCommand;                                       //@synthesize togglePlayPauseCommand=_togglePlayPauseCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * enableLanguageOptionCommand;                                  //@synthesize enableLanguageOptionCommand=_enableLanguageOptionCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * disableLanguageOptionCommand;                                 //@synthesize disableLanguageOptionCommand=_disableLanguageOptionCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand;                        //@synthesize changePlaybackRateCommand=_changePlaybackRateCommand - In the implementation block
@property (nonatomic,readonly) MPChangeRepeatModeCommand * changeRepeatModeCommand;                            //@synthesize changeRepeatModeCommand=_changeRepeatModeCommand - In the implementation block
@property (nonatomic,readonly) MPChangeShuffleModeCommand * changeShuffleModeCommand;                          //@synthesize changeShuffleModeCommand=_changeShuffleModeCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * nextTrackCommand;                                             //@synthesize nextTrackCommand=_nextTrackCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * previousTrackCommand;                                         //@synthesize previousTrackCommand=_previousTrackCommand - In the implementation block
@property (nonatomic,readonly) MPSkipIntervalCommand * skipForwardCommand;                                     //@synthesize skipForwardCommand=_skipForwardCommand - In the implementation block
@property (nonatomic,readonly) MPSkipIntervalCommand * skipBackwardCommand;                                    //@synthesize skipBackwardCommand=_skipBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * seekForwardCommand;                                           //@synthesize seekForwardCommand=_seekForwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * seekBackwardCommand;                                          //@synthesize seekBackwardCommand=_seekBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackPositionCommand * changePlaybackPositionCommand;                //@synthesize changePlaybackPositionCommand=_changePlaybackPositionCommand - In the implementation block
@property (nonatomic,readonly) MPRatingCommand * ratingCommand;                                                //@synthesize ratingCommand=_ratingCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * likeCommand;                                                //@synthesize likeCommand=_likeCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * dislikeCommand;                                             //@synthesize dislikeCommand=_dislikeCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * bookmarkCommand;                                            //@synthesize bookmarkCommand=_bookmarkCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getPendingCommandTypesWithCompletion:(/*^block*/id)arg1 ;
+(long long)_numberOfCommandCentersWithTargets;
+(id)commandCenterForPlayerID:(id)arg1 ;
+(void)updateLaunchCommandsWithConfigurationHandler:(/*^block*/id)arg1 ;
+(id)sharedCommandCenter;
-(id)initWithPlayerID:(id)arg1 ;
-(MPInsertIntoPlaybackQueueCommand *)insertIntoPlaybackQueueCommand;
-(MPRemoteCommand *)seekForwardCommand;
-(MPRemoteCommand *)nextTrackCommand;
-(void)_stopMediaRemoteSync;
-(void)_flushEventQueue;
-(MPSkipIntervalCommand *)skipBackwardCommand;
-(MPFeedbackCommand *)addItemToLibraryCommand;
-(MPChangeQueueEndActionCommand *)changeQueueEndActionCommand;
-(MPAdvanceRepeatModeCommand *)advanceRepeatModeCommand;
-(MPRemoteCommand *)previousTrackCommand;
-(MPFeedbackCommand *)dislikeCommand;
-(BOOL)disableAutomaticCanBeNowPlaying;
-(NSString *)playerID;
-(id)_activeCommands;
-(MPRemoteCommand *)seekBackwardCommand;
-(MPSetPlaybackSessionCommand *)setPlaybackSessionCommand;
-(void)dealloc;
-(MPRemoteCommand *)removeFromPlaybackQueueCommand;
-(void)setWantsSerializedEventDelivery:(BOOL)arg1 ;
-(MPAdvanceShuffleModeCommand *)advanceShuffleModeCommand;
-(MPChangePlaybackRateCommand *)changePlaybackRateCommand;
-(void)_scheduleSupportedCommandsChanged;
-(MPFeedbackCommand *)bookmarkCommand;
-(void)setDisableAutomaticCanBeNowPlaying:(BOOL)arg1 ;
-(void)remoteCommandDidMutatePropagatableProperty:(id)arg1 ;
-(MPRemoteCommand *)enableLanguageOptionCommand;
-(MPFeedbackCommand *)likeCommand;
-(void)dispatchCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_commandTargetsDidChangeNotification:(id)arg1 ;
-(MPRatingCommand *)ratingCommand;
-(void)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 completion:(/*^block*/id)arg3 ;
-(MPSkipIntervalCommand *)skipForwardCommand;
-(MPRemoteCommand *)disableLanguageOptionCommand;
-(MPRemoteCommand *)specialSeekForwardCommand;
-(MPChangeShuffleModeCommand *)changeShuffleModeCommand;
-(MPSetPlaybackQueueCommand *)setPlaybackQueueCommand;
-(MPChangeRepeatModeCommand *)changeRepeatModeCommand;
-(MPRemoteCommand *)togglePlayPauseCommand;
-(MPRemoteCommand *)createRadioStationCommand;
-(MPRemoteCommand *)pauseCommand;
-(MPRemoteCommand *)prepareForSetPlaybackQueueCommand;
-(BOOL)wantsSerializedEventDelivery;
-(id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned)arg2 ;
-(void)getPendingCommandTypesWithCompletion:(/*^block*/id)arg1 ;
-(MPReorderQueueCommand *)reorderQueueCommand;
-(MPFeedbackCommand *)addNowPlayingItemToLibraryCommand;
-(MPChangePlaybackPositionCommand *)changePlaybackPositionCommand;
-(MPRemoteCommand *)reshuffleCommand;
-(void)_startMediaRemoteSync;
-(MPRemoteCommand *)playCommand;
-(MPRemoteCommand *)playItemInQueueCommand;
-(MPRemoteCommand *)stopCommand;
-(MPRemoteCommand *)specialSeekBackwardCommand;
@end
