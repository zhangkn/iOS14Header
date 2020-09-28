/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MRDeviceInfo, NSError;

@interface MRExternalDeviceTransport : NSObject {

	long long _connectionType;
	BOOL _requiresCustomPairing;
	NSString* _uid;

}

@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
@property (nonatomic,readonly) NSString * uid;                                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) long long port; 
@property (nonatomic,readonly) BOOL requiresCustomPairing;                          //@synthesize requiresCustomPairing=_requiresCustomPairing - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSystemAuthenticationPrompt; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) long long connectionType;                            //@synthesize connectionType=_connectionType - In the implementation block
-(long long)port;
-(MRDeviceInfo *)deviceInfo;
-(void)reset;
-(NSError *)error;
-(long long)connectionType;
-(NSString *)hostname;
-(NSString *)name;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(BOOL)requiresCustomPairing;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(NSString *)uid;
@end
