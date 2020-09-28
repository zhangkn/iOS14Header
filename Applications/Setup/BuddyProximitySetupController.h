//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyWelcomeController.h"

#import "BYEnvironmentDependencyReceiver-Protocol.h"

@class BuddyInternalSkipInfoProvider, NSString;
@protocol BYDeviceProvider;

@interface BuddyProximitySetupController : BuddyWelcomeController <BYEnvironmentDependencyReceiver>
{
    _Bool _skippedByCloudConfiguration;	// 8 = 0x8
    id <BYDeviceProvider> _deviceProvider;	// 16 = 0x10
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000611b8
+ (_Bool)controllerAffectedByTapFreeSetup;	// IMP=0x00000001000611b0
- (void).cxx_destruct;	// IMP=0x00000001000614b4
@property _Bool skippedByCloudConfiguration; // @synthesize skippedByCloudConfiguration=_skippedByCloudConfiguration;
@property(retain, nonatomic) id <BYDeviceProvider> deviceProvider; // @synthesize deviceProvider=_deviceProvider;
- (_Bool)isEphemeral;	// IMP=0x0000000100061460
- (void)startOver;	// IMP=0x00000001000613f4
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x0000000100061378
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000611c8
- (void)_setupManuallyTapped:(id)arg1;	// IMP=0x0000000100061104
- (void)_cloudConfigurationDidChange:(id)arg1;	// IMP=0x0000000100060f3c
- (void)_showAccessibilitySettings;	// IMP=0x0000000100060edc
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100060e88
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100060d7c
- (void)loadView;	// IMP=0x0000000100060624
- (id)init;	// IMP=0x00000001000604a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) BuddyInternalSkipInfoProvider *internalSkipInfoProvider;
@property(readonly) Class superclass;

@end
