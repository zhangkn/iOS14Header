/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface ICAddToWishListResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) long long statusCode; 
@property (nonatomic,readonly) NSString * message; 
-(long long)statusCode;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)message;
-(id)description;
@end
