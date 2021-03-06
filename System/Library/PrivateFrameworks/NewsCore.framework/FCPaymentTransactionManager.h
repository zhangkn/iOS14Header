/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCPaymentTransactionManager
@property (assign,nonatomic,__weak) id<FCPaymentTransactionManagerDelegate> delegate; 
@required
-(void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8;
-(id<FCPaymentTransactionManagerDelegate>)delegate;
-(BOOL)canMakePayments;

@end

