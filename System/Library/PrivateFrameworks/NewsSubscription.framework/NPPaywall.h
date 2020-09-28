/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSoftPaywallHeightProvider, NPDeferredHardPaywallHeightProvider, UIViewController;

@interface NPPaywall : NSObject {

	 paywallType;
	 softPaywallHeightProvider;
	 deferredHardPaywallHeightProvider;
	 paywallViewControllerWrapper;
	 delegate;
	 internalDelegate;

}

@property (readonly,nonatomic) long long paywallType; 
@property (readonly,nonatomic) NPSoftPaywallHeightProvider * softPaywallHeightProvider; 
@property (readonly,nonatomic) NPDeferredHardPaywallHeightProvider * deferredHardPaywallHeightProvider; 
@property (readonly,nonatomic) UIViewController * paywallViewController; 
@property (assign,__weak,nonatomic) id<NPPaywallDelegate> delegate; 
-(UIViewController *)paywallViewController;
-(NPDeferredHardPaywallHeightProvider *)deferredHardPaywallHeightProvider;
-(id)init;
-(void)setDelegate:(id<NPPaywallDelegate>)arg1 ;
-(id<NPPaywallDelegate>)delegate;
-(long long)paywallType;
-(NPSoftPaywallHeightProvider *)softPaywallHeightProvider;
@end
