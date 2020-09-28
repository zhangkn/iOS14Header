/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkAnalyticsDNSTotalFailure : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dnsServers;
	int _networkType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                           //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasDnsServers; 
@property (assign,nonatomic) unsigned dnsServers;                       //@synthesize dnsServers=_dnsServers - In the implementation block
-(void)setHasNetworkType:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDnsServers:(unsigned)arg1 ;
-(BOOL)hasNetworkType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)dnsServers;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasDnsServers:(BOOL)arg1 ;
-(id)networkTypeAsString:(int)arg1 ;
-(BOOL)hasDnsServers;
-(void)setNetworkType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)networkType;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
