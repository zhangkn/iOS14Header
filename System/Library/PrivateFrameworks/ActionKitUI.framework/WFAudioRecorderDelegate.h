/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFAudioRecorderDelegate <NSObject>
@optional
-(void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;
-(void)audioRecorder:(id)arg1 didStartRecording:(BOOL)arg2 error:(id)arg3;

@required
-(void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;

@end
