/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKAxisLabelDataSource;
#import <HealthUI/HealthUI-Structs.h>
@class NSNumber, NSCache;

@interface HKAxisLabelCache : NSObject {

	id<HKAxisLabelDataSource> _axisLabelDataSource;
	NSNumber* _axisLabelMaximumWidth;
	NSCache* _mainCache;

}

@property (nonatomic,retain) NSCache * mainCache;                                               //@synthesize mainCache=_mainCache - In the implementation block
@property (assign,nonatomic,__weak) id<HKAxisLabelDataSource> axisLabelDataSource;              //@synthesize axisLabelDataSource=_axisLabelDataSource - In the implementation block
@property (nonatomic,readonly) NSNumber * axisLabelMaximumWidth;                                //@synthesize axisLabelMaximumWidth=_axisLabelMaximumWidth - In the implementation block
-(void)dealloc;
-(void)invalidateCache;
-(id)init;
-(void)_handleTimeChangeNotification:(id)arg1 ;
-(id<HKAxisLabelDataSource>)axisLabelDataSource;
-(NSCache *)mainCache;
-(BOOL)_largeDistanceFromModelRange:(id)arg1 toStartCache:(id)arg2 orEndCache:(id)arg3 timeScope:(long long)arg4 ;
-(id)allAxisLabelsForRange:(id)arg1 isHorizontal:(BOOL)arg2 zoomScale:(double)arg3 timeScope:(long long)arg4 ;
-(void)enumerateAxisLabelsForTextInRange:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7 gridlineWidth:(double)arg8 timeScope:(long long)arg9 usingBlock:(/*^block*/id)arg10 ;
-(void)setAxisLabelDataSource:(id<HKAxisLabelDataSource>)arg1 ;
-(NSNumber *)axisLabelMaximumWidth;
-(void)setMainCache:(NSCache *)arg1 ;
@end

