/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIScrollView, UILabel, UIButton;

@interface SHSHeadphoneNotificationsController : UIViewController {

	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _learnMoreButton;

}

@property (nonatomic,retain) UIScrollView * scrollView;               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;              //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
-(UILabel *)titleLabel;
-(id)descriptionText;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)titleText;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UIScrollView *)scrollView;
-(id)createTitleLabel;
-(id)createScrollView;
-(id)createDescriptionLabel;
-(id)createLearnMoreButton;
-(void)openHealthArticleSafeListening;
@end

