/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALNUNNotificationContentMapper, CALNUNNotificationIconMapper;

@interface CALNUNNotificationRequestMapper : NSObject {

	CALNUNNotificationContentMapper* _notificationContentMapper;
	CALNUNNotificationIconMapper* _notificationIconMapper;

}

@property (nonatomic,readonly) CALNUNNotificationContentMapper * notificationContentMapper;              //@synthesize notificationContentMapper=_notificationContentMapper - In the implementation block
@property (nonatomic,readonly) CALNUNNotificationIconMapper * notificationIconMapper;                    //@synthesize notificationIconMapper=_notificationIconMapper - In the implementation block
-(id)unNotificationRequestFromCALNNotificationRequest:(id)arg1 ;
-(id)initWithNotificationContentMapper:(id)arg1 notificationIconMapper:(id)arg2 ;
-(id)calnNotificationRequestFromUNNotificationRequest:(id)arg1 ;
-(CALNUNNotificationIconMapper *)notificationIconMapper;
-(CALNUNNotificationContentMapper *)notificationContentMapper;
@end
