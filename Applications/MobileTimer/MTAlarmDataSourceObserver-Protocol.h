//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MTAlarmDataSource, NSArray;

@protocol MTAlarmDataSourceObserver
- (void)dataSourceDidReload:(MTAlarmDataSource *)arg1;

@optional
- (void)dataSource:(MTAlarmDataSource *)arg1 didRemoveAlarms:(NSArray *)arg2;
- (void)dataSource:(MTAlarmDataSource *)arg1 didUpdateAlarms:(NSArray *)arg2;
- (void)dataSource:(MTAlarmDataSource *)arg1 didAddAlarms:(NSArray *)arg2;
@end

