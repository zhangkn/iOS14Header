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

@class NSString;

@interface AWDIMessageSentMessage : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	int _fzError;
	NSString* _guid;
	unsigned _hasAttachments;
	unsigned _isGroupMessage;
	unsigned _isToEmail;
	unsigned _isToPhoneNumber;
	unsigned _isTypingIndicator;
	unsigned _messageError;
	unsigned _sendDuration;
	SCD_Struct_AW14 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                     //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) BOOL hasIsTypingIndicator; 
@property (assign,nonatomic) unsigned isTypingIndicator;                //@synthesize isTypingIndicator=_isTypingIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupMessage; 
@property (assign,nonatomic) unsigned isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,nonatomic) BOOL hasIsToPhoneNumber; 
@property (assign,nonatomic) unsigned isToPhoneNumber;                  //@synthesize isToPhoneNumber=_isToPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsToEmail; 
@property (assign,nonatomic) unsigned isToEmail;                        //@synthesize isToEmail=_isToEmail - In the implementation block
@property (assign,nonatomic) BOOL hasHasAttachments; 
@property (assign,nonatomic) unsigned hasAttachments;                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (assign,nonatomic) BOOL hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)hasAttachments;
-(void)setConnectionType:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasGuid;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasAttachments:(unsigned)arg1 ;
-(BOOL)hasConnectionType;
-(NSString *)guid;
-(unsigned)isGroupMessage;
-(unsigned)connectionType;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(int)fzError;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setSendDuration:(unsigned)arg1 ;
-(unsigned)sendDuration;
-(void)setFzError:(int)arg1 ;
-(void)setIsGroupMessage:(unsigned)arg1 ;
-(void)setIsToPhoneNumber:(unsigned)arg1 ;
-(void)setIsToEmail:(unsigned)arg1 ;
-(unsigned)isToPhoneNumber;
-(unsigned)isToEmail;
-(void)setMessageError:(unsigned)arg1 ;
-(void)setIsTypingIndicator:(unsigned)arg1 ;
-(unsigned)messageError;
-(unsigned)isTypingIndicator;
-(void)setHasSendDuration:(BOOL)arg1 ;
-(BOOL)hasSendDuration;
-(void)setHasIsToPhoneNumber:(BOOL)arg1 ;
-(BOOL)hasIsToPhoneNumber;
-(void)setHasIsToEmail:(BOOL)arg1 ;
-(BOOL)hasIsToEmail;
-(void)setHasFzError:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(void)setHasMessageError:(BOOL)arg1 ;
-(BOOL)hasMessageError;
-(void)setHasIsTypingIndicator:(BOOL)arg1 ;
-(BOOL)hasIsTypingIndicator;
-(void)setHasIsGroupMessage:(BOOL)arg1 ;
-(BOOL)hasIsGroupMessage;
-(void)setHasHasAttachments:(BOOL)arg1 ;
-(BOOL)hasHasAttachments;
@end
