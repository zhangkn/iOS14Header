/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter;

@interface GCNotificationManager : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;
	BOOL _isPermissionGranted;

}
+(id)sharedInstance;
-(id)init;
-(void)requestNotification:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)requestNotificationImpl:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end
