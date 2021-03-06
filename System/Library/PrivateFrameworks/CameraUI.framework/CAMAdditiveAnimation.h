/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface CAMAdditiveAnimation : NSObject {

	double __toValue;
	double __fromValue;
	double __duration;
	CAMediaTimingFunction* __curve;
	CAMAdditiveAnimation* __fromAnimation;
	double __startTime;
	double __lastTime;

}

@property (nonatomic,readonly) double _toValue;                                    //@synthesize _toValue=__toValue - In the implementation block
@property (assign,nonatomic) double _fromValue;                                    //@synthesize _fromValue=__fromValue - In the implementation block
@property (nonatomic,readonly) double _duration;                                   //@synthesize _duration=__duration - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * _curve;                     //@synthesize _curve=__curve - In the implementation block
@property (nonatomic,retain) CAMAdditiveAnimation * _fromAnimation;                //@synthesize _fromAnimation=__fromAnimation - In the implementation block
@property (assign,setter=_setStartTime:,nonatomic) double _startTime;              //@synthesize _startTime=__startTime - In the implementation block
@property (assign,setter=_setLastTime:,nonatomic) double _lastTime;                //@synthesize _lastTime=__lastTime - In the implementation block
@property (nonatomic,readonly) double value; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
+(id)animationToValue:(double)arg1 fromAnimation:(id)arg2 duration:(double)arg3 curve:(id)arg4 ;
+(id)animationToValue:(double)arg1 fromValue:(double)arg2 duration:(double)arg3 curve:(id)arg4 ;
-(BOOL)isFinished;
-(double)_startTime;
-(void)updateWithTimestamp:(double)arg1 ;
-(double)_toValue;
-(void)_setLastTime:(double)arg1 ;
-(double)_fromValue;
-(double)_duration;
-(double)value;
-(void)_setStartTime:(double)arg1 ;
-(CAMAdditiveAnimation *)_fromAnimation;
-(CAMediaTimingFunction *)_curve;
-(id)description;
-(double)_lastTime;
-(void)set_fromValue:(double)arg1 ;
-(void)set_fromAnimation:(CAMAdditiveAnimation *)arg1 ;
@end

