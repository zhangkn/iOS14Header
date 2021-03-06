/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBMutableDevice : PBCodable <NSCopying> {

	NSMutableArray* _names;
	NSMutableArray* _properties;

}

@property (nonatomic,retain) NSMutableArray * names;                   //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
+(Class)namesType;
+(Class)propertiesType;
-(unsigned long long)namesCount;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addNames:(id)arg1 ;
-(id)namesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)propertiesCount;
-(void)clearProperties;
-(NSMutableArray *)names;
-(void)addProperties:(id)arg1 ;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)properties;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)clearNames;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

