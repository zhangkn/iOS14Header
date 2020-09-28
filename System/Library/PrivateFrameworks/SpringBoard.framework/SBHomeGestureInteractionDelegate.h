/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBHomeGestureInteractionDelegate <SBSystemGestureRecognizerDelegate>
@optional
-(void)homeGestureInteractionBegan:(id)arg1;
-(BOOL)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2;
-(void)homeGestureInteractionEnded:(id)arg1;
-(void)homeGestureInteractionCancelled:(id)arg1;
-(void)homeGestureInteractionChanged:(id)arg1;
-(BOOL)homeGestureInteraction:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1;
-(BOOL)homeGestureInteraction:(id)arg1 shouldBeginGestureRecognizerOfType:(long long)arg2;
-(BOOL)homeGestureInteraction:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
-(BOOL)homeGestureInteraction:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;

@required
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2;

@end
