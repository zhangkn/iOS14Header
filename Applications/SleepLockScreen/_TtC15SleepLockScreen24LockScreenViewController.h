//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SBSRemoteContentServiceInterface-Protocol.h"

@class MISSING_TYPE;

@interface _TtC15SleepLockScreen24LockScreenViewController : UIViewController <SBSRemoteContentServiceInterface>
{
    MISSING_TYPE *debugIdentifier;	// 8 = 0x8
    MISSING_TYPE *model;	// 24 = 0x18
    MISSING_TYPE *contentView;	// 32 = 0x20
    MISSING_TYPE *lockScreenStateObserver;	// 40 = 0x28
    MISSING_TYPE *contentStateObserver;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_alarmManager;	// 56 = 0x38
    MISSING_TYPE *isAlertVisible;	// 64 = 0x40
    MISSING_TYPE *didConfigureHostConnection;	// 65 = 0x41
    MISSING_TYPE *contentPreferences;	// 72 = 0x48
    MISSING_TYPE *daemonConnection;	// 80 = 0x50
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x000000010002ac90
+ (id)_exportedInterface;	// IMP=0x0000000100027dec
+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100027dd0
- (void).cxx_destruct;	// IMP=0x0000000100025498
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010002acb8
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010002aca4
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x000000010002ac7c
- (void)didDismissForDismissType:(long long)arg1;	// IMP=0x00000001000293e4
- (void)getContentPreferencesWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028e5c
- (void)configureWithUserInfo:(id)arg1 contentBounds:(id)arg2 endpoint:(id)arg3;	// IMP=0x00000001000284a4
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100025ca8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000259f4
- (void)viewDidLoad;	// IMP=0x00000001000259a4
- (void)dealloc;	// IMP=0x0000000100025474
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100025180
- (id)init;	// IMP=0x0000000100025160

@end

