//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CXCallObserverDelegate-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "RPApplicationStateObserver-Protocol.h"
#import "RPStatusBarAssertionDelegate-Protocol.h"
#import "RPSystemStateObserver-Protocol.h"
#import "SBSStatusBarStyleOverridesCoordinatorDelegate-Protocol.h"

@class CXCallObserver, FBSDisplayLayoutMonitor, NSDate, NSNumber, NSString, RPApplicationStateMonitor, RPReportingAgent, RPStatusBarAssertion;
@protocol RPClientProtocol, RPSessionDelegate;

@interface RPSession : NSObject <RPSystemStateObserver, RPApplicationStateObserver, CXCallObserverDelegate, MCProfileConnectionObserver, RPStatusBarAssertionDelegate, SBSStatusBarStyleOverridesCoordinatorDelegate>
{
    int _callingPID;	// 8 = 0x8
    id <RPClientProtocol> _clientProxy;	// 16 = 0x10
    id <RPSessionDelegate> _delegate;	// 24 = 0x18
    CDStruct_1b6d18a9 _lastSampleTimestamp;	// 32 = 0x20
    CDStruct_1b6d18a9 _sampleTimeOffset;	// 56 = 0x38
    _Bool _sessionIsResuming;	// 80 = 0x50
    int _sessionType;	// 84 = 0x54
    _Bool _isExempt;	// 88 = 0x58
    NSDate *_lastExemptTime;	// 96 = 0x60
    struct __CFUserNotification *_userNotificationStopRecording;	// 104 = 0x68
    CXCallObserver *_callObserver;	// 112 = 0x70
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 120 = 0x78
    RPApplicationStateMonitor *_applicationStateMonitor;	// 128 = 0x80
    long long _levelOneElementCount;	// 136 = 0x88
    int _lockToResetToken;	// 144 = 0x90
    RPStatusBarAssertion *_statusBarAssertion;	// 152 = 0x98
    double _privacyAcknowledgementAlertTimeoutMinutes;	// 160 = 0xa0
    _Bool _didAcceptMicrophonePermission;	// 168 = 0xa8
    _Bool _didAcceptCameraPermission;	// 169 = 0xa9
    _Bool _deviceLocked;	// 170 = 0xaa
    _Bool _microphoneEnabled;	// 171 = 0xab
    _Bool _cameraEnabled;	// 172 = 0xac
    int _sessionState;	// 176 = 0xb0
    NSString *_bundleID;	// 184 = 0xb8
    NSNumber *_contextID;	// 192 = 0xc0
    RPReportingAgent *_reportingAgent;	// 200 = 0xc8
    struct CGSize _windowSize;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000100015284
@property(retain, nonatomic) RPReportingAgent *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSNumber *contextID; // @synthesize contextID=_contextID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) int sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) _Bool cameraEnabled; // @synthesize cameraEnabled=_cameraEnabled;
@property(nonatomic) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) _Bool deviceLocked; // @synthesize deviceLocked=_deviceLocked;
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000151f8
- (void)handleResumeContextIDFailure;	// IMP=0x00000001000151f4
- (void)handleTimerDidUpdate:(id)arg1;	// IMP=0x00000001000151f0
- (void)handleSystemAlertStop;	// IMP=0x00000001000151ec
- (void)handleFrontmostApplicationDidChange:(id)arg1;	// IMP=0x00000001000151e8
- (void)handleClientApplicationDidEnterForeground;	// IMP=0x00000001000151e4
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x00000001000151e0
- (void)handleDeviceRestrictionWarning;	// IMP=0x00000001000151dc
- (void)handleDeviceLockedWarning;	// IMP=0x00000001000151d8
- (void)handleIncomingCallWarning;	// IMP=0x00000001000151d4
- (void)handleDisplayWarning;	// IMP=0x00000001000151d0
- (void)handleMemoryWarning;	// IMP=0x00000001000151cc
- (void)clientApplicationDidEnterForeground;	// IMP=0x00000001000150bc
- (void)clientApplicationDidEnterBackground;	// IMP=0x0000000100014f9c
- (void)frontmostApplicationDidChange:(id)arg1;	// IMP=0x0000000100014e6c
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;	// IMP=0x0000000100014e68
- (_Bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014e48
- (void)timerDidUpdate:(id)arg1;	// IMP=0x0000000100014e3c
- (void)checkAndPlaySystemSessionSoundForRecordingOn:(_Bool)arg1;	// IMP=0x0000000100014ddc
- (_Bool)showAlertRecordingSessionFailedToSaveFileWithError:(id)arg1;	// IMP=0x0000000100014a4c
- (_Bool)showAlertRecordingCaptureSessionWithError:(id)arg1;	// IMP=0x00000001000146d8
- (void)sessionReportCameraUsage:(long long)arg1;	// IMP=0x00000001000145dc
- (id)serviceNameForReporting;	// IMP=0x0000000100014570
- (_Bool)showStopSystemSessionAlert;	// IMP=0x00000001000140a4
- (_Bool)shouldBypassAlertForTest;	// IMP=0x0000000100014050
- (id)getNotificationBodyTextForSessionType:(int)arg1 cameraEnabled:(_Bool)arg2 microphoneEnabled:(_Bool)arg3;	// IMP=0x0000000100013e4c
- (id)getNotificationTitleTextForSessionType:(int)arg1 bundleID:(id)arg2;	// IMP=0x0000000100013cf8
- (id)showAcknowledgementAlertWithMicrophone:(_Bool)arg1 camera:(_Bool)arg2;	// IMP=0x00000001000130cc
- (_Bool)clientHasTestEntitlement;	// IMP=0x0000000100012f28
- (_Bool)shouldSupressAlert;	// IMP=0x0000000100012d38
- (_Bool)getAcknowledgementAlertResultsWithMicrophone:(_Bool)arg1 cameraEnabled:(_Bool)arg2;	// IMP=0x00000001000129d4
- (id)checkMultiWindowRequirement;	// IMP=0x00000001000128c4
- (id)checkCarPlayRequirement;	// IMP=0x00000001000127c4
- (id)checkApplicationForegroundRequirement;	// IMP=0x00000001000126c0
- (id)checkSufficientFreeSpace;	// IMP=0x0000000100012594
- (id)getCallingConnectionBundleID;	// IMP=0x00000001000124f4
- (_Bool)checkContextIDsMatch:(id)arg1;	// IMP=0x00000001000122f4
- (id)checkContextIDRequirement;	// IMP=0x00000001000121ac
- (id)checkDeviceLockedRequirement;	// IMP=0x00000001000120bc
- (id)checkCaptureRequirementsWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2;	// IMP=0x0000000100011e4c
- (void)callObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x0000000100011dec
- (void)handleUpdateDisplayLayout:(id)arg1;	// IMP=0x0000000100011be8
- (void)setUpFrontBoardServices;	// IMP=0x0000000100011a60
- (void)setUpDeviceLockNotifications;	// IMP=0x00000001000117b0
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100011740
- (void)checkAndPlaySystemSessionSound:(_Bool)arg1;	// IMP=0x00000001000116bc
- (struct CGAffineTransform)CGAffineTransformFromFigTransformFlags:(unsigned long long)arg1;	// IMP=0x0000000100011430
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2 movieWriter:(id)arg3;	// IMP=0x00000001000112bc
- (void)updatePauseOffsetForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withSampleType:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011158
- (void)updatePauseOffsetFromVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100011080
- (void)resumeSessionWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010ce8
- (void)pauseSession;	// IMP=0x0000000100010bd4
- (void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x0000000100010a00
- (void)notifyClientSessionDidStopWithError:(long long)arg1 movieURL:(id)arg2 showAlert:(_Bool)arg3;	// IMP=0x0000000100010944
- (void)clearSystemRecordingUI;	// IMP=0x0000000100010818
- (void)setUpStatusBarAssertionWithServiceName:(id)arg1;	// IMP=0x00000001000105fc
- (void)updateClientProxy:(id)arg1 callingPID:(int)arg2 bundleID:(id)arg3;	// IMP=0x00000001000103bc
- (void)startAcknowledgementAlertTimer;	// IMP=0x000000010001022c
- (void)checkForAcknowledgementAlertTimeout;	// IMP=0x0000000100010040
- (void)reportSummaryEvent:(long long)arg1 recordedFileSize:(long long)arg2;	// IMP=0x000000010000ff30
- (void)reportSessionEndReason:(id)arg1;	// IMP=0x000000010000feac
- (void)removeObserversForSession;	// IMP=0x000000010000fc2c
- (void)addObserversForSession;	// IMP=0x000000010000fadc
- (void)startWithContextID:(id)arg1 windowSize:(struct CGSize)arg2;	// IMP=0x000000010000f908
- (void)dealloc;	// IMP=0x000000010000f7ec
- (void)invalidate;	// IMP=0x000000010000f6bc
- (id)initWithClientProxy:(id)arg1 sessionType:(int)arg2 callingPID:(int)arg3 bundleID:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010000f304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
