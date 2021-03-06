/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDItemProvider.h>

@protocol CAMModeDialDataSource;
@class UIView, NSArray, NSDictionary, CAGradientLayer, NSString;

@interface CAMModeDial : UIControl <CAMAccessibilityHUDItemProvider> {

	long long _layoutStyle;
	id<CAMModeDialDataSource> _dataSource;
	long long _selectedMode;
	UIView* __selectedItemBackgroundView;
	NSArray* __modes;
	NSDictionary* __items;
	UIView* __meshTransformView;
	CAGradientLayer* __gradientLayer;
	UIView* __itemsContainerView;

}

@property (nonatomic,readonly) UIView * _selectedItemBackgroundView;               //@synthesize _selectedItemBackgroundView=__selectedItemBackgroundView - In the implementation block
@property (setter=_setModes:,nonatomic,retain) NSArray * _modes;                   //@synthesize _modes=__modes - In the implementation block
@property (setter=_setItems:,nonatomic,retain) NSDictionary * _items;              //@synthesize _items=__items - In the implementation block
@property (nonatomic,readonly) UIView * _meshTransformView;                        //@synthesize _meshTransformView=__meshTransformView - In the implementation block
@property (nonatomic,readonly) CAGradientLayer * _gradientLayer;                   //@synthesize _gradientLayer=__gradientLayer - In the implementation block
@property (nonatomic,readonly) UIView * _itemsContainerView;                       //@synthesize _itemsContainerView=__itemsContainerView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) id<CAMModeDialDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long selectedMode;                               //@synthesize selectedMode=_selectedMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsVerticalModeDialForLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)_updateContainerCenterFromSelectedModeAnimated:(BOOL)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(UIView *)_itemsContainerView;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)_nearestCaptureModeForLocation:(CGPoint)arg1 ;
-(void)setDataSource:(id<CAMModeDialDataSource>)arg1 ;
-(void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)arg1 ;
-(UIView *)_meshTransformView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_horizontalMeshTransform;
-(CGPoint)_horizontalContainerCenterForMode:(long long)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)_meshTransformForLayoutStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)selectedMode;
-(void)_configureGradientForLayoutStyle:(long long)arg1 ;
-(double)_centeringNudgeForMode:(long long)arg1 ;
-(CAGradientLayer *)_gradientLayer;
-(void)reloadData;
-(NSArray *)_modes;
-(void)_layoutVerticalModeDial;
-(id<CAMModeDialDataSource>)dataSource;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateSelectedItemBackgroundForLayoutStyle:(long long)arg1 ;
-(void)_configureMeshTransformForLayoutStyle:(long long)arg1 ;
-(void)_updateForLayoutStyle;
-(UIView *)_selectedItemBackgroundView;
-(void)_updateItemsForLayoutStyle:(long long)arg1 ;
-(CGSize)_interpolatedHorizontalMeshTransformSize;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)_items;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(id)_fontForLayoutStyle:(long long)arg1 selected:(BOOL)arg2 ;
-(id)_selectedItem;
-(void)setSelectedMode:(long long)arg1 ;
-(void)_setModes:(id)arg1 ;
-(void)_layoutHorizontalModeDial;
-(CGPoint)_verticalContainerCenterForMode:(long long)arg1 ;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setItems:(id)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
@end

