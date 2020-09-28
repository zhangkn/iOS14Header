/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalActivatable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface CalDarwinNotificationListener : NSObject <CalActivatable> {

	BOOL _listening;
	NSString* _notificationName;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) id callback;                                             //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL listening;                                            //@synthesize listening=_listening - In the implementation block
@property (nonatomic,readonly) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)initWithNotificationName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)callback;
-(void)dealloc;
-(BOOL)_removeObserver;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setListening:(BOOL)arg1 ;
-(void)_notificationWithNameReceived:(id)arg1 ;
-(void)deactivate;
-(BOOL)_addObserver;
-(void)activate;
-(id)description;
-(NSString *)notificationName;
-(id)initWithNotificationName:(id)arg1 callback:(/*^block*/id)arg2 queue:(id)arg3 ;
-(BOOL)listening;
@end
