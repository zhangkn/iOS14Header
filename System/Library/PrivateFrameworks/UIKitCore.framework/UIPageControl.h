/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class _UIPageControlVisualProvider, UIColor, _UILegibilitySettings, UIImage;

@interface UIPageControl : UIControl {

	_UIPageControlVisualProvider* _visualProvider;
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
		unsigned allowScrubbing : 1;
		unsigned flickToEndGestureEnabled : 1;
	}  _pageControlFlags;
	SCD_Struct_UI62 _custom;
	double _horizontalPadding;
	double _verticalPadding;
	double _indicatorSpacing;
	unsigned long long _preferredNumberOfVisibleIndicators;
	long long _numberOfPages;
	long long _currentPage;
	UIColor* _pageIndicatorTintColor;
	UIColor* _currentPageIndicatorTintColor;
	long long _backgroundStyle;
	long long _previousPage;

}

@property (assign,nonatomic) long long previousPage;                                                                                            //@synthesize previousPage=_previousPage - In the implementation block
@property (assign,setter=_setFlickToEndGestureEnabled:,nonatomic) BOOL _flickToEndGestureEnabled; 
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long legibilityStyle; 
@property (setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) long long numberOfPages;                                                                                           //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) long long currentPage;                                                                                             //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) BOOL hidesForSinglePage; 
@property (nonatomic,retain) UIColor * pageIndicatorTintColor;                                                                                  //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPageIndicatorTintColor;                                                                           //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                                         //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) long long interactionState; 
@property (assign,nonatomic) BOOL allowsContinuousInteraction; 
@property (nonatomic,retain) UIImage * preferredIndicatorImage; 
@property (assign,nonatomic) BOOL defersCurrentPageDisplay; 
+(BOOL)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2 ;
+(BOOL)_supportsInteractivePageControl;
+(id)_visualProviderForPageControl:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(id)_legibilitySettings;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)setPreferredIndicatorImage:(UIImage *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(UIImage *)preferredIndicatorImage;
-(long long)interactionState;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(long long)numberOfPages;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(long long)previousPage;
-(BOOL)canBecomeFocused;
-(void)dealloc;
-(long long)_interactionState;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(BOOL)shouldTrack;
-(void)layoutSubviews;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(id)indicatorImageForPage:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)setCurrentPage:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)currentPage;
-(void)setNumberOfPages:(long long)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_implementsCustomPageImagesOverride;
-(void)_setCurrentPage:(long long)arg1 ;
-(BOOL)_implementsCustomCurrentPageImagesOverride;
-(void)_setIndicatorImage:(id)arg1 ;
-(void)_invalidateIndicators;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(void)setDefersCurrentPageDisplay:(BOOL)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(BOOL)hidesForSinglePage;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(BOOL)defersCurrentPageDisplay;
-(UIColor *)currentPageIndicatorTintColor;
-(UIColor *)pageIndicatorTintColor;
-(void)_updateCurrentPage:(long long)arg1 updateDisplayImmediately:(BOOL)arg2 ;
-(void)_updateCurrentPageDisplayWithForceUpdate:(BOOL)arg1 ;
-(void)setIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(void)updateCurrentPageDisplay;
-(void)_setDisplayMode:(long long)arg1 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)allowsContinuousInteraction;
-(double)_customHorizontalPadding;
-(void)setAllowsContinuousInteraction:(BOOL)arg1 ;
-(void)setPreviousPage:(long long)arg1 ;
-(void)_setIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(double)_customVerticalPadding;
-(BOOL)_flickToEndGestureEnabled;
-(double)_customIndicatorSpacing;
-(void)_setCustomHorizontalPadding:(double)arg1 ;
-(void)_setCurrentPageImage:(id)arg1 ;
-(void)_setCustomVerticalPadding:(double)arg1 ;
-(void)_setCustomIndicatorSpacing:(double)arg1 ;
-(void)_setPreferredNumberOfVisibleIndicators:(unsigned long long)arg1 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(long long)_legibilityStyle;
-(long long)_displayMode;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(long long)_displayedPage;
-(void)_setPageImage:(id)arg1 ;
-(void)_setFlickToEndGestureEnabled:(BOOL)arg1 ;
-(void)_setLegibilityStyle:(long long)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
@end
