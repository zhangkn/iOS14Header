/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDHomeKitValue;

@interface AWDHomeKitWHASetting : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _keyPath;
	AWDHomeKitValue* _value;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyPath; 
@property (nonatomic,retain) NSString * keyPath;                        //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) AWDHomeKitValue * value;                   //@synthesize value=_value - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasValue;
-(void)setValue:(AWDHomeKitValue *)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(AWDHomeKitValue *)value;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)keyPath;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(BOOL)hasKeyPath;
-(id)description;
-(id)dictionaryRepresentation;
@end

