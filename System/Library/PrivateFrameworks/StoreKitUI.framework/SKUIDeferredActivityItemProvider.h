/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class SKUIProductPageItem, SKUIClientContext;

@interface SKUIDeferredActivityItemProvider : UIActivityItemProvider {

	SKUIProductPageItem* _productPageItem;
	SKUIClientContext* _clientContext;
	/*^block*/id _itemProvider;

}

@property (copy) id itemProvider;                                             //@synthesize itemProvider=_itemProvider - In the implementation block
@property (retain) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (copy,readonly) SKUIProductPageItem * productPageItem;              //@synthesize productPageItem=_productPageItem - In the implementation block
+(id)placeholderItem;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)itemProvider;
-(void)setItemProvider:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUIProductPageItem *)productPageItem;
-(id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 placeholderItem:(id)arg3 ;
@end

