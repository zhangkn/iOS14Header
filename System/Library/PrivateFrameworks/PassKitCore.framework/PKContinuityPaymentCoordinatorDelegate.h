/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKContinuityPaymentCoordinatorDelegate <PKContinuityPaymentServiceDelegate>
@required
-(void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg1;
-(void)continuityPaymentCoordinator:(id)arg1 didTimeoutTotalWithPaymentDevices:(id)arg2;
-(void)continuityPaymentCoordinator:(id)arg1 didReceivePayment:(id)arg2;
-(void)continuityPaymentCoordinator:(id)arg1 didReceiveUpdatedPaymentDevices:(id)arg2;
-(void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg1;

@end

