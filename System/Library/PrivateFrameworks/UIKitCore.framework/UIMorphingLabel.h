/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIMorphingLabelGlyphSet, NSMutableArray, UIView, _UIViewAnimationAttributes, NSString, UIFont, UIColor;

@interface UIMorphingLabel : UIView {

	UIMorphingLabelGlyphSet* _srcGlyphSet;
	UIMorphingLabelGlyphSet* _dstGlyphSet;
	NSMutableArray* _hiddenGlyphViews;
	UIView* _colorView;
	unsigned long long _alignmentSrc[100];
	unsigned long long _alignmentDst[100];
	BOOL _alignmentIsEqual[100];
	unsigned long long _alignmentSize;
	double _alignmentDelays[100];
	_UIViewAnimationAttributes* _textAnimationAttributes;
	_UIViewAnimationAttributes* _textColorAnimationAttributes;
	double _lastUpdateTime;
	double _slowdown;
	double _rippleFactor;
	double _scaleFactor;
	BOOL _isDoingFastAnimation;
	BOOL _textDidChange;
	BOOL _textColorDidChange;
	BOOL _suppressLayoutSubviews;
	BOOL _enableAnimation;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	double _initialScale;
	double _glyphScaleAnimationSpeed;
	double _rippleDuration;
	CGRect _visibleRect;

}

@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long textAlignment;                      //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                           //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) BOOL suppressLayoutSubviews;                  //@synthesize suppressLayoutSubviews=_suppressLayoutSubviews - In the implementation block
@property (assign,nonatomic) BOOL enableAnimation;                         //@synthesize enableAnimation=_enableAnimation - In the implementation block
@property (assign,nonatomic) double initialScale;                          //@synthesize initialScale=_initialScale - In the implementation block
@property (assign,nonatomic) double glyphScaleAnimationSpeed;              //@synthesize glyphScaleAnimationSpeed=_glyphScaleAnimationSpeed - In the implementation block
@property (assign,nonatomic) double rippleDuration;                        //@synthesize rippleDuration=_rippleDuration - In the implementation block
+(id)preferredFontWithSize:(double)arg1 ;
-(BOOL)_isRTL;
-(void)setTextAlignment:(long long)arg1 ;
-(id)attributedString;
-(NSRange)srcRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)setInitialScale:(double)arg1 ;
-(void)setGlyphScaleAnimationSpeed:(double)arg1 ;
-(void)calculateGlyphAlignment;
-(double)alphaForFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(long long)textAlignment;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)animateGlyphsInRange:(NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(double)arg3 delay:(double)arg4 ;
-(void)animateInsertionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(BOOL)enableAnimation;
-(void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)initAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)animateMovementAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(NSString *)text;
-(void)animateGlyph:(id)arg1 toPosition:(CGPoint)arg2 delay:(double)arg3 ;
-(void)setEnableAnimation:(BOOL)arg1 ;
-(void)animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(double)initialScale;
-(void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3 ;
-(double)currentMediaTime;
-(void)setSuppressLayoutSubviews:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)animateShowGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3 ;
-(void)initMovementAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)animateDeletionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)_rippleDurationForEndInsertion:(BOOL)arg1 ;
-(void)initInsertionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)flushAmount;
-(UIFont *)font;
-(void)initSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(CGRect)visibleRect;
-(BOOL)canFitText:(id)arg1 ;
-(void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2 ;
-(id)glyphViewWithImage:(id)arg1 isColorGlyph:(BOOL)arg2 ;
-(BOOL)suppressLayoutSubviews;
-(UIColor *)textColor;
-(unsigned long long)calculateHardAlignmentAtIndex:(unsigned long long)arg1 fromGlyphsInRange:(NSRange)arg2 toGlyphsInRange:(NSRange)arg3 ;
-(double)changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)requiredWidthForText:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)glyphScaleAnimationSpeed;
-(void)contentSizeDidChange:(id)arg1 ;
-(id)uniqueStringWithPrefix:(id)arg1 ;
-(void)hideGlyph:(id)arg1 ;
-(void)animateShowGlyph:(id)arg1 alpha:(double)arg2 alphaDuration:(double)arg3 delay:(double)arg4 ;
-(void)animateTextColor;
-(id)attributedStringForText:(id)arg1 ;
-(void)baseInit;
-(void)animateGlyph:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3 delay:(double)arg4 ;
-(void)setRippleDuration:(double)arg1 ;
-(void)animateGlyphs;
-(double)rippleDuration;
-(void)animateHideGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3 ;
-(void)animateAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSRange)dstRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)initDeletionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
@end

