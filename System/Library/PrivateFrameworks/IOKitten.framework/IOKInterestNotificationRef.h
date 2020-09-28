/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOKitten/IOKitten-Structs.h>
@class IOKInterestNotification;

@interface IOKInterestNotificationRef : NSObject {

	os_unfair_recursive_lock_s _lock;
	IOKInterestNotification* _notification;

}

@property (assign,nonatomic) IOKInterestNotification * notification;              //@synthesize notification=_notification - In the implementation block
-(void)lock;
-(IOKInterestNotification *)notification;
-(void)unlock;
-(id)init;
-(void)setNotification:(IOKInterestNotification *)arg1 ;
@end
