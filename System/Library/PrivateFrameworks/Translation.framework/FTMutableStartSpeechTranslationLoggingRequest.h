/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartSpeechTranslationLoggingRequest.h>

@class NSString, FTTranslationLocalePair, FTLanguageDetected, NSArray;

@interface FTMutableStartSpeechTranslationLoggingRequest : FTStartSpeechTranslationLoggingRequest

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) FTTranslationLocalePair * translation_locale_pair; 
@property (nonatomic,copy) FTLanguageDetected * detected_locale; 
@property (nonatomic,copy) NSString * user_selected_locale; 
@property (nonatomic,copy) NSArray * senses; 
@property (nonatomic,copy) NSString * user_selected_sense; 
@property (nonatomic,copy) NSArray * user_interacted_senses; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)senses;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
-(FTTranslationLocalePair *)translation_locale_pair;
-(void)setTranslation_locale_pair:(FTTranslationLocalePair *)arg1 ;
-(FTLanguageDetected *)detected_locale;
-(void)setDetected_locale:(FTLanguageDetected *)arg1 ;
-(NSString *)user_selected_locale;
-(void)setUser_selected_locale:(NSString *)arg1 ;
-(void)setSenses:(NSArray *)arg1 ;
-(NSString *)user_selected_sense;
-(void)setUser_selected_sense:(NSString *)arg1 ;
-(NSArray *)user_interacted_senses;
-(void)setUser_interacted_senses:(NSArray *)arg1 ;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
-(id)init;
@end
