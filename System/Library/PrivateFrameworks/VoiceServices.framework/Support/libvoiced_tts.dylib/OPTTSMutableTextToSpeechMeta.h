/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechMeta.h>

@class OPTTSTextToSpeechVoice, OPTTSTextToSpeechResource;

@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta

@property (nonatomic,copy) OPTTSTextToSpeechVoice * voice; 
@property (nonatomic,copy) OPTTSTextToSpeechResource * resource; 
-(OPTTSTextToSpeechVoice *)voice;
-(void)setVoice:(OPTTSTextToSpeechVoice *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(OPTTSTextToSpeechResource *)resource;
-(void)setResource:(OPTTSTextToSpeechResource *)arg1 ;
-(id)init;
@end

