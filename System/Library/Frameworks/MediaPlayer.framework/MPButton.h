/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView;

@interface MPButton : UIButton {

	unsigned _holding : 1;
	UIView* _hitTestDebugView;
	BOOL _hitTestDebugEnabled;
	double _holdDelayInterval;
	UIEdgeInsets _alignmentRectInsets;
	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                    //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) double holdDelayInterval;                      //@synthesize holdDelayInterval=_holdDelayInterval - In the implementation block
@property (getter=isHolding,nonatomic,readonly) BOOL holding; 
@property (assign,nonatomic) BOOL hitTestDebugEnabled;                      //@synthesize hitTestDebugEnabled=_hitTestDebugEnabled - In the implementation block
+(UIEdgeInsets)easyTouchDefaultHitRectInsets;
+(double)easyTouchDefaultCharge;
+(id)easyTouchButtonWithType:(long long)arg1 ;
-(void)_handleTouchCancel;
-(double)holdDelayInterval;
-(BOOL)isHolding;
-(void)setHitTestDebugEnabled:(BOOL)arg1 ;
-(void)_handleTouchDown;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_delayedTriggerHold;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_handleTouchUp;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)hitRectInsets;
-(void)setHoldDelayInterval:(double)arg1 ;
-(CGRect)hitRect;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)hitTestDebugEnabled;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

