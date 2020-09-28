/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIView, UIImageView, UIVisualEffectView, NSString;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {

	BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
	unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
	UIView* _backgroundView;
	UIImageView* _wallpaperView;
	UIVisualEffectView* _blurView;
	BOOL _hasStatusBarStyleOverride;
	long long _statusBarStyleOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)init;
-(void)_updateBarAppearanceForViewController:(id)arg1 ;
-(void)_updateWithWallpaperImage:(id)arg1 ;
-(void)setupBackgroundViewWithBlurEffect:(long long)arg1 ;
-(void)setupWallpaper;
-(void)setNeedsNavigationBarUpdate;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_canShowWhileLocked;
@end
