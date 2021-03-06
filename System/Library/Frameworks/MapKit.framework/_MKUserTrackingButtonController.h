/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MKUserTrackingButtonTarget, MKUserTrackingView;
@class UIImageView, _MKUserTrackingButton, UIActivityIndicatorView, NSString;

@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate> {

	id<MKUserTrackingButtonTarget> _target;
	id<MKUserTrackingView> _userTrackingView;
	long long _state;
	UIImageView* _imageView;
	_MKUserTrackingButton* _button;
	UIActivityIndicatorView* _activityIndicatorView;
	unsigned long long _buttonBehavior;

}

@property (assign,nonatomic,__weak) id<MKUserTrackingView> userTrackingView;              //@synthesize userTrackingView=_userTrackingView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long buttonBehavior;                           //@synthesize buttonBehavior=_buttonBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)buttonBehavior;
-(id)_activityIndicatorView;
-(id)_shrinkAnimation;
-(void)dealloc;
-(BOOL)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setButtonBehavior:(unsigned long long)arg1 ;
-(void)_updatePreferredSymbolConfiguration;
-(void)setState:(long long)arg1 ;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(void)_updateState;
-(id<MKUserTrackingView>)userTrackingView;
-(void)_updateLoading;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(void)_goToNextMode:(id)arg1 ;
-(id)_expandAnimation;
-(UIImageView *)imageView;
-(long long)state;
-(void)_reloadState;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_contentAnimation;
@end

