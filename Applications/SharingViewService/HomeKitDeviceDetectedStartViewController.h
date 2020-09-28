//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface HomeKitDeviceDetectedStartViewController : SVSBaseViewController <LSApplicationWorkspaceObserverProtocol, UIGestureRecognizerDelegate>
{
    UIButton *_dismissButton;	// 32 = 0x20
    UIButton *_setupButton;	// 40 = 0x28
    _Bool _settingUp;	// 48 = 0x30
    UIView *_progressView;	// 56 = 0x38
    UIActivityIndicatorView *_progressIndicator;	// 64 = 0x40
    UILabel *_progressLabel;	// 72 = 0x48
    int _testMode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100034ffc
- (void)_restoreHomeApp;	// IMP=0x0000000100034e78
- (void)_launchHomeApp;	// IMP=0x0000000100034bec
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000001000349ec
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x0000000100034954
- (void)handleSetupButton:(id)arg1;	// IMP=0x000000010003486c
- (void)handleDismissButton:(id)arg1;	// IMP=0x00000001000347d4
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100034748
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000346b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100034500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
