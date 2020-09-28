/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIGiftDashView, UILabel, NSString;

@interface SKUIGiftConfirmLabeledValue : UIView {

	SKUIGiftDashView* _dashView;
	UILabel* _labelLabel;
	long long _style;
	UILabel* _valueLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,readonly) long long giftConfirmLabelStyle;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * subtitleLabel; 
@property (nonatomic,copy) NSString * value; 
-(void)setSubtitleLabel:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)subtitleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)value;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithGiftConfirmLabelStyle:(long long)arg1 ;
-(long long)giftConfirmLabelStyle;
@end
