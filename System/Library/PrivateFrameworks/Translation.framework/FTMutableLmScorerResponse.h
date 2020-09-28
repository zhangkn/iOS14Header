/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLmScorerResponse.h>

@class NSString, NSArray;

@interface FTMutableLmScorerResponse : FTLmScorerResponse

@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) NSArray * tokens; 
@property (assign,nonatomic) double ppl; 
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(double)ppl;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(id)init;
-(void)setPpl:(double)arg1 ;
@end
