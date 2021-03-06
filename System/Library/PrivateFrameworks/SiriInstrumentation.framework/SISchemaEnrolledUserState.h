/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaPersonalization, NSData;

@interface SISchemaEnrolledUserState : PBCodable {

	NSString* _siriLinkedSpeechID;
	SISchemaPersonalization* _personalization;
	BOOL _hasSiriLinkedSpeechID;
	BOOL _hasPersonalization;

}

@property (nonatomic,copy) NSString * siriLinkedSpeechID;                            //@synthesize siriLinkedSpeechID=_siriLinkedSpeechID - In the implementation block
@property (assign,nonatomic) BOOL hasSiriLinkedSpeechID;                             //@synthesize hasSiriLinkedSpeechID=_hasSiriLinkedSpeechID - In the implementation block
@property (nonatomic,retain) SISchemaPersonalization * personalization;              //@synthesize personalization=_personalization - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalization;                                //@synthesize hasPersonalization=_hasPersonalization - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPersonalization:(SISchemaPersonalization *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaPersonalization *)personalization;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(BOOL)hasPersonalization;
-(void)setHasPersonalization:(BOOL)arg1 ;
-(void)setSiriLinkedSpeechID:(NSString *)arg1 ;
-(NSString *)siriLinkedSpeechID;
-(BOOL)hasSiriLinkedSpeechID;
-(void)setHasSiriLinkedSpeechID:(BOOL)arg1 ;
@end

