/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSCopying;
@class NSObject, SUScriptSubscriptionStatusResponse, ICMusicSubscriptionStatusMonitor;

@interface SUScriptSubscriptionStatusObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	SUScriptSubscriptionStatusResponse* _lastKnownSubscriptionStatusResponse;
	ICMusicSubscriptionStatusMonitor* _subscriptionStatusMonitor;
	id<NSCopying> _subscriptionStatusMonitorObservationToken;

}
+(id)sharedObserver;
-(void)dealloc;
-(id)init;
-(void)_updateWithSubscriptionStatus:(id)arg1 ;
@end

