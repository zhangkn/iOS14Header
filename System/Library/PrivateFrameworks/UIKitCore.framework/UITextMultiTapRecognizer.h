/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UITapRecognizerDelegate.h>

@class UITapRecognizer, NSArray, NSString;

@interface UITextMultiTapRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {

	id _target;
	SEL _tapAction;
	UITapRecognizer* _tapRecognizer;
	unsigned long long _tapCount;
	unsigned long long _touchDownCount;
	BOOL _sendTapAction;
	BOOL _recognizesOnSubsequentTouchDowns;

}

@property (readonly) unsigned long long tapCount; 
@property (assign) unsigned long long numberOfTouchesRequired; 
@property (assign) unsigned long long minimumNumberOfTapsRequired; 
@property (assign) double maximumTouchDownDuration; 
@property (assign) double maximumIntervalBetweenTaps; 
@property (assign) double allowableMovement; 
@property (assign) BOOL recognizesOnSubsequentTouchDowns;                       //@synthesize recognizesOnSubsequentTouchDowns=_recognizesOnSubsequentTouchDowns - In the implementation block
@property (readonly) NSArray * touchesForTap; 
@property (readonly) CGPoint location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouchesRequired;
-(double)_touchSloppinessFactor;
-(BOOL)recognizesOnSubsequentTouchDowns;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(CGPoint)location;
-(void)onStateUpdate:(id)arg1 ;
-(void)setMaximumIntervalBetweenTaps:(double)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)reset;
-(void)setMaximumTouchDownDuration:(double)arg1 ;
-(unsigned long long)minimumNumberOfTapsRequired;
-(double)maximumIntervalBetweenTaps;
-(double)allowableMovement;
-(void)setAllowableMovement:(double)arg1 ;
-(double)maximumTouchDownDuration;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)touchesForTap;
-(unsigned long long)tapCount;
-(void)setRecognizesOnSubsequentTouchDowns:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setMinimumNumberOfTapsRequired:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 tapAction:(SEL)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)resetTapCountForTapRecognizer:(id)arg1 ;
@end

