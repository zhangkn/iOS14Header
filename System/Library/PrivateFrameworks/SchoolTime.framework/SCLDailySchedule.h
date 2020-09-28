/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <SchoolTime/SCLSchedule.h>

@class NSMutableDictionary;

@interface SCLDailySchedule : SCLSchedule {

	NSMutableDictionary* _dayMap;

}

@property (nonatomic,retain) NSMutableDictionary * dayMap;              //@synthesize dayMap=_dayMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)recurrences;
-(id)debugDescription;
-(id)init;
-(NSMutableDictionary *)dayMap;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithSchedule:(id)arg1 ;
-(id)startTimeForDay:(long long)arg1 ;
-(id)endTimeForDay:(long long)arg1 ;
-(id)scheduleForDay:(long long)arg1 ;
-(void)setDayMap:(NSMutableDictionary *)arg1 ;
@end
