/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Osprey/Osprey-Structs.h>
#import <Osprey/OspreyDeviceAuthenticating.h>

@class OspreyGRPCChannel, OspreyAuthService, OspreyConnectionPreferences, NSData, NSDate, NSString;

@interface OspreyAbsintheAuthenticator : NSObject <OspreyDeviceAuthenticating> {

	OspreyGRPCChannel* _channel;
	OspreyAuthService* _authService;
	OspreyConnectionPreferences* _connectionPreferences;
	long long _state;
	NACContextOpaque_Ref _nacContext;
	NSData* _sessionInfo;
	NSDate* _sessionExpireOn;

}

@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSData * sessionInfo;                  //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSData *)sessionInfo;
-(void)setSessionInfo:(NSData *)arg1 ;
-(void)didMoveToState:(long long)arg1 ;
-(unsigned long long)authenticationStrategyVersion;
-(void)willMoveToState:(long long)arg1 ;
-(BOOL)_readyToSignClientData;
-(id)_signData:(id)arg1 ;
-(void)_ensureAuthenticatedWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(/*^block*/id)arg2 fail:(/*^block*/id)arg3 ;
-(BOOL)isSessionInfoExpired;
-(void)signData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2 ;
@end
