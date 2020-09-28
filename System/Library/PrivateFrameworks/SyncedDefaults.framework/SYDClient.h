/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <SyncedDefaults/SyncedDefaults-Structs.h>
@class NSObject, NSString;

@interface SYDClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	NSString* _bundleIdentifier;
	NSString* _storeIdentifier;
	BOOL _additionalSource;

}
-(id)sendMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)_sendMessageWithReplySync:(id)arg1 ;
-(id)initWithQueue:(id)arg1 bundleIdentifier:(CFStringRef)arg2 storeIdentifier:(CFStringRef)arg3 ;
-(id)initWithQueue:(id)arg1 bundleIdentifier:(CFStringRef)arg2 storeIdentifier:(CFStringRef)arg3 additionalSource:(BOOL)arg4 ;
-(void)sendMessageWithName:(id)arg1 ;
-(void)_sendMessageNoReply:(id)arg1 ;
-(void)_sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id)_newMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)_resetConnection;
-(void)sendMessageWithName:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_createConnectionIfNecessary;
-(void)shutdown;
@end
