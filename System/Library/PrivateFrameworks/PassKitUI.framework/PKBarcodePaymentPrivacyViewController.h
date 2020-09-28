/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>

@class PKPaymentPass, PKPaymentSetupProduct, PKLinkedApplication, NSString;

@interface PKBarcodePaymentPrivacyViewController : PKExplanationViewController <PKLinkedApplicationObserver> {

	unsigned long long _displayContext;
	PKPaymentPass* _pass;
	PKPaymentSetupProduct* _product;
	PKLinkedApplication* _linkedApplication;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)_openAppButtonPressed:(id)arg1 ;
-(void)_updateOpenApplicationButtonVisibility;
-(id)initWithPaymentPass:(id)arg1 linkedApplication:(id)arg2 displayContext:(unsigned long long)arg3 paymentSetupContext:(long long)arg4 ;
-(id)_partnerName;
-(void)viewDidLoad;
-(id)initWithPaymentSetupProduct:(id)arg1 linkedApplication:(id)arg2 displayContext:(unsigned long long)arg3 paymentSetupContext:(long long)arg4 ;
-(void)_dismiss;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(id)_initWithPaymentPass:(id)arg1 paymentSetupProduct:(id)arg2 linkedApplication:(id)arg3 displayContext:(unsigned long long)arg4 paymentSetupContext:(long long)arg5 ;
-(void)_closeButtonPressed:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
@end
