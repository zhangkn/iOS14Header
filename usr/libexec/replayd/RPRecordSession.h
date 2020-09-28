//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@class NSURL, RPMovieWriter;

@interface RPRecordSession : RPSession <RPCaptureManagerProtocol>
{
    RPMovieWriter *_movieWriter;	// 88 = 0x58
    NSURL *_currentRecordingURL;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000461bc
- (void)handleResumeContextIDFailure;	// IMP=0x0000000100045f74
- (void)handleDeviceRestrictionWarning;	// IMP=0x0000000100045d2c
- (void)handleDeviceLockedWarning;	// IMP=0x0000000100045c4c
- (void)handleDisplayWarning;	// IMP=0x0000000100045a04
- (void)handleClientApplicationDidEnterForeground;	// IMP=0x00000001000458ec
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x00000001000457fc
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100045468
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x0000000100045324
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x000000010004519c
- (unsigned long long)getRecordedFileSize;	// IMP=0x0000000100044ee0
- (void)presentAcknowledgmentWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000449c4
- (id)dispatchCaptureQueue;	// IMP=0x0000000100044954
- (void)discardInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000447d8
- (void)pauseSession;	// IMP=0x0000000100044650
- (void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004419c
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100043ef0
- (id)outputPath;	// IMP=0x0000000100043e58

@end
