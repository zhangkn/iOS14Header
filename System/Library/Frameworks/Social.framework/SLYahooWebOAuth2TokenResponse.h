/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLWebOAuth2TokenResponse.h>

@class NSDictionary, NSError, NSString, NSDate;

@interface SLYahooWebOAuth2TokenResponse : NSObject <SLWebOAuth2TokenResponse> {

	NSDictionary* _data;
	NSError* _error;
	NSString* _errorMessage;
	NSDate* _expiryDate;
	NSString* _GUID;
	NSString* _refreshToken;
	long long _statusCode;
	NSString* _token;
	NSString* _idToken;

}

@property (readonly) long long statusCode;                          //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSDictionary * data;                           //@synthesize data=_data - In the implementation block
@property (readonly) NSString * token;                              //@synthesize token=_token - In the implementation block
@property (readonly) NSString * refreshToken;                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSString * idToken;                            //@synthesize idToken=_idToken - In the implementation block
@property (readonly) NSDate * expiryDate;                           //@synthesize expiryDate=_expiryDate - In the implementation block
@property (readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;                       //@synthesize errorMessage=_errorMessage - In the implementation block
@property (getter=UID,readonly) NSString * GUID;                    //@synthesize GUID=_GUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)statusCode;
-(NSDictionary *)data;
-(NSDate *)expiryDate;
-(NSString *)refreshToken;
-(NSError *)error;
-(NSString *)token;
-(NSString *)errorMessage;
-(NSString *)GUID;
-(NSString *)idToken;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end
