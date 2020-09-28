/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFGravityVector : PBCodable <NSCopying> {

	double _x;
	double _y;
	double _z;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) double x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) double y; 
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,nonatomic) double z; 
+(BOOL)isValid:(id)arg1 ;
-(double)y;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(void)setX:(double)arg1 ;
-(BOOL)hasX;
-(id)jsonRepresentation;
-(BOOL)hasZ;
-(void)setY:(double)arg1 ;
-(void)setHasZ:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)setZ:(double)arg1 ;
-(double)z;
-(double)x;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setHasY:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
