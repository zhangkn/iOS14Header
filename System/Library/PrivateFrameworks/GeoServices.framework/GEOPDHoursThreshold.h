/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDHoursThreshold : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _closingSoonMessageThresholdSecond;
	unsigned _openingSoonMessageThresholdSecond;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasOpeningSoonMessageThresholdSecond; 
@property (assign,nonatomic) unsigned openingSoonMessageThresholdSecond; 
@property (assign,nonatomic) BOOL hasClosingSoonMessageThresholdSecond; 
@property (assign,nonatomic) unsigned closingSoonMessageThresholdSecond; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)openingSoonMessageThresholdSecond;
-(void)setHasOpeningSoonMessageThresholdSecond:(BOOL)arg1 ;
-(BOOL)hasOpeningSoonMessageThresholdSecond;
-(unsigned)closingSoonMessageThresholdSecond;
-(void)setHasClosingSoonMessageThresholdSecond:(BOOL)arg1 ;
-(BOOL)hasClosingSoonMessageThresholdSecond;
-(id)jsonRepresentation;
-(void)setOpeningSoonMessageThresholdSecond:(unsigned)arg1 ;
-(void)setClosingSoonMessageThresholdSecond:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
