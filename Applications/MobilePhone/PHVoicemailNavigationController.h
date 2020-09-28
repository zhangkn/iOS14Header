//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PhoneNavigationController.h"

#import "VMAccountsViewControllerDelegate-Protocol.h"
#import "VMPlayerControllerDelegate-Protocol.h"

@class MPVoicemailController, MPVoicemailTableViewController, NSString, PHVoicemailNoContentViewController, UIAlertController, VMAccountProvisioningViewController, VMCallVoicemailViewController, VMPlayerController;
@protocol PHVoicemailListProtocol;

@interface PHVoicemailNavigationController : PhoneNavigationController <VMAccountsViewControllerDelegate, VMPlayerControllerDelegate>
{
    _Bool _previousAccountProvisioningRequired;	// 16 = 0x10
    _Bool _sharedServiceIsSubscribedPreviousValue;	// 17 = 0x11
    _Bool _active;	// 18 = 0x12
    MPVoicemailTableViewController<PHVoicemailListProtocol> *_inboxViewController;	// 24 = 0x18
    MPVoicemailTableViewController<PHVoicemailListProtocol> *_trashViewController;	// 32 = 0x20
    MPVoicemailTableViewController<PHVoicemailListProtocol> *_blockedViewController;	// 40 = 0x28
    PHVoicemailNoContentViewController *_noContentViewController;	// 48 = 0x30
    VMPlayerController *_playerController;	// 56 = 0x38
    MPVoicemailController *_voicemailController;	// 64 = 0x40
    VMAccountProvisioningViewController *_accountProvisioningViewController;	// 72 = 0x48
    VMCallVoicemailViewController *_callVoicemailViewController;	// 80 = 0x50
    UIAlertController *_mailboxStorageAlertController;	// 88 = 0x58
}

+ (CDStruct_5ec447a9)badge;	// IMP=0x00000001000085cc
+ (id)tabBarIconName;	// IMP=0x0000000100008374
+ (id)tabBarIconImage;	// IMP=0x0000000100008304
+ (id)tabBarIconImageName;	// IMP=0x0000000100008368
+ (int)tabViewType;	// IMP=0x000000010007be90
- (void).cxx_destruct;	// IMP=0x000000010007dfd8
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool sharedServiceIsSubscribedPreviousValue; // @synthesize sharedServiceIsSubscribedPreviousValue=_sharedServiceIsSubscribedPreviousValue;
@property(retain, nonatomic) UIAlertController *mailboxStorageAlertController; // @synthesize mailboxStorageAlertController=_mailboxStorageAlertController;
@property(retain, nonatomic) VMCallVoicemailViewController *callVoicemailViewController; // @synthesize callVoicemailViewController=_callVoicemailViewController;
@property(retain, nonatomic) VMAccountProvisioningViewController *accountProvisioningViewController; // @synthesize accountProvisioningViewController=_accountProvisioningViewController;
@property(nonatomic) _Bool previousAccountProvisioningRequired; // @synthesize previousAccountProvisioningRequired=_previousAccountProvisioningRequired;
@property(retain, nonatomic) MPVoicemailController *voicemailController; // @synthesize voicemailController=_voicemailController;
@property(retain, nonatomic) VMPlayerController *playerController; // @synthesize playerController=_playerController;
@property(readonly, nonatomic, getter=isAccountProvisioningRequired) _Bool accountProvisioningRequired;
@property(readonly, nonatomic) PHVoicemailNoContentViewController *noContentViewController; // @synthesize noContentViewController=_noContentViewController;
@property(readonly, nonatomic) MPVoicemailTableViewController<PHVoicemailListProtocol> *blockedViewController; // @synthesize blockedViewController=_blockedViewController;
@property(readonly, nonatomic) MPVoicemailTableViewController<PHVoicemailListProtocol> *trashViewController; // @synthesize trashViewController=_trashViewController;
@property(readonly, nonatomic) MPVoicemailTableViewController<PHVoicemailListProtocol> *inboxViewController; // @synthesize inboxViewController=_inboxViewController;
- (void)_invalidateBadge;	// IMP=0x000000010007d988
- (void)playerController:(id)arg1 didSeekToTime:(float)arg2;	// IMP=0x000000010007d90c
- (void)playerController:(id)arg1 willSeekToTime:(float)arg2;	// IMP=0x000000010007d808
- (void)playerController:(id)arg1 didChangeToTimeControlStatus:(long long)arg2;	// IMP=0x000000010007d66c
- (void)playerController:(id)arg1 didChangeToStatus:(long long)arg2;	// IMP=0x000000010007d59c
- (void)playerController:(id)arg1 didChangeToDuration:(double)arg2;	// IMP=0x000000010007d418
- (void)playerController:(id)arg1 didChangeToCurrentTime:(float)arg2;	// IMP=0x000000010007d284
- (void)playerControllerDidReset:(id)arg1;	// IMP=0x000000010007d274
- (void)accountsViewControllerDidFinish:(id)arg1;	// IMP=0x000000010007d1d8
- (id)selectedMessageTableViewCell;	// IMP=0x000000010007d0b0
- (id)selectedMessage;	// IMP=0x000000010007cfd8
- (void)_handleVMVoicemailManagerAccountsDidChangeNotification:(id)arg1;	// IMP=0x000000010007cee0
- (void)_handleCTIndicatorsVoicemailNotification:(id)arg1;	// IMP=0x000000010007ce60
- (void)_handlePhoneActivationChangedNotification:(id)arg1;	// IMP=0x000000010007cc94
- (void)_handleStorageUsageChangedNotification:(id)arg1;	// IMP=0x000000010007cc88
- (void)_handleMessageWaitingStateChanged:(id)arg1;	// IMP=0x000000010007cbb4
- (void)_handleOnlineStateChanged:(id)arg1;	// IMP=0x000000010007cae0
- (void)_handleVoicemailSubscriptionStatusChangedNotification:(id)arg1;	// IMP=0x000000010007c98c
- (void)_handleVoicemailsChangedNotification:(id)arg1;	// IMP=0x000000010007c844
- (void)_handleApplicationResumeNotification:(id)arg1;	// IMP=0x000000010007c838
- (void)removeNotificationObservers;	// IMP=0x000000010007c7e4
- (void)addNotificationObservers;	// IMP=0x00000001000083e8
- (void)_checkMailboxUsage;	// IMP=0x000000010000f4c8
- (void)_updateUIStateForce:(_Bool)arg1;	// IMP=0x000000010000a2c8
- (void)_updateUIState;	// IMP=0x000000010000a2b8
- (void)handleURL:(id)arg1;	// IMP=0x000000010007c420
- (void)viewDidLoad;	// IMP=0x000000010000f3d0
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010007c260
- (void)dealloc;	// IMP=0x000000010007c214
- (id)init;	// IMP=0x0000000100008284
- (_Bool)shouldSnapshot;	// IMP=0x000000010007c20c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
