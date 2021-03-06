/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PXTranscriptBubbleDelegate;
@class UIView;

@interface PXTranscriptBubbleViewController : UIViewController {

	BOOL _transitionInProgress;
	CGSize _lastRequestedSize;
	long long _lastResizeRequestID;
	BOOL _isReadyForDisplay;
	id<PXTranscriptBubbleDelegate> _delegate;
	UIView* _contentView;
	UIView* _targetContentView;

}

@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * targetContentView;                                  //@synthesize targetContentView=_targetContentView - In the implementation block
@property (assign,nonatomic,__weak) id<PXTranscriptBubbleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIView *)contentView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(CGSize)_contentViewSizeThatFits:(CGSize)arg1 ;
-(CGSize)workaroundSizeForSize:(CGSize)arg1 ;
-(BOOL)_requiresResizeForCurrentSize:(CGSize)arg1 ;
-(void)setTargetContentView:(UIView *)arg1 ;
-(void)transitionToContentView:(id)arg1 ;
-(void)_scheduleContentViewUpdate;
-(void)_resizeTimeoutForRequestID:(long long)arg1 ;
-(void)_switchToPendingTargetViewIfNecessary;
-(UIView *)targetContentView;
-(void)viewWillLayoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)contentSizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<PXTranscriptBubbleDelegate>)arg1 ;
-(id<PXTranscriptBubbleDelegate>)delegate;
@end

