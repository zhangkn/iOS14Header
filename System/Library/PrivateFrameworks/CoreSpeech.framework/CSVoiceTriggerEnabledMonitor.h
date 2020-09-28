/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isVoiceTriggerEnabled;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(BOOL)isEnabled;
-(BOOL)_checkVoiceTriggerEnabled;
-(id)init;
-(void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)arg1 ;
-(void)_didReceiveVoiceTriggerSettingChanged:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
@end
