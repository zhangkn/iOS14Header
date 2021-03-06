/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/CoreSuggestionsUI-Structs.h>
#import <UIKitCore/UITextView.h>

@protocol SGTappableTextViewDelegate;
@class UIColor, NSAttributedString, NSMutableIndexSet;

@interface SGTappableTextView : UITextView {

	UIColor* _activeRangeNormalColor;
	UIColor* _activeRangeHighlightedColor;
	NSAttributedString* _clientText;
	NSMutableIndexSet* _activeRanges;
	NSRange _trackingRange;
	BOOL _trackingRangeHighlighted;
	BOOL _needsLabelUpdate;
	long long _currentStyle;
	id<SGTappableTextViewDelegate> _tappableDelegate;

}

@property (assign,nonatomic,__weak) id<SGTappableTextViewDelegate> tappableDelegate;              //@synthesize tappableDelegate=_tappableDelegate - In the implementation block
@property (nonatomic,retain) UIColor * activeRangeNormalColor; 
@property (nonatomic,retain) UIColor * activeRangeHighlightedColor; 
@property (nonatomic,readonly) BOOL hasActiveRanges; 
@property (nonatomic,readonly) CGRect activeRangesRect; 
-(BOOL)isTracking;
-(void)setAttributedText:(id)arg1 ;
-(id)_textColor;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)text;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateLabelIfNeeded;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateCurrentAppearance;
-(BOOL)hasActiveRanges;
-(CGRect)activeRangesRect;
-(void)addActiveRange:(NSRange)arg1 ;
-(void)removeActiveRange:(NSRange)arg1 ;
-(void)removeAllActiveRanges;
-(void)setTrackingRange:(NSRange)arg1 ;
-(NSRange)trackingRange;
-(void)_highlightTrackingRange:(BOOL)arg1 ;
-(void)_updateAttributedTextColor;
-(void)setActiveRangeNormalColor:(UIColor *)arg1 ;
-(UIColor *)activeRangeNormalColor;
-(void)setActiveRangeHighlightedColor:(UIColor *)arg1 ;
-(UIColor *)activeRangeHighlightedColor;
-(void)_setNeedUpdateLabel;
-(unsigned long long)_characterIndexAtPoint:(CGPoint)arg1 ;
-(NSRange)_rangeAtPoint:(CGPoint)arg1 ;
-(id<SGTappableTextViewDelegate>)tappableDelegate;
-(void)setTappableDelegate:(id<SGTappableTextViewDelegate>)arg1 ;
@end

