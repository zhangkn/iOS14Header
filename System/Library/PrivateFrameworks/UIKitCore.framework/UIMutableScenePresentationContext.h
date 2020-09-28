/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScenePresentationContext.h>

@class UIScenePresentationContext, NSSet, NSString, UIColor, UITransformer;

@interface UIMutableScenePresentationContext : UIScenePresentationContext

@property (setter=_setDefaultPresentationContext:,nonatomic,retain) UIScenePresentationContext * _defaultPresentationContext; 
@property (setter=_setExclusiveLayerTargetsToInclude:,nonatomic,copy) NSSet * _exclusiveLayerTargetsToInclude; 
@property (setter=_setLayerTargetsToExclude:,nonatomic,copy) NSSet * _layerTargetsToExclude; 
@property (assign,setter=_setVisibilityPropagationEnabled:,getter=_isVisibilityPropagationEnabled,nonatomic) BOOL _visibilityPropagationEnabled; 
@property (setter=_setMinificationFilterName:,nonatomic,copy) NSString * _minificationFilterName; 
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled; 
@property (assign,nonatomic) unsigned long long appearanceStyle; 
@property (nonatomic,copy) UIColor * backgroundColorWhileHosting; 
@property (nonatomic,copy) UIColor * backgroundColorWhileNotHosting; 
@property (assign,nonatomic) unsigned long long presentedLayerTypes; 
@property (nonatomic,copy) UITransformer * hostTransformer; 
@property (assign,nonatomic) unsigned long long renderingMode; 
-(void)setRenderingMode:(unsigned long long)arg1 ;
-(void)setAppearanceStyle:(unsigned long long)arg1 ;
-(void)removeLayerPresentationOverrideForLayerTarget:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIScenePresentationContext *)_defaultPresentationContext;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(void)_setMinificationFilterName:(id)arg1 ;
-(void)setBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(void)_setVisibilityPropagationEnabled:(BOOL)arg1 ;
-(void)resetToDefaults;
-(void)setHostTransformer:(UITransformer *)arg1 ;
-(void)_setExclusiveLayerTargetsToInclude:(id)arg1 ;
-(void)_setLayerTargetsToExclude:(id)arg1 ;
-(id)_existingLayerPresentationContextCreatingIfNecessary:(BOOL)arg1 ;
-(void)setPresentedLayerTypes:(unsigned long long)arg1 ;
-(void)modifyLayerPresentationOverrideContextForLayerTarget:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)removeAllLayerPresentationOverrides;
-(void)setBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(void)_setDefaultPresentationContext:(id)arg1 ;
@end
