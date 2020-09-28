/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineModelConsistencyReconsolidation : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _countOfReconsolidatedLOIs;
	SCD_Struct_AW3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfReconsolidatedLOIs; 
@property (assign,nonatomic) int countOfReconsolidatedLOIs;                  //@synthesize countOfReconsolidatedLOIs=_countOfReconsolidatedLOIs - In the implementation block
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(id)_init;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(void)setCountOfReconsolidatedLOIs:(int)arg1 ;
-(void)setHasCountOfReconsolidatedLOIs:(BOOL)arg1 ;
-(BOOL)hasCountOfReconsolidatedLOIs;
-(int)countOfReconsolidatedLOIs;
@end
