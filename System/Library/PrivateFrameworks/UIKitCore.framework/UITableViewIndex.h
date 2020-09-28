/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>

@class NSArray, UIFont, UIColor, UIAccessibilityHUDGestureManager, NSString;

@interface UITableViewIndex : UIControl <UIAccessibilityHUDGestureDelegate> {

	NSArray* _titles;
	UIFont* _font;
	long long _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	UIColor* _indexColor;
	UIColor* _indexBackgroundColor;
	UIColor* _indexTrackingBackgroundColor;
	double _topPadding;
	double _bottomPadding;
	double _verticalTextHeightEstimate;
	NSArray* _entries;
	long long _idiom;
	UIAccessibilityHUDGestureManager* _axHUDGestureManager;
	UIEdgeInsets _drawingInsets;

}

@property (nonatomic,retain) NSArray * titles; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) UIEdgeInsets drawingInsets;                          //@synthesize drawingInsets=_drawingInsets - In the implementation block
@property (nonatomic,retain) UIColor * indexColor; 
@property (nonatomic,retain) UIColor * indexBackgroundColor; 
@property (nonatomic,retain) UIColor * indexTrackingBackgroundColor; 
@property (nonatomic,readonly) long long selectedSection;                         //@synthesize selectedSection=_selectedSection - In the implementation block
@property (nonatomic,readonly) NSString * selectedSectionTitle; 
@property (nonatomic,readonly) BOOL pastTop;                                      //@synthesize pastTop=_pastTop - In the implementation block
@property (nonatomic,readonly) BOOL pastBottom;                                   //@synthesize pastBottom=_pastBottom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pastTop;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_dotImage;
-(void)setIndexColor:(UIColor *)arg1 ;
-(void)_setupAXHUDGestureIfNecessary;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(void)tintColorDidChange;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(double)_minLineSpacingForIdiom:(long long)arg1 ;
-(id)_externalDotImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_cacheAndMeasureTitles;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setIdiom:(long long)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1 ;
-(void)setIndexBackgroundColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg1 ;
-(long long)_idiom;
-(UIFont *)font;
-(NSString *)selectedSectionTitle;
-(UIColor *)indexBackgroundColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setDrawingInsets:(UIEdgeInsets)arg1 ;
-(long long)_indexForEntryAtPoint:(CGPoint)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(BOOL)pastBottom;
-(id)_displayTitles;
-(void)setIndexTrackingBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)indexColor;
-(CGRect)_effectiveBounds;
-(void)didMoveToWindow;
-(long long)selectedSection;
-(id)_fontForIdiom:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1 ;
-(UIEdgeInsets)drawingInsets;
-(UIColor *)indexTrackingBackgroundColor;
-(NSArray *)titles;
-(void)setFont:(UIFont *)arg1 ;
@end
