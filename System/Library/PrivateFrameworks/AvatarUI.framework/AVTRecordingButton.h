/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol AVTRecordingButtonLongPressDelegate;
@class UIColor, CAShapeLayerAnimated, UIImageView, UIActivityIndicatorView, UIImpactFeedbackGenerator, NSDate;

@interface AVTRecordingButton : UIButton {

	BOOL _forceUsePhoneStyle;
	BOOL _ignoresLongPress;
	BOOL _isTrackingLongPress;
	id<AVTRecordingButtonLongPressDelegate> _longPressDelegate;
	unsigned long long _uiState;
	UIColor* _centerCircleColor;
	CAShapeLayerAnimated* _outerCircle;
	CAShapeLayerAnimated* _innerCircle;
	UIImageView* _iconView;
	UIActivityIndicatorView* _spinner;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	NSDate* _lastFeedbackSent;

}

@property (nonatomic,retain) CAShapeLayerAnimated * outerCircle;                                            //@synthesize outerCircle=_outerCircle - In the implementation block
@property (nonatomic,retain) CAShapeLayerAnimated * innerCircle;                                            //@synthesize innerCircle=_innerCircle - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                        //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                             //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL isTrackingLongPress;                                                      //@synthesize isTrackingLongPress=_isTrackingLongPress - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                                 //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) NSDate * lastFeedbackSent;                                                     //@synthesize lastFeedbackSent=_lastFeedbackSent - In the implementation block
@property (assign,nonatomic,__weak) id<AVTRecordingButtonLongPressDelegate> longPressDelegate;              //@synthesize longPressDelegate=_longPressDelegate - In the implementation block
@property (assign,nonatomic) BOOL forceUsePhoneStyle;                                                       //@synthesize forceUsePhoneStyle=_forceUsePhoneStyle - In the implementation block
@property (assign,setter=setUIState:,nonatomic) unsigned long long uiState;                                 //@synthesize uiState=_uiState - In the implementation block
@property (nonatomic,retain) UIColor * centerCircleColor;                                                   //@synthesize centerCircleColor=_centerCircleColor - In the implementation block
@property (assign,nonatomic) BOOL ignoresLongPress;                                                         //@synthesize ignoresLongPress=_ignoresLongPress - In the implementation block
-(void)configure;
-(void)setCenterCircleColor:(UIColor *)arg1 ;
-(void)setIgnoresLongPress:(BOOL)arg1 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(UIImageView *)iconView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)uiState;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(CAShapeLayerAnimated *)outerCircle;
-(void)setForceUsePhoneStyle:(BOOL)arg1 ;
-(BOOL)forceUsePhoneStyle;
-(CAShapeLayerAnimated *)innerCircle;
-(UIColor *)centerCircleColor;
-(void)sendHapticFeedbackIfNeeded;
-(NSDate *)lastFeedbackSent;
-(void)setLastFeedbackSent:(NSDate *)arg1 ;
-(void)startLongPress;
-(BOOL)isTrackingLongPress;
-(void)endLongPress:(BOOL)arg1 ;
-(void)setIsTrackingLongPress:(BOOL)arg1 ;
-(id<AVTRecordingButtonLongPressDelegate>)longPressDelegate;
-(void)setUIState:(unsigned long long)arg1 ;
-(void)setLongPressDelegate:(id<AVTRecordingButtonLongPressDelegate>)arg1 ;
-(BOOL)ignoresLongPress;
-(void)setOuterCircle:(CAShapeLayerAnimated *)arg1 ;
-(void)setInnerCircle:(CAShapeLayerAnimated *)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
@end

