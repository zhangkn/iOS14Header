/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALNUNNotificationMapper;

@interface CALNUNNotificationResponseMapper : NSObject {

	CALNUNNotificationMapper* _notificationMapper;

}

@property (nonatomic,readonly) CALNUNNotificationMapper * notificationMapper;              //@synthesize notificationMapper=_notificationMapper - In the implementation block
+(id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)arg1 ;
-(id)calnNotificationResponseFromUNNotificationResponse:(id)arg1 ;
-(id)initWithNotificationMapper:(id)arg1 ;
-(CALNUNNotificationMapper *)notificationMapper;
@end
