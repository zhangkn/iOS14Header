/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class NSDateFormatter, NSDate;

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar {

	NSDateFormatter* _dateFormatter;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
-(NSDateFormatter *)dateFormatter;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 ;
@end
