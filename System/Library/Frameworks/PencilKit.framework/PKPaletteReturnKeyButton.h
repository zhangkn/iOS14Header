/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteButton.h>

@class PKPaletteReturnKeyButtonContentView;

@interface PKPaletteReturnKeyButton : PKPaletteButton {

	double _scalingFactor;
	long long _returnKeyType;
	long long _axis;
	PKPaletteReturnKeyButtonContentView* _contentView;

}

@property (nonatomic,retain) PKPaletteReturnKeyButtonContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                                        //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) long long axis;                                                 //@synthesize axis=_axis - In the implementation block
-(id)_backgroundColor;
-(long long)returnKeyType;
-(PKPaletteReturnKeyButtonContentView *)contentView;
-(double)scalingFactor;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(id)_textColor;
-(BOOL)_useCompactLayout;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateImageView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(PKPaletteReturnKeyButtonContentView *)arg1 ;
-(void)_updateUI;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)_contentViewSize;
-(void)_updateLabelText;
-(void)setScalingFactor:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_updateContentViewOrientation;
-(id)_returnKeyImage;
-(id)_returnKeyTintColor;
-(id)_regularLayoutBackgroundColor;
-(BOOL)_shouldUseBlueReturnKeyColor;
-(id)_returnKeyLabelText;
-(id)_returnKeyImageSymbolConfiguration;
@end

