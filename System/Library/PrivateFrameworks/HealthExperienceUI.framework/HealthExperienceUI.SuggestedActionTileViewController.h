/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIView, UIImageView, NSLayoutConstraint, UILabel, UIButton;

@interface HealthExperienceUI.SuggestedActionTileViewController : UIViewController {

	 context;
	 nibObjects;
	 containerView;
	 imageView;
	 imageBackgroundView;
	 containerViewTopConstraint;
	 containerViewBottomConstraint;
	 imageBackgroundViewContainerViewTopConstraint;
	 imageBackgroundViewContainerViewBottomConstraint;
	 titleLabel;
	 bodyLabel;
	 linkButton;
	 linkButtonTopSpacingConstraint;
	 linkButtonHeightConstraint;
	 actionButton;
	 actionButtonTopSpacingConstraint;
	 actionButtonHeightConstraint;
	 actionButtonStyle;
	 suggestedActionDelegate;

}

@property (assign,__weak,nonatomic) UIView * containerView; 
@property (assign,__weak,nonatomic) UIImageView * imageView; 
@property (assign,__weak,nonatomic) UIView * imageBackgroundView; 
@property (retain,nonatomic) NSLayoutConstraint * containerViewTopConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * containerViewBottomConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * imageBackgroundViewContainerViewTopConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * imageBackgroundViewContainerViewBottomConstraint; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UILabel * bodyLabel; 
@property (assign,__weak,nonatomic) UIButton * actionButton; 
@property (retain,nonatomic) NSLayoutConstraint * actionButtonHeightConstraint; 
-(void)viewDidLayoutSubviews;
-(UIView *)containerView;
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)loadView;
-(void)didTapLink:(id)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)imageBackgroundView;
-(void)setImageBackgroundView:(UIView *)arg1 ;
-(NSLayoutConstraint *)containerViewTopConstraint;
-(void)setContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerViewBottomConstraint;
-(void)setContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageBackgroundViewContainerViewTopConstraint;
-(void)setImageBackgroundViewContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageBackgroundViewContainerViewBottomConstraint;
-(void)setImageBackgroundViewContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)didTapAction:(id)arg1 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)actionButtonHeightConstraint;
-(void)setActionButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)imageView;
@end

