/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSpeechTaskProtocol <NSObject>
@optional
-(void)reportFinish;

@required
-(void)cancel;
-(void)start;
-(void)suspend;
-(void)resume;
-(id)delegate;
-(id)instrumentMetrics;
-(id)taskHash;

@end

