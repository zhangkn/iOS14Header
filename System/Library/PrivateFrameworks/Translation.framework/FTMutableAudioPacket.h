/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAudioPacket.h>

@class NSData;

@interface FTMutableAudioPacket : FTAudioPacket

@property (nonatomic,copy) NSData * audio_bytes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSData *)audio_bytes;
-(void)setAudio_bytes:(NSData *)arg1 ;
-(void)audio_bytes:(/*^block*/id)arg1 ;
@end
