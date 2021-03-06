/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUSliderValueTableViewCellDelegate;
@class HFItem, NSString, UISlider, UILabel, NSArray, UIImage;

@interface HUSliderValueTableViewCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol> {

	BOOL _showValue;
	BOOL _useLargeCell;
	HFItem* _item;
	id<HUSliderValueTableViewCellDelegate> _delegate;
	NSString* _title;
	UISlider* _slider;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UISlider * slider;                                                   //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                               //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUSliderValueTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double minimumValue; 
@property (assign,nonatomic) double maximumValue; 
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) BOOL showValue;                                                      //@synthesize showValue=_showValue - In the implementation block
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (nonatomic,retain) UIImage * minimumValueImage; 
@property (nonatomic,retain) UIImage * maximumValueImage; 
@property (assign,nonatomic) BOOL useLargeCell;                                                   //@synthesize useLargeCell=_useLargeCell - In the implementation block
@property (nonatomic,retain) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(void)setDisabled:(BOOL)arg1 ;
-(double)minimumValue;
-(UISlider *)slider;
-(double)maximumValue;
-(void)setShowValue:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isDisabled;
-(void)didMoveToSuperview;
-(void)setMinimumValue:(double)arg1 ;
-(UIImage *)minimumValueImage;
-(void)setValue:(double)arg1 ;
-(void)prepareForReuse;
-(NSString *)title;
-(void)_sliderChanged:(id)arg1 ;
-(void)_setupAutoLayoutConstraints;
-(void)setUseLargeCell:(BOOL)arg1 ;
-(BOOL)useLargeCell;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setSlider:(UISlider *)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(BOOL)isContinuous;
-(UIImage *)maximumValueImage;
-(HFItem *)item;
-(void)setDelegate:(id<HUSliderValueTableViewCellDelegate>)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(double)value;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showValue;
-(NSArray *)constraints;
-(id<HUSliderValueTableViewCellDelegate>)delegate;
-(UILabel *)valueLabel;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
@end

