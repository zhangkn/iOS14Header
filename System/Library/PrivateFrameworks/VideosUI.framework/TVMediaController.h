/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TVMediaInfo, UIImage;


@protocol TVMediaController
@property (assign,getter=isPlaybackEnabled,nonatomic) BOOL playbackEnabled; 
@property (assign,nonatomic) BOOL showsVideoControls; 
@property (nonatomic,copy) TVMediaInfo * mediaInfo; 
@property (assign,nonatomic,__weak) id<TVMediaControllerDelegate> delegate; 
@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic) BOOL shouldZoomWhenTransitioningToBackground; 
@property (nonatomic,readonly) UIImage * coverImage; 
@required
-(void)play;
-(void)pause;
-(void)setPlaybackEnabled:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<TVMediaControllerDelegate>)delegate;
-(long long)state;
-(void)stop;
-(TVMediaInfo *)mediaInfo;
-(BOOL)showsVideoControls;
-(BOOL)shouldZoomWhenTransitioningToBackground;
-(BOOL)isPlaybackEnabled;
-(void)setShowsVideoControls:(BOOL)arg1;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setMediaInfo:(id)arg1;
-(void)setShouldZoomWhenTransitioningToBackground:(BOOL)arg1;
-(UIImage *)coverImage;

@end
