/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIView, CAShapeLayer;

@interface NTKCFaceContainerView : UIControl {

	BOOL _active;
	long long _style;
	UIView* _faceView;
	UIView* _backgroundView;
	CAShapeLayer* _outline;
	UIView* _faceContainer;
	UIView* _highlightView;
	CGSize _faceSize;

}

@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outline;               //@synthesize outline=_outline - In the implementation block
@property (nonatomic,retain) UIView * faceContainer;               //@synthesize faceContainer=_faceContainer - In the implementation block
@property (nonatomic,retain) UIView * highlightView;               //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) CGSize faceSize;                      //@synthesize faceSize=_faceSize - In the implementation block
@property (assign,nonatomic) long long style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView * faceView;                    //@synthesize faceView=_faceView - In the implementation block
@property (assign,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
+(CGSize)sizeForFaceSize:(CGSize)arg1 style:(long long)arg2 ;
+(double)_insetPaddingForStyle:(long long)arg1 ;
+(CGSize)faceSizeForSize:(CGSize)arg1 style:(long long)arg2 ;
-(BOOL)active;
-(CAShapeLayer *)outline;
-(void)setActive:(BOOL)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(long long)style;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFaceSize:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setOutline:(CAShapeLayer *)arg1 ;
-(CGSize)faceSize;
-(UIView *)highlightView;
-(void)setStyle:(long long)arg1 ;
-(void)setFaceView:(UIView *)arg1 ;
-(UIView *)faceView;
-(id)initWithFaceSize:(CGSize)arg1 style:(long long)arg2 ;
-(void)setFaceContainer:(UIView *)arg1 ;
-(UIView *)faceContainer;
-(double)_outlineLineWidth;
-(void)_updateOutlineColor;
-(CGAffineTransform)_transformForFaceView;
@end
