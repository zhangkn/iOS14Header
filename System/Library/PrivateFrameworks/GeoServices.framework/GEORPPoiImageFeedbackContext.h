/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackClientImageInfo, NSString, GEOPDPlace;

@interface GEORPPoiImageFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackClientImageInfo* _imageInfo;
	NSString* _imageUrl;
	GEOPDPlace* _place;
	NSString* _providerImageId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_imageInfo : 1;
		unsigned read_imageUrl : 1;
		unsigned read_place : 1;
		unsigned read_providerImageId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasProviderImageId; 
@property (nonatomic,retain) NSString * providerImageId; 
@property (nonatomic,readonly) BOOL hasImageUrl; 
@property (nonatomic,retain) NSString * imageUrl; 
@property (nonatomic,readonly) BOOL hasImageInfo; 
@property (nonatomic,retain) GEORPFeedbackClientImageInfo * imageInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEOPDPlace *)place;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(NSString *)providerImageId;
-(void)setProviderImageId:(NSString *)arg1 ;
-(void)setImageUrl:(NSString *)arg1 ;
-(BOOL)hasProviderImageId;
-(BOOL)hasImageUrl;
-(BOOL)hasPlace;
-(NSString *)imageUrl;
-(id)init;
-(GEORPFeedbackClientImageInfo *)imageInfo;
-(void)setImageInfo:(GEORPFeedbackClientImageInfo *)arg1 ;
-(BOOL)hasImageInfo;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

