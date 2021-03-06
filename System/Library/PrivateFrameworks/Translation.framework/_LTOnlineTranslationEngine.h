/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LTTranslationEngine.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSOperationQueue, FTMtService, FTBlazarService, NSObject, _LTOspreySpeechTranslationSession, _LTBatchTranslationResponseHandler, AFSettingsConnection, _LTTextToSpeechCache, NSString;

@interface _LTOnlineTranslationEngine : NSObject <_LTTranslationEngine> {

	NSOperationQueue* _sendQueue;
	FTMtService* _service;
	FTBlazarService* _blazarService;
	FTBlazarService* _webTaskService;
	NSObject*<OS_dispatch_queue> _translationQueue;
	_LTOspreySpeechTranslationSession* _speechSession;
	_LTBatchTranslationResponseHandler* batchTranslationResponseHandler;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_source> _serverTimer;
	AFSettingsConnection* _assistantSettingsConnection;
	long long _dataSharingOptInStatus;
	_LTTextToSpeechCache* _ttsCache;

}

@property (nonatomic,retain) _LTTextToSpeechCache * ttsCache;              //@synthesize ttsCache=_ttsCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)blazarServiceWithBundleID:(id)arg1 ;
-(void)endpoint;
-(void)addSpeechAudioData:(id)arg1 ;
-(id)_webTaskService;
-(id)_blazarService;
-(void)updateServerTimeout;
-(void)serverTimeoutFired;
-(void)sendBatchTranslationRequestWithDelegate:(id)arg1 ;
-(id)_serviceForTask:(long long)arg1 ;
-(id)_tokenizeString:(id)arg1 inLocale:(id)arg2 ;
-(void)startServerTimeoutTimer;
-(void)cancelServerTimeout;
-(id)init;
-(void)_translate:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_translateParagraph:(id)arg1 index:(long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_hasOngoingSpeechSession;
-(void)_speechSessionCompletedWithError:(id)arg1 ;
-(void)setLanguagesRecognized:(id)arg1 ;
-(void)setTtsCache:(_LTTextToSpeechCache *)arg1 ;
-(BOOL)translatesPair:(id)arg1 ;
-(void)preheatAsynchronously:(BOOL)arg1 withContext:(id)arg2 ;
-(void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)cancelSpeechTranslation;
-(void)speak:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3 ;
-(id)_service;
-(void)endAudio;
-(_LTTextToSpeechCache *)ttsCache;
@end

