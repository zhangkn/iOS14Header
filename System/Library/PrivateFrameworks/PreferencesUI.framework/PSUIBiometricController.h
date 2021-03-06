/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <PreferencesUI/PSUIPasscodeLockController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class PSEnrollContainerViewController, NSString;

@interface PSUIBiometricController : PSUIPasscodeLockController <UIPopoverControllerDelegate> {

	BOOL _currentlyEnablingTouchIDForPurchases;
	long long _storeState;
	PSEnrollContainerViewController* _enrollContainerController;
	/*^block*/id _modalFlowSuccessCompletion;
	/*^block*/id _modalFlowCancelCompletion;

}

@property (assign,nonatomic) long long storeState;                                                            //@synthesize storeState=_storeState - In the implementation block
@property (assign,nonatomic,__weak) PSEnrollContainerViewController * enrollContainerController;              //@synthesize enrollContainerController=_enrollContainerController - In the implementation block
@property (nonatomic,copy) id modalFlowSuccessCompletion;                                                     //@synthesize modalFlowSuccessCompletion=_modalFlowSuccessCompletion - In the implementation block
@property (nonatomic,copy) id modalFlowCancelCompletion;                                                      //@synthesize modalFlowCancelCompletion=_modalFlowCancelCompletion - In the implementation block
@property (assign,nonatomic) BOOL currentlyEnablingTouchIDForPurchases;                                       //@synthesize currentlyEnablingTouchIDForPurchases=_currentlyEnablingTouchIDForPurchases - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPresentInModalSheet;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)authorizationToken;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)didUnlock;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)hideCancelButton;
-(void)didCancelEnteringPIN;
-(void)setupBiometricLogoHeader;
-(void)setModalFlowSuccessCompletion:(id)arg1 ;
-(void)enrollBiometric;
-(void)presentPasscodePaneFromSpecifier:(id)arg1 ;
-(BOOL)hasPasscodeAndBiometric;
-(BOOL)isTouchIDUnlockRestricted;
-(void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldRestrictFeaturesRequiringEnrollment;
-(void)setStoreState:(long long)arg1 ;
-(BOOL)currentlyEnablingTouchIDForPurchases;
-(long long)storeState;
-(void)setCurrentlyEnablingTouchIDForPurchases:(BOOL)arg1 ;
-(void)updateStoreBiometricsState;
-(BOOL)isTouchIDForPurchasesRestricted;
-(BOOL)isTouchIDForStockholmRestricted;
-(BOOL)isBiometricEditingAllowed;
-(id)biometricLogo;
-(id)biometricTableViewHeader;
-(id)headerForUseBiometricSection;
-(void)setBiometricUnlockEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDUnlockEnabled:(id)arg1 ;
-(void)setTouchIDForPurchasesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDForPurchasesEnabled:(id)arg1 ;
-(void)setTouchIDForStockholmEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDForStockholmEnabled:(id)arg1 ;
-(void)setSafariAutoFillEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)safariAutoFillEnabled:(id)arg1 ;
-(BOOL)isSafariAutofillRestricted;
-(void)presentSheetForContentViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_passcodeControllerForSpecifier:(id)arg1 ;
-(id)passcodeController;
-(PSEnrollContainerViewController *)enrollContainerController;
-(id)modalFlowSuccessCompletion;
-(void)setModalFlowCancelCompletion:(id)arg1 ;
-(void)_popEnrollmentControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)modalFlowCancelCompletion;
-(void)setEnrollContainerController:(PSEnrollContainerViewController *)arg1 ;
-(void)enrollmentControllerDidDismiss;
-(void)completeModalFlow;
-(void)cancelModalFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)updateTouchIDUnlockSpecifier;
-(void)updateTouchIDForPurchasesSpecifier;
-(void)updateTouchIDForStockholmSpecifier;
-(BOOL)isEnrollmentAvailable;
-(id)useBiometricForSpecifiers;
-(void)presentSheetForContentViewController:(id)arg1 ;
-(void)pushPasscodePane;
-(void)enrollmentCompletedForIdentity:(id)arg1 ;
@end

