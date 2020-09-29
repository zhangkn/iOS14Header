/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@class UIColor, PUBrowsingViewModel, _UIContentUnavailableView, NSString;

@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver> {

	BOOL _shouldDisplayEmptyPlaceholder;
	BOOL __needsUpdateColor;
	UIColor* _backgroundColorOverride;
	PUBrowsingViewModel* _viewModel;
	/*^block*/id __nextColorUpdateAnimatorBlock;
	_UIContentUnavailableView* __emptyPlaceholderView;
	CGRect __emptyPlaceholderFrame;

}

@property (assign,setter=_setNeedsUpdateColor:,nonatomic) BOOL _needsUpdateColor;                                             //@synthesize _needsUpdateColor=__needsUpdateColor - In the implementation block
@property (setter=_setNextColorUpdateAnimatorBlock:,nonatomic,copy) id _nextColorUpdateAnimatorBlock;                         //@synthesize _nextColorUpdateAnimatorBlock=__nextColorUpdateAnimatorBlock - In the implementation block
@property (setter=_setEmptyPlaceholderView:,nonatomic,retain) _UIContentUnavailableView * _emptyPlaceholderView;              //@synthesize _emptyPlaceholderView=__emptyPlaceholderView - In the implementation block
@property (assign,setter=_setEmptyPlaceholderFrame:,nonatomic) CGRect _emptyPlaceholderFrame;                                 //@synthesize _emptyPlaceholderFrame=__emptyPlaceholderFrame - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorOverride;                                                               //@synthesize backgroundColorOverride=_backgroundColorOverride - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayEmptyPlaceholder;                                                              //@synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * viewModel;                                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)_needsUpdateColor;
-(void)_invalidateColor;
-(void)_updateEmptyPlaceholderAnimated:(BOOL)arg1 ;
-(CGRect)_emptyPlaceholderFrame;
-(void)setBackgroundColorOverride:(UIColor *)arg1 ;
-(void)_setNeedsUpdateColor:(BOOL)arg1 ;
-(void)setShouldDisplayEmptyPlaceholder:(BOOL)arg1 ;
-(void)applyLayoutInfo:(id)arg1 ;
-(CGRect)_emptyPlaceholderFrameForLayoutInfo:(id)arg1 ;
-(void)viewDidLoad;
-(PUBrowsingViewModel *)viewModel;
-(void)_invalidateColorWithAnimatorBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldDisplayEmptyPlaceholder;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(_UIContentUnavailableView *)_emptyPlaceholderView;
-(UIColor *)backgroundColorOverride;
-(void)_updateColorIfNeeded;
-(void)_setEmptyPlaceholderView:(id)arg1 ;
-(id)_nextColorUpdateAnimatorBlock;
-(void)_setEmptyPlaceholderFrame:(CGRect)arg1 ;
-(void)_setNextColorUpdateAnimatorBlock:(/*^block*/id)arg1 ;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
@end
