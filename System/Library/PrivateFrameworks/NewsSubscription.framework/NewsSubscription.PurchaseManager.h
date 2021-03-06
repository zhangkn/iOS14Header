/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSPurchaseResponseProtocol.h>
#import <libobjc.A.dylib/FCPurchaseManagerDelegate.h>

@interface NewsSubscription.PurchaseManager : NSObject <AMSPurchaseResponseProtocol, FCPurchaseManagerDelegate> {

	 purchaseObservers;
	 transactionObservers;
	 internalPurchaseManager;
	 purchaseController;
	 purchaseContextEntriesManager;
	 metricsBuilder;
	 bundleSubscriptionManager;

}
-(void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2 ;
-(id)init;
@end

