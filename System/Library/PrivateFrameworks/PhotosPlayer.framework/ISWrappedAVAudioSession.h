/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioSession, NSString;

@interface ISWrappedAVAudioSession : NSObject {

	BOOL _didBeginObservingOutputVolume;
	/*^block*/id _outputVolumeChangeHandler;
	AVAudioSession* _audioSession;

}

@property (nonatomic,readonly) AVAudioSession * audioSession;              //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,copy) id outputVolumeChangeHandler;                   //@synthesize outputVolumeChangeHandler=_outputVolumeChangeHandler - In the implementation block
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) float outputVolume; 
+(id)sharedAmbientInstance;
+(void)sharedAmbientInstanceWithLoadHandler:(/*^block*/id)arg1 ;
+(id)auxiliarySession;
-(AVAudioSession *)audioSession;
-(float)outputVolume;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(void)setOutputVolumeChangeHandler:(id)arg1 ;
-(BOOL)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)_endObservingOutputVolumeIfNeeded;
-(void)dealloc;
-(NSString *)category;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setCategory:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_init;
-(void)_beginObservingOutputVolumeIfNeeded;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)outputVolumeChangeHandler;
@end

