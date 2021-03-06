/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {

	MovingAverage* _average;

}
-(void)addValue:(double)arg1 ;
-(double)value;
-(id)initWithMaxCapacity:(long long)arg1 ;
-(double)valueForInterval:(double)arg1 defaultValue:(double)arg2 ;
@end

