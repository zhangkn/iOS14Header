//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "SOExtensionDelegate-Protocol.h"
#import "SOUIAuthorizationViewControllerDelegate-Protocol.h"

@class NSString, SOExtension, SORemoteExtensionViewController, SOUIDaemonConnection;

@interface SOUIServiceViewController : SBUIRemoteAlertServiceViewController <SOExtensionDelegate, SOUIAuthorizationViewControllerDelegate>
{
    SOUIDaemonConnection *_daemonConnection;	// 8 = 0x8
    SOExtension *_extension;	// 16 = 0x10
    SORemoteExtensionViewController *_extensionViewController;	// 24 = 0x18
}

+ (id)_queue;	// IMP=0x0000000100002a90
- (void).cxx_destruct;	// IMP=0x0000000100004a20
- (void)viewControllerDidCancel:(id)arg1;	// IMP=0x0000000100004930
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;	// IMP=0x0000000100004740
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000446c
- (void)handleButtonActions:(id)arg1;	// IMP=0x0000000100004378
- (void)_cancelAuthorization;	// IMP=0x0000000100004208
- (void)_extensionCleanup;	// IMP=0x00000001000040e8
- (void)_dismiss;	// IMP=0x0000000100003fa0
- (void)idleTimerDisable:(_Bool)arg1;	// IMP=0x0000000100003f9c
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100003f94
- (int)_preferredStatusBarVisibility;	// IMP=0x0000000100003ea4
- (void)viewDidLoad;	// IMP=0x0000000100003d34
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100002f88
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100002f80
- (_Bool)shouldAutorotate;	// IMP=0x0000000100002f78
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100002e90
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100002da8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100002cc0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100002bd8
- (id)init;	// IMP=0x0000000100002b00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
