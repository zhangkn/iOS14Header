/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOMapRegion;

@interface GEOPDLocationDirectedSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _disambiguationLabels;
	GEOMapRegion* _displayMapRegion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_disambiguationLabels : 1;
		unsigned read_displayMapRegion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (nonatomic,retain) NSMutableArray * disambiguationLabels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)disambiguationLabelType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOMapRegion *)displayMapRegion;
-(id)init;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(void)clearDisambiguationLabels;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)disambiguationLabels;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

