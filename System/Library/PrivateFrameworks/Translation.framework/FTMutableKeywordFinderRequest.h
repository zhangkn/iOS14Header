/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTKeywordFinderRequest.h>

@class NSString, NSArray, FTRecognitionResult;

@interface FTMutableKeywordFinderRequest : FTKeywordFinderRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) FTRecognitionResult * recognition_result; 
@property (assign,nonatomic) BOOL enable_sanitization; 
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnable_sanitization:(BOOL)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(FTRecognitionResult *)recognition_result;
-(void)setRecognition_result:(FTRecognitionResult *)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)init;
-(BOOL)enable_sanitization;
@end
