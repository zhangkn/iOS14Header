/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class UIColor;

@interface UIAssistantBarRoundedButtonViewButton : UIButton {

	UIColor* _normalBackgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIColor* _normalTitleColor;
	UIColor* _highlightedTitleColor;

}

@property (nonatomic,retain) UIColor * normalBackgroundColor;                   //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * normalTitleColor;                        //@synthesize normalTitleColor=_normalTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTitleColor;                   //@synthesize highlightedTitleColor=_highlightedTitleColor - In the implementation block
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateBackgroundAndTitleColor;
-(UIColor *)highlightedTitleColor;
-(UIColor *)normalTitleColor;
-(id)_currentTitleColor;
-(UIColor *)normalBackgroundColor;
-(id)_titleColorForState:(unsigned long long)arg1 ;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)setNormalTitleColor:(UIColor *)arg1 ;
-(void)setHighlightedTitleColor:(UIColor *)arg1 ;
@end

