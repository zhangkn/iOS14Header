/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol CAMZoomButtonDelegate;
@class NSString, UIView, CAMZoomFactorLabel, UIImageView;

@interface CAMZoomButton : UIControl {

	BOOL _shouldHideBackground;
	BOOL _overPlatter;
	BOOL _abbreviateAndEnlargeText;
	id<CAMZoomButtonDelegate> _delegate;
	long long _contentType;
	double _zoomFactor;
	long long _zoomSymbol;
	long long _accessoryState;
	long long _orientation;
	NSString* _contentSizeCategory;
	UIView* __contentContainerView;
	CAMZoomFactorLabel* __zoomFactorLabel;
	UIImageView* __zoomSymbolView;
	UIImageView* __circleImageView;
	UIImageView* __backgroundImageView;
	UIImageView* __accessoryBackgroundView;
	UIImageView* __accessoryImageView;
	UIEdgeInsets _tappableEdgeInsets;
	CGAffineTransform _highlightingTransform;

}

@property (nonatomic,readonly) UIView * _contentContainerView;                                                       //@synthesize _contentContainerView=__contentContainerView - In the implementation block
@property (nonatomic,readonly) CAMZoomFactorLabel * _zoomFactorLabel;                                                //@synthesize _zoomFactorLabel=__zoomFactorLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * _zoomSymbolView;                                                        //@synthesize _zoomSymbolView=__zoomSymbolView - In the implementation block
@property (nonatomic,readonly) UIImageView * _circleImageView;                                                       //@synthesize _circleImageView=__circleImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _backgroundImageView;                                                   //@synthesize _backgroundImageView=__backgroundImageView - In the implementation block
@property (assign,setter=_setHighlightingTransform:,nonatomic) CGAffineTransform highlightingTransform;              //@synthesize highlightingTransform=_highlightingTransform - In the implementation block
@property (nonatomic,retain) UIImageView * _accessoryBackgroundView;                                                 //@synthesize _accessoryBackgroundView=__accessoryBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * _accessoryImageView;                                                      //@synthesize _accessoryImageView=__accessoryImageView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMZoomButtonDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long contentType;                                                                  //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                                                      //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) long long zoomSymbol;                                                                   //@synthesize zoomSymbol=_zoomSymbol - In the implementation block
@property (assign,nonatomic) long long accessoryState;                                                               //@synthesize accessoryState=_accessoryState - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                                        //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                  //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL shouldHideBackground;                                                              //@synthesize shouldHideBackground=_shouldHideBackground - In the implementation block
@property (assign,getter=isOverPlatter,nonatomic) BOOL overPlatter;                                                  //@synthesize overPlatter=_overPlatter - In the implementation block
@property (assign,nonatomic) BOOL abbreviateAndEnlargeText;                                                          //@synthesize abbreviateAndEnlargeText=_abbreviateAndEnlargeText - In the implementation block
@property (assign,nonatomic) BOOL useLeadingZero; 
@property (nonatomic,copy) NSString * contentSizeCategory;                                                           //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
+(BOOL)_useOutline;
+(BOOL)_shouldUseLargeButtonSizeForContentSize:(id)arg1 ;
+(id)textForZoomFactor:(double)arg1 showZoomFactorSymbol:(BOOL)arg2 ;
+(double)fontSizeForContentSize:(id)arg1 ;
+(id)textForZoomFactor:(double)arg1 showZoomFactorSymbol:(BOOL)arg2 useLeadingZero:(BOOL)arg3 ;
+(double)circleDiameterForContentSize:(id)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(UIView *)_contentContainerView;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)zoomFactor;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(long long)contentType;
-(CGSize)intrinsicContentSize;
-(UIImageView *)_accessoryImageView;
-(UIEdgeInsets)alignmentRectInsets;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)contentSizeCategory;
-(long long)orientation;
-(BOOL)shouldHideBackground;
-(void)setDelegate:(id<CAMZoomButtonDelegate>)arg1 ;
-(UIImageView *)_circleImageView;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentType:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(UIImageView *)_backgroundImageView;
-(id<CAMZoomButtonDelegate>)delegate;
-(long long)accessoryState;
-(void)_performHighlightAnimation;
-(void)setContentType:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)zoomSymbol;
-(void)setZoomSymbol:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setAccessoryState:(long long)arg1 ;
-(void)setAccessoryState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setShouldHideBackground:(BOOL)arg1 animationDuration:(double)arg2 ;
-(CGAffineTransform)highlightingTransform;
-(BOOL)useLeadingZero;
-(void)setUseLeadingZero:(BOOL)arg1 ;
-(void)_updateBackgroundImageViewAlpha;
-(void)_updateForContentSize;
-(void)_updateZoomFactorLabel;
-(id)_createBackgroundImageForContentSize:(id)arg1 ;
-(CAMZoomFactorLabel *)_zoomFactorLabel;
-(id)_createCircleImageForContentSize:(id)arg1 ;
-(UIImageView *)_accessoryBackgroundView;
-(void)_updateAccessoryBackgroundView;
-(void)_commonCAMZoomButtonInitialization;
-(void)_createZoomSymbolViewIfNecessary;
-(UIImageView *)_zoomSymbolView;
-(id)_imageForZoomSymbol:(long long)arg1 ;
-(void)set_accessoryBackgroundView:(UIImageView *)arg1 ;
-(void)set_accessoryImageView:(UIImageView *)arg1 ;
-(void)_updateAccessoryAlphas;
-(id)_createBackgroundImageForContentSize:(id)arg1 color:(id)arg2 ;
-(CGAffineTransform)_highlightingTransformForHighlighted:(BOOL)arg1 ;
-(BOOL)abbreviateAndEnlargeText;
-(CGAffineTransform)_transformForEnlargeText:(BOOL)arg1 orientation:(long long)arg2 ;
-(void)_setHighlightingTransform:(CGAffineTransform)arg1 ;
-(BOOL)isOverPlatter;
-(double)_backgroundImageDiameterForContentSize:(id)arg1 ;
-(double)_circleLineWidthForContentSize:(id)arg1 ;
-(void)setZoomSymbol:(long long)arg1 ;
-(void)setOverPlatter:(BOOL)arg1 ;
-(void)setShouldHideBackground:(BOOL)arg1 ;
-(void)setAbbreviateAndEnlargeText:(BOOL)arg1 ;
@end

