/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImage, UIImageView, UIView, CAShapeLayer;

@interface ADCountdownButton : UIControl {

	BOOL _dimmed;
	UIImage* _iconImage;
	UIImage* _dimmedIconImage;
	UIImageView* _backgroundView;
	UIImageView* _iconView;
	UIView* _outlineView;
	CAShapeLayer* _outlineProgressLayer;

}

@property (nonatomic,retain) UIImage * iconImage;                              //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * dimmedIconImage;                        //@synthesize dimmedIconImage=_dimmedIconImage - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundView;                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                           //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIView * outlineView;                             //@synthesize outlineView=_outlineView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outlineProgressLayer;              //@synthesize outlineProgressLayer=_outlineProgressLayer - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                      //@synthesize dimmed=_dimmed - In the implementation block
+(id)_closeBoxImage;
+(id)_inactiveCloseBoxImage;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)iconView;
-(UIImage *)iconImage;
-(id)init;
-(UIImageView *)backgroundView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)dimmed;
-(unsigned long long)accessibilityTraits;
-(void)startEnablingButtonWithCountdownDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDimmedIconImage:(UIImage *)arg1 ;
-(void)setOutlineView:(UIView *)arg1 ;
-(UIView *)outlineView;
-(void)setOutlineProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outlineProgressLayer;
-(void)setCountdownProgress:(double)arg1 ;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImage *)dimmedIconImage;
-(double)countdownProgress;
@end
