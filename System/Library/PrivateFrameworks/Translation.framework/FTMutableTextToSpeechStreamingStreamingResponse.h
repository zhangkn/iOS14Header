/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechStreamingStreamingResponse.h>

@class FTQssAckResponse, FTBeginTextToSpeechStreamingResponse, FTPartialTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse;

@interface FTMutableTextToSpeechStreamingStreamingResponse : FTTextToSpeechStreamingStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTQssAckResponse * contentAsFTQssAckResponse; 
@property (nonatomic,copy) FTBeginTextToSpeechStreamingResponse * contentAsFTBeginTextToSpeechStreamingResponse; 
@property (nonatomic,copy) FTPartialTextToSpeechStreamingResponse * contentAsFTPartialTextToSpeechStreamingResponse; 
@property (nonatomic,copy) FTFinalTextToSpeechStreamingResponse * contentAsFTFinalTextToSpeechStreamingResponse; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)init;
-(FTBeginTextToSpeechStreamingResponse *)contentAsFTBeginTextToSpeechStreamingResponse;
-(void)setContentAsFTBeginTextToSpeechStreamingResponse:(FTBeginTextToSpeechStreamingResponse *)arg1 ;
-(FTPartialTextToSpeechStreamingResponse *)contentAsFTPartialTextToSpeechStreamingResponse;
-(void)setContentAsFTPartialTextToSpeechStreamingResponse:(FTPartialTextToSpeechStreamingResponse *)arg1 ;
-(FTFinalTextToSpeechStreamingResponse *)contentAsFTFinalTextToSpeechStreamingResponse;
-(FTQssAckResponse *)contentAsFTQssAckResponse;
-(void)setContentAsFTFinalTextToSpeechStreamingResponse:(FTFinalTextToSpeechStreamingResponse *)arg1 ;
-(void)setContentAsFTQssAckResponse:(FTQssAckResponse *)arg1 ;
@end

