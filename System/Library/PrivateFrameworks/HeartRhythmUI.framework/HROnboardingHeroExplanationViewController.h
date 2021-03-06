/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class UIView, UILabel, HRStackedButtonView, NSLayoutConstraint, NSString;

@interface HROnboardingHeroExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate> {

	long long _textAlignment;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;

}

@property (nonatomic,retain) UIView * heroView;                                             //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,readonly) NSString * titleString; 
@property (nonatomic,readonly) NSString * bodyString; 
@property (nonatomic,readonly) NSString * buttonTitleString; 
@property (assign,nonatomic) long long textAlignment;                                       //@synthesize textAlignment=_textAlignment - In the implementation block
-(void)setTextAlignment:(long long)arg1 ;
-(id)_titleFont;
-(void)viewDidLayoutSubviews;
-(long long)textAlignment;
-(UILabel *)titleLabel;
-(void)setHeroView:(UIView *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_titleFontTextStyle;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)bodyString;
-(UIView *)heroView;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setUpUI;
-(void)setUpConstraints;
-(NSString *)titleString;
-(id)createHeroView;
-(NSString *)buttonTitleString;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)_setUpButtonFooterView;
-(void)_adjustButtonFooterViewLocationForViewContentHeight;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(double)_titleLastBaselineToBodyTop;
-(long long)stackedButtonViewLastButtonMode;
-(double)_titleTopToFirstBaselineLeading;
-(id)_bodyFontTextStyle;
-(double)_titleTopToFirstBaseline;
@end

