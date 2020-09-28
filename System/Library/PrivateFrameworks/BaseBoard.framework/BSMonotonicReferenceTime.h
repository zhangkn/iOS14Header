/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSMonotonicReferenceTime : NSObject {

	double _startTimeStamp;

}

@property (nonatomic,readonly) double timeIntervalSinceNow; 
@property (nonatomic,readonly) double timeIntervalToNow; 
+(id)referenceTimeForDate:(id)arg1 ;
+(id)now;
+(id)distantPast;
+(id)referenceTimeWithTimeIntervalSinceNow:(double)arg1 ;
+(id)distantFuture;
-(id)date;
-(double)timeIntervalSinceNow;
-(double)timeIntervalSinceReferenceTime:(id)arg1 ;
-(double)timeIntervalToNow;
@end
