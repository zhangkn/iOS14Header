/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKActivitySummaryAnnotationViewDataSource.h>

@protocol HKInteractiveChartCurrentValueViewCallbacks;
@class UIView;

@interface _ActivityCurrentValueDataSource : HKActivitySummaryAnnotationViewDataSource {

	BOOL _currentValueViewHasNoData;
	id<HKInteractiveChartCurrentValueViewCallbacks> _currentValueViewCallbacks;
	UIView* _noDataView;

}

@property (assign,nonatomic,__weak) id<HKInteractiveChartCurrentValueViewCallbacks> currentValueViewCallbacks;              //@synthesize currentValueViewCallbacks=_currentValueViewCallbacks - In the implementation block
@property (assign,nonatomic) BOOL currentValueViewHasNoData;                                                                //@synthesize currentValueViewHasNoData=_currentValueViewHasNoData - In the implementation block
@property (nonatomic,readonly) UIView * noDataView;                                                                         //@synthesize noDataView=_noDataView - In the implementation block
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(void)setCurrentValueViewCallbacks:(id<HKInteractiveChartCurrentValueViewCallbacks>)arg1 ;
-(id)_buildNoDataView;
-(BOOL)currentValueViewHasNoData;
-(UIView *)noDataView;
-(id)_localizedCurrentValueViewDateRange;
-(id)_dateRangeFromStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_dateRangeFromComponents;
-(id<HKInteractiveChartCurrentValueViewCallbacks>)currentValueViewCallbacks;
-(id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(BOOL)arg4 currentValueViewCallbacks:(id)arg5 ;
-(void)setCurrentValueViewHasNoData:(BOOL)arg1 ;
@end

