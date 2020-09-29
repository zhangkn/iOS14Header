/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIFont, NSAttributedString;

@interface GameCenterUI.DynamicTypeLabel : UILabel {

	 fontUseCaseContentSizeCategory;
	 systemDesign;
	 wantsFastBaselineMeasurement;
	 directionalTextAlignment;

}

@property (retain,nonatomic) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (retain,nonatomic) NSAttributedString * attributedText; 
-(void)setTextAlignment:(long long)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(long long)textAlignment;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIFont *)font;
-(id)initWithCoder:(id)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
@end
