/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSURL;

@interface GEOURLInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _url;
	unsigned _alternativeMultipathTCPPort;
	BOOL _supportsMultipathTCP;
	BOOL _useAuthProxy;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) NSURL * nsURL; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) BOOL hasUseAuthProxy; 
@property (assign,nonatomic) BOOL useAuthProxy; 
@property (assign,nonatomic) BOOL hasSupportsMultipathTCP; 
@property (assign,nonatomic) BOOL supportsMultipathTCP; 
@property (assign,nonatomic) BOOL hasAlternativeMultipathTCPPort; 
@property (assign,nonatomic) unsigned alternativeMultipathTCPPort; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)alternativeMultipathTCPPort;
-(BOOL)hasUseAuthProxy;
-(BOOL)useAuthProxy;
-(void)setUseAuthProxy:(BOOL)arg1 ;
-(void)setHasSupportsMultipathTCP:(BOOL)arg1 ;
-(void)setSupportsMultipathTCP:(BOOL)arg1 ;
-(BOOL)supportsMultipathTCP;
-(void)setAlternativeMultipathTCPPort:(unsigned)arg1 ;
-(void)setHasAlternativeMultipathTCPPort:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipathTCP;
-(void)setHasUseAuthProxy:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)nsURL;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasUrl;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)hasAlternativeMultipathTCPPort;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)url;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

