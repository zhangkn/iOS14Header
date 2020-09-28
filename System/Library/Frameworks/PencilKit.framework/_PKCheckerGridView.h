/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImageView;

@interface _PKCheckerGridView : UIView {

	double _gridSize;
	UIColor* _colorA;
	UIColor* _colorB;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double gridSize;                      //@synthesize gridSize=_gridSize - In the implementation block
@property (nonatomic,retain) UIColor * colorA;                     //@synthesize colorA=_colorA - In the implementation block
@property (nonatomic,retain) UIColor * colorB;                     //@synthesize colorB=_colorB - In the implementation block
-(double)gridSize;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)colorB;
-(UIColor *)colorA;
-(void)setGridSize:(double)arg1 ;
-(void)setColorB:(UIColor *)arg1 ;
-(UIImageView *)imageView;
-(void)setColorA:(UIColor *)arg1 ;
-(id)gridTileImage;
@end
