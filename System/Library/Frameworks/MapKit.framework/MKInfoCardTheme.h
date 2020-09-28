/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor;


@protocol MKInfoCardTheme <NSObject>
@property (nonatomic,readonly) unsigned long long themeType; 
@property (nonatomic,readonly) NSString * javaScriptName; 
@property (nonatomic,readonly) BOOL isDarkTheme; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * lightTextColor; 
@property (nonatomic,readonly) UIColor * tertiaryTextColor; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) UIColor * highlightedTintColor; 
@property (nonatomic,readonly) UIColor * separatorLineColor; 
@property (nonatomic,readonly) UIColor * rowColor; 
@property (nonatomic,readonly) UIColor * selectedRowColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundPressedColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonNormalColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonHighlightedColor; 
@property (nonatomic,readonly) UIColor * transitOntimeTextColor; 
@property (nonatomic,readonly) UIColor * transitDelayedTextColor; 
@property (nonatomic,readonly) UIColor * transitChevronBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalBackgroundColor; 
@property (nonatomic,readonly) UIColor * buttonNormalColor; 
@property (nonatomic,readonly) UIColor * buttonHighlightedColor; 
@property (nonatomic,readonly) UIColor * ratingBarStartColor; 
@property (nonatomic,readonly) UIColor * ratingBarEndColor; 
@property (nonatomic,readonly) UIColor * ratingBarBackgroundColor; 
@required
-(UIColor *)highlightedTintColor;
-(UIColor *)tintColor;
-(UIColor *)tertiaryTextColor;
-(UIColor *)headerPrimaryButtonHighlightedColor;
-(BOOL)isDarkTheme;
-(UIColor *)rowColor;
-(UIColor *)textColor;
-(UIColor *)selectedRowColor;
-(UIColor *)buttonHighlightedColor;
-(UIColor *)buttonNormalColor;
-(UIColor *)disabledActionRowTextColor;
-(UIColor *)disabledActionRowBackgroundColor;
-(NSString *)javaScriptName;
-(UIColor *)normalActionRowBackgroundPressedColor;
-(UIColor *)headerPrimaryButtonNormalColor;
-(UIColor *)transitChevronBackgroundColor;
-(UIColor *)lightTextColor;
-(UIColor *)normalBackgroundColor;
-(UIColor *)normalActionRowBackgroundColor;
-(UIColor *)ratingBarStartColor;
-(UIColor *)ratingBarEndColor;
-(UIColor *)ratingBarBackgroundColor;
-(UIColor *)separatorLineColor;
-(unsigned long long)themeType;
-(UIColor *)transitOntimeTextColor;
-(UIColor *)transitDelayedTextColor;

@end
