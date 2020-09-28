/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSMutableArray;

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE72* _geoIds;
	SCD_Struct_GE73* _latitudeCoordinates;
	SCD_Struct_GE73* _longitudeCoordinates;
	long long _geoid;
	NSData* _openlr;
	NSMutableArray* _predictedSpeeds;
	NSData* _zilch;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _color;
	float _confidence;
	unsigned _decayTimeWindowInMinutes;
	float _endOffset;
	unsigned _speedKph;
	float _startOffset;
	BOOL _hidden;
	struct {
		unsigned has_color : 1;
		unsigned has_confidence : 1;
		unsigned has_decayTimeWindowInMinutes : 1;
		unsigned has_endOffset : 1;
		unsigned has_speedKph : 1;
		unsigned has_startOffset : 1;
		unsigned has_hidden : 1;
		unsigned read_geoIds : 1;
		unsigned read_latitudeCoordinates : 1;
		unsigned read_longitudeCoordinates : 1;
		unsigned read_openlr : 1;
		unsigned read_predictedSpeeds : 1;
		unsigned read_zilch : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) long long geoid; 
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset; 
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset; 
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,retain) NSMutableArray * predictedSpeeds; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) BOOL hasSpeedKph; 
@property (assign,nonatomic) unsigned speedKph; 
@property (nonatomic,readonly) BOOL hasZilch; 
@property (nonatomic,retain) NSData * zilch; 
@property (assign,nonatomic) BOOL hasDecayTimeWindowInMinutes; 
@property (assign,nonatomic) unsigned decayTimeWindowInMinutes; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) float confidence; 
@property (nonatomic,readonly) unsigned long long latitudeCoordinatesCount; 
@property (nonatomic,readonly) float* latitudeCoordinates; 
@property (nonatomic,readonly) unsigned long long longitudeCoordinatesCount; 
@property (nonatomic,readonly) float* longitudeCoordinates; 
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) long long* geoIds; 
@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr; 
+(Class)predictedSpeedType;
+(BOOL)isValid:(id)arg1 ;
-(void)setStartOffset:(float)arg1 ;
-(NSData *)zilch;
-(long long)geoid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)openlr;
-(long long*)geoIds;
-(void)writeTo:(id)arg1 ;
-(BOOL)hidden;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasHidden;
-(float)confidence;
-(void)dealloc;
-(id)jsonRepresentation;
-(void)setHasHidden:(BOOL)arg1 ;
-(unsigned)speedKph;
-(BOOL)hasColor;
-(BOOL)hasZilch;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasOpenlr;
-(void)setSpeedKph:(unsigned)arg1 ;
-(void)setHasSpeedKph:(BOOL)arg1 ;
-(BOOL)hasSpeedKph;
-(void)setEndOffset:(float)arg1 ;
-(void)addPredictedSpeed:(id)arg1 ;
-(void)setDecayTimeWindowInMinutes:(unsigned)arg1 ;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(long long)geoIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)predictedSpeedsCount;
-(void)clearPredictedSpeeds;
-(id)predictedSpeedAtIndex:(unsigned long long)arg1 ;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(NSMutableArray *)predictedSpeeds;
-(void)setPredictedSpeeds:(NSMutableArray *)arg1 ;
-(void)setHasColor:(BOOL)arg1 ;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(unsigned)decayTimeWindowInMinutes;
-(void)setHasDecayTimeWindowInMinutes:(BOOL)arg1 ;
-(BOOL)hasDecayTimeWindowInMinutes;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(id)initWithJSON:(id)arg1 ;
-(void)addLatitudeCoordinates:(float)arg1 ;
-(void)addLongitudeCoordinates:(float)arg1 ;
-(float*)latitudeCoordinates;
-(unsigned long long)latitudeCoordinatesCount;
-(void)clearLatitudeCoordinates;
-(float)latitudeCoordinatesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)longitudeCoordinatesCount;
-(void)clearLongitudeCoordinates;
-(float)longitudeCoordinatesAtIndex:(unsigned long long)arg1 ;
-(void)setLatitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)longitudeCoordinates;
-(void)setLongitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setZilch:(NSData *)arg1 ;
-(void)setGeoid:(long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)color;
-(void)setHidden:(BOOL)arg1 ;
-(void)setColor:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(float)startOffset;
-(void)addGeoIds:(long long)arg1 ;
-(void)setOpenlr:(NSData *)arg1 ;
-(id)description;
-(float)endOffset;
-(void)setConfidence:(float)arg1 ;
-(id)dictionaryRepresentation;
@end
