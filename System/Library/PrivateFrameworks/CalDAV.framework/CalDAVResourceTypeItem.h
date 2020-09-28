/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem {

	CoreDAVItemWithNoChildren* _calendar;
	CoreDAVItemWithNoChildren* _scheduleInbox;
	CoreDAVItemWithNoChildren* _scheduleOutbox;
	CoreDAVItemWithNoChildren* _notification;
	CoreDAVItemWithNoChildren* _subscribed;
	CoreDAVItemWithNoChildren* _sharedOwner;
	CoreDAVItemWithNoChildren* _isFamilyCalendar;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * calendar;                      //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * scheduleInbox;                 //@synthesize scheduleInbox=_scheduleInbox - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * scheduleOutbox;                //@synthesize scheduleOutbox=_scheduleOutbox - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * notification;                  //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * subscribed;                    //@synthesize subscribed=_subscribed - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * sharedOwner;                   //@synthesize sharedOwner=_sharedOwner - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isFamilyCalendar;              //@synthesize isFamilyCalendar=_isFamilyCalendar - In the implementation block
-(void)setIsFamilyCalendar:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)calendar;
-(CoreDAVItemWithNoChildren *)notification;
-(void)setCalendar:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)write:(id)arg1 ;
-(CoreDAVItemWithNoChildren *)subscribed;
-(CoreDAVItemWithNoChildren *)isFamilyCalendar;
-(void)setNotification:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSubscribed:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)sharedOwner;
-(id)copyParseRules;
-(CoreDAVItemWithNoChildren *)scheduleInbox;
-(CoreDAVItemWithNoChildren *)scheduleOutbox;
-(void)setScheduleInbox:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setScheduleOutbox:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSharedOwner:(CoreDAVItemWithNoChildren *)arg1 ;
@end
