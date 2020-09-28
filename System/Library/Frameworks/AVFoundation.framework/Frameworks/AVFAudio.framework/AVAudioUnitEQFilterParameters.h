/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioUnitEQFilterParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long filterType; 
@property (assign,nonatomic) float frequency; 
@property (assign,nonatomic) float bandwidth; 
@property (assign,nonatomic) float gain; 
@property (assign,nonatomic) BOOL bypass; 
-(float)gain;
-(void)setFrequency:(float)arg1 ;
-(float)frequency;
-(id)initWithImpl:(AVAudioUnitEQFilterParametersImpl*)arg1 ;
-(void)setFilterType:(long long)arg1 ;
-(BOOL)bypass;
-(void)setGain:(float)arg1 ;
-(void)dealloc;
-(long long)filterType;
-(id)init;
-(float)bandwidth;
-(void)setBypass:(BOOL)arg1 ;
-(void)setBandwidth:(float)arg1 ;
@end
