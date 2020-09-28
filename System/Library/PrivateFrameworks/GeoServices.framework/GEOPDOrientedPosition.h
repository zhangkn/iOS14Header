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

@interface GEOPDOrientedPosition : PBCodable <NSCopying> {

	double _pitch;
	double _roll;
	double _x;
	double _yaw;
	double _y;
	double _z;
	struct {
		unsigned has_pitch : 1;
		unsigned has_roll : 1;
		unsigned has_x : 1;
		unsigned has_yaw : 1;
		unsigned has_y : 1;
		unsigned has_z : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) double x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) double y; 
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,nonatomic) double z; 
@property (assign,nonatomic) BOOL hasYaw; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) BOOL hasPitch; 
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) BOOL hasRoll; 
@property (assign,nonatomic) double roll; 
+(BOOL)isValid:(id)arg1 ;
-(double)y;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRoll:(double)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(void)setX:(double)arg1 ;
-(void)setHasPitch:(BOOL)arg1 ;
-(BOOL)hasX;
-(id)jsonRepresentation;
-(void)setHasRoll:(BOOL)arg1 ;
-(BOOL)hasZ;
-(void)setY:(double)arg1 ;
-(void)setHasZ:(BOOL)arg1 ;
-(BOOL)hasPitch;
-(BOOL)hasY;
-(void)setZ:(double)arg1 ;
-(double)yaw;
-(double)z;
-(double)pitch;
-(BOOL)hasYaw;
-(double)x;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasRoll;
-(void)setHasYaw:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)roll;
-(unsigned long long)hash;
-(void)setPitch:(double)arg1 ;
-(void)setYaw:(double)arg1 ;
-(id)description;
-(void)setHasY:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
