/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUModalTransition.h>

@protocol PUPhotosSharingTransitionViewController, PUPhotosSharingTransitionDelegate;
@class UIViewController, PUPhotosSharingTransitionContext, UICollectionViewLayout;

@interface PUPhotosSharingTransition : PUModalTransition {

	UIViewController*<PUPhotosSharingTransitionViewController> _sharingTransitionViewController;
	PUPhotosSharingTransitionContext* _photosSharingTransitionContext;
	id<PUPhotosSharingTransitionDelegate> _delegate;
	UICollectionViewLayout* __transitionLayout;

}

@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;                                 //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (nonatomic,retain) UIViewController*<PUPhotosSharingTransitionViewController> sharingTransitionViewController;              //@synthesize sharingTransitionViewController=_sharingTransitionViewController - In the implementation block
@property (nonatomic,retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;                                       //@synthesize photosSharingTransitionContext=_photosSharingTransitionContext - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotosSharingTransitionDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
-(void)setPhotosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1 ;
-(void)_setTransitionLayout:(id)arg1 ;
-(UICollectionViewLayout *)_transitionLayout;
-(PUPhotosSharingTransitionContext *)photosSharingTransitionContext;
-(UIViewController*<PUPhotosSharingTransitionViewController>)sharingTransitionViewController;
-(void)setSharingTransitionViewController:(UIViewController*<PUPhotosSharingTransitionViewController>)arg1 ;
-(void)setDelegate:(id<PUPhotosSharingTransitionDelegate>)arg1 ;
-(id<PUPhotosSharingTransitionDelegate>)delegate;
-(void)animatePresentTransition;
-(void)animateDismissTransition;
@end

