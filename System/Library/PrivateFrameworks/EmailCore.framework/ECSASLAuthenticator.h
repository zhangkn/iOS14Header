/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECAuthenticatableConnection, ECAuthenticatableAccount;
@class ECAuthenticationScheme, NSString;

@interface ECSASLAuthenticator : NSObject {

	id<ECAuthenticatableConnection> _connection;
	ECAuthenticationScheme* _authenticationScheme;
	id<ECAuthenticatableAccount> _account;
	long long _authenticationState;

}

@property (nonatomic,readonly) ECAuthenticationScheme * authenticationScheme;              //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,readonly) id<ECAuthenticatableAccount> account; 
@property (nonatomic,readonly) NSString * saslName; 
@property (nonatomic,readonly) BOOL supportsInitialClientResponse; 
@property (assign,nonatomic) long long authenticationState; 
@property (nonatomic,readonly) BOOL justSentPlainTextPassword; 
@property (nonatomic,readonly) id<ECSASLSecurityLayer> securityLayer; 
@property (getter=isUsingSSL,nonatomic,readonly) BOOL usingSSL; 
@property (nonatomic,readonly) BOOL usesBase64EncodeResponseData; 
@property (nonatomic,readonly) BOOL couldRetry; 
-(id<ECAuthenticatableAccount>)account;
-(BOOL)usesBase64EncodeResponseData;
-(BOOL)justSentPlainTextPassword;
-(id)initWithAuthenticationScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(NSString *)saslName;
-(void)setMissingPasswordError;
-(id<ECSASLSecurityLayer>)securityLayer;
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(long long)arg1 ;
-(long long)authenticationState;
-(ECAuthenticationScheme *)authenticationScheme;
-(id)authScheme;
-(BOOL)supportsInitialClientResponse;
-(BOOL)isUsingSSL;
-(BOOL)couldRetry;
@end

