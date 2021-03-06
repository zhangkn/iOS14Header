/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIImage;

@interface AKMarkupButtonContainerView : UIView {

	BOOL _selected;
	UIButton* _button;
	UIImage* _templateImage;
	UIImage* _colorizedImage;

}

@property (nonatomic,retain) UIButton * button;                     //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIImage * templateImage;               //@synthesize templateImage=_templateImage - In the implementation block
@property (nonatomic,retain) UIImage * colorizedImage;              //@synthesize colorizedImage=_colorizedImage - In the implementation block
@property (assign,nonatomic) BOOL selected;                         //@synthesize selected=_selected - In the implementation block
-(CGSize)_buttonSize;
-(CGSize)intrinsicContentSize;
-(void)setButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIButton *)button;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(BOOL)selected;
-(UIImage *)templateImage;
-(void)setTemplateImage:(UIImage *)arg1 ;
-(UIImage *)colorizedImage;
-(void)setColorizedImage:(UIImage *)arg1 ;
@end

