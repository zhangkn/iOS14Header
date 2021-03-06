/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch, UIDelayedAction;

@interface UIDragRecognizer : UIGestureRecognizer {

	double _maximumDeviation;
	double _minimumDistance;
	CGPoint _startPosition;
	BOOL _restrictsToAngle;
	double _angle;
	UITouch* _touch;
	UIDelayedAction* _tooSlow;
	double _startAngle;
	double _quietPeriod;
	BOOL _canBeginDrag;
	SEL _checkCanBeginDrag;
	UIDelayedAction* ignoreTouch;

}

@property (assign,nonatomic) CGPoint startPosition;                      //@synthesize startPosition=_startPosition - In the implementation block
@property (assign,nonatomic) double startAngle;                          //@synthesize startAngle=_startAngle - In the implementation block
@property (nonatomic,retain) UITouch * touch;                            //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UIDelayedAction * ignoreTouch; 
@property (assign,nonatomic) BOOL restrictsToAngle;                      //@synthesize restrictsToAngle=_restrictsToAngle - In the implementation block
@property (assign,nonatomic) double angle;                               //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) double maximumDeviation;                    //@synthesize maximumDeviation=_maximumDeviation - In the implementation block
@property (assign,nonatomic) double minimumDistance;                     //@synthesize minimumDistance=_minimumDistance - In the implementation block
@property (assign,nonatomic) double quietPeriod;                         //@synthesize quietPeriod=_quietPeriod - In the implementation block
@property (assign,nonatomic) BOOL canBeginDrag;                          //@synthesize canBeginDrag=_canBeginDrag - In the implementation block
@property (assign,nonatomic) SEL checkCanBeginDrag;                      //@synthesize checkCanBeginDrag=_checkCanBeginDrag - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(UITouch *)touch;
-(double)angle;
-(void)setMinimumDistance:(double)arg1 ;
-(void)tooSlow:(id)arg1 ;
-(void)clearTimer;
-(void)setIgnoreTouch:(UIDelayedAction *)arg1 ;
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setAngle:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)setTouch:(UITouch *)arg1 ;
-(void)setStartPosition:(CGPoint)arg1 ;
-(BOOL)canBeginDrag;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)startAngle;
-(void)setStartAngle:(double)arg1 ;
-(CGPoint)startPosition;
-(UIDelayedAction *)ignoreTouch;
-(void)setQuietPeriod:(double)arg1 ;
-(double)minimumDistance;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)clearIgnoreTouch;
-(void)setRestrictsToAngle:(BOOL)arg1 ;
-(void)setMaximumDeviation:(double)arg1 ;
-(BOOL)restrictsToAngle;
-(double)maximumDeviation;
-(void)setCanBeginDrag:(BOOL)arg1 ;
-(SEL)checkCanBeginDrag;
-(void)setCheckCanBeginDrag:(SEL)arg1 ;
-(double)quietPeriod;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

