/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <NewsUI/NUNowPlayingBackgroundView.h>

@protocol NUNowPlayingDockedViewDelegate;
@class UIView, UILabel, UIButton;

@interface NUNowPlayingDockedView : NUNowPlayingBackgroundView {

	BOOL _waiting;
	id<NUNowPlayingDockedViewDelegate> _delegate;
	UIView* _contentView;
	UILabel* _publisherLabel;
	UILabel* _titleLabel;
	UIButton* _rewindButton;
	UIButton* _playPauseButton;

}

@property (assign,nonatomic,__weak) id<NUNowPlayingDockedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILabel * publisherLabel;                                      //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rewindButton;                                       //@synthesize rewindButton=_rewindButton - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                                    //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (assign,nonatomic) BOOL waiting;                                                    //@synthesize waiting=_waiting - In the implementation block
-(UIView *)contentView;
-(void)setPublisher:(id)arg1 ;
-(UILabel *)titleLabel;
-(UIButton *)playPauseButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)waiting;
-(void)setDelegate:(id<NUNowPlayingDockedViewDelegate>)arg1 ;
-(id<NUNowPlayingDockedViewDelegate>)delegate;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(UILabel *)publisherLabel;
-(void)setWaiting:(BOOL)arg1 ;
-(void)setIsPlaying:(BOOL)arg1 waiting:(BOOL)arg2 ;
-(void)playButtonTapped:(id)arg1 ;
-(void)rewindButtonTapped:(id)arg1 ;
-(void)pauseButtonTapped:(id)arg1 ;
-(UIButton *)rewindButton;
-(void)_updateTitleAccessibilityLabel;
@end

