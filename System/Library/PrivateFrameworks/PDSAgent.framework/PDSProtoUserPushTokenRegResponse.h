/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PDSProtoUserPushToken;

@interface PDSProtoUserPushTokenRegResponse : PBCodable <NSCopying> {

	NSString* _message;
	int _status;
	PDSProtoUserPushToken* _userPushToken;

}

@property (nonatomic,retain) PDSProtoUserPushToken * userPushToken;              //@synthesize userPushToken=_userPushToken - In the implementation block
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                                 //@synthesize message=_message - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(void)setMessage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasMessage;
-(NSString *)message;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setUserPushToken:(PDSProtoUserPushToken *)arg1 ;
-(PDSProtoUserPushToken *)userPushToken;
@end
