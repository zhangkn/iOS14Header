/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKProductStorePromotionController : NSObject
+(id)defaultController;
-(void)_fetchProductsForPromotionOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchStorePromotionVisibilityForProduct:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateStorePromotionVisibility:(long long)arg1 forProduct:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchStorePromotionOrderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateStorePromotionOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
