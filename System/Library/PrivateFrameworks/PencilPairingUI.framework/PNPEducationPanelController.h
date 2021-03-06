/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <PencilPairingUI/PNPWelcomeController.h>
#import <PencilPairingUI/PencilEducationViewControllerDelegate.h>

@class PencilEducationViewController, NSTimer, NSLayoutConstraint;

@interface PNPEducationPanelController : PNPWelcomeController <PencilEducationViewControllerDelegate> {

	BOOL _isAnimating;
	BOOL _didAdjustHeightForWidth;
	PencilEducationViewController* _educationController;
	NSTimer* _watchdogTimer;
	NSLayoutConstraint* _forcedHeightLayoutConstraint;
	CGPoint _forcedContentOffset;

}

@property (nonatomic,retain) PencilEducationViewController * educationController;              //@synthesize educationController=_educationController - In the implementation block
@property (nonatomic,retain) NSTimer * watchdogTimer;                                          //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                                 //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) BOOL didAdjustHeightForWidth;                                     //@synthesize didAdjustHeightForWidth=_didAdjustHeightForWidth - In the implementation block
@property (assign,nonatomic) CGPoint forcedContentOffset;                                      //@synthesize forcedContentOffset=_forcedContentOffset - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * forcedHeightLayoutConstraint;                //@synthesize forcedHeightLayoutConstraint=_forcedHeightLayoutConstraint - In the implementation block
+(id)_controllerWithType:(long long)arg1 buttonType:(long long)arg2 deviceType:(long long)arg3 delegate:(id)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)setWatchdogTimer:(NSTimer *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)buttonPressed:(id)arg1 ;
-(BOOL)isAnimating;
-(NSTimer *)watchdogTimer;
-(void)setEducationController:(PencilEducationViewController *)arg1 ;
-(PencilEducationViewController *)educationController;
-(void)setUpForIsAnimating:(BOOL)arg1 ;
-(void)scheduleWatchdogTimer;
-(void)setForcedContentOffset:(CGPoint)arg1 ;
-(void)cancelWatchdogTimer;
-(void)setDidAdjustHeightForWidth:(BOOL)arg1 ;
-(NSLayoutConstraint *)forcedHeightLayoutConstraint;
-(void)setForcedHeightLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)didAdjustHeightForWidth;
-(CGPoint)forcedContentOffset;
-(void)setIsAnimating:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)educationController:(id)arg1 didChangeAnimationState:(BOOL)arg2 ;
-(void)educationControllerDidChangePanel:(id)arg1 ;
-(void)educationControllerWillReplay:(id)arg1 ;
@end

