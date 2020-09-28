/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol NSObject, OS_dispatch_source, PKAddPaymentPassRequestViewControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class NSString, NSArray, PKPasscodeUpgradeFlowController, PKPaymentProvisioningController, PKAddPaymentPassRequestConfiguration, CLInUseAssertion, NSObject, PKAddPaymentPassRequest, PKTableHeaderView, OBPrivacyLinkController, RemoteUIController, PKPaymentProvisioningTracker, PKPaymentWebService;

@interface PKAddPaymentPassRequestViewController : UITableViewController <PKPaymentSetupViewControllerDelegate> {

	NSString* _title;
	NSString* _subtitle;
	NSArray* _details;
	long long _headerState;
	id<NSObject> _notificationToken;
	PKPasscodeUpgradeFlowController* _passcodeUpgradeFlowController;
	PKPaymentProvisioningController* _provisioningController;
	PKAddPaymentPassRequestConfiguration* _configuration;
	CLInUseAssertion* _passbookForegroundAssertion;
	NSObject*<OS_dispatch_source> _datasourceTimeout;
	PKAddPaymentPassRequest* _addRequest;
	CGSize _lastBoundsSize;
	BOOL _offsetForTextfieldWasCalculated;
	double _offsetForTextfield;
	BOOL _viewAppearing;
	BOOL _preconditionsValidated;
	PKTableHeaderView* _headerView;
	OBPrivacyLinkController* _privacyController;
	RemoteUIController* _termsController;
	PKPaymentProvisioningTracker* _provisioningTracker;
	BOOL _hidePrivacy;
	BOOL _singleTarget;
	id<PKAddPaymentPassRequestViewControllerDelegate> _delegate;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentWebService* _webService;

}

@property (assign,nonatomic) BOOL hidePrivacy;                                                               //@synthesize hidePrivacy=_hidePrivacy - In the implementation block
@property (assign,nonatomic) BOOL singleTarget;                                                              //@synthesize singleTarget=_singleTarget - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddPaymentPassRequestViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                  //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * webService;                                             //@synthesize webService=_webService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundColor;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)hostApplicationDidEnterBackground;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)setDelegate:(id<PKAddPaymentPassRequestViewControllerDelegate>)arg1 ;
-(void)_updateHeaderSize;
-(id<PKAddPaymentPassRequestViewControllerDelegate>)delegate;
-(void)_handleAdd:(id)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(PKPaymentWebService *)webService;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)_setHeaderState:(long long)arg1 ;
-(void)_performTerms:(id)arg1 ;
-(void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1 ;
-(void)_cancelDatasourceTimeout;
-(void)_applyHeaderState;
-(id)_titleForCurrentHeaderState;
-(void)_updateHeaderWithSubtitle:(id)arg1 ;
-(void)_performNextProvisioningStep;
-(void)_performPreconditionValidation;
-(void)_performEligibility;
-(void)_fetchCertificates;
-(void)_performPasscodeUpgradeIfNeeded;
-(void)_performProvisioning:(id)arg1 ;
-(void)_fetchAddRequestWithCertificatesResponse:(id)arg1 ;
-(void)_handleRawResponseData:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hidePrivacy;
-(void)_showEligibilityIssueForStatus:(long long)arg1 learnMoreURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_promptHSA2Required;
-(void)_presentDisplayableError:(id)arg1 allowEarlyExit:(BOOL)arg2 ;
-(void)_displayTermsForEligibilityResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setupTermsControllerHandlerWithNavigationController:(id)arg1 forCompletion:(/*^block*/id)arg2 ;
-(id)initWithPaymentWebService:(id)arg1 configuration:(id)arg2 ;
-(void)noteNavigationUserInterfaceDidDisappear;
-(void)setHidePrivacy:(BOOL)arg1 ;
-(void)_performMoreInfoItemPush;
-(BOOL)singleTarget;
-(void)setSingleTarget:(BOOL)arg1 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
