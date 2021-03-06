/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXLivePhotoView.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@protocol PHLivePhotoViewDelegate;
@class ISLivePhotoPlayer, PHLivePhoto, ISPlayerItem, UIView, ISLivePhotoUIView, UIGestureRecognizer, NSString;

@interface PHLivePhotoView : UIView <PXLivePhotoView, ISChangeObserver> {

	struct {
		BOOL respondsToWillBeginPlaybackWithStyle;
		BOOL respondsToDidEndPlayback;
	}  _delegateFlags;
	struct {
		BOOL respondsToDidEndPlayingVitality;
		BOOL respondsToDidBeginHinting;
		BOOL respondsToDidBeginScrubbing;
		BOOL respondsToDidEndScrubbing;
	}  _delegatePrivateFlags;
	long long _currentPlaybackStyle;
	BOOL _muted;
	BOOL __playingVitality;
	BOOL __playbackRequested;
	BOOL _scrubbing;
	BOOL _shouldApplyTargetReadiness;
	BOOL _showsStatusBorder;
	id<PHLivePhotoViewDelegate> _delegate;
	PHLivePhoto* _livePhoto;
	ISPlayerItem* __playerItem;
	long long _targetReadiness;
	UIView* _photoView;
	ISLivePhotoUIView* _playerView;
	ISLivePhotoPlayer* _player;
	CGPoint _scaleAnchorOffset;
	SCD_Struct_PH5 _trimmedTimeRange;

}

@property (nonatomic,retain) ISLivePhotoPlayer * player; 
@property (setter=_setPlayerItem:,nonatomic,retain) ISPlayerItem * _playerItem;                  //@synthesize _playerItem=__playerItem - In the implementation block
@property (assign,setter=_setPlayingVitality:,nonatomic) BOOL _playingVitality;                  //@synthesize _playingVitality=__playingVitality - In the implementation block
@property (assign,setter=_setPlaybackRequested:,nonatomic) BOOL _playbackRequested;              //@synthesize _playbackRequested=__playbackRequested - In the implementation block
@property (assign,setter=_setScrubbing:,nonatomic) BOOL scrubbing;                               //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,nonatomic) long long targetReadiness;                                          //@synthesize targetReadiness=_targetReadiness - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyTargetReadiness;                                    //@synthesize shouldApplyTargetReadiness=_shouldApplyTargetReadiness - In the implementation block
@property (nonatomic,retain) UIView * photoView;                                                 //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) CGPoint scaleAnchorOffset;                                          //@synthesize scaleAnchorOffset=_scaleAnchorOffset - In the implementation block
@property (nonatomic,retain) ISLivePhotoUIView * playerView;                                     //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) ISLivePhotoPlayer * player;                                         //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL showsStatusBorder;                                             //@synthesize showsStatusBorder=_showsStatusBorder - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH5 trimmedTimeRange;                                    //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (assign,nonatomic) CGImageRef overridePhoto; 
@property (assign,nonatomic) SCD_Struct_PH4 seekTime; 
@property (getter=isDisplayingPhoto,nonatomic,readonly) BOOL displayingPhoto; 
@property (assign,nonatomic,__weak) id<PHLivePhotoViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                                            //@synthesize livePhoto=_livePhoto - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                          //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * playbackGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)livePhotoBadgeImageWithOptions:(unsigned long long)arg1 ;
-(ISLivePhotoPlayer *)player;
-(void)stopPlayback;
-(void)startPlaybackWithStyle:(long long)arg1 ;
-(void)_setPlaybackRequested:(BOOL)arg1 ;
-(void)setPlayer:(ISLivePhotoPlayer *)arg1 ;
-(void)_setPlayingVitality:(BOOL)arg1 ;
-(void)setTrimmedTimeRange:(SCD_Struct_PH5)arg1 ;
-(BOOL)shouldApplyTargetReadiness;
-(CGImageRef)overridePhoto;
-(UIView *)photoView;
-(BOOL)showsStatusBorder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_playerDidBeginHinting;
-(SCD_Struct_PH5)trimmedTimeRange;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(void)_setScrubbing:(BOOL)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)_updateStatusBorder;
-(long long)targetReadiness;
-(void)setPlayerView:(ISLivePhotoUIView *)arg1 ;
-(ISPlayerItem *)_playerItem;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)isMuted;
-(void)_commonPHLivePhotoViewInitialization;
-(void)setOverridePhoto:(CGImageRef)arg1 ;
-(void)_handlePlayerItemStatusChanged;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(void)setDelegate:(id<PHLivePhotoViewDelegate>)arg1 ;
-(PHLivePhoto *)livePhoto;
-(SCD_Struct_PH4)seekTime;
-(id)initWithCoder:(id)arg1 ;
-(ISLivePhotoUIView *)playerView;
-(void)setShowsStatusBorder:(BOOL)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)_playbackRequested;
-(id<PHLivePhotoViewDelegate>)delegate;
-(void)_updatePlayingVitality;
-(void)setPhotoView:(UIView *)arg1 ;
-(void)_updatePlayerAudioEnabled;
-(void)_setPlayerItem:(id)arg1 ;
-(void)_updateCurrentPlaybackStyleAndSeeking;
-(void)setScaleAnchorOffset:(CGPoint)arg1 ;
-(void)setShouldApplyTargetReadiness:(BOOL)arg1 ;
-(void)_updatePlayerTargetReadiness;
-(CGPoint)scaleAnchorOffset;
-(void)setSeekTime:(SCD_Struct_PH4)arg1 ;
-(void)setTargetReadiness:(long long)arg1 ;
-(BOOL)scrubbing;
-(BOOL)_playingVitality;
-(BOOL)isDisplayingPhoto;
-(id)generateSnapshotImage;
@end

