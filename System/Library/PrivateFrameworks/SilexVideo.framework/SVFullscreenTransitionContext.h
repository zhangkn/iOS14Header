/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVFullscreenTransitionContext.h>
@class UIView;


@protocol SVFullscreenTransitionContext <NSObject>
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (nonatomic,readonly) UIView * fromView; 
@property (nonatomic,readonly) UIView * toView; 
@property (nonatomic,readonly) double transitionDuration; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@required
-(UIView *)contentOverlayView;
-(UIView *)toView;
-(BOOL)isInteractive;
-(UIView *)fromView;
-(double)transitionDuration;

@end


@class UIView, NSString;

@interface SVFullscreenTransitionContext : NSObject <SVFullscreenTransitionContext> {

	BOOL _interactive;
	UIView* _contentOverlayView;
	UIView* _fromView;
	UIView* _toView;
	double _transitionDuration;

}

@property (nonatomic,readonly) UIView * contentOverlayView;                        //@synthesize contentOverlayView=_contentOverlayView - In the implementation block
@property (nonatomic,readonly) UIView * fromView;                                  //@synthesize fromView=_fromView - In the implementation block
@property (nonatomic,readonly) UIView * toView;                                    //@synthesize toView=_toView - In the implementation block
@property (nonatomic,readonly) double transitionDuration;                          //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)contentOverlayView;
-(UIView *)toView;
-(BOOL)isInteractive;
-(UIView *)fromView;
-(double)transitionDuration;
-(id)initWithContentOverlayView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 transitionDuration:(double)arg4 interactive:(BOOL)arg5 ;
@end

