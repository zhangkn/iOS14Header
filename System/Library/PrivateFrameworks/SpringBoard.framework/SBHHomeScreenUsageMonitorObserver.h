/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBHHomeScreenUsageMonitorObserver <NSObject>
@optional
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserDislikedWidgetIconStackSuggestion:(id)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconRemoved:(id)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2;
-(void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)arg1;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconAdded:(id)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteRootControllerWillAppearWithPageIndex:(unsigned long long)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidAppear:(id)arg2 forWidgetIcon:(id)arg3;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidDisappear:(id)arg2 forWidgetIcon:(id)arg3;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2;

@end
