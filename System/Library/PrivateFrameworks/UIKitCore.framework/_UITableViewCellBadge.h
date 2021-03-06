/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIFont, UIColor, NSString;

@interface _UITableViewCellBadge : UIView {

	BOOL _selected;
	UILabel* _badgeTextLabel;

}

@property (nonatomic,retain) UILabel * badgeTextLabel;                     //@synthesize badgeTextLabel=_badgeTextLabel - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * color; 
@property (nonatomic,copy) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(NSString *)text;
-(double)minHeight;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)badgeTextLabel;
-(void)setBadgeTextLabel:(UILabel *)arg1 ;
-(BOOL)isSelected;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)_sizeToFit;
-(void)setFont:(UIFont *)arg1 ;
@end

