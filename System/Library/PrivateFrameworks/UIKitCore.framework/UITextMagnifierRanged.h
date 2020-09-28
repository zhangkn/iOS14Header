/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextMagnifier.h>

@interface UITextMagnifierRanged : UITextMagnifier {

	double _touchOffsetFromMagnificationPoint;
	double _magnifierOffsetFromTouch;
	BOOL _isHorizontal;
	BOOL _isAnimating;
	long long _delayedAnimationType;
	CGPoint _delayedAnimationPoint;

}

@property (assign,nonatomic) BOOL isHorizontal;              //@synthesize isHorizontal=_isHorizontal - In the implementation block
+(Class)renderClass;
+(id)sharedRangedMagnifier;
+(id)activeRangedMagnifier;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(id)initWithFrame;
-(BOOL)isHorizontal;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)zoomDownAnimation;
-(CGPoint)adjustMagnificationPoint:(CGPoint)arg1 ;
-(void)updateFrameAndOffset;
-(void)zoomUpAnimation;
-(BOOL)terminalPointPlacedCarefully;
-(double)offsetFromMagnificationPoint;
-(CGRect)caretRectClosestToPoint:(CGPoint)arg1 ;
-(void)setIsHorizontal:(BOOL)arg1 ;
-(int)horizontalMovementAtTime:(double)arg1 ;
-(BOOL)wasPlacedCarefullyAtTime:(double)arg1 ;
-(int)horizontalMovement;
@end
