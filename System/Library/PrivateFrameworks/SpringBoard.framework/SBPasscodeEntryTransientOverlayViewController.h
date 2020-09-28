/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFAuthenticationResponder.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>

@protocol SBUIPasscodeLockView, SBPasscodeEntryTransientOverlayViewControllerDelegate;
@class SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle, CSLockScreenPearlSettings, CSPoseidonViewController, NSString;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate> {

	BOOL _attemptingUnlock;
	SBFUserAuthenticationController* _authenticationController;
	id<SBUIPasscodeLockView> _passcodeRequester;
	SBUIPasscodeViewWithLockScreenStyle* _passcodeView;
	CSLockScreenPearlSettings* _pearlSettings;
	CSPoseidonViewController* _poseidonViewController;
	BOOL _showEmergencyCallButton;
	BOOL _useBiometricPresentation;
	int _intent;
	id<SBPasscodeEntryTransientOverlayViewControllerDelegate> _delegate;
	NSString* _unlockDestination;

}

@property (assign,nonatomic,__weak) id<SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showEmergencyCallButton;                                                           //@synthesize showEmergencyCallButton=_showEmergencyCallButton - In the implementation block
@property (assign,nonatomic) BOOL useBiometricPresentation;                                                          //@synthesize useBiometricPresentation=_useBiometricPresentation - In the implementation block
@property (nonatomic,copy) NSString * unlockDestination;                                                             //@synthesize unlockDestination=_unlockDestination - In the implementation block
@property (assign,nonatomic) int intent;                                                                             //@synthesize intent=_intent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredStatusBarStyle;
-(long long)preferredInterfaceOrientationForPresentation;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(long long)idleWarnMode;
-(void)viewDidLayoutSubviews;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(void)setIntent:(int)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithAuthenticationController:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(int)_preferredStatusBarVisibility;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(void)viewDidLoad;
-(int)intent;
-(void)setDelegate:(id<SBPasscodeEntryTransientOverlayViewControllerDelegate>)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(NSString *)arg1 ;
-(id<SBPasscodeEntryTransientOverlayViewControllerDelegate>)delegate;
-(BOOL)isContentOpaque;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)preferredDisplayLayoutElementIdentifier;
-(void)_updatePrototypeSettings;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2 ;
-(void)_attemptUnlock:(id)arg1 passcode:(id)arg2 ;
-(void)setShowEmergencyCallButton:(BOOL)arg1 ;
-(void)setUseBiometricPresentation:(BOOL)arg1 ;
-(BOOL)showEmergencyCallButton;
-(BOOL)useBiometricPresentation;
@end
