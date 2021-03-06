/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBFWakeAnimationSettings : PTSettings {

	double _backlightFadeDuration;
	double _speedMultiplierForWake;
	double _speedMultiplierForLiftToWake;
	SBFAnimationSettings* _dateWakeSettings;
	SBFAnimationSettings* _contentWakeSettings;
	double _awakeColorBrightness;
	double _awakeDateAlpha;
	SBFAnimationSettings* _awakeWallpaperFilterSettings;
	SBFAnimationSettings* _dateSleepSettings;
	double _sleepColorBrightness;
	SBFAnimationSettings* _sleepWallpaperFilterSettings;

}

@property (assign,nonatomic) double backlightFadeDuration;                                     //@synthesize backlightFadeDuration=_backlightFadeDuration - In the implementation block
@property (assign,nonatomic) double speedMultiplierForWake;                                    //@synthesize speedMultiplierForWake=_speedMultiplierForWake - In the implementation block
@property (assign,nonatomic) double speedMultiplierForLiftToWake;                              //@synthesize speedMultiplierForLiftToWake=_speedMultiplierForLiftToWake - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * dateWakeSettings;                          //@synthesize dateWakeSettings=_dateWakeSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * contentWakeSettings;                       //@synthesize contentWakeSettings=_contentWakeSettings - In the implementation block
@property (assign,nonatomic) double awakeColorBrightness;                                      //@synthesize awakeColorBrightness=_awakeColorBrightness - In the implementation block
@property (assign,nonatomic) double awakeDateAlpha;                                            //@synthesize awakeDateAlpha=_awakeDateAlpha - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * awakeWallpaperFilterSettings;              //@synthesize awakeWallpaperFilterSettings=_awakeWallpaperFilterSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * dateSleepSettings;                         //@synthesize dateSleepSettings=_dateSleepSettings - In the implementation block
@property (assign,nonatomic) double sleepColorBrightness;                                      //@synthesize sleepColorBrightness=_sleepColorBrightness - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * sleepWallpaperFilterSettings;              //@synthesize sleepWallpaperFilterSettings=_sleepWallpaperFilterSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setAwakeColorBrightness:(double)arg1 ;
-(void)setDateSleepSettings:(SBFAnimationSettings *)arg1 ;
-(double)speedMultiplierForWake;
-(double)awakeColorBrightness;
-(SBFAnimationSettings *)dateWakeSettings;
-(SBFAnimationSettings *)contentWakeSettings;
-(void)setSpeedMultiplierForWake:(double)arg1 ;
-(void)setDateWakeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setSleepColorBrightness:(double)arg1 ;
-(SBFAnimationSettings *)sleepWallpaperFilterSettings;
-(void)setBacklightFadeDuration:(double)arg1 ;
-(void)setSpeedMultiplierForLiftToWake:(double)arg1 ;
-(double)speedMultiplierForLiftToWake;
-(void)setAwakeWallpaperFilterSettings:(SBFAnimationSettings *)arg1 ;
-(void)setContentWakeSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)dateSleepSettings;
-(double)awakeDateAlpha;
-(void)setAwakeDateAlpha:(double)arg1 ;
-(double)backlightFadeDuration;
-(double)sleepColorBrightness;
-(void)setSleepWallpaperFilterSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)awakeWallpaperFilterSettings;
@end

