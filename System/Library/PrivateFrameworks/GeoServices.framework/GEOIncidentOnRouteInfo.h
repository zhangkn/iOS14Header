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

@class PBUnknownFields, NSMutableArray;

@interface GEOIncidentOnRouteInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _indexAndOffsets;

}

@property (nonatomic,retain) NSMutableArray * indexAndOffsets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)indexAndOffsetType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(void)addIndexAndOffset:(id)arg1 ;
-(unsigned long long)indexAndOffsetsCount;
-(void)clearIndexAndOffsets;
-(id)indexAndOffsetAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)indexAndOffsets;
-(void)setIndexAndOffsets:(NSMutableArray *)arg1 ;
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
