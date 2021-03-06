/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMExpandableMenuButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, NSString;

@interface CAMFlashButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {

	BOOL _allowsAutomaticFlash;
	BOOL _unavailable;
	UIImageView* __glyphView;
	UIImageView* __warningIndicatorView;

}

@property (nonatomic,readonly) UIImageView * _glyphView;                         //@synthesize _glyphView=__glyphView - In the implementation block
@property (nonatomic,readonly) UIImageView * _warningIndicatorView;              //@synthesize _warningIndicatorView=__warningIndicatorView - In the implementation block
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) BOOL allowsAutomaticFlash;                          //@synthesize allowsAutomaticFlash=_allowsAutomaticFlash - In the implementation block
@property (assign,getter=isUnavailable,nonatomic) BOOL unavailable;              //@synthesize unavailable=_unavailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(BOOL)wantsSelectedItemToBeVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)indexForMode:(long long)arg1 ;
-(double)padHeaderViewContentInsetLeft;
-(void)reloadData;
-(BOOL)isUnavailable;
-(void)_commonCAMFlashButtonInitialization;
-(long long)modeForIndex:(long long)arg1 ;
-(long long)numberOfMenuItems;
-(BOOL)allowsAutomaticFlash;
-(void)setUnavailable:(BOOL)arg1 ;
-(UIImageView *)_glyphView;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)_updateCurrentGlyphImage;
-(BOOL)shouldIgnoreMenuInteraction;
-(id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1 ;
-(id)headerView;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 ;
-(double)collapsedSelectedLabelHorizontalMargin;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(UIImageView *)_warningIndicatorView;
@end

