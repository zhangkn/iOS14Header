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

@class NSMutableArray;

@interface GEOLogMsgStateTileSet : PBCodable <NSCopying> {

	NSMutableArray* _tileSetInfos;

}

@property (nonatomic,retain) NSMutableArray * tileSetInfos; 
+(BOOL)isValid:(id)arg1 ;
+(Class)tileSetInfoType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)tileSetInfosCount;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)tileSetInfos;
-(id)jsonRepresentation;
-(void)addTileSetInfo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTileSetInfos:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)tileSetInfoAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearTileSetInfos;
-(id)description;
-(id)dictionaryRepresentation;
@end

