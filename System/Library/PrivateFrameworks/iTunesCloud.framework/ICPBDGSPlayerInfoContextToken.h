/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ICPBDGSPlayerInfoContextToken : PBCodable <NSCopying> {

	unsigned long long _sessionID;
	NSData* _token;
	SCD_Struct_IC7 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                            //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)sessionID;
-(void)setToken:(NSData *)arg1 ;
-(NSData *)token;
-(BOOL)hasToken;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

