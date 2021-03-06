/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell {

	UIImageView* _symbol;
	UILabel* _title;
	UIView* _selectedCircle;

}

@property (nonatomic,retain) UIImageView * symbol;                 //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) UILabel * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * selectedCircle;              //@synthesize selectedCircle=_selectedCircle - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)symbol;
-(void)dealloc;
-(UILabel *)title;
-(id)titleFont;
-(id)symbolFont;
-(void)setSymbol:(UIImageView *)arg1 ;
-(UIView *)selectedCircle;
-(void)setPressIndicatorHidden:(BOOL)arg1 ;
-(void)setSelectedCircleBlendMode:(BOOL)arg1 ;
-(void)setSelectedCircle:(UIView *)arg1 ;
-(void)setTitle:(UILabel *)arg1 ;
-(void)setTitleText:(id)arg1 ;
@end

