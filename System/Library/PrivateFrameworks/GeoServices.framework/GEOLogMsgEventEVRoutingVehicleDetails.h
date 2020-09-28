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

@class PBDataReader, NSString;

@interface GEOLogMsgEventEVRoutingVehicleDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _make;
	NSString* _model;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _batteryCapacity;
	struct {
		unsigned has_batteryCapacity : 1;
		unsigned read_make : 1;
		unsigned read_model : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMake; 
@property (nonatomic,retain) NSString * make; 
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model; 
@property (assign,nonatomic) BOOL hasBatteryCapacity; 
@property (assign,nonatomic) unsigned batteryCapacity; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)make;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBatteryCapacity:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasModel;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMake:(NSString *)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasMake;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasBatteryCapacity:(BOOL)arg1 ;
-(BOOL)hasBatteryCapacity;
-(unsigned)batteryCapacity;
@end
