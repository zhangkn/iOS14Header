//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PGPictureInPictureProxyDelegate-Protocol.h"
#import "PHPIPWrapperViewControllerDelegateProtocol-Protocol.h"

@class NSString, PGPictureInPictureProxy, PHPIPWrapperViewController, UIViewController, UIWindow;

@interface PHPIPController : NSObject <PHPIPWrapperViewControllerDelegateProtocol, PGPictureInPictureProxyDelegate>
{
    _Bool _wantsVideo;	// 8 = 0x8
    unsigned long long _pipState;	// 16 = 0x10
    unsigned long long _currentPIPAnimationStyle;	// 24 = 0x18
    UIViewController *_pipContentViewController;	// 32 = 0x20
    long long _pipDeviceOrientation;	// 40 = 0x28
    UIWindow *_windowForTransitionAnimation;	// 48 = 0x30
    PHPIPWrapperViewController *_wrapperViewController;	// 56 = 0x38
    PGPictureInPictureProxy *_pipProxy;	// 64 = 0x40
    CDUnknownBlockType _startCompletionBlock;	// 72 = 0x48
    CDUnknownBlockType _preparedToAnimateToFullScreenCompletionBlock;	// 80 = 0x50
    CDUnknownBlockType _restoreUserInterfaceForPictureInPictureStopCompletionBlock;	// 88 = 0x58
}

+ (id)defaultPIPController;	// IMP=0x0000000100006f04
- (void).cxx_destruct;	// IMP=0x00000001000352a4
@property _Bool wantsVideo; // @synthesize wantsVideo=_wantsVideo;
@property(copy, nonatomic) CDUnknownBlockType restoreUserInterfaceForPictureInPictureStopCompletionBlock; // @synthesize restoreUserInterfaceForPictureInPictureStopCompletionBlock=_restoreUserInterfaceForPictureInPictureStopCompletionBlock;
@property(copy) CDUnknownBlockType preparedToAnimateToFullScreenCompletionBlock; // @synthesize preparedToAnimateToFullScreenCompletionBlock=_preparedToAnimateToFullScreenCompletionBlock;
@property(copy) CDUnknownBlockType startCompletionBlock; // @synthesize startCompletionBlock=_startCompletionBlock;
@property(retain) PGPictureInPictureProxy *pipProxy; // @synthesize pipProxy=_pipProxy;
@property(retain) PHPIPWrapperViewController *wrapperViewController; // @synthesize wrapperViewController=_wrapperViewController;
@property(nonatomic) __weak UIWindow *windowForTransitionAnimation; // @synthesize windowForTransitionAnimation=_windowForTransitionAnimation;
@property long long pipDeviceOrientation; // @synthesize pipDeviceOrientation=_pipDeviceOrientation;
@property(retain, nonatomic) UIViewController *pipContentViewController; // @synthesize pipContentViewController=_pipContentViewController;
@property(nonatomic) unsigned long long currentPIPAnimationStyle; // @synthesize currentPIPAnimationStyle=_currentPIPAnimationStyle;
@property(nonatomic) unsigned long long pipState; // @synthesize pipState=_pipState;
- (void)updatePIPProxyControlStates;	// IMP=0x00000001000351d4
- (void)updatePIPProxyCameraControlStates;	// IMP=0x00000001000350f4
- (void)updatePIPProxyMicrophoneControlStates;	// IMP=0x0000000100035044
- (void)callIsSendingVideoChanged:(id)arg1;	// IMP=0x0000000100035038
- (void)uplinkMuteStatusChangedNotification:(id)arg1;	// IMP=0x000000010003502c
- (void)pictureInPictureProxy:(id)arg1 didRequestFaceTimeAction:(long long)arg2;	// IMP=0x0000000100034d2c
- (void)updatePIPFrame;	// IMP=0x0000000100034cec
- (void)updatePIPSize;	// IMP=0x0000000100034cac
- (_Bool)pipStateIsTransitory;	// IMP=0x0000000100034c64
- (_Bool)shouldPIPWhenEnteringBackground;	// IMP=0x0000000100034ac0
- (void)updateShouldPIPWhenEnteringBackground;	// IMP=0x00000001000349d0
- (void)callCenterCallStatusChangedNotification:(id)arg1;	// IMP=0x000000010001cc1c
- (_Bool)pipIsBeingResized;	// IMP=0x0000000100034960
- (void)pictureInPictureProxyWillSetupPictureInPictureStop:(id)arg1;	// IMP=0x00000001000348b4
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;	// IMP=0x0000000100034680
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;	// IMP=0x0000000100034450
- (void)pictureInPictureProxy:(id)arg1 didUpdateResourcesUsageReductionReasons:(unsigned long long)arg2 oldReasons:(unsigned long long)arg3;	// IMP=0x0000000100034340
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;	// IMP=0x000000010003413c
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;	// IMP=0x0000000100034014
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100033ec8
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;	// IMP=0x0000000100033d80
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;	// IMP=0x0000000100033c50
- (id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1;	// IMP=0x0000000100033b64
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;	// IMP=0x00000001000339f0
- (id)stringForPIPState:(unsigned long long)arg1;	// IMP=0x0000000100033994
- (void)wrapperViewControllerNeedsCleanup:(id)arg1;	// IMP=0x00000001000338c0
@property(readonly, nonatomic) _Bool isPipped;
- (void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000335e4
- (_Bool)isPreparedToAnimateToFullScreen;	// IMP=0x00000001000335a8
- (void)cancelPIP;	// IMP=0x00000001000334c8
- (void)manuallyStopPIPWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000333dc
- (void)stopPIPAndStealViewController:(CDUnknownBlockType)arg1;	// IMP=0x00000001000331d0
- (void)startPIPWithViewController:(id)arg1 targetAspectRatio:(struct CGSize)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100033114
- (void)rotatePIPDeviceOrientationTo:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032cbc
- (void)resetPipContentViewControllerIfNecessary;	// IMP=0x000000010001e350
- (void)dealloc;	// IMP=0x0000000100032c04
- (id)init;	// IMP=0x0000000100006f70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

