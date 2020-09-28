/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLaneArrowhead : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _angle;
	int _category;
	struct {
		unsigned has_angle : 1;
		unsigned has_category : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAngle; 
@property (assign,nonatomic) int angle; 
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) int category; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(int)angle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasAngle;
-(int)category;
-(void)setHasAngle:(BOOL)arg1 ;
-(void)setHasCategory:(BOOL)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(void)setAngle:(int)arg1 ;
-(BOOL)hasCategory;
-(void)setCategory:(int)arg1 ;
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
