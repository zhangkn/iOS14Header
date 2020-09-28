/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol RBDrawableStatistics
@property (nonatomic,copy,readonly) NSDictionary * statistics; 
@property (nonatomic,copy) id statisticsHandler; 
@required
-(NSDictionary *)statistics;
-(void)setStatisticsHandler:(/*^block*/id)arg1;
-(id)statisticsHandler;
-(void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2;

@end
