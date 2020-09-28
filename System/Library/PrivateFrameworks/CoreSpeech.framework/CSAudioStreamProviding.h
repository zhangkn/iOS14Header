/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioStreamProviding <NSObject>
@required
-(id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;
-(void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2;
-(id)UUID;
-(id)recordDeviceInfo;
-(BOOL)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id*)arg3;
-(id)recordRoute;
-(id)audioChunkToEndFrom:(unsigned long long)arg1;
-(BOOL)isRecording;
-(void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3;
-(id)playbackRoute;
-(id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id*)arg3;
-(id)recordSettings;
-(void)startAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)isNarrowBand;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
-(void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3;
-(void)cancelAudioStreamHold:(id)arg1;
-(id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;

@end
