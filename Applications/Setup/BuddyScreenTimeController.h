//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BFFFlowItem-Protocol.h"
#import "STSetupAssistantViewControllerDelegate-Protocol.h"

@class NSString, STManagementState, STSetupAssistantViewController;
@protocol BFFFlowItemDelegate;

@interface BuddyScreenTimeController : UIViewController <STSetupAssistantViewControllerDelegate, BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    STSetupAssistantViewController *_screenTimeViewController;	// 16 = 0x10
    long long _screenTimeState;	// 24 = 0x18
    STManagementState *_managementState;	// 32 = 0x20
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000838c0
+ (id)cloudConfigSkipKey;	// IMP=0x00000001000838b0
- (void).cxx_destruct;	// IMP=0x0000000100084604
@property(retain, nonatomic) STManagementState *managementState; // @synthesize managementState=_managementState;
@property(nonatomic) long long screenTimeState; // @synthesize screenTimeState=_screenTimeState;
@property(retain, nonatomic) STSetupAssistantViewController *screenTimeViewController; // @synthesize screenTimeViewController=_screenTimeViewController;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupSkipped;	// IMP=0x0000000100084474
- (void)continueSetup;	// IMP=0x0000000100084464
- (void)controllerWasPopped;	// IMP=0x00000001000843f4
- (void)setScreenTimeEnabled:(_Bool)arg1;	// IMP=0x0000000100083eb0
- (id)viewController;	// IMP=0x0000000100083ea4
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000839b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
