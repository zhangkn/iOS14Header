/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString, NSDictionary, CAAnimation, OFUIView;

@interface OKWidgetContentEffect : NSObject <CAAnimationDelegate, OKSettingsSupport> {

	NSString* _uuid;
	NSDictionary* _settings;
	CAAnimation* _animation;
	OFUIView* _animatedView;
	BOOL _loop;
	BOOL _autoplay;
	BOOL _isPaused;
	BOOL _needsApplySettings;
	double _defaultDuration;

}

@property (assign,nonatomic) OFUIView * animatedView;               //@synthesize animatedView=_animatedView - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;               //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) BOOL loop;                             //@synthesize loop=_loop - In the implementation block
@property (assign,nonatomic) BOOL autoplay;                         //@synthesize autoplay=_autoplay - In the implementation block
@property (assign,nonatomic) double defaultDuration;                //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(id)animationKeyPrefix;
-(void)pauseAnimation;
-(BOOL)loop;
-(void)stopAnimation;
-(void)startAnimation;
-(double)defaultDuration;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setDefaultDuration:(double)arg1 ;
-(void)resumeAnimation;
-(id)initWithSettings:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)init;
-(CAAnimation *)animation;
-(id)settingObjectForKey:(id)arg1 ;
-(BOOL)isAnimating;
-(void)setLoop:(BOOL)arg1 ;
-(BOOL)autoplay;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)setAutoplay:(BOOL)arg1 ;
-(void)applySettingsIfNeeded;
-(void)applySettings;
-(void)needsApplySettings;
-(void)prepareContentEffectWithView:(id)arg1 ;
-(OFUIView *)animatedView;
-(double)remainingPlayDuration;
-(void)setAnimatedView:(OFUIView *)arg1 ;
@end
