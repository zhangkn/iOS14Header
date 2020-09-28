/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIInteractiveSegmentedControl;

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView {

	long long _layoutStyle;
	SKUIInteractiveSegmentedControl* _segmentedControl;
	double _segmentedControlMinimumHeight;

}

@property (assign,nonatomic) long long layoutStyle;                                           //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,retain) SKUIInteractiveSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic) double segmentedControlMinimumHeight;                            //@synthesize segmentedControlMinimumHeight=_segmentedControlMinimumHeight - In the implementation block
+(UIEdgeInsets)defaultLayoutMargins;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIInteractiveSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(SKUIInteractiveSegmentedControl *)arg1 ;
-(double)segmentedControlMinimumHeight;
-(void)setSegmentedControlMinimumHeight:(double)arg1 ;
@end
