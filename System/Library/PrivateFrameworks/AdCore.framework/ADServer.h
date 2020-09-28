/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSDictionary, NSString, NSURLSession;

@interface ADServer : ADSingleton <NSURLSessionDelegate> {

	int _configurationExpirationTime;
	NSDictionary* _configurations;
	NSString* _resourceConnectProxyURL;
	NSURLSession* _session;

}

@property (retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSDictionary * configurations;                   //@synthesize configurations=_configurations - In the implementation block
@property (assign) int configurationExpirationTime;                 //@synthesize configurationExpirationTime=_configurationExpirationTime - In the implementation block
@property (retain) NSString * resourceConnectProxyURL;              //@synthesize resourceConnectProxyURL=_resourceConnectProxyURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
+(id)workQueue;
-(void)setConfigurationExpirationTime:(int)arg1 ;
-(void)saveProxyURL;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)restoreConfiguration;
-(NSURLSession *)session;
-(int)configurationExpirationTime;
-(NSDictionary *)configurations;
-(id)deserializeMessage:(id)arg1 error:(id*)arg2 ;
-(id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2 ;
-(void)setResourceConnectProxyURL:(NSString *)arg1 ;
-(id)init;
-(BOOL)shouldRestoreConfiguration;
-(void)setConfigurations:(NSDictionary *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)saveConfig;
-(id)serializeMessage:(id)arg1 ;
-(id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2 ;
-(NSString *)resourceConnectProxyURL;
-(void)buildConfigurationDictionary:(id)arg1 ;
@end
