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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _pictureItems;
	BOOL _allowFullScreenPhoto;
	struct {
		unsigned has_allowFullScreenPhoto : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * pictureItems; 
@property (assign,nonatomic) BOOL hasAllowFullScreenPhoto; 
@property (assign,nonatomic) BOOL allowFullScreenPhoto; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)pictureItemType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(void)addPictureItem:(id)arg1 ;
-(void)setAllowFullScreenPhoto:(BOOL)arg1 ;
-(unsigned long long)pictureItemsCount;
-(void)clearPictureItems;
-(id)pictureItemAtIndex:(unsigned long long)arg1 ;
-(void)setPictureItems:(NSMutableArray *)arg1 ;
-(void)setHasAllowFullScreenPhoto:(BOOL)arg1 ;
-(BOOL)hasAllowFullScreenPhoto;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;
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

