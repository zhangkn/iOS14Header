/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLanguageCodeUpdateMonitor : VTEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_didReceiveLanguageCodeUpdate;
-(void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
@end

