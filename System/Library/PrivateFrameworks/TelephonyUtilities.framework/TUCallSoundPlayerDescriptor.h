/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface TUCallSoundPlayerDescriptor : NSObject {

	long long _soundType;
	NSNumber* _sound;
	unsigned long long _iterations;
	double _pauseDuration;

}

@property (assign,nonatomic) long long soundType;                        //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,retain) NSNumber * sound;                           //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) unsigned long long iterations;              //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) double pauseDuration;                       //@synthesize pauseDuration=_pauseDuration - In the implementation block
-(unsigned long long)iterations;
-(NSNumber *)sound;
-(void)setSound:(NSNumber *)arg1 ;
-(void)setPauseDuration:(double)arg1 ;
-(double)pauseDuration;
-(long long)soundType;
-(id)initWithSoundType:(long long)arg1 call:(id)arg2 ;
-(id)initWithSoundType:(long long)arg1 provider:(id)arg2 video:(BOOL)arg3 region:(long long)arg4 ;
-(id)initWithSoundType:(long long)arg1 sound:(id)arg2 iterations:(unsigned long long)arg3 pauseDuration:(double)arg4 ;
-(void)setIterations:(unsigned long long)arg1 ;
-(void)setSoundType:(long long)arg1 ;
-(id)description;
@end

