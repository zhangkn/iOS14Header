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

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceInputLocale;
	NSString* _deviceOutputLocale;
	NSString* _deviceSettingsLocale;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_deviceInputLocale : 1;
		unsigned read_deviceOutputLocale : 1;
		unsigned read_deviceSettingsLocale : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDeviceSettingsLocale; 
@property (nonatomic,retain) NSString * deviceSettingsLocale; 
@property (nonatomic,readonly) BOOL hasDeviceInputLocale; 
@property (nonatomic,retain) NSString * deviceInputLocale; 
@property (nonatomic,readonly) BOOL hasDeviceOutputLocale; 
@property (nonatomic,retain) NSString * deviceOutputLocale; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)deviceSettingsLocale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceSettingsLocale:(NSString *)arg1 ;
-(BOOL)hasDeviceOutputLocale;
-(BOOL)hasDeviceInputLocale;
-(id)jsonRepresentation;
-(BOOL)hasDeviceSettingsLocale;
-(id)init;
-(void)setDeviceInputLocale:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)deviceInputLocale;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)deviceOutputLocale;
-(void)setDeviceOutputLocale:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
