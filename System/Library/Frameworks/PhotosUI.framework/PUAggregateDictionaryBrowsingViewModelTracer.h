/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@protocol PUDisplayAsset;
@class PUBrowsingViewModel, NSHashTable, NSString;

@interface PUAggregateDictionaryBrowsingViewModelTracer : NSObject <PUBrowsingViewModelChangeObserver> {

	BOOL __isPerformingChanges;
	BOOL __isPerformingUpdate;
	BOOL __needsUpdateViewedAsset;
	BOOL __needsUpdateViewedAssetLongEnough;
	BOOL __needsUpdatePlayingVideo;
	BOOL __didScheduleCurrentAssetChange;
	BOOL __isApplicationActive;
	BOOL __viewedAssetLongEnough;
	BOOL __didScheduleViewUpdate;
	BOOL __isPlayingVideo;
	BOOL __isPlayingStreamedVideo;
	BOOL __isStreamedVideoActuallyPlaying;
	BOOL __isStreamedVideoStalled;
	BOOL __needsUpdateOneUpSessionActive;
	BOOL __oneUpSessionActive;
	PUBrowsingViewModel* _browsingViewModel;
	NSHashTable* __viewingContexts;
	id<PUDisplayAsset> __viewedAsset;
	double __viewedAssetStartTime;
	double __oneUpSessionStartTime;

}

@property (nonatomic,readonly) NSHashTable * _viewingContexts;                                                                 //@synthesize _viewingContexts=__viewingContexts - In the implementation block
@property (assign,setter=_setPerformingChanges:,nonatomic) BOOL _isPerformingChanges;                                          //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (assign,setter=_setPerformingUpdate:,nonatomic) BOOL _isPerformingUpdate;                                            //@synthesize _isPerformingUpdate=__isPerformingUpdate - In the implementation block
@property (assign,setter=_setNeedsUpdateViewedAsset:,nonatomic) BOOL _needsUpdateViewedAsset;                                  //@synthesize _needsUpdateViewedAsset=__needsUpdateViewedAsset - In the implementation block
@property (assign,setter=_setNeedsUpdateViewedAssetLongEnough:,nonatomic) BOOL _needsUpdateViewedAssetLongEnough;              //@synthesize _needsUpdateViewedAssetLongEnough=__needsUpdateViewedAssetLongEnough - In the implementation block
@property (assign,setter=_setNeedsUpdatePlayingVideo:,nonatomic) BOOL _needsUpdatePlayingVideo;                                //@synthesize _needsUpdatePlayingVideo=__needsUpdatePlayingVideo - In the implementation block
@property (assign,setter=_setDidScheduleCurrentAssetChange:,nonatomic) BOOL _didScheduleCurrentAssetChange;                    //@synthesize _didScheduleCurrentAssetChange=__didScheduleCurrentAssetChange - In the implementation block
@property (assign,setter=_setApplicationActive:,nonatomic) BOOL _isApplicationActive;                                          //@synthesize _isApplicationActive=__isApplicationActive - In the implementation block
@property (setter=_setViewedAsset:,nonatomic,retain) id<PUDisplayAsset> _viewedAsset;                                          //@synthesize _viewedAsset=__viewedAsset - In the implementation block
@property (assign,setter=_setViewedAssetStartTime:,nonatomic) double _viewedAssetStartTime;                                    //@synthesize _viewedAssetStartTime=__viewedAssetStartTime - In the implementation block
@property (assign,setter=_setViewedAssetLongEnough:,nonatomic) BOOL _viewedAssetLongEnough;                                    //@synthesize _viewedAssetLongEnough=__viewedAssetLongEnough - In the implementation block
@property (assign,setter=_setDidScheduleViewUpdate:,nonatomic) BOOL _didScheduleViewUpdate;                                    //@synthesize _didScheduleViewUpdate=__didScheduleViewUpdate - In the implementation block
@property (assign,setter=_setPlayingVideo:,nonatomic) BOOL _isPlayingVideo;                                                    //@synthesize _isPlayingVideo=__isPlayingVideo - In the implementation block
@property (assign,setter=_setPlayingStreamedVideo:,nonatomic) BOOL _isPlayingStreamedVideo;                                    //@synthesize _isPlayingStreamedVideo=__isPlayingStreamedVideo - In the implementation block
@property (assign,setter=_setStreamedVideoActuallyPlaying:,nonatomic) BOOL _isStreamedVideoActuallyPlaying;                    //@synthesize _isStreamedVideoActuallyPlaying=__isStreamedVideoActuallyPlaying - In the implementation block
@property (assign,setter=_setStreamedVideoStalled:,nonatomic) BOOL _isStreamedVideoStalled;                                    //@synthesize _isStreamedVideoStalled=__isStreamedVideoStalled - In the implementation block
@property (assign,setter=_setNeedsUpdateOneUpSessionActive:,nonatomic) BOOL _needsUpdateOneUpSessionActive;                    //@synthesize _needsUpdateOneUpSessionActive=__needsUpdateOneUpSessionActive - In the implementation block
@property (assign,setter=_setOneUpSessionActive:,nonatomic) BOOL _oneUpSessionActive;                                          //@synthesize _oneUpSessionActive=__oneUpSessionActive - In the implementation block
@property (assign,setter=_setOneUpSessionStartTime:,nonatomic) double _oneUpSessionStartTime;                                  //@synthesize _oneUpSessionStartTime=__oneUpSessionStartTime - In the implementation block
@property (nonatomic,__weak,readonly) PUBrowsingViewModel * browsingViewModel;                                                 //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBrowsingViewModel:(id)arg1 ;
-(BOOL)_oneUpSessionActive;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)_needsUpdateOneUpSessionActive;
-(void)_applicationWillResignActive:(id)arg1 ;
-(BOOL)_needsUpdateViewedAsset;
-(id<PUDisplayAsset>)_viewedAsset;
-(void)_updateIfNeeded;
-(void)_setOneUpSessionStartTime:(double)arg1 ;
-(void)removeViewingContext:(id)arg1 ;
-(void)_setOneUpSessionActive:(BOOL)arg1 ;
-(void)_updateOneUpSessionActive;
-(void)_invalidateViewedAssetLongEnough;
-(void)_setNeedsUpdate;
-(NSHashTable *)_viewingContexts;
-(BOOL)_didScheduleViewUpdate;
-(BOOL)_isPlayingStreamedVideo;
-(void)dealloc;
-(PUBrowsingViewModel *)browsingViewModel;
-(BOOL)_didScheduleCurrentAssetChange;
-(void)_setPerformingUpdate:(BOOL)arg1 ;
-(BOOL)_needsUpdatePlayingVideo;
-(void)_handleScheduledViewUpdate;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdateViewedAsset:(BOOL)arg1 ;
-(void)_scheduleViewUpdate;
-(void)_setNeedsUpdateOneUpSessionActive:(BOOL)arg1 ;
-(double)_oneUpSessionStartTime;
-(void)_assertInsideChangeBlock;
-(BOOL)_isPerformingChanges;
-(void)_setApplicationActive:(BOOL)arg1 ;
-(id)init;
-(BOOL)_isPlayingVideo;
-(BOOL)_isStreamedVideoActuallyPlaying;
-(void)_handleScheduledCurrentAssetChange;
-(BOOL)_isStreamedVideoStalled;
-(void)_setViewedAsset:(id)arg1 ;
-(BOOL)_viewedAssetLongEnough;
-(void)addViewingContext:(id)arg1 ;
-(BOOL)_isPerformingUpdate;
-(void)_updateViewedAssetLongEnoughIfNeeded;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_invalidateViewedAsset;
-(void)_setPlayingVideo:(BOOL)arg1 ;
-(void)_setNeedsUpdateViewedAssetLongEnough:(BOOL)arg1 ;
-(void)_invalidateOneUpSessionActive;
-(void)_setDidScheduleCurrentAssetChange:(BOOL)arg1 ;
-(void)_setPlayingStreamedVideo:(BOOL)arg1 ;
-(BOOL)_isApplicationActive;
-(void)_updateViewedAssetIfNeeded;
-(void)_setViewedAssetLongEnough:(BOOL)arg1 ;
-(void)_invalidatePlayingVideo;
-(double)_viewedAssetStartTime;
-(BOOL)_needsUpdateViewedAssetLongEnough;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(void)_scheduleCurrentAssetChange;
-(void)_setStreamedVideoStalled:(BOOL)arg1 ;
-(void)_setViewedAssetStartTime:(double)arg1 ;
-(void)_setDidScheduleViewUpdate:(BOOL)arg1 ;
-(void)_updatePlayingVideoIfNeeded;
-(void)_setNeedsUpdatePlayingVideo:(BOOL)arg1 ;
-(void)_setStreamedVideoActuallyPlaying:(BOOL)arg1 ;
-(BOOL)_needsUpdate;
@end
