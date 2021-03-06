/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SetAudioLanguageIntentHandling.h>

@interface SiriPlaybackControlIntents.SetAudioLanguageIntentHandler : NSObject <SetAudioLanguageIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSetAudioLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDeviceForSetAudioLanguage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveLanguageForSetAudioLanguage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSetAudioLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

