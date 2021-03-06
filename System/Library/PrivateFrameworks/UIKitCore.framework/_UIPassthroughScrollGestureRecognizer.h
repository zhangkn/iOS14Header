/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIScrollEventRespondable.h>

@class NSString;

@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {

	CGPoint _startPoint;
	double _startTime;
	BOOL _endForPrimaryButtonDown;
	BOOL _endForSecondaryButtonDown;
	unsigned long long _endReason;

}

@property (nonatomic,readonly) unsigned long long endReason;              //@synthesize endReason=_endReason - In the implementation block
@property (assign,nonatomic) BOOL endForPrimaryButtonDown;                //@synthesize endForPrimaryButtonDown=_endForPrimaryButtonDown - In the implementation block
@property (assign,nonatomic) BOOL endForSecondaryButtonDown;              //@synthesize endForSecondaryButtonDown=_endForSecondaryButtonDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_supportsTouchContinuation;
-(id)_window;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setView:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_scrollingChangedWithEvent:(id)arg1 ;
-(unsigned long long)endReason;
-(void)_endWithReason:(unsigned long long)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setEndForSecondaryButtonDown:(BOOL)arg1 ;
-(void)setEndForPrimaryButtonDown:(BOOL)arg1 ;
-(BOOL)endForSecondaryButtonDown;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldReceiveEvent:(id)arg1 ;
-(BOOL)endForPrimaryButtonDown;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

