/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
@class NSString, NSObject;

@interface IMNetworkObserver : NSObject {

	NSString* _dataStatusIndicator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _networkReachabilityFlags;
	long long _networkType;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSString* _operatorName;
	SCNetworkReachabilityRef _reachability;
	CTServerConnectionRef _telephonyServer;

}

@property (assign) long long networkType; 
@property (readonly) NSString * connectionTypeHeader; 
@property (readonly) unsigned networkReachabilityFlags; 
+(id)sharedInstance;
+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned)arg1 ;
+(id)_networkObserverLogConfig;
-(id)_dataStatusIndicator;
-(NSString *)connectionTypeHeader;
-(unsigned)networkReachabilityFlags;
-(unsigned)_currentNetworkReachabilityFlags;
-(id)operatorName;
-(void)dealloc;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(void)_applicationForegroundNotification:(id)arg1 ;
-(long long)_networkTypeForReachabilityFlags:(unsigned)arg1 ;
-(id)init;
-(void)_reloadDataStatusIndicator;
-(void)setNetworkType:(long long)arg1 ;
-(long long)networkType;
-(void)_reloadNetworkType;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned)arg1 ;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned)arg1 toValue:(unsigned)arg2 ;
-(void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(void)reloadNetworkType;
-(long long)_setNetworkType:(long long)arg1 ;
-(long long)_networkTypeFromDataIndicator:(id)arg1 ;
-(void)_copyConnectionDataStatus:(/*^block*/id)arg1 ;
-(id)dataStatusIndicator;
-(id)stringForNetworkType:(long long)arg1 ;
-(BOOL)networkTypeIsCellularType:(long long)arg1 ;
@end

