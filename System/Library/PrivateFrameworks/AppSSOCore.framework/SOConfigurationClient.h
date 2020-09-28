/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOClient, SOConfiguration, SOConfigurationVersion;

@interface SOConfigurationClient : NSObject {

	SOClient* _client;
	SOConfiguration* _configuration;
	SOConfigurationVersion* _configurationVersion;

}

@property (nonatomic,readonly) SOConfiguration * configuration; 
@property (nonatomic,readonly) long long configVersion; 
+(id)defaultClient;
-(long long)configVersion;
-(void)_checkNewVersion;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(BOOL)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
-(id)init;
-(void)_reloadConfig;
-(SOConfiguration *)configuration;
@end
