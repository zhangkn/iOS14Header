/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSArray;

@interface PXTimelineSchedulerOptions : NSObject {

	double _timelineEntryDuration;
	double _bestContentEntryDuration;
	NSArray* _bestContentStartTimeHours;

}

@property (assign,nonatomic) double timelineEntryDuration;                     //@synthesize timelineEntryDuration=_timelineEntryDuration - In the implementation block
@property (assign,nonatomic) double bestContentEntryDuration;                  //@synthesize bestContentEntryDuration=_bestContentEntryDuration - In the implementation block
@property (nonatomic,retain) NSArray * bestContentStartTimeHours;              //@synthesize bestContentStartTimeHours=_bestContentStartTimeHours - In the implementation block
-(double)timelineEntryDuration;
-(NSArray *)bestContentStartTimeHours;
-(double)bestContentEntryDuration;
-(void)setTimelineEntryDuration:(double)arg1 ;
-(void)setBestContentEntryDuration:(double)arg1 ;
-(void)setBestContentStartTimeHours:(NSArray *)arg1 ;
-(id)init;
@end
