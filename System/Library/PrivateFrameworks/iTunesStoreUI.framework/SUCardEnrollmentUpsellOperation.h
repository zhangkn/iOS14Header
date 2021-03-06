/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/SUPaymentSetupViewControllerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSString, UIViewController;

@interface SUCardEnrollmentUpsellOperation : ISOperation <SUPaymentSetupViewControllerDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _referrerIdentifier;
	long long _paymentSetupFeatureState;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	UIViewController* _viewController;

}

@property (assign,nonatomic) long long paymentSetupFeatureState;                      //@synthesize paymentSetupFeatureState=_paymentSetupFeatureState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) BOOL didSucceed; 
@property (nonatomic,copy) NSString * referrerIdentifier;                             //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
-(NSString *)referrerIdentifier;
-(void)run;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(BOOL)didSucceed;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)paymentSetupViewControllerDidDismiss;
-(long long)paymentSetupFeatureState;
-(id)_paymentSetupFeature;
-(void)setPaymentSetupFeatureState:(long long)arg1 ;
@end

