/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWifiAwdlServiceRecord : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned _opcode;
	unsigned _serviceId;
	NSData* _serviceKey;
	unsigned _type;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasOpcode; 
@property (assign,nonatomic) unsigned opcode;                          //@synthesize opcode=_opcode - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasServiceId; 
@property (assign,nonatomic) unsigned serviceId;                       //@synthesize serviceId=_serviceId - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceKey; 
@property (nonatomic,retain) NSData * serviceKey;                      //@synthesize serviceKey=_serviceKey - In the implementation block
-(void)setHasDuration:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned)serviceId;
-(BOOL)hasServiceKey;
-(unsigned)opcode;
-(void)setOpcode:(unsigned)arg1 ;
-(void)setServiceKey:(NSData *)arg1 ;
-(void)setServiceId:(unsigned)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(BOOL)hasDuration;
-(unsigned long long)hash;
-(BOOL)hasOpcode;
-(BOOL)hasServiceId;
-(NSData *)serviceKey;
-(void)setHasOpcode:(BOOL)arg1 ;
-(void)setHasServiceId:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

