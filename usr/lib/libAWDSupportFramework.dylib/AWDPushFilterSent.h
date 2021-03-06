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

@interface AWDPushFilterSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	NSString* _guid;
	int _linkQuality;
	unsigned _sentReason;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasSentReason; 
@property (assign,nonatomic) unsigned sentReason;                       //@synthesize sentReason=_sentReason - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)linkQuality;
-(void)writeTo:(id)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasSentReason;
-(void)dealloc;
-(unsigned long long)timestamp;
-(unsigned)sentReason;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasConnectionType;
-(void)setSentReason:(unsigned)arg1 ;
-(NSString *)guid;
-(void)setLinkQuality:(int)arg1 ;
-(unsigned)connectionType;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasLinkQuality;
-(unsigned long long)hash;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)setHasSentReason:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

