/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, HKSource;

@interface _HKActivityStatisticsWorkoutInfo : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	HKSource* _source;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKSource * source;               //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(id)arg3 ;
-(void)setSource:(HKSource *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(HKSource *)source;
-(id)description;
-(void)setEndDate:(NSDate *)arg1 ;
@end

