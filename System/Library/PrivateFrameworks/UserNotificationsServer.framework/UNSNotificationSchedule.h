/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface UNSNotificationSchedule : NSObject {

	NSDate* _previousTriggerDate;

}

@property (nonatomic,retain) NSDate * previousTriggerDate;              //@synthesize previousTriggerDate=_previousTriggerDate - In the implementation block
-(id)_dateFormatter;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setPreviousTriggerDate:(NSDate *)arg1 ;
-(NSDate *)previousTriggerDate;
@end

