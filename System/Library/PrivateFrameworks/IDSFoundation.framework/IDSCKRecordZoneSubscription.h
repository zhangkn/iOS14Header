/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSCKSubscription.h>

@class IDSCKNotificationInfo;

@interface IDSCKRecordZoneSubscription : IDSCKSubscription {

	IDSCKNotificationInfo* _notificationInfo;

}

@property (nonatomic,copy) IDSCKNotificationInfo * notificationInfo;              //@synthesize notificationInfo=_notificationInfo - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setNotificationInfo:(IDSCKNotificationInfo *)arg1 ;
-(IDSCKNotificationInfo *)notificationInfo;
@end
