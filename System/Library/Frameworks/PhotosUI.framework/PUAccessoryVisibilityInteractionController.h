/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@protocol PUAccessoryVisibilityInteractionControllerDelegate;
@class PUBrowsingSession, UIPanGestureRecognizer, PUAssetViewModel, PXNumberAnimator, PUChangeDirectionValueFilter, PXVerticalSwipeGestureRecognizerHelper, NSString;

@interface PUAccessoryVisibilityInteractionController : NSObject <PXChangeObserver, UIGestureRecognizerDelegate, PUBrowsingViewModelChangeObserver> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	BOOL _isUpdateScheduled;
	struct {
		BOOL contentOffset;
	}  _needsUpdateFlags;
	struct {
		BOOL respondsToCanBeginAtLocationFromProvider;
		BOOL respondsToDidEnd;
		BOOL respondsToIsLocationFromProviderInAccessoryContent;
		BOOL respondsToSetAccessoryVisibleChangeReason;
	}  _delegateFlags;
	id<PUAccessoryVisibilityInteractionControllerDelegate> _delegate;
	PUBrowsingSession* _browsingSession;
	UIPanGestureRecognizer* _panGestureRecognizer;
	PUAssetViewModel* __assetViewModel;
	PXNumberAnimator* __overridingContentOffsetY;
	PXNumberAnimator* __contentOffsetOverrideFactor;
	PUChangeDirectionValueFilter* __verticalDirectionValueFilter;
	PUChangeDirectionValueFilter* __swipeDirectionValueFilter;
	PXVerticalSwipeGestureRecognizerHelper* _verticalSwipeGestureRecognizerHelper;
	CGPoint __initialContentOffset;

}

@property (setter=_setAssetViewModel:,nonatomic,retain) PUAssetViewModel * _assetViewModel;                                                      //@synthesize _assetViewModel=__assetViewModel - In the implementation block
@property (assign,setter=_setInitialContentOffset:,nonatomic) CGPoint _initialContentOffset;                                                     //@synthesize _initialContentOffset=__initialContentOffset - In the implementation block
@property (setter=_setOverridingContentOffsetY:,nonatomic,retain) PXNumberAnimator * _overridingContentOffsetY;                                  //@synthesize _overridingContentOffsetY=__overridingContentOffsetY - In the implementation block
@property (setter=_setContentOffsetOverrideFactor:,nonatomic,retain) PXNumberAnimator * _contentOffsetOverrideFactor;                            //@synthesize _contentOffsetOverrideFactor=__contentOffsetOverrideFactor - In the implementation block
@property (setter=_setVerticalDirectionValueFilter:,nonatomic,retain) PUChangeDirectionValueFilter * _verticalDirectionValueFilter;              //@synthesize _verticalDirectionValueFilter=__verticalDirectionValueFilter - In the implementation block
@property (setter=_setSwipeDirectionValueFilter:,nonatomic,retain) PUChangeDirectionValueFilter * _swipeDirectionValueFilter;                    //@synthesize _swipeDirectionValueFilter=__swipeDirectionValueFilter - In the implementation block
@property (nonatomic,readonly) PXVerticalSwipeGestureRecognizerHelper * verticalSwipeGestureRecognizerHelper;                                    //@synthesize verticalSwipeGestureRecognizerHelper=_verticalSwipeGestureRecognizerHelper - In the implementation block
@property (assign,nonatomic,__weak) id<PUAccessoryVisibilityInteractionControllerDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUBrowsingSession * browsingSession;                                                                                //@synthesize browsingSession=_browsingSession - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                                                    //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBrowsingSession:(PUBrowsingSession *)arg1 ;
-(PUBrowsingSession *)browsingSession;
-(void)invalidateViewHostingGestureRecognizers;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_updateIfNeeded;
-(PXNumberAnimator *)_contentOffsetOverrideFactor;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)_setAccessoryVisible:(BOOL)arg1 ;
-(void)_setNeedsUpdate;
-(PXNumberAnimator *)_overridingContentOffsetY;
-(PXVerticalSwipeGestureRecognizerHelper *)verticalSwipeGestureRecognizerHelper;
-(void)_setInitialContentOffset:(CGPoint)arg1 ;
-(void)_invalidateContentOffset;
-(void)_updateContentOffsetIfNeeded;
-(CGPoint)_initialContentOffset;
-(id)init;
-(PUChangeDirectionValueFilter *)_swipeDirectionValueFilter;
-(PUAssetViewModel *)_assetViewModel;
-(void)setDelegate:(id<PUAccessoryVisibilityInteractionControllerDelegate>)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_updateGestureRecognizers;
-(void)_handleScheduledUpdate;
-(void)_setVerticalDirectionValueFilter:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_setSwipeDirectionValueFilter:(id)arg1 ;
-(id<PUAccessoryVisibilityInteractionControllerDelegate>)delegate;
-(void)_setAssetViewModel:(id)arg1 ;
-(PUChangeDirectionValueFilter *)_verticalDirectionValueFilter;
-(id)_currentAssetViewModel;
-(void)_setContentOffsetOverrideFactor:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
-(void)_setOverridingContentOffsetY:(id)arg1 ;
-(BOOL)_needsUpdate;
@end
