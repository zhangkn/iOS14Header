/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSSACInfoMonitor : CSEventMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isDeviceRoleStereo;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isDeviceRoleStereo;
@end

