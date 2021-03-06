/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MaterialKit/MaterialKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTMaterialViewObserving.h>

@class UIView, MTMaterialView, UIColor, NSString;

@interface MTMaterialShadowView : UIView <MTMaterialViewObserving> {

	UIView* _shadowView;
	MTMaterialView* _captureOnlyMaterialView;
	BOOL _captureOnlyMaterialViewSuppliedByClient;
	MTMaterialView* _materialView;

}

@property (nonatomic,readonly) MTMaterialView * materialView;                                                                            //@synthesize materialView=_materialView - In the implementation block
@property (assign,getter=isCaptureOnlyMaterialViewSuppliedByClient,nonatomic) BOOL captureOnlyMaterialViewSuppliedByClient;              //@synthesize captureOnlyMaterialViewSuppliedByClient=_captureOnlyMaterialViewSuppliedByClient - In the implementation block
@property (nonatomic,copy) UIColor * shadowColor; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (assign,nonatomic) BOOL shadowPathIsBounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 ;
+(id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(/*^block*/id)arg4 ;
+(id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 ;
+(id)materialShadowViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
+(id)materialShadowViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
-(CGSize)shadowOffset;
-(double)shadowOpacity;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(MTMaterialView *)materialView;
-(void)setShadowPathIsBounds:(BOOL)arg1 ;
-(BOOL)shadowPathIsBounds;
-(void)groupNameDidChangeForMaterialView:(id)arg1 ;
-(void)weightingDidChangeForMaterialView:(id)arg1 ;
-(void)configurationDidChangeForMaterialView:(id)arg1 ;
-(void)recipeNameDidChangeForMaterialView:(id)arg1 ;
-(id)initWithMaterialView:(id)arg1 ;
-(void)setCaptureOnlyMaterialViewSuppliedByClient:(BOOL)arg1 ;
-(void)_configureShadowViewIfNecessary;
-(void)_configureCaptureOnlyMaterialViewIfNecessary;
-(BOOL)isCaptureOnlyMaterialViewSuppliedByClient;
@end

