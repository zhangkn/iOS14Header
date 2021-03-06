/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUAnimationSettings.h>

@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings {

	double _completionEpsilon;
	CASpringAnimation* _springAnimation;

}

@property (nonatomic,readonly) CASpringAnimation * springAnimation;              //@synthesize springAnimation=_springAnimation - In the implementation block
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double initialVelocity; 
@property (assign,nonatomic) double completionEpsilon;                           //@synthesize completionEpsilon=_completionEpsilon - In the implementation block
+(id)criticallyDampedSpringSettings;
-(void)setTimingFunction:(id)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(double)mass;
-(double)damping;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setDamping:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_updateDuration;
-(id)timingFunction;
-(double)stiffness;
-(double)initialVelocity;
-(CASpringAnimation *)springAnimation;
-(void)setSpeed:(double)arg1 ;
-(double)duration;
-(void)setInitialVelocity:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)init;
-(double)speed;
-(float)repeatCount;
-(double)interpolatedProgressForProgress:(double)arg1 ;
-(id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2 ;
-(void)setCompletionEpsilon:(double)arg1 ;
-(double)completionEpsilon;
@end

