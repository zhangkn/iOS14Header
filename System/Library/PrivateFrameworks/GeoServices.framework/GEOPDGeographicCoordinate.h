/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDGeographicCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _latitude;
	double _longitude;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLatitude;
-(id)jsonRepresentation;
-(double)altitude;
-(void)setHasAltitude:(BOOL)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(BOOL)hasAltitude;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(double)longitude;
-(double)latitude;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLatitude:(double)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(id)description;
-(void)setLongitude:(double)arg1 ;
-(id)dictionaryRepresentation;
@end

