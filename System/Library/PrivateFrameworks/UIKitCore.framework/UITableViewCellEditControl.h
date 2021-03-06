/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITableViewCell, UIImageView;

@interface UITableViewCellEditControl : UIControl {

	UITableViewCell* _cell;
	UIImageView* _imageView;
	UIImageView* _shadowView;
	double _focalY;
	double _focalHeight;
	unsigned _style : 2;
	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _reserved : 27;

}

@property (assign,getter=isRotated,nonatomic) BOOL rotated; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
@property (nonatomic,readonly) BOOL wantsImageShadow; 
-(unsigned long long)_controlEventsForActionTriggered;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(id)_renderedImage;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isRotated;
-(void)setRotated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)adjustLayoutForFocalRect:(CGRect)arg1 ;
-(void)_updateImageView;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setRotated:(BOOL)arg1 ;
-(void)_multiselectColorChanged;
-(id)_currentImage;
-(id)_deleteImage;
-(void)_toggleRotate;
-(id)_insertImage;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)_shadowImage;
-(id)_multiSelectNotSelectedImage;
-(BOOL)wantsImageShadow;
-(id)_multiSelectSelectedImage;
-(void)_createImageViewIfNeccessary;
-(void)_toggleRotateAnimationDidStop;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isRotating;
-(CGSize)defaultSize;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(id)_imageView;
@end

