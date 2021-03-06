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

@interface AWDPushSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	unsigned _error;
	unsigned _flushes;
	NSString* _guid;
	int _linkQuality;
	unsigned _payloadSize;
	unsigned _sendDuration;
	NSString* _topic;
	SCD_Struct_AW12 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasFlushes; 
@property (assign,nonatomic) unsigned flushes;                          //@synthesize flushes=_flushes - In the implementation block
@property (assign,nonatomic) BOOL hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(unsigned)dualChannelState;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)payloadSize;
-(int)linkQuality;
-(void)writeTo:(id)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTopic;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setHasError:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned)error;
-(void)setError:(unsigned)arg1 ;
-(NSString *)guid;
-(void)setLinkQuality:(int)arg1 ;
-(unsigned)connectionType;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(void)setDualChannelState:(unsigned)arg1 ;
-(BOOL)hasError;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasLinkQuality;
-(unsigned long long)hash;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasDualChannelState;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(void)setSendDuration:(unsigned)arg1 ;
-(unsigned)sendDuration;
-(void)setHasSendDuration:(BOOL)arg1 ;
-(BOOL)hasSendDuration;
-(void)setFlushes:(unsigned)arg1 ;
-(void)setHasFlushes:(BOOL)arg1 ;
-(BOOL)hasFlushes;
-(unsigned)flushes;
@end

