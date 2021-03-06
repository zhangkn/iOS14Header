/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/PXTrimToolPlayerWrapper.h>

@protocol PXTrimToolPlayerObserver, PXLivePhotoView;
@class UIView, ISVideoPlayerUIView, ISWrappedAVPlayer, NSString;

@interface PXTrimToolPlayerWrapperLivePhotoView : NSObject <ISChangeObserver, PXTrimToolPlayerWrapper> {

	SCD_Struct_PX59 _delegateFlags;
	BOOL _needsPlayerUpdate;
	id<PXTrimToolPlayerObserver> _playerObserver;
	UIView* _loupePlayerView;
	ISVideoPlayerUIView* _videoPlayerView;
	ISWrappedAVPlayer* _wrappedAVPlayer;
	id<PXLivePhotoView> _livePhotoView;
	id _periodicTimeObserver;
	SCD_Struct_PX8 _periodicTimeObservationInterval;

}

@property (nonatomic,retain) ISWrappedAVPlayer * wrappedAVPlayer;                             //@synthesize wrappedAVPlayer=_wrappedAVPlayer - In the implementation block
@property (nonatomic,readonly) id<PXLivePhotoView> livePhotoView;                             //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (assign,nonatomic) BOOL needsPlayerUpdate;                                          //@synthesize needsPlayerUpdate=_needsPlayerUpdate - In the implementation block
@property (nonatomic,retain) ISVideoPlayerUIView * _videoPlayerView;                          //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX8 periodicTimeObservationInterval;                  //@synthesize periodicTimeObservationInterval=_periodicTimeObservationInterval - In the implementation block
@property (nonatomic,retain) id periodicTimeObserver;                                         //@synthesize periodicTimeObserver=_periodicTimeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXTrimToolPlayerObserver> playerObserver;              //@synthesize playerObserver=_playerObserver - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX9 trimRange; 
@property (nonatomic,readonly) UIView * loupePlayerView;                                      //@synthesize loupePlayerView=_loupePlayerView - In the implementation block
@property (getter=isReadyToPlay,nonatomic,readonly) BOOL readyToPlay; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(void)play;
-(BOOL)isPlaying;
-(void)pause;
-(BOOL)isReadyToPlay;
-(void)requestPlayerItemWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)loupePlayerView;
-(void)applyTrimTimeRange:(SCD_Struct_PX9)arg1 ;
-(void)stopPeriodicTimeObserver;
-(void)startPeriodicTimeObserver;
-(void)setPlayerObserver:(id<PXTrimToolPlayerObserver>)arg1 ;
-(void)seekToTime:(SCD_Struct_PX8)arg1 untrimmed:(BOOL)arg2 exact:(BOOL)arg3 ;
-(id)initWithLivePhotoView:(id)arg1 ;
-(ISVideoPlayerUIView *)_videoPlayerView;
-(void)invalidateComposition;
-(SCD_Struct_PX9)trimRange;
-(id)videoPlayerView;
-(id<PXTrimToolPlayerObserver>)playerObserver;
-(void)_loadWrappedAVPlayerIfNecessary;
-(void)setWrappedAVPlayer:(ISWrappedAVPlayer *)arg1 ;
-(id)_videoPlayerViewIfLoaded;
-(void)_createLoupePlayerView;
-(void)_addPeriodicTimeObserver;
-(void)_timeObserverTimeChanged:(SCD_Struct_PX8)arg1 ;
-(void)set_videoPlayerView:(ISVideoPlayerUIView *)arg1 ;
-(ISWrappedAVPlayer *)wrappedAVPlayer;
-(BOOL)needsPlayerUpdate;
-(void)setNeedsPlayerUpdate:(BOOL)arg1 ;
-(SCD_Struct_PX8)periodicTimeObservationInterval;
-(void)setPeriodicTimeObservationInterval:(SCD_Struct_PX8)arg1 ;
-(id)periodicTimeObserver;
-(void)setPeriodicTimeObserver:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_PX8)arg1 ;
-(id<PXLivePhotoView>)livePhotoView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

