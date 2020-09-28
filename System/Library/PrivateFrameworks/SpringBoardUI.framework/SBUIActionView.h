/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView, SBUIActionViewLabel, NSArray, MTVisualStylingProvider, SBUIAction;

@interface SBUIActionView : UIView {

	BOOL _interfaceOrientationIsPortrait;
	UIImageView* _imageView;
	UIView* _textContainer;
	SBUIActionViewLabel* _titleLabel;
	SBUIActionViewLabel* _subtitleLabel;
	UIView* _highlightView;
	NSArray* _imageViewLayoutConstraints;
	MTVisualStylingProvider* _visualStylingProviderStroke;
	MTVisualStylingProvider* _visualStylingProviderFill;
	BOOL _highlighted;
	SBUIAction* _action;
	long long _imagePosition;

}

@property (nonatomic,readonly) SBUIAction * action;                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long imagePosition;                            //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) double leadingContentMargin; 
@property (nonatomic,readonly) double trailingContentMargin; 
-(void)setImagePosition:(long long)arg1 ;
-(long long)imagePosition;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(SBUIAction *)action;
-(void)layoutSubviews;
-(void)_setupSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)leadingContentMargin;
-(void)setHighlighted:(BOOL)arg1 withFeedbackRetargetBehavior:(id)arg2 ;
-(void)_updateVisualStylingIfNecessary;
-(void)_invalidateVisualStyling;
-(void)_updateImageViewLayoutConstraints;
-(double)trailingContentMargin;
@end
