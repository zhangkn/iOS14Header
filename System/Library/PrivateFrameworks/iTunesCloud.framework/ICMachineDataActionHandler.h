/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface ICMachineDataActionHandler : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;

}
+(id)sharedHandler;
-(void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
@end

