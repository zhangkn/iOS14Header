/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUILibraryEpisodeFrameViewDelegate;
@class _TVImageView, _TVProgressView, TVButton;

@interface VUILibraryEpisodeFrameView : UIView {

	id<VUILibraryEpisodeFrameViewDelegate> _delegate;
	_TVImageView* _imageView;
	_TVProgressView* _progressView;
	TVButton* _playButton;
	long long _layout;
	_TVImageView* _fullyPlayedImageView;

}

@property (nonatomic,retain) _TVImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVProgressView * progressView;                                      //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) TVButton * playButton;                                               //@synthesize playButton=_playButton - In the implementation block
@property (assign,nonatomic) long long layout;                                                    //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * fullyPlayedImageView;                                 //@synthesize fullyPlayedImageView=_fullyPlayedImageView - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryEpisodeFrameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)configureEpisodeFrameView:(id)arg1 withMedia:(id)arg2 layout:(long long)arg3 imageSize:(CGSize)arg4 ;
-(void)setLayout:(long long)arg1 ;
-(_TVProgressView *)progressView;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)layoutSubviews;
-(long long)layout;
-(void)setProgressView:(_TVProgressView *)arg1 ;
-(TVButton *)playButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<VUILibraryEpisodeFrameViewDelegate>)arg1 ;
-(id<VUILibraryEpisodeFrameViewDelegate>)delegate;
-(void)setPlayButton:(TVButton *)arg1 ;
-(_TVImageView *)imageView;
-(void)setFullyPlayedImageView:(_TVImageView *)arg1 ;
-(_TVImageView *)fullyPlayedImageView;
-(void)_playButtonPressed;
@end

