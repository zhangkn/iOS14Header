/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIButtonBarButton, UIBarButtonItem, UIView;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {

	_UIButtonBarButton* _button;
	UIBarButtonItem* _barButtonItem;

}

@property (nonatomic,readonly) UIView * backIndicatorView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) BOOL backButtonConstraintsActive; 
@property (assign,nonatomic) BOOL backButtonMaskEnabled; 
@property (nonatomic,readonly) UIView * alignmentViewForStaticNavBarButtonLeading; 
@property (nonatomic,readonly) UIView * alignmentViewForStaticNavBarButtonTrailing; 
-(UIView *)contentView;
-(void)pointerWillExit:(id)arg1 ;
-(void)updateMenu;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canUpdateMenuInPlace;
-(BOOL)shouldButtonAdjustToTraitCollection:(id)arg1 ;
-(void)updateButton:(id)arg1 appearance:(id)arg2 ;
-(id)buttonContextMenuStyleFromDefaultStyle:(id)arg1 ;
-(id)buttonContextMenuTargetedPreview;
-(BOOL)useLocalPointerInteraction;
-(id)contentCursorInContainer:(id)arg1 ;
-(id)buttonSpringLoadedInteractionEffect;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(BOOL)buttonHighlitedState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(BOOL)shouldLift;
-(BOOL)buttonEnabledState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(id)buttonSpringLoadedInteractionBehavior;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(UIView *)alignmentViewForStaticNavBarButtonTrailing;
-(id)matchingPointerShapeForView:(id)arg1 rect:(CGRect)arg2 inContainer:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(id)pointerShapeInContainer:(id)arg1 ;
-(CGPoint)menuAnchorPoint;
-(void)setBackButtonConstraintsActive:(BOOL)arg1 ;
-(void)resetButtonHasHighlighted;
-(id)buttonContextMenuInteractionConfiguration;
-(void)updateButton:(id)arg1 forFocusedState:(BOOL)arg2 ;
-(void)cursorWillExit:(id)arg1 ;
-(BOOL)backButtonConstraintsActive;
-(CGSize)buttonIntrinsicContentSize:(id)arg1 ;
-(UIView *)alignmentViewForStaticNavBarButtonLeading;
-(unsigned long long)hash;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(BOOL)supportsBackButtons;
-(BOOL)backButtonMaskEnabled;
-(void)setBackButtonMaskEnabled:(BOOL)arg1 ;
-(void)cursorWillEnter:(id)arg1 ;
-(UIView *)backIndicatorView;
-(void)traitCollectionChangedInSubtreeFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)pointerWillEnter:(id)arg1 ;
-(id)pointerPreviewParameters;
-(void)buttonWillMoveToWindow:(id)arg1 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
-(void)buttonWillMoveToSuperview:(id)arg1 ;
-(UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1 ;
@end

