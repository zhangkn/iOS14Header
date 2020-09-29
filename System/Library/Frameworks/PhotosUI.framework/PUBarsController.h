/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PUBarsControllerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIViewController;

@interface PUBarsController : NSObject {

	struct {
		BOOL respondsToViewController;
		BOOL respondsToViewHostingGestureRecognizers;
		BOOL respondsToContentGuideInsetsDidChange;
	}  _delegateFlags;
	BOOL __needsUpdateBars;
	BOOL __needsUpdateGestureRecognizers;
	BOOL __needsUpdateContentGuideInsets;
	BOOL __isUpdateScheduled;
	id<PUBarsControllerDelegate> _delegate;
	long long __updateBarsDisabledCount;
	UIViewController* _viewController;
	UIEdgeInsets _contentGuideInsets;

}

@property (assign,setter=_setNeedsUpdateBars:,nonatomic) BOOL _needsUpdateBars;                                          //@synthesize _needsUpdateBars=__needsUpdateBars - In the implementation block
@property (assign,setter=_setNeedsUpdateGestureRecognizers:,nonatomic) BOOL _needsUpdateGestureRecognizers;              //@synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers - In the implementation block
@property (assign,setter=_setNeedsUpdateContentGuideInsets:,nonatomic) BOOL _needsUpdateContentGuideInsets;              //@synthesize _needsUpdateContentGuideInsets=__needsUpdateContentGuideInsets - In the implementation block
@property (assign,setter=_setUpdateScheduled:,nonatomic) BOOL _isUpdateScheduled;                                        //@synthesize _isUpdateScheduled=__isUpdateScheduled - In the implementation block
@property (assign,setter=_setUpdateBarsDisabledCount:,nonatomic) long long _updateBarsDisabledCount;                     //@synthesize _updateBarsDisabledCount=__updateBarsDisabledCount - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                   //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentGuideInsets;                                                            //@synthesize contentGuideInsets=_contentGuideInsets - In the implementation block
@property (assign,nonatomic,__weak) id<PUBarsControllerDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL prefersStatusBarHidden; 
@property (nonatomic,readonly) BOOL wantsNavigationBarVisible; 
@property (nonatomic,readonly) BOOL wantsToolbarVisible; 
@property (nonatomic,readonly) long long preferredBarStyle; 
-(void)_setUpdateScheduled:(BOOL)arg1 ;
-(BOOL)_isUpdateScheduled;
-(void)invalidateViewHostingGestureRecognizers;
-(UIViewController *)viewController;
-(void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1 ;
-(void)_setNeedsUpdate;
-(UIEdgeInsets)contentGuideInsets;
-(void)invalidateBars;
-(void)_updateNowIfNeeded;
-(BOOL)isLocationFromProviderInBarsArea:(id)arg1 ;
-(void)_updateBarsIfNeeded;
-(void)invalidateContentGuideInsets;
-(void)_updateContentGuideInsetsIfNeeded;
-(BOOL)_isUpdateBarsDisabled;
-(void)disableUpdateBarsForDuration:(double)arg1 ;
-(void)_reenableUpdateBars;
-(BOOL)_needsUpdateBars;
-(void)_setNeedsUpdateBars:(BOOL)arg1 ;
-(BOOL)_needsUpdateContentGuideInsets;
-(void)_setNeedsUpdateContentGuideInsets:(BOOL)arg1 ;
-(long long)_updateBarsDisabledCount;
-(void)_setUpdateBarsDisabledCount:(long long)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)updateBars;
-(void)updateContentGuideInsets;
-(void)updateIfNeeded;
-(BOOL)_needsUpdateGestureRecognizers;
-(id)init;
-(void)setContentGuideInsets:(UIEdgeInsets)arg1 ;
-(void)setDelegate:(id<PUBarsControllerDelegate>)arg1 ;
-(BOOL)wantsToolbarVisible;
-(id<PUBarsControllerDelegate>)delegate;
-(void)invalidateViewControllerView;
-(void)_invalidateGestureRecognizers;
-(BOOL)wantsNavigationBarVisible;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredBarStyle;
-(void)updateGestureRecognizersWithHostingView:(id)arg1 ;
-(void)_updateGestureRecognizersIfNeeded;
-(BOOL)_needsUpdate;
@end
