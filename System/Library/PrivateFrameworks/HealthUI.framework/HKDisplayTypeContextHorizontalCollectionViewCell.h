/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol HKDisplayTypeContextHorizontalCollectionViewCellDelegate;
@class UILabel, UIButton, HKUIMetricColors, NSArray, HKDisplayTypeContextItem;

@interface HKDisplayTypeContextHorizontalCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UIButton* _infoButton;
	UILabel* _valueLabel;
	UILabel* _unitLabel;
	UILabel* _dateLabel;
	HKUIMetricColors* _currentMetricColors;
	NSArray* _horizontalConstraints;
	HKDisplayTypeContextItem* _contextItem;
	id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate> _delegate;

}

@property (nonatomic,retain) HKDisplayTypeContextItem * contextItem;                                                    //@synthesize contextItem=_contextItem - In the implementation block
@property (assign,nonatomic,__weak) id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
-(id)_titleLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)_dateLabelFont;
-(void)prepareForReuse;
-(void)infoButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate>)arg1 ;
-(void)updateUI:(BOOL)arg1 ;
-(id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate>)delegate;
-(void)setContextItem:(HKDisplayTypeContextItem *)arg1 ;
-(HKDisplayTypeContextItem *)contextItem;
-(id)_valueLabelFont;
-(id)_unitLabelFont;
-(id)_buildHorizontalConstraints;
-(void)_applyHorizontalDesign;
-(double)_titleLabelBaselineOffsetFromTop;
-(double)_valueLabelBaselineOffsetFromDateLabel;
-(double)_dateBaselineOffsetFromValue;
-(double)_bottomOffsetFromDateBaseline;
-(void)_setActiveForConstraints:(id)arg1 active:(BOOL)arg2 ;
-(void)updateMetricColors:(BOOL)arg1 ;
-(void)updateUIColors;
-(void)_unapplyHorizontalDesign;
@end

