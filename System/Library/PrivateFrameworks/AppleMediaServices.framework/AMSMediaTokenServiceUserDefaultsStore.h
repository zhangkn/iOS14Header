/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AMSMediaTokenServiceUserDefaultsStore : NSObject {

	NSString* _clientIdentifier;

}

@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(BOOL)storeToken:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)retrieveToken;
@end

