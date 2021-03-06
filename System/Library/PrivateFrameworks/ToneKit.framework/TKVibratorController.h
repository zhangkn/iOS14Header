/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLAccessQueue, NSUUID, NSMutableSet;

@interface TKVibratorController : NSObject {

	TLAccessQueue* _accessQueue;
	NSUUID* _activePlayRequestIdentifier;
	NSMutableSet* _pendingStopRequestIdentifiers;

}

@property (nonatomic,readonly) unsigned long long vibratorState; 
-(void)dealloc;
-(id)init;
-(void)turnOff;
-(void)turnOnWithVibrationPattern:(id)arg1 ;
-(unsigned long long)vibratorState;
-(void)_turnOffIfAppropriate;
-(unsigned)_previewVibrationSystemSoundID;
-(void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1 ;
@end

