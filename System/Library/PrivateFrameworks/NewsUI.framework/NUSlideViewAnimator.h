/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsUI/NewsUI-Structs.h>
@class CAMediaTimingFunction, NUAnimationFactory;

@interface NUSlideViewAnimator : NSObject {

	BOOL _animating;
	double _duration;
	CAMediaTimingFunction* _mediaTimingFunction;
	double _translateBoundsPadding;
	NUAnimationFactory* _animationFactory;
	CGRect _bounds;

}

@property (assign,getter=isAnimating,nonatomic) BOOL animating;                        //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) NUAnimationFactory * animationFactory;                    //@synthesize animationFactory=_animationFactory - In the implementation block
@property (assign,nonatomic) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                            //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double translateBoundsPadding;                            //@synthesize translateBoundsPadding=_translateBoundsPadding - In the implementation block
-(NUAnimationFactory *)animationFactory;
-(CGRect)bounds;
-(id)initWithBounds:(CGRect)arg1 ;
-(unsigned long long)animationOptionsForAnimationFactory:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(CGAffineTransform)toViewTransformForDirection:(unsigned long long)arg1 ;
-(CGAffineTransform)fromViewTransformForDirection:(unsigned long long)arg1 ;
-(BOOL)isAnimating;
-(void)translateFromView:(id)arg1 toView:(id)arg2 direction:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setTranslateBoundsPadding:(double)arg1 ;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)translateBoundsPadding;
-(void)setAnimationFactory:(NUAnimationFactory *)arg1 ;
@end
