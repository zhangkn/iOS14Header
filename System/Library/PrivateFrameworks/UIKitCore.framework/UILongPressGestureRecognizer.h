/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UITapRecognizerDelegate.h>

@class NSArray, NSMutableSet, UIHeldAction, UIDelayedAction, UITapRecognizer, UILongPressGestureVelocitySample, NSObservation, NSString;

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {

	NSArray* _touches;
	NSMutableSet* _activeTouches;
	unsigned long long _numberOfTouchesRequired;
	double _minimumPressDuration;
	double _allowableMovement;
	CGPoint _startPointScreen;
	CGPoint _lastCentroidScreen;
	UIHeldAction* _enoughTimeElapsed;
	UIDelayedAction* _tooMuchTimeElapsed;
	UIDelayedAction* _multitouchTimer;
	UITapRecognizer* _imp;
	UILongPressGestureVelocitySample* _velocitySample;
	UILongPressGestureVelocitySample* _previousVelocitySample;
	NSObservation* _touchForceObservation;
	long long _impulseObservations;
	double _currentImpulse;
	double _lastForce;
	double _lastForceTimestamp;
	unsigned _gotTouchEnd : 1;
	unsigned _gotTooMany : 1;
	unsigned _gotEnoughTaps : 1;
	unsigned _cancelPastAllowableMovement : 1;
	unsigned _allowsDynamicTouchesList : 1;
	BOOL _requiresQuietImpulse;
	BOOL _requiresQuietImpulseForCurrentTouchSequence;
	BOOL __prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;
	BOOL __shouldAlwaysEnableMultitouchTimerAtTouchesBegin;
	long long _buttonType;
	double _allowableElapsedTimeForAllRequiredTouches;
	double _lastTouchTime;
	CGPoint _lastSceneReferenceLocation;
	CGPoint _lastUnadjustedSceneReferenceLocation;

}

@property (assign,nonatomic) double delay;                                                                                                                   //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (nonatomic,retain) NSArray * touches;                                                                                                              //@synthesize touches=_touches - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (assign,nonatomic) BOOL cancelPastAllowableMovement; 
@property (assign,setter=_setButtonType:,nonatomic) long long _buttonType;                                                                                   //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,setter=_setRequiresQuietImpulse:,nonatomic) BOOL _requiresQuietImpulse;                                                                    //@synthesize requiresQuietImpulse=_requiresQuietImpulse - In the implementation block
@property (assign,nonatomic) CGPoint lastSceneReferenceLocation;                                                                                             //@synthesize lastSceneReferenceLocation=_lastSceneReferenceLocation - In the implementation block
@property (assign,nonatomic) CGPoint lastUnadjustedSceneReferenceLocation;                                                                                   //@synthesize lastUnadjustedSceneReferenceLocation=_lastUnadjustedSceneReferenceLocation - In the implementation block
@property (assign,nonatomic) double lastTouchTime;                                                                                                           //@synthesize lastTouchTime=_lastTouchTime - In the implementation block
@property (nonatomic,readonly) CGPoint _centroidScreen; 
@property (assign,nonatomic) BOOL _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;                                                             //@synthesize _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers=__prefersToBeExclusiveWithCompetingLongPressGestureRecognizers - In the implementation block
@property (assign,setter=_setShouldAlwaysEnableMultitouchTimerAtTouchesBegin:,nonatomic) BOOL _shouldAlwaysEnableMultitouchTimerAtTouchesBegin;              //@synthesize _shouldAlwaysEnableMultitouchTimerAtTouchesBegin=__shouldAlwaysEnableMultitouchTimerAtTouchesBegin - In the implementation block
@property (assign,setter=_setAllowableElapsedTimeForAllRequiredTouches:,nonatomic) double _allowableElapsedTimeForAllRequiredTouches;                        //@synthesize allowableElapsedTimeForAllRequiredTouches=_allowableElapsedTimeForAllRequiredTouches - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTapsRequired; 
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;                                                                                     //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double minimumPressDuration; 
@property (assign,nonatomic) double allowableMovement;                                                                                                       //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setMinimumPressDuration:(double)arg1 ;
-(CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(CGPoint)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(CGPoint)centroid;
-(unsigned long long)numberOfTouchesRequired;
-(BOOL)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1 ;
-(BOOL)activeTouchesExceedAllowableSeparation;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)setLastTouchTime:(double)arg1 ;
-(NSArray *)touches;
-(void)invalidate;
-(double)minimumPressDuration;
-(void)startTimer;
-(double)_touchSloppinessFactor;
-(CGPoint)lastUnadjustedSceneReferenceLocation;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(void)set_prefersToBeExclusiveWithCompetingLongPressGestureRecognizers:(BOOL)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(BOOL)_prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)clearTimer;
-(void)setButtonMaskRequired:(long long)arg1 ;
-(double)lastTouchTime;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3 ;
-(CGPoint)_translationInView:(id)arg1 ;
-(CGPoint)_centroidInView:(id)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)buttonMaskRequired;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(void)setLastSceneReferenceLocation:(CGPoint)arg1 ;
-(void)_resetVelocitySamples;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)tooMuchElapsed:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(CGPoint)_locationOfTouches:(id)arg1 ;
-(long long)_buttonType;
-(double)delay;
-(CGPoint)_centroidScreen;
-(double)_allowableSeparation;
-(void)_resetImpulseQuietness;
-(UIOffset)_offsetInViewFromSceneReferenceLocation:(CGPoint)arg1 toSceneReferenceLocation:(CGPoint)arg2 ;
-(void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1 ;
-(double)allowableMovement;
-(BOOL)_requiresQuietImpulse;
-(BOOL)_impulseQuietEnough;
-(CGPoint)_startPointInView:(id)arg1 ;
-(BOOL)_allowsDynamicTouchesList;
-(void)_changeTouchesListTo:(id)arg1 ;
-(void)_startMultitouchTimer;
-(void)_interactionsEndedWithValidTouches:(BOOL)arg1 ;
-(long long)_finalStateForRecognition;
-(void)_startTapFinishedTimer;
-(void)enoughTimeElapsed:(id)arg1 ;
-(BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelay:(double)arg1 ;
-(BOOL)cancelPastAllowableMovement;
-(void)_setAllowsDynamicTouchesList:(BOOL)arg1 ;
-(double)_allowableTouchTimeSeparation;
-(void)_setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_setAllowableElapsedTimeForAllRequiredTouches:(double)arg1 ;
-(void)_setRequiresQuietImpulse:(BOOL)arg1 ;
-(double)_allowableElapsedTimeForAllRequiredTouches;
-(BOOL)_shouldAlwaysEnableMultitouchTimerAtTouchesBegin;
-(void)_setShouldAlwaysEnableMultitouchTimerAtTouchesBegin:(BOOL)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setView:(id)arg1 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(void)setCancelPastAllowableMovement:(BOOL)arg1 ;
-(CGPoint)lastSceneReferenceLocation;
-(void)setLastUnadjustedSceneReferenceLocation:(CGPoint)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(void)_resetGestureRecognizer;
-(void)_setButtonType:(long long)arg1 ;
-(void)_setAllowableTouchTimeSeparation:(double)arg1 ;
-(void)_setAllowableSeparation:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isGestureType:(long long)arg1 ;
-(void)setTouches:(NSArray *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)numberOfTapsRequired;
@end
