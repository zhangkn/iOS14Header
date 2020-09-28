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

@class PBDataReader, PBUnknownFields, GEOPDTextItemDisplayConfig, NSMutableArray;

@interface GEOPDTextItemContainer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDTextItemDisplayConfig* _displayConf;
	NSMutableArray* _textItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_displayConf : 1;
		unsigned read_textItems : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * textItems; 
@property (nonatomic,readonly) BOOL hasDisplayConf; 
@property (nonatomic,retain) GEOPDTextItemDisplayConfig * displayConf; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)textItemType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOPDTextItemDisplayConfig *)displayConf;
-(void)addTextItem:(id)arg1 ;
-(unsigned long long)textItemsCount;
-(void)setDisplayConf:(GEOPDTextItemDisplayConfig *)arg1 ;
-(void)clearTextItems;
-(id)textItemAtIndex:(unsigned long long)arg1 ;
-(void)setTextItems:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayConf;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)textItems;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
