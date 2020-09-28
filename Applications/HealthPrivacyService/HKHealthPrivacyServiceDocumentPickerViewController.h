//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import "HKDocumentPickerViewControllerDelegate-Protocol.h"
#import "HKHealthPrivacyServiceRemoteDocumentPickerViewController-Protocol.h"

@class BKSApplicationStateMonitor, HKAuthorizationStore, HKDocumentPickerViewController, HKHealthStore, HKNavigationController, HKObjectAuthorizationPromptSession, NSError, NSString, NSUUID;

@interface HKHealthPrivacyServiceDocumentPickerViewController : HKViewController <HKHealthPrivacyServiceRemoteDocumentPickerViewController, HKDocumentPickerViewControllerDelegate>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKAuthorizationStore *_authorizationStore;	// 16 = 0x10
    HKNavigationController *_navigationController;	// 24 = 0x18
    HKDocumentPickerViewController *_documentPickerController;	// 32 = 0x20
    NSError *_transactionError;	// 40 = 0x28
    HKObjectAuthorizationPromptSession *_promptSession;	// 48 = 0x30
    NSUUID *_sessionIdentifier;	// 56 = 0x38
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 64 = 0x40
}

+ (id)_exportedInterface;	// IMP=0x0000000100003aac
+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100003aa8
- (void).cxx_destruct;	// IMP=0x0000000100003bb4
@property(retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) HKObjectAuthorizationPromptSession *promptSession; // @synthesize promptSession=_promptSession;
@property(retain, nonatomic) NSError *transactionError; // @synthesize transactionError=_transactionError;
@property(retain, nonatomic) HKDocumentPickerViewController *documentPickerController; // @synthesize documentPickerController=_documentPickerController;
@property(retain, nonatomic) HKNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) HKAuthorizationStore *authorizationStore; // @synthesize authorizationStore=_authorizationStore;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)_healthPrivacyHostViewController;	// IMP=0x0000000100003a9c
- (void)_finishWithError:(id)arg1;	// IMP=0x0000000100003a30
- (void)documentPickerViewControllerDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x00000001000034cc
- (void)viewDidLoad;	// IMP=0x000000010000347c
- (void)_configureNavigationController;	// IMP=0x000000010000339c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000032c4
- (void)_hostDidTerminate;	// IMP=0x00000001000031f4
- (void)_beginAuthorizationSessionWithIdentifier:(id)arg1;	// IMP=0x0000000100002d60
- (void)_configureApplicationStateMonitor;	// IMP=0x0000000100002b1c
- (void)_hostApplicationStateDidChange:(unsigned int)arg1;	// IMP=0x0000000100002a54
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100002880

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
