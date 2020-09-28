//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowDelegate-Protocol.h"
#import "BFFFlowItemDelegate-Protocol.h"
#import "BFFNavigationControllerDelegate-Protocol.h"
#import "BFFNavigationFlowDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class BFFFlowStarter, BFFNavigationController, BYExpressSetupDataProvider, BuddyWiFiController, NSArray, NSMutableArray, NSPointerArray, NSString, ProximitySetupController, UIViewController;
@protocol BFFFlowItem, BYEnvironmentComposite, BuddyActivationDelegate, BuddyFlowCloudConfigDelegate, BuddyFlowDelegate, BuddyFlowProducer, BuddyLifecycleDelegate, BuddyRestoreProvider;

@interface BuddyNavigationFlowController : NSObject <BFFFlowDelegate, BFFNavigationControllerDelegate, BFFFlowItemDelegate, BFFNavigationFlowDelegate, UINavigationControllerDelegate>
{
    _Bool _tapFreeSetUp;	// 8 = 0x8
    id <BuddyFlowDelegate> _flowDelegate;	// 16 = 0x10
    id <BuddyActivationDelegate> _activationDelegate;	// 24 = 0x18
    id <BuddyLifecycleDelegate> _lifecycleDelegate;	// 32 = 0x20
    id <BuddyFlowCloudConfigDelegate> _flowCloudConfigurationDelegate;	// 40 = 0x28
    id <BuddyFlowProducer> _flowProducer;	// 48 = 0x30
    ProximitySetupController *_proximitySetupController;	// 56 = 0x38
    BuddyWiFiController *_wifiController;	// 64 = 0x40
    BYExpressSetupDataProvider *_expressSetupDataProvider;	// 72 = 0x48
    BFFNavigationController *_navigationController;	// 80 = 0x50
    id <BuddyRestoreProvider> _restoreProvider;	// 88 = 0x58
    BFFFlowStarter *_flowStarter;	// 96 = 0x60
    NSMutableArray *_buddyControllers;	// 104 = 0x68
    NSArray *_viewControllersToRemoveOnPush;	// 112 = 0x70
    NSPointerArray *_weakBuddyControllersPrecedingDeviceRestoreChoiceController;	// 120 = 0x78
    NSPointerArray *_weakViewControllersPrecedingDeviceRestoreChoiceController;	// 128 = 0x80
    UIViewController *_topViewControllerForRemoving;	// 136 = 0x88
    id <BYEnvironmentComposite> _composite;	// 144 = 0x90
    NSMutableArray *_trailingControllers;	// 152 = 0x98
}

+ (void)preheat;	// IMP=0x0000000100025c10
- (void).cxx_destruct;	// IMP=0x000000010002dc80
@property(retain, nonatomic) NSMutableArray *trailingControllers; // @synthesize trailingControllers=_trailingControllers;
@property(retain, nonatomic) id <BYEnvironmentComposite> composite; // @synthesize composite=_composite;
@property(getter=isTapFreeSetUp) _Bool tapFreeSetUp; // @synthesize tapFreeSetUp=_tapFreeSetUp;
@property(retain) UIViewController *topViewControllerForRemoving; // @synthesize topViewControllerForRemoving=_topViewControllerForRemoving;
@property(retain, nonatomic) NSPointerArray *weakViewControllersPrecedingDeviceRestoreChoiceController; // @synthesize weakViewControllersPrecedingDeviceRestoreChoiceController=_weakViewControllersPrecedingDeviceRestoreChoiceController;
@property(retain, nonatomic) NSPointerArray *weakBuddyControllersPrecedingDeviceRestoreChoiceController; // @synthesize weakBuddyControllersPrecedingDeviceRestoreChoiceController=_weakBuddyControllersPrecedingDeviceRestoreChoiceController;
@property(retain) NSArray *viewControllersToRemoveOnPush; // @synthesize viewControllersToRemoveOnPush=_viewControllersToRemoveOnPush;
@property(retain) NSMutableArray *buddyControllers; // @synthesize buddyControllers=_buddyControllers;
@property(retain, nonatomic) BFFFlowStarter *flowStarter; // @synthesize flowStarter=_flowStarter;
@property __weak id <BuddyRestoreProvider> restoreProvider; // @synthesize restoreProvider=_restoreProvider;
@property(retain) BFFNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) BYExpressSetupDataProvider *expressSetupDataProvider; // @synthesize expressSetupDataProvider=_expressSetupDataProvider;
@property(retain) BuddyWiFiController *wifiController; // @synthesize wifiController=_wifiController;
@property(retain) ProximitySetupController *proximitySetupController; // @synthesize proximitySetupController=_proximitySetupController;
@property __weak id <BuddyFlowProducer> flowProducer; // @synthesize flowProducer=_flowProducer;
@property __weak id <BuddyFlowCloudConfigDelegate> flowCloudConfigurationDelegate; // @synthesize flowCloudConfigurationDelegate=_flowCloudConfigurationDelegate;
@property __weak id <BuddyLifecycleDelegate> lifecycleDelegate; // @synthesize lifecycleDelegate=_lifecycleDelegate;
@property __weak id <BuddyActivationDelegate> activationDelegate; // @synthesize activationDelegate=_activationDelegate;
@property __weak id <BuddyFlowDelegate> flowDelegate; // @synthesize flowDelegate=_flowDelegate;
- (CDUnknownBlockType)environmentInjector;	// IMP=0x000000010002d980
- (id)_injectedFlowForClass:(Class)arg1;	// IMP=0x000000010002d884
- (void)_injectDependencies:(id)arg1 withComposite:(id)arg2;	// IMP=0x000000010002d754
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x000000010002c5b4
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x000000010002c40c
- (void)presentWiFiPaneForFlowItem:(id)arg1;	// IMP=0x000000010002c370
- (void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2;	// IMP=0x000000010002c358
- (void)flowItemDone:(id)arg1 nextItem:(id)arg2;	// IMP=0x000000010002c300
- (void)flowItemDone:(id)arg1;	// IMP=0x000000010002c2e8
- (void)flowItemCancelled:(id)arg1;	// IMP=0x000000010002c0fc
- (void)flow:(id)arg1 finishedWithLastItem:(id)arg2 nextItem:(id)arg3;	// IMP=0x000000010002bfe0
- (void)_ensureControllerExistsWithTarget:(id)arg1 viewControllerInsertionIndexGenerator:(CDUnknownBlockType)arg2 buddyControllerInsertionIndexGenerator:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002bac4
- (id)_ensureDeviceProximitySetupControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b824
- (id)_ensureDeviceRestoreChoiceControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b380
- (id)_popToBuddyControllerWithClass:(Class)arg1 withOffset:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002b230
- (id)popToBuddyControllerWithClass:(Class)arg1 withOffset:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002adc8
- (id)popToBuddyControllerWithClass:(Class)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002adb4
- (void)removeViewControllersOnNextPush:(id)arg1;	// IMP=0x000000010002ac74
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 withExtendedInitialization:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x000000010002ac0c
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002abb4
- (void)pushFlowItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002aba0
- (_Bool)isFlowItemOnTop:(id)arg1;	// IMP=0x000000010002ab14
- (_Bool)controllerNeedsToRunForClass:(Class)arg1;	// IMP=0x000000010002aac0
- (_Bool)_stackHasOnlyCloudConfigurationItems;	// IMP=0x000000010002a8f0
- (void)restartFlow;	// IMP=0x000000010002a39c
- (_Bool)_hasWiFiControllerInNavigationStack;	// IMP=0x000000010002a190
- (void)_insertWiFiControllerAsFirstPane;	// IMP=0x000000010002a04c
- (void)removeViewControllersFromNavHierarchyOnNextPush:(id)arg1;	// IMP=0x0000000100029f20
- (void)removeViewControllerFromNavHierarchy:(id)arg1;	// IMP=0x0000000100029e3c
- (void)_hideBackButtonIfNecessaryOnFlowItem:(id)arg1 withViewController:(id)arg2;	// IMP=0x0000000100029b1c
- (id)_viewControllerForBuddyController:(id)arg1;	// IMP=0x0000000100029a90
- (void)_presentViewControllerForBuddyController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100028a2c
- (void)_pushBuddyItem:(id)arg1 inFlow:(id)arg2 withExtendedInitialization:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x00000001000285a4
- (void)_pushBuddyItem:(id)arg1 inFlow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100028548
- (void)_disableInteractionWhilePerformingExtendedInitializationForBuddyItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027974
- (void)_flowItemDone:(id)arg1 flow:(id)arg2 nextItemClass:(Class)arg3 nextItem:(id)arg4;	// IMP=0x00000001000272e0
- (_Bool)_shouldTapFreeSetUpSkipControllerClass:(Class)arg1;	// IMP=0x0000000100027294
- (_Bool)_doesTapFreeSetUpAffectsClass:(Class)arg1;	// IMP=0x0000000100027248
- (id)_savedItemForClass:(Class)arg1;	// IMP=0x00000001000271e4
- (id)_createFlowItemForClass:(Class)arg1;	// IMP=0x0000000100026ffc
- (id)_flowItemFollowingClass:(Class)arg1;	// IMP=0x0000000100026b4c
@property(readonly, nonatomic) id <BFFFlowItem> topFlowItem;
- (_Bool)isStartOverAllowed;	// IMP=0x000000010002695c
- (_Bool)currentlyShowingActivationFlow;	// IMP=0x00000001000268dc
- (void)handleDebugGesture;	// IMP=0x00000001000267f0
- (void)activatedByComputer;	// IMP=0x0000000100026760
- (void)setUpByComputer;	// IMP=0x0000000100026528
- (void)proceedPastLanguageLocalePane;	// IMP=0x00000001000264c0
- (void)didReceiveInternalSkipInfo;	// IMP=0x00000001000262b0
- (void)beginTapFreeSetUp;	// IMP=0x00000001000260fc
- (void)setupInitialFlow;	// IMP=0x0000000100025e0c
- (id)initWithNavigationController:(id)arg1 usingRestoreProvider:(id)arg2 usingFlowDiverter:(id)arg3 environmentComposite:(id)arg4;	// IMP=0x0000000100025cb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
