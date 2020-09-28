/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSOTRSessionNegotiation : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _priority;
	unsigned long long _timestamp;
	unsigned _result;
	NSString* _service;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                        //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                           //@synthesize result=_result - In the implementation block
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)result;
-(unsigned long long)duration;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(BOOL)hasResult;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setResult:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(BOOL)hasService;
-(BOOL)hasDuration;
-(BOOL)hasTimestamp;
-(unsigned long long)priority;
-(unsigned long long)hash;
-(BOOL)hasPriority;
-(id)description;
-(void)setHasResult:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setService:(NSString *)arg1 ;
@end
