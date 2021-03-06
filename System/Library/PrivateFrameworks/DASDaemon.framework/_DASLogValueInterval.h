/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSObject;

@interface _DASLogValueInterval : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSObject* _value;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSObject * value;                //@synthesize value=_value - In the implementation block
-(double)duration;
-(void)setValue:(NSObject *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)durationString;
-(NSDate *)endDate;
-(NSObject *)value;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)startDate;
-(id)description;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)intervalString;
@end

