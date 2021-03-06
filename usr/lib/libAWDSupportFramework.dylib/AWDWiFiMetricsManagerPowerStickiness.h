/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerPowerStickiness : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _enabled;
	unsigned _stickiness;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) unsigned enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasStickiness; 
@property (assign,nonatomic) unsigned stickiness;                       //@synthesize stickiness=_stickiness - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)enabled;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(void)setEnabled:(unsigned)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setStickiness:(unsigned)arg1 ;
-(void)setHasStickiness:(BOOL)arg1 ;
-(BOOL)hasStickiness;
-(unsigned)stickiness;
@end

