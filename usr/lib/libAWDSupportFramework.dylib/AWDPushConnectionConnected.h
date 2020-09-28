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

@class NSString;

@interface AWDPushConnectionConnected : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _dnsDuration;
	unsigned _dualChannelState;
	NSString* _guid;
	int _linkQuality;
	unsigned _tlsDuration;
	SCD_Struct_AW16 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                  //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (assign,nonatomic) BOOL hasDnsDuration; 
@property (assign,nonatomic) unsigned dnsDuration;                      //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTlsDuration; 
@property (assign,nonatomic) unsigned tlsDuration;                      //@synthesize tlsDuration=_tlsDuration - In the implementation block
-(unsigned)dualChannelState;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTlsDuration;
-(void)setHasTlsDuration:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(int)linkQuality;
-(void)writeTo:(id)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(BOOL)hasDnsDuration;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(BOOL)hasConnectDuration;
-(BOOL)hasGuid;
-(unsigned)connectDuration;
-(void)dealloc;
-(unsigned)dnsDuration;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasConnectionType;
-(void)setConnectDuration:(unsigned)arg1 ;
-(void)setDnsDuration:(unsigned)arg1 ;
-(NSString *)guid;
-(void)setLinkQuality:(int)arg1 ;
-(unsigned)connectionType;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(void)setDualChannelState:(unsigned)arg1 ;
-(void)setTlsDuration:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)tlsDuration;
-(BOOL)hasTimestamp;
-(BOOL)hasLinkQuality;
-(unsigned long long)hash;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasDualChannelState;
-(id)description;
-(id)dictionaryRepresentation;
@end
