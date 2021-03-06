/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>

@class UILabel, UIView, UIButton, NSLayoutConstraint;

@interface GKDefaultPrivacyViewController : UIViewController {

	int _profilePrivacyVisibility;
	UILabel* _publicTitle;
	UILabel* _publicSubTitle;
	UILabel* _friendsOnlyTitle;
	UILabel* _friendsOnlySubtitle;
	UILabel* _meOnlyTitle;
	UILabel* _meOnlySubtitle;
	UIView* _publicDivider;
	UIView* _publicContainer;
	UIButton* _publicButton;
	UIButton* _friendsOnlyButton;
	UIButton* _meOnlyButton;
	NSLayoutConstraint* _topMargin;
	UIView* _buttonContainer;
	NSLayoutConstraint* _mainStackViewTrailingConstraint;
	NSLayoutConstraint* _mainStackViewLeadingConstraint;
	NSLayoutConstraint* _continueButtonEqualMainTitleWidthConstraint;
	NSLayoutConstraint* _continueButtonWidthConstraint;
	NSLayoutConstraint* _continueButtonBottomConstraint;
	UILabel* _underageHintLabel;
	UIButton* _nextButton;
	UILabel* _mainTitle;
	long long _numberOfClicksOnPrivacySelection;

}

@property (nonatomic,retain) UILabel * publicTitle;                                                         //@synthesize publicTitle=_publicTitle - In the implementation block
@property (nonatomic,retain) UILabel * publicSubTitle;                                                      //@synthesize publicSubTitle=_publicSubTitle - In the implementation block
@property (nonatomic,retain) UILabel * friendsOnlyTitle;                                                    //@synthesize friendsOnlyTitle=_friendsOnlyTitle - In the implementation block
@property (nonatomic,retain) UILabel * friendsOnlySubtitle;                                                 //@synthesize friendsOnlySubtitle=_friendsOnlySubtitle - In the implementation block
@property (nonatomic,retain) UILabel * meOnlyTitle;                                                         //@synthesize meOnlyTitle=_meOnlyTitle - In the implementation block
@property (nonatomic,retain) UILabel * meOnlySubtitle;                                                      //@synthesize meOnlySubtitle=_meOnlySubtitle - In the implementation block
@property (nonatomic,retain) UIView * publicDivider;                                                        //@synthesize publicDivider=_publicDivider - In the implementation block
@property (nonatomic,retain) UIView * publicContainer;                                                      //@synthesize publicContainer=_publicContainer - In the implementation block
@property (nonatomic,retain) UIButton * publicButton;                                                       //@synthesize publicButton=_publicButton - In the implementation block
@property (nonatomic,retain) UIButton * friendsOnlyButton;                                                  //@synthesize friendsOnlyButton=_friendsOnlyButton - In the implementation block
@property (nonatomic,retain) UIButton * meOnlyButton;                                                       //@synthesize meOnlyButton=_meOnlyButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topMargin;                                                //@synthesize topMargin=_topMargin - In the implementation block
@property (nonatomic,retain) UIView * buttonContainer;                                                      //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mainStackViewTrailingConstraint;                          //@synthesize mainStackViewTrailingConstraint=_mainStackViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mainStackViewLeadingConstraint;                           //@synthesize mainStackViewLeadingConstraint=_mainStackViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonEqualMainTitleWidthConstraint;              //@synthesize continueButtonEqualMainTitleWidthConstraint=_continueButtonEqualMainTitleWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonWidthConstraint;                            //@synthesize continueButtonWidthConstraint=_continueButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonBottomConstraint;                           //@synthesize continueButtonBottomConstraint=_continueButtonBottomConstraint - In the implementation block
@property (nonatomic,retain) UILabel * underageHintLabel;                                                   //@synthesize underageHintLabel=_underageHintLabel - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                                         //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UILabel * mainTitle;                                                           //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) int profilePrivacyVisibility;                                                  //@synthesize profilePrivacyVisibility=_profilePrivacyVisibility - In the implementation block
@property (assign) long long numberOfClicksOnPrivacySelection;                                              //@synthesize numberOfClicksOnPrivacySelection=_numberOfClicksOnPrivacySelection - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIView *)publicContainer;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setButtonContainer:(UIView *)arg1 ;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIView *)buttonContainer;
-(void)viewWillLayoutSubviews;
-(UILabel *)mainTitle;
-(void)updateUI;
-(void)nextPressed:(id)arg1 ;
-(UIButton *)meOnlyButton;
-(UIButton *)nextButton;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIButton *)publicButton;
-(UIButton *)friendsOnlyButton;
-(void)setProfilePrivacyVisibility:(int)arg1 ;
-(void)setNumberOfClicksOnPrivacySelection:(long long)arg1 ;
-(UILabel *)publicTitle;
-(UILabel *)friendsOnlyTitle;
-(UILabel *)meOnlyTitle;
-(UILabel *)publicSubTitle;
-(UILabel *)friendsOnlySubtitle;
-(UILabel *)meOnlySubtitle;
-(UIView *)publicDivider;
-(UILabel *)underageHintLabel;
-(void)notNowButtonPressed:(id)arg1 ;
-(NSLayoutConstraint *)mainStackViewLeadingConstraint;
-(NSLayoutConstraint *)mainStackViewTrailingConstraint;
-(NSLayoutConstraint *)continueButtonEqualMainTitleWidthConstraint;
-(NSLayoutConstraint *)continueButtonWidthConstraint;
-(NSLayoutConstraint *)continueButtonBottomConstraint;
-(int)profilePrivacyVisibility;
-(long long)numberOfClicksOnPrivacySelection;
-(void)reportPrivacySelectionClickAnalytics;
-(void)button1Pressed:(id)arg1 ;
-(void)button2Pressed:(id)arg1 ;
-(void)button3Pressed:(id)arg1 ;
-(void)setPublicTitle:(UILabel *)arg1 ;
-(void)setPublicSubTitle:(UILabel *)arg1 ;
-(void)setFriendsOnlyTitle:(UILabel *)arg1 ;
-(void)setFriendsOnlySubtitle:(UILabel *)arg1 ;
-(void)setMeOnlyTitle:(UILabel *)arg1 ;
-(void)setMeOnlySubtitle:(UILabel *)arg1 ;
-(void)setPublicDivider:(UIView *)arg1 ;
-(void)setPublicButton:(UIButton *)arg1 ;
-(void)setFriendsOnlyButton:(UIButton *)arg1 ;
-(void)setMeOnlyButton:(UIButton *)arg1 ;
-(void)setMainStackViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMainStackViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonEqualMainTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUnderageHintLabel:(UILabel *)arg1 ;
-(void)setPublicContainer:(UIView *)arg1 ;
-(void)setMainTitle:(UILabel *)arg1 ;
-(NSLayoutConstraint *)topMargin;
-(void)setTopMargin:(NSLayoutConstraint *)arg1 ;
@end

