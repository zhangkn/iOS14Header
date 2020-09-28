/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKTimeScopeControl.h>

@class UISegmentedControl;

@interface _HKTimeScopeControlBar : HKTimeScopeControl {

	UISegmentedControl* _segments;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelectedTimeScope:(long long)arg1 ;
-(long long)selectedTimeScope;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3 ;
-(void)_segmentValueChanged:(id)arg1 ;
@end
