/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAccessoryContentViewControllerDelegate.h>

@protocol PUAccessoryTileViewControllerDelegate, PUAccessoryContentViewController;
@class PUAssetViewModel, PUAssetReference, UIViewController, UIView, NSString;

@interface PUAccessoryTileViewController : PUTileViewController <PUAccessoryContentViewControllerDelegate> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	BOOL _isUpdateScheduled;
	struct {
		BOOL respondsToViewHostingGestureRecognizers;
		BOOL respondsToWillHideToolbarWhenShowingAccessoryView;
	}  _delegateFlags;
	struct {
		BOOL contentViewController;
		BOOL loadedContentViewController;
		BOOL contentViewMetrics;
		BOOL contentBounds;
		BOOL masterContentOffset;
	}  _needsUpdateFlags;
	BOOL __wasActiveOnLastMasterContentOffsetChange;
	id<PUAccessoryTileViewControllerDelegate> _delegate;
	PUAssetViewModel* _assetViewModel;
	PUAssetReference* _assetReference;
	UIViewController*<PUAccessoryContentViewController> __contentViewController;
	UIViewController*<PUAccessoryContentViewController> __loadedContentViewController;
	UIView* __contentView;
	long long __contentInsetsChangeReason;
	double __minimumVisibleHeight;
	double __editorHeightDelta;
	CGRect __contentBounds;
	CGRect __untransformedMasterContentFrame;
	UIEdgeInsets __contentInsets;
	CGRect __keyboardFrame;

}

@property (setter=_setContentViewController:,nonatomic,retain) UIViewController*<PUAccessoryContentViewController> _contentViewController;                          //@synthesize _contentViewController=__contentViewController - In the implementation block
@property (setter=_setLoadedContentViewController:,nonatomic,retain) UIViewController*<PUAccessoryContentViewController> _loadedContentViewController;              //@synthesize _loadedContentViewController=__loadedContentViewController - In the implementation block
@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                                                                         //@synthesize _contentView=__contentView - In the implementation block
@property (assign,setter=_setContentBounds:,nonatomic) CGRect _contentBounds;                                                                                       //@synthesize _contentBounds=__contentBounds - In the implementation block
@property (assign,setter=_setUntransformedMasterContentFrame:,nonatomic) CGRect _untransformedMasterContentFrame;                                                   //@synthesize _untransformedMasterContentFrame=__untransformedMasterContentFrame - In the implementation block
@property (assign,setter=_setContentInsets:,nonatomic) UIEdgeInsets _contentInsets;                                                                                 //@synthesize _contentInsets=__contentInsets - In the implementation block
@property (assign,setter=_setKeyboardFrame:,nonatomic) CGRect _keyboardFrame;                                                                                       //@synthesize _keyboardFrame=__keyboardFrame - In the implementation block
@property (assign,setter=_setContentInsetsChangeReason:,nonatomic) long long _contentInsetsChangeReason;                                                            //@synthesize _contentInsetsChangeReason=__contentInsetsChangeReason - In the implementation block
@property (assign,setter=_setMinimumVisibleHeight:,nonatomic) double _minimumVisibleHeight;                                                                         //@synthesize _minimumVisibleHeight=__minimumVisibleHeight - In the implementation block
@property (assign,setter=_setWasActiveOnLastMasterContentOffsetChange:,nonatomic) BOOL _wasActiveOnLastMasterContentOffsetChange;                                   //@synthesize _wasActiveOnLastMasterContentOffsetChange=__wasActiveOnLastMasterContentOffsetChange - In the implementation block
@property (assign,setter=_setEditorHeightDelta:,nonatomic) double _editorHeightDelta;                                                                               //@synthesize _editorHeightDelta=__editorHeightDelta - In the implementation block
@property (assign,nonatomic,__weak) id<PUAccessoryTileViewControllerDelegate> delegate;                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                                                                                     //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (nonatomic,retain) PUAssetReference * assetReference;                                                                                                     //@synthesize assetReference=_assetReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_setContentView:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(void)_updateIfNeeded;
-(void)_setKeyboardFrame:(CGRect)arg1 ;
-(void)_setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_setNeedsUpdate;
-(void)dealloc;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)viewDidLoad;
-(PUAssetViewModel *)assetViewModel;
-(void)_invalidateContentBounds;
-(CGRect)_contentBounds;
-(UIViewController*<PUAccessoryContentViewController>)_contentViewController;
-(void)setDelegate:(id<PUAccessoryTileViewControllerDelegate>)arg1 ;
-(void)_setContentViewController:(id)arg1 ;
-(void)_handleScheduledUpdate;
-(PUAssetReference *)assetReference;
-(void)becomeReusable;
-(id<PUAccessoryTileViewControllerDelegate>)delegate;
-(double)_minimumVisibleHeight;
-(UIEdgeInsets)_contentInsets;
-(void)setAssetReference:(PUAssetReference *)arg1 ;
-(id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)arg1 ;
-(void)accessoryContentViewControllerContentBoundsDidChange:(id)arg1 ;
-(void)didChangeActive;
-(void)accessoryContentViewController:(id)arg1 editorHeightDidChange:(double)arg2 ;
-(BOOL)isLocationFromProviderInContentArea:(id)arg1 ;
-(void)_setLoadedContentViewController:(id)arg1 ;
-(void)_setContentBounds:(CGRect)arg1 ;
-(void)_setUntransformedMasterContentFrame:(CGRect)arg1 ;
-(double)_editorHeightDelta;
-(void)_setMinimumVisibleHeight:(double)arg1 ;
-(void)_invalidateContentViewController;
-(void)_updateContentViewControllerIfNeeded;
-(void)_invalidateLoadedContentViewController;
-(void)_updateLoadedContentViewControllerIfNeeded;
-(void)_invalidateContentViewMetrics;
-(void)_updateContentViewMetricsIfNeeded;
-(void)_updateContentBoundsIfNeeded;
-(void)_invalidateMasterContentOffset;
-(void)_updateMasterContentOffsetIfNeeded;
-(UIViewController*<PUAccessoryContentViewController>)_loadedContentViewController;
-(CGRect)_untransformedMasterContentFrame;
-(long long)_contentInsetsChangeReason;
-(void)_setContentInsetsChangeReason:(long long)arg1 ;
-(BOOL)_wasActiveOnLastMasterContentOffsetChange;
-(void)_setWasActiveOnLastMasterContentOffsetChange:(BOOL)arg1 ;
-(void)_setEditorHeightDelta:(double)arg1 ;
-(CGRect)_keyboardFrame;
-(UIView *)_contentView;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(BOOL)_needsUpdate;
@end
