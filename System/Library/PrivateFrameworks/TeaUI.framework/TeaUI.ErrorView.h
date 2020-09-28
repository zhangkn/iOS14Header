/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSArray;

@interface TeaUI.ErrorView : UIView {

	 errorPosition;
	 model;
	 styler;
	 label;
	 scrollView;
	 visualEffectView;
	 keyboardObserver;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSArray * accessibilityElements; 
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(BOOL)isAccessibilityElement;
-(NSArray *)accessibilityElements;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
@end
