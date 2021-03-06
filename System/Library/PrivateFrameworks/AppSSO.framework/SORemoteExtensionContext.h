/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/SORemoteExtensionContextProtocol.h>
#import <libobjc.A.dylib/SOExtensionContext.h>

@class SOExtensionServiceConnection, SOExtensionViewService, ASAuthorizationProviderExtensionAuthorizationRequest, NSString;

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext> {

	SOExtensionServiceConnection* _extensionServiceConnection;
	SOExtensionViewService* _viewService;
	ASAuthorizationProviderExtensionAuthorizationRequest* _extensionAuthorizationRequest;

}

@property (__weak) SOExtensionViewService * viewService;                                                                             //@synthesize viewService=_viewService - In the implementation block
@property (nonatomic,readonly) id<ASAuthorizationProviderExtensionAuthorizationRequestHandler> extensionViewController; 
@property (nonatomic,readonly) ASAuthorizationProviderExtensionAuthorizationRequest * extensionAuthorizationRequest;                 //@synthesize extensionAuthorizationRequest=_extensionAuthorizationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(BOOL)canOpenURL:(id)arg1 ;
-(id)synchronousHostContextWithError:(id*)arg1 ;
-(ASAuthorizationProviderExtensionAuthorizationRequest *)extensionAuthorizationRequest;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<ASAuthorizationProviderExtensionAuthorizationRequestHandler>)extensionViewController;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)hostContextWithError:(id*)arg1 ;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)_disableAppSSOInCFNetwork;
-(SOExtensionViewService *)viewService;
-(void)setViewService:(SOExtensionViewService *)arg1 ;
@end

