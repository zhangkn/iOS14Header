/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface VTXPCServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _vtxConnection;

}
-(void)resetAssertions;
-(void)notifyTriggerEventRequest;
-(void)dealloc;
-(id)requestCurrentVoiceTriggerAssetDictionary;
-(id)requestCurrentBuiltInRTModelDictionary;
-(id)init;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)setCurrentBuiltInRTModelDictionary:(id)arg1 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(id)_service;
-(void)notifySecondChanceRequest;
-(unsigned char)getLastTriggerType;
-(long long)getVoiceTriggerCount;
-(void)clearVoiceTriggerCount;
-(void)requestAudioCapture:(double)arg1 ;
-(id)getFirstChanceAudioBuffer;
-(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1 ;
-(id)getFirstChanceVTEventInfo;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(long long)isLastTriggerFollowedBySpeech;
-(id)getFirstChanceTriggeredDate;
@end
