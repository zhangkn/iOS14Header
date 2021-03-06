/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView;

@interface HKNumberedListItemView : UIView {

	UILabel* _numberLabel;
	unsigned long long _number;
	UIView* _numberLabelBackground;

}

@property (assign,nonatomic) unsigned long long number;                   //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                       //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UIView * numberLabelBackground;              //@synthesize numberLabelBackground=_numberLabelBackground - In the implementation block
+(id)numberFont;
+(id)createNumberedViewWithInteger:(unsigned long long)arg1 ;
+(CGSize)listItemSize;
-(id)initWithInteger:(unsigned long long)arg1 ;
-(unsigned long long)number;
-(void)setNumber:(unsigned long long)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)_setUpUI;
-(void)_setUpConstraints;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)numberLabel;
-(UIView *)numberLabelBackground;
-(void)setNumberLabelBackground:(UIView *)arg1 ;
@end

