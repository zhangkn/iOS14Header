/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTRecognitionPhraseTokensAlternatives.h>

@class NSArray;

@interface FTMutableRecognitionPhraseTokensAlternatives : FTRecognitionPhraseTokensAlternatives

@property (nonatomic,copy) NSArray * tok_phrases; 
@property (assign,nonatomic) BOOL has_unsuggested_alternatives; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tok_phrases;
-(void)setTok_phrases:(NSArray *)arg1 ;
-(BOOL)has_unsuggested_alternatives;
-(void)setHas_unsuggested_alternatives:(BOOL)arg1 ;
-(id)init;
@end
