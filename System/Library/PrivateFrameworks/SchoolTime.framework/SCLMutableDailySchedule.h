/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <SchoolTime/SCLDailySchedule.h>

@interface SCLMutableDailySchedule : SCLDailySchedule
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(long long)arg3 ;
-(void)removeScheduleForDay:(long long)arg1 ;
@end

