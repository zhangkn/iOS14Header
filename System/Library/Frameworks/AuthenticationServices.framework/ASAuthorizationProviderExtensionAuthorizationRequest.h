/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOAuthorizationRequest, NSURL, NSString, NSDictionary, NSData;

@interface ASAuthorizationProviderExtensionAuthorizationRequest : NSObject {

	SOAuthorizationRequest* _authorizationRequest;

}

@property (nonatomic,readonly) SOAuthorizationRequest * authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * requestedOperation; 
@property (nonatomic,readonly) NSDictionary * httpHeaders; 
@property (nonatomic,readonly) NSData * httpBody; 
@property (nonatomic,copy,readonly) NSString * realm; 
@property (nonatomic,readonly) NSDictionary * extensionData; 
@property (nonatomic,copy,readonly) NSString * callerBundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * authorizationOptions; 
@property (getter=isCallerManaged,nonatomic,readonly) BOOL callerManaged; 
@property (nonatomic,readonly) NSString * callerTeamIdentifier; 
@property (nonatomic,readonly) NSString * localizedCallerDisplayName; 
-(NSString *)realm;
-(void)cancel;
-(NSData *)httpBody;
-(NSDictionary *)authorizationOptions;
-(SOAuthorizationRequest *)authorizationRequest;
-(void)doNotHandle;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)httpHeaders;
-(NSDictionary *)extensionData;
-(NSString *)requestedOperation;
-(NSString *)callerTeamIdentifier;
-(void)completeWithError:(id)arg1 ;
-(NSString *)localizedCallerDisplayName;
-(NSURL *)url;
-(id)initWithAuthorizationRequest:(id)arg1 ;
-(void)complete;
-(NSString *)callerBundleIdentifier;
-(BOOL)isCallerManaged;
@end

