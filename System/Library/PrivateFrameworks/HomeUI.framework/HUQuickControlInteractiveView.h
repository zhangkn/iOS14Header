/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUQuickControlInteractiveView <HUQuickControlControllableView>
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate; 
@property (getter=isUserInteractionActive,nonatomic,readonly) BOOL userInteractionActive; 
@required
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
-(void)setInteractionDelegate:(id)arg1;
-(BOOL)isUserInteractionActive;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;

@end
