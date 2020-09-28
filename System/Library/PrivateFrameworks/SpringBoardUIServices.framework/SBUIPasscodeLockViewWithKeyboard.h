/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>
#import <libobjc.A.dylib/SBUIPasscodeEntryFieldDelegate.h>

@class SBPasscodeKeyboardAnimator, SBUIAlphanumericPasscodeEntryField, UIView, UIControl, UILabel, NSString;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {

	SBPasscodeKeyboardAnimator* _keyboardAnimator;
	SBUIAlphanumericPasscodeEntryField* _alphaEntryField;
	UIView* _statusFieldBackground;
	UIControl* _emergencyCallButton;
	BOOL _usesLightStyle;
	BOOL _isResigningResponderStatus;
	BOOL _keyboardVisible;
	double _keyboardHeightOffset;
	BOOL _keyboardTracksLockView;
	UIView* _keyboardTrackingView;
	UILabel* _statusField;
	UILabel* _statusSubtitleView;

}

@property (nonatomic,retain) UILabel * statusField;                     //@synthesize statusField=_statusField - In the implementation block
@property (nonatomic,retain) UILabel * statusSubtitleView;              //@synthesize statusSubtitleView=_statusSubtitleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)beginTransitionToState:(long long)arg1 ;
-(void)didEndTransitionToState:(long long)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)passcode;
-(id)initWithLightStyle:(BOOL)arg1 ;
-(void)_updateFont;
-(id)_newStatusField;
-(void)setStatusField:(UILabel *)arg1 ;
-(id)_newStatusSubtitleView;
-(void)setStatusSubtitleView:(UILabel *)arg1 ;
-(void)_hardwareReturnKeyPressed:(id)arg1 ;
-(void)_keyboardDidHideNotification:(id)arg1 ;
-(void)_keyboardWillShowNotification:(id)arg1 ;
-(void)_keyboardWillChangeFrameNotification:(id)arg1 ;
-(void)_keyboardDidRequestDismissalNotification:(id)arg1 ;
-(void)_toggleForEmergencyCall;
-(void)_toggleForStatusField;
-(void)_setKeyboardTracksLockView:(BOOL)arg1 ;
-(id)_viewForKeyboardTracking;
-(void)_layoutForMinimizationState:(BOOL)arg1 ;
-(void)_acceptOrCancelReturnKeyPress;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegatePasscodeCancelled;
-(void)_notifyDelegateThatEmergencyCallButtonWasPressed;
-(UILabel *)statusField;
-(UILabel *)statusSubtitleView;
-(CGRect)_keyboardFrameForInterfaceOrientation:(long long)arg1 ;
-(double)_keyboardToEntryFieldOffset;
-(double)_largeTextEmergencyButtonMaxWidth;
-(void)_layoutStatusView;
-(double)_statusTitleWidth;
-(double)_statusFieldHeightWithWidth:(double)arg1 ;
-(void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)arg1 ;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg1 ;
-(id)_statusTitleView;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg1 ;
-(BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(BOOL)passcodeEntryFieldShouldShowSystemKeyboard:(id)arg1 ;
-(void)resignActiveWithAnimationSettings:(id)arg1 ;
-(id)_statusSubtitleView;
-(id)_alphanumericPasscodeEntryField;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)updateForTransitionToPasscodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)_luminanceBoostDidChange;
-(void)becomeActiveWithAnimationSettings:(id)arg1 ;
@end
