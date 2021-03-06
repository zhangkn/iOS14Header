/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, ICAddToWishListResponse;

@interface ICAddToWishListRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _buyParams;
	long long _storeItemID;
	NSString* _itemName;
	NSString* _itemKind;
	ICAddToWishListResponse* _response;

}
-(id)initWithRequestContext:(id)arg1 buyParams:(id)arg2 storeItemID:(long long)arg3 itemName:(id)arg4 itemKind:(id)arg5 ;
-(id)initWithRequestContext:(id)arg1 platformMetadataItem:(id)arg2 ;
-(void)execute;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
@end

