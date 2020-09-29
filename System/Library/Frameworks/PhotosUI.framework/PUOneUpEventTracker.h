/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXViewControllerEventTracker.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>
#import <libobjc.A.dylib/PUOneUpEventTracker.h>

@protocol PUOneUpEventTracker <PXViewControllerEventTracker>
@required
-(void)logUserWillPlayLivePhoto:(id)arg1;
-(void)logAppliedEffectSuggestion:(id)arg1 toLivePhoto:(id)arg2;
-(void)logUserDidPlayLivePhoto:(id)arg1;
-(void)logVitalityDidEndForLivePhoto:(id)arg1;

@end


@protocol PUDisplayAsset;
@class PUBrowsingViewModel, NSString, PXAssetAnalyzer, PXAssetMetadataDonator, PUBrowsingVideoPlayer, NSMutableDictionary;

@interface PUOneUpEventTracker : PXViewControllerEventTracker <PXChangeObserver, PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUOneUpEventTracker> {

	BOOL _isSessionActive;
	BOOL _currentlyStreamingVideoIsActuallyPlaying;
	BOOL _currentlyStreamingVideoIsStalled;
	BOOL _currentlyStreamingVideoDidStartActualPlayback;
	PUBrowsingViewModel* _viewModel;
	long long _presentationOrigin;
	NSString* _viewClassName;
	long long _sessionSignpost;
	id<PUDisplayAsset> _currentlyViewedAsset;
	double _currentlyViewedAssetTimestamp;
	long long _currentlyViewedAssetGeneration;
	long long _currentAssetSignpost;
	long long _currentAssetDisplayIntervalSignpost;
	PXAssetAnalyzer* _assetAnalyzer;
	PXAssetMetadataDonator* _assetMetadataDonator;
	PUBrowsingVideoPlayer* _currentVideoPlayer;
	id<PUDisplayAsset> _currentVideoAsset;
	id<PUDisplayAsset> _currentlyPlayingVideoAsset;
	double _currentlyPlayingVideoAssetTimestamp;
	id<PUDisplayAsset> _currentlyStreamingVideoAsset;
	long long _currentlyStreamingVideoStallsCount;
	long long _currentlyPlayingLivePhotoSignpost;
	long long _currentlyPlayingVideoSignpost;
	long long _currentlyPlayingStreamedVideoSignpost;
	long long _currentlyPlayingStreamedVideoStartSignpost;

}

@property (nonatomic,readonly) NSString * viewClassName;                                        //@synthesize viewClassName=_viewClassName - In the implementation block
@property (assign,nonatomic) BOOL isSessionActive;                                              //@synthesize isSessionActive=_isSessionActive - In the implementation block
@property (assign,nonatomic) long long sessionSignpost;                                         //@synthesize sessionSignpost=_sessionSignpost - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> currentlyViewedAsset;                           //@synthesize currentlyViewedAsset=_currentlyViewedAsset - In the implementation block
@property (nonatomic,readonly) double currentlyViewedAssetTimestamp;                            //@synthesize currentlyViewedAssetTimestamp=_currentlyViewedAssetTimestamp - In the implementation block
@property (nonatomic,readonly) long long currentlyViewedAssetGeneration;                        //@synthesize currentlyViewedAssetGeneration=_currentlyViewedAssetGeneration - In the implementation block
@property (assign,nonatomic) long long currentAssetSignpost;                                    //@synthesize currentAssetSignpost=_currentAssetSignpost - In the implementation block
@property (assign,nonatomic) long long currentAssetDisplayIntervalSignpost;                     //@synthesize currentAssetDisplayIntervalSignpost=_currentAssetDisplayIntervalSignpost - In the implementation block
@property (nonatomic,readonly) PXAssetAnalyzer * assetAnalyzer;                                 //@synthesize assetAnalyzer=_assetAnalyzer - In the implementation block
@property (nonatomic,readonly) PXAssetMetadataDonator * assetMetadataDonator;                   //@synthesize assetMetadataDonator=_assetMetadataDonator - In the implementation block
@property (nonatomic,retain) PUBrowsingVideoPlayer * currentVideoPlayer;                        //@synthesize currentVideoPlayer=_currentVideoPlayer - In the implementation block
@property (nonatomic,readonly) id<PUDisplayAsset> currentVideoAsset;                            //@synthesize currentVideoAsset=_currentVideoAsset - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> currentlyPlayingVideoAsset;                     //@synthesize currentlyPlayingVideoAsset=_currentlyPlayingVideoAsset - In the implementation block
@property (nonatomic,readonly) double currentlyPlayingVideoAssetTimestamp;                      //@synthesize currentlyPlayingVideoAssetTimestamp=_currentlyPlayingVideoAssetTimestamp - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> currentlyStreamingVideoAsset;                   //@synthesize currentlyStreamingVideoAsset=_currentlyStreamingVideoAsset - In the implementation block
@property (assign,nonatomic) BOOL currentlyStreamingVideoIsActuallyPlaying;                     //@synthesize currentlyStreamingVideoIsActuallyPlaying=_currentlyStreamingVideoIsActuallyPlaying - In the implementation block
@property (assign,nonatomic) BOOL currentlyStreamingVideoIsStalled;                             //@synthesize currentlyStreamingVideoIsStalled=_currentlyStreamingVideoIsStalled - In the implementation block
@property (assign,nonatomic) long long currentlyStreamingVideoStallsCount;                      //@synthesize currentlyStreamingVideoStallsCount=_currentlyStreamingVideoStallsCount - In the implementation block
@property (assign,nonatomic) BOOL currentlyStreamingVideoDidStartActualPlayback;                //@synthesize currentlyStreamingVideoDidStartActualPlayback=_currentlyStreamingVideoDidStartActualPlayback - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingLivePhotoSignpost;                       //@synthesize currentlyPlayingLivePhotoSignpost=_currentlyPlayingLivePhotoSignpost - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingVideoSignpost;                           //@synthesize currentlyPlayingVideoSignpost=_currentlyPlayingVideoSignpost - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingStreamedVideoSignpost;                   //@synthesize currentlyPlayingStreamedVideoSignpost=_currentlyPlayingStreamedVideoSignpost - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingStreamedVideoStartSignpost;              //@synthesize currentlyPlayingStreamedVideoStartSignpost=_currentlyPlayingStreamedVideoStartSignpost - In the implementation block
@property (nonatomic,readonly) PUBrowsingViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) long long presentationOrigin;                                    //@synthesize presentationOrigin=_presentationOrigin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSMutableDictionary * payload; 
-(void)_updateCurrentlyViewedAsset;
-(double)currentlyPlayingVideoAssetTimestamp;
-(void)_updateCurrentVideoProperties;
-(void)_updateIsSessionActive;
-(void)logUserWillPlayLivePhoto:(id)arg1 ;
-(void)setCurrentlyStreamingVideoIsStalled:(BOOL)arg1 ;
-(id<PUDisplayAsset>)currentlyPlayingVideoAsset;
-(void)setSessionSignpost:(long long)arg1 ;
-(void)setCurrentlyStreamingVideoDidStartActualPlayback:(BOOL)arg1 ;
-(PXAssetMetadataDonator *)assetMetadataDonator;
-(void)setCurrentlyPlayingStreamedVideoStartSignpost:(long long)arg1 ;
-(id<PUDisplayAsset>)currentVideoAsset;
-(void)setIsSessionActive:(BOOL)arg1 ;
-(double)currentlyViewedAssetTimestamp;
-(void)setCurrentlyStreamingVideoIsActuallyPlaying:(BOOL)arg1 ;
-(void)_logDidStartPlayingVideoAsset:(id)arg1 ;
-(BOOL)isSessionActive;
-(void)_invalidateCurrentVideoProperties;
-(void)_invalidateIsSessionActive;
-(void)setCurrentAssetSignpost:(long long)arg1 ;
-(void)_logWillEndPlaybackOfStreamedVideoAsset:(id)arg1 ;
-(long long)currentlyViewedAssetGeneration;
-(void)setCurrentlyPlayingVideoSignpost:(long long)arg1 ;
-(PUBrowsingViewModel *)viewModel;
-(PUBrowsingVideoPlayer *)currentVideoPlayer;
-(void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)arg1 ;
-(void)setCurrentVideoPlayer:(PUBrowsingVideoPlayer *)arg1 ;
-(void)setCurrentlyViewedAsset:(id<PUDisplayAsset>)arg1 ;
-(void)setCurrentAssetDisplayIntervalSignpost:(long long)arg1 ;
-(void)_logDidStartSession;
-(long long)presentationOrigin;
-(void)_invalidateCurrentVideoPlayer;
-(id)init;
-(void)setCurrentlyStreamingVideoAsset:(id<PUDisplayAsset>)arg1 ;
-(void)_logDidStartViewingAsset:(id)arg1 ;
-(void)_logDidEndSession;
-(NSString *)viewClassName;
-(long long)currentlyPlayingStreamedVideoSignpost;
-(id<PUDisplayAsset>)currentlyViewedAsset;
-(void)_logDidEndViewingAsset:(id)arg1 duration:(double)arg2 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_handleLongEnoughViewDurationWithGeneration:(long long)arg1 ;
-(id)initWithViewModel:(id)arg1 presentationOrigin:(long long)arg2 ;
-(long long)currentlyPlayingLivePhotoSignpost;
-(void)setCurrentlyPlayingLivePhotoSignpost:(long long)arg1 ;
-(void)setCurrentlyStreamingVideoStallsCount:(long long)arg1 ;
-(void)setCurrentlyPlayingStreamedVideoSignpost:(long long)arg1 ;
-(long long)currentAssetDisplayIntervalSignpost;
-(void)_logDidStartPlaybackOfStreamedVideoAsset:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_invalidateCurrentlyViewedAsset;
-(long long)currentlyPlayingVideoSignpost;
-(BOOL)currentlyStreamingVideoIsStalled;
-(void)_updateCurrentVideoPlayer;
-(id<PUDisplayAsset>)currentlyStreamingVideoAsset;
-(long long)currentlyStreamingVideoStallsCount;
-(BOOL)currentlyStreamingVideoDidStartActualPlayback;
-(void)_logDidEndPlayingVideoAsset:(id)arg1 duration:(double)arg2 ;
-(PXAssetAnalyzer *)assetAnalyzer;
-(BOOL)currentlyStreamingVideoIsActuallyPlaying;
-(long long)currentlyPlayingStreamedVideoStartSignpost;
-(void)logAppliedEffectSuggestion:(id)arg1 toLivePhoto:(id)arg2 ;
-(void)logUserDidPlayLivePhoto:(id)arg1 ;
-(long long)currentAssetSignpost;
-(void)logVitalityDidEndForLivePhoto:(id)arg1 ;
-(long long)sessionSignpost;
-(void)setCurrentlyPlayingVideoAsset:(id<PUDisplayAsset>)arg1 ;
@end
