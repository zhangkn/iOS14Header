/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSharedEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MTLSharedEventListenerInternal : MTLSharedEventListener {

	IONotificationPortRef _notificationPort;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(void)dealloc;
-(id)dispatchQueue;
-(id)init;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)_notifyEventPort:(unsigned)arg1 event:(id)arg2 atValue:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
@end
