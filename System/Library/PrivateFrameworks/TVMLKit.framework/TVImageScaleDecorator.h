/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface TVImageScaleDecorator : TVImageDecorator {

	BOOL _cornerContinuous;
	BOOL _preservesAlpha;
	long long _scaleMode;
	double _focusedSizeIncrease;
	UIColor* _bgColor;
	CGSize _scaleToSize;
	UIEdgeInsets _padding;
	TVCornerRadii _cornerRadii;

}

@property (assign,nonatomic) CGSize scaleToSize;                      //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) long long scaleMode;                     //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) double focusedSizeIncrease;              //@synthesize focusedSizeIncrease=_focusedSizeIncrease - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                    //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) TVCornerRadii cornerRadii;               //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (assign,nonatomic) BOOL cornerContinuous;                   //@synthesize cornerContinuous=_cornerContinuous - In the implementation block
@property (nonatomic,copy) UIColor * bgColor;                         //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) BOOL preservesAlpha;                     //@synthesize preservesAlpha=_preservesAlpha - In the implementation block
@property (assign,nonatomic) BOOL cropToFit; 
@property (assign,nonatomic) double upscaleAdjustment; 
-(void)setCornerRadii:(TVCornerRadii)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setBgColor:(UIColor *)arg1 ;
-(UIColor *)bgColor;
-(id)init;
-(TVCornerRadii)cornerRadii;
-(BOOL)isEqual:(id)arg1 ;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(unsigned long long)hash;
-(double)focusedSizeIncrease;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(void)setScaleToSize:(CGSize)arg1 ;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(double)upscaleAdjustment;
-(id)initWithScaleToSize:(CGSize)arg1 ;
-(id)decoratorIdentifier;
-(BOOL)needsAlphaForImage:(id)arg1 ;
-(id)initWithScaleToSize:(CGSize)arg1 scaleMode:(long long)arg2 ;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(void)setCropToFit:(BOOL)arg1 ;
-(CGSize)loaderScaleToSize;
-(CGSize)expectedSize;
-(CGSize)_scaleToSizeAdjustedForUpscaling;
-(UIEdgeInsets)_paddingAdjustedForUpscaling;
-(void)_applyCornerMaskForRect:(CGRect)arg1 toContext:(CGContextRef)arg2 ;
-(id)_imageFixedForRotation:(id)arg1 ;
-(BOOL)preservesAlpha;
-(double)_focusedSizeIncreaseFactor;
-(BOOL)cornerContinuous;
-(id)initWithScaleToSize:(CGSize)arg1 cropToFit:(BOOL)arg2 ;
-(BOOL)loaderCropToFit;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(void)setCornerContinuous:(BOOL)arg1 ;
-(void)setPreservesAlpha:(BOOL)arg1 ;
@end

