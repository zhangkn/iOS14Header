/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlaybackContentContainerView;


@protocol AVPlaybackContentContainer <NSObject>
@property (nonatomic,readonly) AVPlaybackContentContainerView * activeContentView; 
@property (assign,nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible; 
@property (assign,nonatomic) CGRect videoContentFrame; 
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@required
-(BOOL)isPlayingOnSecondScreen;
-(void)setPlayingOnSecondScreen:(BOOL)arg1;
-(AVPlaybackContentContainerView *)activeContentView;
-(id)initWithFrame:(CGRect)arg1 activeContentView:(id)arg2;
-(void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(BOOL)arg2;
-(CGRect)videoContentFrame;
-(BOOL)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
-(void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(BOOL)arg1;
-(void)setVideoContentFrame:(CGRect)arg1;

@end
