/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger {

	double _timeInterval;

}

@property (nonatomic,readonly) double timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)triggerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 ;
-(double)timeInterval;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)_initWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)nextTriggerDate;
-(unsigned long long)hash;
-(id)description;
@end
