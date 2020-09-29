/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardSectionHeaderView.h>

@class NSAttributedString, UIView, UIButton, UIStackView, NSLayoutConstraint, NSString, UIMenu;

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView {

	BOOL _buttonHidden;
	NSAttributedString* _attributedButtonTitle;
	id _buttonTarget;
	SEL _buttonAction;
	UIView* _backgroundPlatterView;
	UIButton* _button;
	UIStackView* _stackView;
	NSLayoutConstraint* _rightMarginConstraint;

}

@property (assign,nonatomic) UIButton * button;                                       //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) UIStackView * stackView;                                 //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * rightMarginConstraint;              //@synthesize rightMarginConstraint=_rightMarginConstraint - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) NSAttributedString * attributedButtonTitle;                //@synthesize attributedButtonTitle=_attributedButtonTitle - In the implementation block
@property (assign,nonatomic) id buttonTarget;                                         //@synthesize buttonTarget=_buttonTarget - In the implementation block
@property (assign,nonatomic) SEL buttonAction;                                        //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,getter=isButtonHidden,nonatomic) BOOL buttonHidden;                 //@synthesize buttonHidden=_buttonHidden - In the implementation block
@property (assign,nonatomic) UIView * backgroundPlatterView;                          //@synthesize backgroundPlatterView=_backgroundPlatterView - In the implementation block
@property (assign,nonatomic) UIMenu * buttonMenu; 
+(double)widthForTitle:(id)arg1 buttonTitle:(id)arg2 ;
+(CGSize)platformSizeForTitle:(id)arg1 buttonTitle:(id)arg2 ;
+(double)widthForTitle:(id)arg1 ;
+(CGSize)platformSizeForTitle:(id)arg1 ;
-(UIStackView *)stackView;
-(void)setButtonTarget:(id)arg1 ;
-(void)setButtonMenu:(UIMenu *)arg1 ;
-(void)setButtonHidden:(BOOL)arg1 ;
-(void)setAttributedButtonTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedButtonTitle;
-(id)buttonTarget;
-(BOOL)isButtonHidden;
-(UIView *)backgroundPlatterView;
-(void)setBackgroundPlatterView:(UIView *)arg1 ;
-(NSLayoutConstraint *)rightMarginConstraint;
-(void)setRightMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setButton:(UIButton *)arg1 ;
-(void)prepareForReuse;
-(UIButton *)button;
-(NSString *)buttonTitle;
-(void)buttonPressed:(id)arg1 ;
-(void)setButtonAction:(SEL)arg1 ;
-(SEL)buttonAction;
-(UIMenu *)buttonMenu;
-(void)awakeFromNib;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
@end
