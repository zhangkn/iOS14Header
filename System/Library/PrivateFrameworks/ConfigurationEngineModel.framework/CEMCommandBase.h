/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, CEMAnyPayload;

@interface CEMCommandBase : CEMPayloadBase {

	NSString* _commandType;
	NSString* _commandIdentifier;
	NSString* _commandDescription;
	NSNumber* _commandRequiresNetworkTether;
	CEMAnyPayload* _commandPayload;

}

@property (nonatomic,copy) NSString * commandType;                               //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,copy) NSString * commandIdentifier;                         //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (nonatomic,copy) NSString * commandDescription;                        //@synthesize commandDescription=_commandDescription - In the implementation block
@property (nonatomic,copy) NSNumber * commandRequiresNetworkTether;              //@synthesize commandRequiresNetworkTether=_commandRequiresNetworkTether - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * commandPayload;                       //@synthesize commandPayload=_commandPayload - In the implementation block
+(id)commandForPayload:(id)arg1 error:(id*)arg2 ;
+(id)commandForData:(id)arg1 error:(id*)arg2 ;
-(id)serialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)commandType;
-(void)setCommandType:(NSString *)arg1 ;
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(id)serializeAsDataWithError:(id*)arg1 ;
-(BOOL)mustBeSupervised;
-(int)executionLevel;
-(BOOL)loadCommandFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)commandDescription;
-(void)setCommandDescription:(NSString *)arg1 ;
-(NSNumber *)commandRequiresNetworkTether;
-(void)setCommandRequiresNetworkTether:(NSNumber *)arg1 ;
-(CEMAnyPayload *)commandPayload;
-(void)setCommandPayload:(CEMAnyPayload *)arg1 ;
@end

