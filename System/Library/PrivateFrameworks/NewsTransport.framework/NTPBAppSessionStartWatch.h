/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAppSessionStartWatch : PBCodable <NSCopying> {

	int _sessionStartMethodWatch;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasSessionStartMethodWatch; 
@property (assign,nonatomic) int sessionStartMethodWatch;                  //@synthesize sessionStartMethodWatch=_sessionStartMethodWatch - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)sessionStartMethodWatch;
-(void)setSessionStartMethodWatch:(int)arg1 ;
-(void)setHasSessionStartMethodWatch:(BOOL)arg1 ;
-(BOOL)hasSessionStartMethodWatch;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

