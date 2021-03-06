/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSCommandControlBehaviorMonitorDelegate.h>

@class NSString;

@interface CSCommandControlStreamEventMonitor : CSEventMonitor <CSCommandControlBehaviorMonitorDelegate> {

	BOOL _isCommandControlStreaming;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isStreaming;
-(void)commandControlBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)_stopMonitoring;
-(void)commandControlBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(id)init;
-(void)commandControlBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyStopCommandControl;
-(void)commandControlBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 ;
@end

