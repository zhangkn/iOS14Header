/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/_UINavigationBarTitleView.h>

@class HUQuickControlSummaryView, NSArray;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView {

	HUQuickControlSummaryView* _summaryView;
	NSArray* _contentConstraints;

}

@property (nonatomic,retain) HUQuickControlSummaryView * summaryView;              //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                         //@synthesize contentConstraints=_contentConstraints - In the implementation block
-(void)setContentConstraints:(NSArray *)arg1 ;
-(void)transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSummaryView:(HUQuickControlSummaryView *)arg1 ;
-(void)updateConstraints;
-(HUQuickControlSummaryView *)summaryView;
-(void)layoutSubviews;
-(NSArray *)contentConstraints;
@end

