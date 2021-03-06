/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIFocusFastScrollingIndexBarEntry, UILabel, UIView;

@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell {

	_UIFocusFastScrollingIndexBarEntry* _entry;
	UILabel* _titleLabel;
	UIView* _roundedCornersBackground;

}

@property (nonatomic,retain) _UIFocusFastScrollingIndexBarEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * roundedCornersBackground;                       //@synthesize roundedCornersBackground=_roundedCornersBackground - In the implementation block
+(id)cellFont;
-(void)_updateColors;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setEntry:(_UIFocusFastScrollingIndexBarEntry *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)updateForEntry:(id)arg1 ;
-(UIView *)roundedCornersBackground;
-(BOOL)_isAnotherIndexTitleCellFocused;
-(void)setRoundedCornersBackground:(UIView *)arg1 ;
-(_UIFocusFastScrollingIndexBarEntry *)entry;
@end

