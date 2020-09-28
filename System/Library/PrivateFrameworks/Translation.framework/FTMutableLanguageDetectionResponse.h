/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageDetectionResponse.h>

@class NSString, NSArray;

@interface FTMutableLanguageDetectionResponse : FTLanguageDetectionResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_string; 
@property (nonatomic,copy) NSString * detected_locale; 
@property (nonatomic,copy) NSArray * predictions; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)detected_locale;
-(void)setDetected_locale:(NSString *)arg1 ;
-(int)return_code;
-(NSString *)return_string;
-(void)setReturn_code:(int)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)init;
-(NSArray *)predictions;
-(void)setReturn_string:(NSString *)arg1 ;
-(void)setPredictions:(NSArray *)arg1 ;
@end
