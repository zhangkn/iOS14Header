/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentDataProvider, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate;
@class PKPaymentTransaction;

@interface PKPaymentTransactionReportFraudConfirmationViewController : PKExplanationViewController {

	PKPaymentTransaction* _transaction;
	id<PKPaymentDataProvider> _dataProvider;
	id<PKPaymentTransactionReportFraudConfirmationViewControllerDelegate> _fraudDelegate;

}
-(void)reportFraud:(id)arg1 ;
-(id)initWithContext:(long long)arg1 transaction:(id)arg2 dataProvider:(id)arg3 fraudDelegate:(id)arg4 ;
-(void)viewDidLoad;
@end

