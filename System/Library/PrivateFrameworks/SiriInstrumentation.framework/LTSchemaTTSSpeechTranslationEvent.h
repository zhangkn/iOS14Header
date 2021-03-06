/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaTTSSpeechTranslationEvent : PBCodable {

	NSString* _requestID;
	NSString* _selectedLocale;
	unsigned _responseTimeMs;
	unsigned _playbackBeginTimeMs;
	SCD_Struct_SI3 _has;
	BOOL _hasRequestID;
	BOOL _hasSelectedLocale;

}

@property (nonatomic,copy) NSString * requestID;                        //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                         //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * selectedLocale;                   //@synthesize selectedLocale=_selectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedLocale;                    //@synthesize hasSelectedLocale=_hasSelectedLocale - In the implementation block
@property (assign,nonatomic) unsigned responseTimeMs;                   //@synthesize responseTimeMs=_responseTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTimeMs; 
@property (assign,nonatomic) unsigned playbackBeginTimeMs;              //@synthesize playbackBeginTimeMs=_playbackBeginTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackBeginTimeMs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(BOOL)hasRequestID;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setResponseTimeMs:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)selectedLocale;
-(void)setSelectedLocale:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(BOOL)hasSelectedLocale;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setHasSelectedLocale:(BOOL)arg1 ;
-(unsigned)responseTimeMs;
-(BOOL)hasResponseTimeMs;
-(void)setHasResponseTimeMs:(BOOL)arg1 ;
-(void)setPlaybackBeginTimeMs:(unsigned)arg1 ;
-(unsigned)playbackBeginTimeMs;
-(BOOL)hasPlaybackBeginTimeMs;
-(void)setHasPlaybackBeginTimeMs:(BOOL)arg1 ;
@end

