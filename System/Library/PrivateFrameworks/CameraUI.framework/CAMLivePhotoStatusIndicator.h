/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlStatusIndicator.h>

@class CAMLivePhotoAnimationCache;

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator {

	long long _livePhotoMode;
	CAMLivePhotoAnimationCache* __animationCache;

}

@property (nonatomic,retain) CAMLivePhotoAnimationCache * _animationCache;              //@synthesize _animationCache=__animationCache - In the implementation block
@property (assign,nonatomic) long long livePhotoMode;                                   //@synthesize livePhotoMode=_livePhotoMode - In the implementation block
-(long long)livePhotoMode;
-(void)setLivePhotoMode:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAMLivePhotoAnimationCache *)_animationCache;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(BOOL)canAnimate;
-(void)set_animationCache:(CAMLivePhotoAnimationCache *)arg1 ;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)preloadAnimationFrames;
-(void)setLivePhotoMode:(long long)arg1 animated:(BOOL)arg2 ;
-(id)imageAnimationFramesForCurrentState;
@end

