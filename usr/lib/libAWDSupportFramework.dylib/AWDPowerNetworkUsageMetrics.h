/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerNetworkUsageMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _usages;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * usages;                   //@synthesize usages=_usages - In the implementation block
+(Class)usageType;
-(void)addUsage:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(NSMutableArray *)usages;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setUsages:(NSMutableArray *)arg1 ;
-(unsigned long long)usagesCount;
-(void)clearUsages;
-(id)usageAtIndex:(unsigned long long)arg1 ;
@end

