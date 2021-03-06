/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSLayoutConstraint, NSString;

@interface HKClinicalAuthorizationHeaderView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	NSLayoutConstraint* _imageToTitleConstraint;

}

@property (nonatomic,readonly) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * imageToTitleConstraint;              //@synthesize imageToTitleConstraint=_imageToTitleConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)title;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(void)_updateForCurrentContentSizeCategory;
-(void)setTitle:(NSString *)arg1 ;
-(NSLayoutConstraint *)imageToTitleConstraint;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
@end

