/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/ASCLockupViewDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UICollectionView;

@interface GameCenterUI.BaseCollectionViewController : UICollectionViewController <ASCLockupViewDelegate, UIAdaptivePresentationControllerDelegate> {

	 overlayView;
	 wantsHiddenNavigationBar;
	 wantsHiddenTitle;
	 manualScrollEdgeAppearanceProgress;
	 scrollObserver;
	 navbarScrollObserver;

}

@property (retain,nonatomic) UICollectionView * collectionView; 
-(id)presentingViewControllerForLockupView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)loadView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
