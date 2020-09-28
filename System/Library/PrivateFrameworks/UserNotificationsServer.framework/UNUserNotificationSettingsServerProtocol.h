/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNUserNotificationSettingsServerProtocol <NSObject>
@required
-(void)getNotificationSource:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getAllNotificationSourcesWithCompletionHandler:(/*^block*/id)arg1;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
-(void)getNotificationSources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getNotificationSystemSettingsWithCompletionHandler:(/*^block*/id)arg1;
-(void)setNotificationSystemSettings:(id)arg1;
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;

@end
