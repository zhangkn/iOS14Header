/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {

	AKAdaptiveService* _service;
	NSXPCListenerEndpoint* _daemonEndpoint;

}
+(void)startServiceWithNotificationHandler:(id)arg1 ;
+(void)startServiceWithStateBroadcastHandler:(id)arg1 ;
+(id)_sharedService;
-(void)startWithNotificationHandler:(id)arg1 ;
-(void)startWithStateBroadcastHandler:(id)arg1 ;
-(void)_configureNotificationService;
-(void)_configureStateBroadcastService;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(id)init;
@end

