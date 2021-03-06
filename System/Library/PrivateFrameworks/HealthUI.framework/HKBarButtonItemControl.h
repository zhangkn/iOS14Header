/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIToolbar, UIBarButtonItem, UIControl;

@interface HKBarButtonItemControl : UIControl {

	BOOL _collapseHeight;
	long long _preferredHeight;
	double _horizontalMargin;
	UIToolbar* _toolbar;
	UIBarButtonItem* _barButtonItem;
	UIControl* _barButtonItemControl;

}

@property (assign,nonatomic) long long preferredHeight;                       //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) BOOL collapseHeight;                             //@synthesize collapseHeight=_collapseHeight - In the implementation block
@property (assign,nonatomic) double horizontalMargin;                         //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (nonatomic,readonly) UIToolbar * toolbar;                           //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;               //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,readonly) UIControl * barButtonItemControl;              //@synthesize barButtonItemControl=_barButtonItemControl - In the implementation block
-(UIBarButtonItem *)barButtonItem;
-(UIToolbar *)toolbar;
-(CGSize)intrinsicContentSize;
-(BOOL)isEnabled;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(long long)preferredHeight;
-(void)setPreferredHeight:(long long)arg1 ;
-(void)setHorizontalMargin:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(double)horizontalMargin;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithSystemItem:(long long)arg1 preferredHeight:(double)arg2 collapseHeight:(BOOL)arg3 ;
-(void)_barButtonAction:(id)arg1 ;
-(BOOL)collapseHeight;
-(void)setCollapseHeight:(BOOL)arg1 ;
-(UIControl *)barButtonItemControl;
@end

