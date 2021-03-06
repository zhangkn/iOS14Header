/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCAPNInfo : NSObject {

	NSString* _apnName;
	NSString* _username;
	NSString* _password;
	NSString* _proxy;
	NSNumber* _proxyPort;

}

@property (nonatomic,retain) NSString * apnName;                //@synthesize apnName=_apnName - In the implementation block
@property (nonatomic,retain) NSString * username;               //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxy;                  //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;              //@synthesize proxyPort=_proxyPort - In the implementation block
-(void)setProxy:(NSString *)arg1 ;
-(id)installationWarnings;
-(NSString *)proxy;
-(NSNumber *)proxyPort;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(id)defaultsRepresentation;
-(id)strippedDefaultsRepresentation;
-(NSString *)username;
-(void)setApnName:(NSString *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)description;
-(NSString *)apnName;
@end

