/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDMDNSResponderDNSStatistics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _stats;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * stats;                    //@synthesize stats=_stats - In the implementation block
+(Class)statsType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)stats;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(id)description;
-(void)setStats:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addStats:(id)arg1 ;
-(unsigned long long)statsCount;
-(void)clearStats;
-(id)statsAtIndex:(unsigned long long)arg1 ;
@end
