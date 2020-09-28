/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TLSilentModeController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	int _ringerSwitchChangedNotifyToken;
	long long _silentModeStatus;

}

@property (readonly) long long silentModeStatus; 
+(id)sharedSilentModeController;
-(void)dealloc;
-(void)_assertNotRunningOnAccessQueue;
-(id)init;
-(void)_assertRunningOnAccessQueue;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(long long)silentModeStatus;
-(BOOL)_registerRingerSwitchChangedNotifyToken;
-(long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)arg1 ;
-(void)_cancelRingerSwitchChangedNotifyToken;
-(void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)arg1 ;
-(void)_setSilentModeStatus:(long long)arg1 ;
@end
