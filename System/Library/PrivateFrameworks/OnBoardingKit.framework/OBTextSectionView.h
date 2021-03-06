/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStackView.h>

@class UILabel;

@interface OBTextSectionView : UIStackView {

	UILabel* _headerLabel;
	UILabel* _contentLabel;

}

@property (nonatomic,retain) UILabel * headerLabel;               //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * contentLabel;              //@synthesize contentLabel=_contentLabel - In the implementation block
-(UILabel *)contentLabel;
-(void)setContentLabel:(UILabel *)arg1 ;
-(id)_contentFont;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_headerFont;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(id)initWithHeader:(id)arg1 content:(id)arg2 ;
-(void)addAccessoryButton:(id)arg1 ;
-(UILabel *)headerLabel;
@end

