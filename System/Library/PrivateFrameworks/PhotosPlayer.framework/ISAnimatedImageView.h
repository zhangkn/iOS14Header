/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISAnimatedImagePlayerDestination.h>

@class UIImageView, ISAnimatedImagePlayer, PFAnimatedImage, NSString;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination> {

	UIImageView* _placeholderImageView;
	ISAnimatedImagePlayer* _player;

}

@property (assign,nonatomic) UIImageView * placeholderImageView;                  //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) ISAnimatedImagePlayer * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) PFAnimatedImage * image; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) unsigned long long displayedFrameIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlaying;
-(ISAnimatedImagePlayer *)player;
-(void)setImage:(PFAnimatedImage *)arg1 ;
-(void)setPlayer:(ISAnimatedImagePlayer *)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(UIImageView *)placeholderImageView;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PFAnimatedImage *)image;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(id)initWithAnimatedImage:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setDisplayedFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)displayedFrameIndex;
-(BOOL)isReadyToDisplay;
-(void)didBeginAnimating;
-(void)frameDidChange;
-(id)initWithAnimatedImagePlayer:(id)arg1 ;
@end

