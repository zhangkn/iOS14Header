/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXKeyboardSettings : PXSettings {

	BOOL _enableTungstenKeyboardNavigation;
	BOOL _enableTungstenShiftClickSelection;
	BOOL _enableTungstenFocusEnvironmentSupport;
	BOOL _enableAssetSelectionShortcuts;
	BOOL _enableFocusRing;
	BOOL _enableShadow;
	double _animationDuration;
	double _dampingRatio;
	double _dimmingFactor;
	double _shadowYOffset;
	double _shadowBlurRadius;
	double _shadowOpacity;
	long long _yearsFocusAnimationStyle;
	double _yearsFocusPadding;
	long long _monthsFocusAnimationStyle;
	double _monthsFocusPadding;
	long long _daysFocusAnimationStyle;
	double _daysFocusPadding;
	long long _allPhotosAspectFitFocusAnimationStyle;
	double _allPhotosAspectFitFocusPadding;
	long long _allPhotosAspectFillFocusAnimationStyle;
	double _allPhotosAspectFillFocusPadding;
	double _detailsViewOverlayAlpha;

}

@property (assign,nonatomic) BOOL enableTungstenKeyboardNavigation;                         //@synthesize enableTungstenKeyboardNavigation=_enableTungstenKeyboardNavigation - In the implementation block
@property (assign,nonatomic) BOOL enableTungstenShiftClickSelection;                        //@synthesize enableTungstenShiftClickSelection=_enableTungstenShiftClickSelection - In the implementation block
@property (assign,nonatomic) BOOL enableTungstenFocusEnvironmentSupport;                    //@synthesize enableTungstenFocusEnvironmentSupport=_enableTungstenFocusEnvironmentSupport - In the implementation block
@property (assign,nonatomic) BOOL enableAssetSelectionShortcuts;                            //@synthesize enableAssetSelectionShortcuts=_enableAssetSelectionShortcuts - In the implementation block
@property (assign,nonatomic) double animationDuration;                                      //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double dampingRatio;                                           //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (assign,nonatomic) BOOL enableFocusRing;                                          //@synthesize enableFocusRing=_enableFocusRing - In the implementation block
@property (assign,nonatomic) BOOL enableShadow;                                             //@synthesize enableShadow=_enableShadow - In the implementation block
@property (assign,nonatomic) double dimmingFactor;                                          //@synthesize dimmingFactor=_dimmingFactor - In the implementation block
@property (assign,nonatomic) double shadowYOffset;                                          //@synthesize shadowYOffset=_shadowYOffset - In the implementation block
@property (assign,nonatomic) double shadowBlurRadius;                                       //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                                          //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) long long yearsFocusAnimationStyle;                            //@synthesize yearsFocusAnimationStyle=_yearsFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double yearsFocusPadding;                                      //@synthesize yearsFocusPadding=_yearsFocusPadding - In the implementation block
@property (assign,nonatomic) long long monthsFocusAnimationStyle;                           //@synthesize monthsFocusAnimationStyle=_monthsFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double monthsFocusPadding;                                     //@synthesize monthsFocusPadding=_monthsFocusPadding - In the implementation block
@property (assign,nonatomic) long long daysFocusAnimationStyle;                             //@synthesize daysFocusAnimationStyle=_daysFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double daysFocusPadding;                                       //@synthesize daysFocusPadding=_daysFocusPadding - In the implementation block
@property (assign,nonatomic) long long allPhotosAspectFitFocusAnimationStyle;               //@synthesize allPhotosAspectFitFocusAnimationStyle=_allPhotosAspectFitFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double allPhotosAspectFitFocusPadding;                         //@synthesize allPhotosAspectFitFocusPadding=_allPhotosAspectFitFocusPadding - In the implementation block
@property (assign,nonatomic) long long allPhotosAspectFillFocusAnimationStyle;              //@synthesize allPhotosAspectFillFocusAnimationStyle=_allPhotosAspectFillFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double allPhotosAspectFillFocusPadding;                        //@synthesize allPhotosAspectFillFocusPadding=_allPhotosAspectFillFocusPadding - In the implementation block
@property (assign,nonatomic) double detailsViewOverlayAlpha;                                //@synthesize detailsViewOverlayAlpha=_detailsViewOverlayAlpha - In the implementation block
+(id)sharedInstance;
+(id)_makeAnimationStyleChoiceRowWithTitle:(id)arg1 valueKeyPath:(id)arg2 ;
+(id)settingsControllerModule;
+(id)_makeGlobalFocusAnimationSection;
+(id)_makeLocalFocusAnimationSection;
-(void)setDampingRatio:(double)arg1 ;
-(id)archiveValueForKey:(id)arg1 ;
-(double)animationDuration;
-(double)shadowOpacity;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShadowYOffset:(double)arg1 ;
-(void)setDefaultValues;
-(void)setDimmingFactor:(double)arg1 ;
-(double)monthsFocusPadding;
-(double)dimmingFactor;
-(double)allPhotosAspectFillFocusPadding;
-(double)shadowYOffset;
-(BOOL)enableFocusRing;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setShadowBlurRadius:(double)arg1 ;
-(void)setEnableShadow:(BOOL)arg1 ;
-(void)setAllPhotosAspectFitFocusAnimationStyle:(long long)arg1 ;
-(double)detailsViewOverlayAlpha;
-(long long)daysFocusAnimationStyle;
-(void)setAllPhotosAspectFillFocusAnimationStyle:(long long)arg1 ;
-(long long)monthsFocusAnimationStyle;
-(void)setEnableTungstenKeyboardNavigation:(BOOL)arg1 ;
-(BOOL)enableTungstenFocusEnvironmentSupport;
-(id)globalFocusAnimationShadow;
-(BOOL)enableShadow;
-(double)dampingRatio;
-(BOOL)enableTungstenKeyboardNavigation;
-(void)setDaysFocusPadding:(double)arg1 ;
-(void)setYearsFocusPadding:(double)arg1 ;
-(double)daysFocusPadding;
-(void)setEnableTungstenShiftClickSelection:(BOOL)arg1 ;
-(void)setYearsFocusAnimationStyle:(long long)arg1 ;
-(void)setMonthsFocusAnimationStyle:(long long)arg1 ;
-(BOOL)enableAssetSelectionShortcuts;
-(BOOL)enableTungstenShiftClickSelection;
-(void)setEnableTungstenFocusEnvironmentSupport:(BOOL)arg1 ;
-(void)setDaysFocusAnimationStyle:(long long)arg1 ;
-(void)setEnableAssetSelectionShortcuts:(BOOL)arg1 ;
-(long long)allPhotosAspectFillFocusAnimationStyle;
-(long long)yearsFocusAnimationStyle;
-(void)setDetailsViewOverlayAlpha:(double)arg1 ;
-(void)setMonthsFocusPadding:(double)arg1 ;
-(long long)allPhotosAspectFitFocusAnimationStyle;
-(void)setAllPhotosAspectFillFocusPadding:(double)arg1 ;
-(void)setAllPhotosAspectFitFocusPadding:(double)arg1 ;
-(void)setEnableFocusRing:(BOOL)arg1 ;
-(double)allPhotosAspectFitFocusPadding;
-(double)yearsFocusPadding;
-(id)parentSettings;
-(double)shadowBlurRadius;
@end

