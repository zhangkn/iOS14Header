//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "MCProfileConnectionObserver-Protocol.h"
#import "PageLoadTestRunnerDelegate-Protocol.h"
#import "TabSnapshotCacheStressTestRunnerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UIApplicationDelegatePrivate-Protocol.h"
#import "WBDatabaseLockAcquisitorDelegate-Protocol.h"
#import "_SFDownloadDelegate-Protocol.h"
#import "_SFNavigationIntentHandling-Protocol.h"
#import "_SFUIApplicationModifierFlagsProviding-Protocol.h"

@class AutomationController, BookmarksDatabaseHealthReporter, BrowserController, BrowserWindowController, ForYouRecommendationMediator, NSArray, NSMutableArray, NSString, ReadingListLeadImageCache, SBSAssertion, UIWindow, WBDatabaseLockAcquisitor, WBSAllowedLegacyTLSHostManager, WBSCyclerConnectionManager, WBSForYouRecentParsecResultsManager, WBSFormAutoFillCorrectionsHistoryObserver, WBSParsecABGroupManager, WBSPhishingClassifierController;
@protocol WBSCloudHistoryServiceProtocol, WBSPhishingClassifier;

@interface Application : UIApplication <PageLoadTestRunnerDelegate, TabSnapshotCacheStressTestRunnerDelegate, MCProfileConnectionObserver, UIApplicationDelegatePrivate, WBDatabaseLockAcquisitorDelegate, _SFDownloadDelegate, _SFUIApplicationModifierFlagsProviding, UIApplicationDelegate, _SFNavigationIntentHandling>
{
    _Bool _isReadingDefaults;	// 8 = 0x8
    _Bool _shouldReadDefaultsOnResume;	// 9 = 0x9
    _Bool _isRunningShowBookmarksTest;	// 10 = 0xa
    _Bool _startedBookmarksTest;	// 11 = 0xb
    _Bool _isRunningCanvasTest;	// 12 = 0xc
    _Bool _willEnterSuspendedState;	// 13 = 0xd
    _Bool _finishedLaunching;	// 14 = 0xe
    id <WBSCloudHistoryServiceProtocol> _cloudHistory;	// 16 = 0x10
    _Bool _resigningActive;	// 24 = 0x18
    NSString *_openURLOriginBundleIdentifier;	// 32 = 0x20
    WBSFormAutoFillCorrectionsHistoryObserver *_formAutoFillCorrectionsHistoryObserver;	// 40 = 0x28
    BookmarksDatabaseHealthReporter *_bookmarksDatabaseHealthReporter;	// 48 = 0x30
    unsigned long long _bookmarksDatabaseBackgroundTaskIdentifier;	// 56 = 0x38
    WBDatabaseLockAcquisitor *_bookmarksDatabaseBackgroundTaskLockAcquisitor;	// 64 = 0x40
    SBSAssertion *_wallpaperSuspensionAssertion;	// 72 = 0x48
    WBSCyclerConnectionManager *_cyclerConnectionManager;	// 80 = 0x50
    ReadingListLeadImageCache *_readingListImageCache;	// 88 = 0x58
    NSMutableArray *_activeDownloads;	// 96 = 0x60
    ForYouRecommendationMediator *_forYouRecommendationMediator;	// 104 = 0x68
    WBSForYouRecentParsecResultsManager *_forYouRecentParsecResultsManager;	// 112 = 0x70
    WBSParsecABGroupManager *_abGroupManager;	// 120 = 0x78
    WBSPhishingClassifierController *_phishingClassifier;	// 128 = 0x80
    WBSAllowedLegacyTLSHostManager *_cachedLegacyTLSHostManager;	// 136 = 0x88
    long long _currentKeyboardModifierFlags;	// 144 = 0x90
    BrowserWindowController *_browserWindowController;	// 152 = 0x98
    AutomationController *_automationController;	// 160 = 0xa0
    ForYouRecommendationMediator *_existingForYouRecommendationMediator;	// 168 = 0xa8
}

+ (id)contextClient;	// IMP=0x0000000100010bc0
+ (unsigned long long)systemMemorySize;	// IMP=0x000000010000d2b0
+ (void)initialize;	// IMP=0x000000010000bf88
+ (id)sharedApplication;	// IMP=0x000000010000bf78
+ (id)sharedTestRunner;	// IMP=0x000000010001e270
+ (void)commandLineTestOption:(int)arg1 arg:(const char *)arg2;	// IMP=0x0000000100016a90
+ (void)postTestNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000001000209d0
+ (void)postTestNotificationName:(id)arg1 object:(id)arg2;	// IMP=0x000000010002097c
- (void).cxx_destruct;	// IMP=0x0000000100010d10
@property(nonatomic) __weak ForYouRecommendationMediator *existingForYouRecommendationMediator; // @synthesize existingForYouRecommendationMediator=_existingForYouRecommendationMediator;
@property(readonly, nonatomic) AutomationController *automationController; // @synthesize automationController=_automationController;
@property(readonly, nonatomic) BrowserWindowController *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
@property(readonly, nonatomic) long long currentKeyboardModifierFlags; // @synthesize currentKeyboardModifierFlags=_currentKeyboardModifierFlags;
- (void)handleNavigationIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010c54
- (void)dispatchNavigationIntent:(id)arg1;	// IMP=0x0000000100010c44
- (void)_getBookmarksDataClassEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010a44
- (void)_historyHostnamesWereRemoved:(id)arg1;	// IMP=0x0000000100010980
- (void)_historyWasCleared:(id)arg1;	// IMP=0x0000000100010940
@property(readonly, nonatomic) WBSAllowedLegacyTLSHostManager *legacyTLSHostManager;
- (void)_updateCloudFeatureAvailability;	// IMP=0x0000000100010404
- (void)_resetCloudHistoryAccountIfNeeded;	// IMP=0x0000000100010310
@property(readonly, nonatomic) _Bool isCloudHistoryEnabled;
- (void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000101b4
- (void)downloadDidReceiveResponse:(id)arg1;	// IMP=0x00000001000100e0
- (void)downloadDidStart:(id)arg1;	// IMP=0x0000000100010090
- (void)downloadDidFail:(id)arg1;	// IMP=0x0000000100010040
- (void)downloadDidFinish:(id)arg1;	// IMP=0x000000010000ff64
@property(readonly, nonatomic) WBSParsecABGroupManager *abGroupManager;
@property(readonly, nonatomic) id <WBSPhishingClassifier> phishingClassifier;
@property(readonly, nonatomic) WBSForYouRecentParsecResultsManager *forYouRecentParsecResultsManager;
- (id)createRecommendationMediatorOrReuseExistingOneIfPossible;	// IMP=0x000000010000fc98
- (void)_downloadDidStopNotification:(id)arg1;	// IMP=0x000000010000fc18
- (void)_downloadDidStartNotification:(id)arg1;	// IMP=0x000000010000fb80
- (void)_export30DaysWorthOfHistoryAfterUpgrade;	// IMP=0x000000010000f994
@property(readonly, nonatomic) ReadingListLeadImageCache *readingListLeadImageCache;
- (void)_pruneExpiredScenes;	// IMP=0x000000010000f830
- (void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;	// IMP=0x000000010000f824
- (void)applicationWillTerminate;	// IMP=0x000000010000719c
- (void)_reportLaunchAnalyticsSoon;	// IMP=0x000000010000f40c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000df48
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000de94
- (void)updateTabCount;	// IMP=0x000000010000de2c
- (void)auditTabCount;	// IMP=0x000000010000ddf0
- (_Bool)canAddNewTabForPrivateBrowsing:(_Bool)arg1;	// IMP=0x000000010000dd50
@property(readonly, nonatomic) unsigned long long maximumTabCount;
- (unsigned long long)_maximumTabCount;	// IMP=0x000000010000dc44
- (unsigned long long)_numberOfTabsForPrivateBrowsing:(_Bool)arg1;	// IMP=0x000000010000dac8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000d7e0
- (void)_addDefaultsObserver;	// IMP=0x000000010000d4bc
- (void)_managedProfileConfigurationDidUpdate;	// IMP=0x000000010000d468
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010000d45c
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010000d450
- (void)_appleKeyboardsChanged:(id)arg1;	// IMP=0x000000010000d444
- (void)_reloadSearchEngines;	// IMP=0x000000010000d3e0
- (void)userDefaultsDidChange:(id)arg1;	// IMP=0x0000000100005924
- (void)handleKeyUIEvent:(id)arg1;	// IMP=0x000000010000d364
- (void)_saveBrowserState;	// IMP=0x000000010000d298
- (void)didReceiveMemoryWarning;	// IMP=0x000000010000d0dc
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(_Bool)arg2;	// IMP=0x000000010000ce8c
- (void)_performBookmarksDatabaseTasksInBackground;	// IMP=0x000000010000cb90
- (void)_suspendOrResumeWallpaperAnimationIfNeeded;	// IMP=0x000000010000cae0
- (void)_reportBookmarksDatabaseHealth;	// IMP=0x000000010000ca8c
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x000000010000c7ec
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010000c6a0
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010000c5a8
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x000000010000c4d8
- (void)_updateKeyboardCorrectionLearningAllowed;	// IMP=0x000000010000c3f4
- (void)saveChangesToCloudHistoryStore;	// IMP=0x000000010000c348
- (void)_applicationWillSuspend:(id)arg1;	// IMP=0x000000010000c328
- (void)_readDefaults;	// IMP=0x000000010000618c
@property(readonly, nonatomic) _Bool usesPrivateBrowsingModeInAnyWindow;
@property(readonly, nonatomic) _Bool usesDefaultBrowsingModeInAllWindows;
- (id)_browserControllerForExternalNavigation;	// IMP=0x000000010000c090
@property(readonly, nonatomic) BrowserController *primaryBrowserController;
@property(readonly, nonatomic) NSArray *browserControllers;
- (_Bool)runMemoryOrIOTestWithType:(unsigned long long)arg1;	// IMP=0x0000000100020794
- (_Bool)startHistoryLoadTest;	// IMP=0x000000010002062c
- (id)_generateMemoryFootprintResults:(id)arg1;	// IMP=0x000000010001fd68
- (_Bool)startHistoryTest;	// IMP=0x000000010001fa20
- (_Bool)_resetHistoryWithCompressedDatabaseAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001f3a4
- (void)_doSearchTestOnCVC:(id)arg1 WithTestStrings:(id)arg2 andDispatchGroup:(id)arg3;	// IMP=0x000000010001f01c
- (void)startSearchPerformanceUnifiedFieldKeyTimeTest;	// IMP=0x000000010001ec98
- (void)startSearchPerformanceTestWithTestStrings:(id)arg1;	// IMP=0x000000010001e290
- (void)startSearchPerformanceTest;	// IMP=0x000000010001e27c
- (_Bool)didStartBookmarksTest;	// IMP=0x000000010001e25c
- (_Bool)isRunningCanvasTest;	// IMP=0x00000001000053b4
- (_Bool)isRunningShowBookmarksTest;	// IMP=0x0000000100009d40
- (void)runBookmarksViewTest;	// IMP=0x000000010001e04c
- (void)_switchToBookmarksCollectionForTestNamed:(id)arg1;	// IMP=0x000000010001ddc4
- (id)_scrollViewForTestNamed:(id)arg1;	// IMP=0x000000010001db6c
- (void)_populateInMemoryBookmarksDBForTestNamed:(id)arg1;	// IMP=0x000000010001d6c8
- (void)finishedBookmarksTest;	// IMP=0x000000010001d5f4
- (void)startBookmarksTest;	// IMP=0x000000010001d554
- (_Bool)prepareBookmarksTest;	// IMP=0x000000010001d4b4
- (void)_runTabOverviewScrollPerfTest;	// IMP=0x000000010001d084
- (void)_runTabOverviewPresentingAndDismissalTest;	// IMP=0x000000010001cbe0
- (void)_runTabOverviewOpenNewTabTest;	// IMP=0x000000010001c6dc
- (void)runTabOverviewTest;	// IMP=0x000000010001c448
- (void)_runTabBarSwitchTabTest;	// IMP=0x000000010001c258
- (_Bool)startTabBarTest;	// IMP=0x000000010001bd74
- (id)_syntheticHTMLString;	// IMP=0x000000010001bd68
- (void)finishedCanvasTestWithURL:(id)arg1 forTabDocument:(id)arg2;	// IMP=0x000000010001b954
- (void)_pollCanvasTest:(id)arg1;	// IMP=0x000000010001b830
- (_Bool)startCanvasTest:(id)arg1;	// IMP=0x000000010001b700
- (void)failedPurpleTestWithError:(id)arg1;	// IMP=0x000000010001b64c
- (void)finishedPurpleTest:(id)arg1;	// IMP=0x000000010001b5b0
- (void)startedPurpleTest;	// IMP=0x000000010000883c
- (void)_runSidebarTest;	// IMP=0x000000010001b28c
- (_Bool)startSidebarTest;	// IMP=0x000000010001b014
- (void)startTabViewScrollTest;	// IMP=0x000000010001acd0
- (void)_prepareTabViewScrollTest;	// IMP=0x000000010001ab48
- (void)prepareTabViewScrollTest;	// IMP=0x000000010001aae0
- (void)startTabViewRotationTest;	// IMP=0x000000010001a9dc
- (void)_prepareTabViewRotationTest;	// IMP=0x000000010001a940
- (void)prepareTabViewRotationTest;	// IMP=0x000000010001a8d8
- (void)startTabViewCloseTest;	// IMP=0x000000010001a664
- (void)_prepareTabViewCloseTest;	// IMP=0x000000010001a5c8
- (void)prepareTabViewCloseTest;	// IMP=0x000000010001a560
- (void)startTabViewSelectTest;	// IMP=0x000000010001a388
- (void)_prepareTabViewSelectTest;	// IMP=0x0000000100019ef8
- (void)prepareTabViewSelectTest;	// IMP=0x0000000100019e90
- (void)startTabViewOpenTest;	// IMP=0x0000000100019d8c
- (void)_prepareTabViewOpenTest;	// IMP=0x0000000100019848
- (void)prepareTabViewOpenTest;	// IMP=0x00000001000197e0
- (void)startTabViewBringUpTest;	// IMP=0x0000000100019720
- (void)_prepareTabViewBringUpTest;	// IMP=0x00000001000191cc
- (void)prepareTabViewBringUpTest;	// IMP=0x0000000100019164
- (void)_loadTabsForTesting:(unsigned long long)arg1 presentTabView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100018d7c
- (void)_preparePageLoadTestControllerParameters;	// IMP=0x0000000100018d08
- (void)loadTabsForTesting:(unsigned long long)arg1 presentTabView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100018c50
- (void)loadTabsForTesting:(unsigned long long)arg1 presentTabView:(_Bool)arg2;	// IMP=0x0000000100018a74
- (void)runGeneratePasswordTest;	// IMP=0x00000001000188c8
- (void)runLargeFormTypingTest;	// IMP=0x0000000100018818
- (void)_runFormTypingTextWithSetupScript:(id)arg1;	// IMP=0x0000000100018244
- (void)_typeTextInForm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018050
- (void)runLargeFormFocusTest;	// IMP=0x0000000100017ea0
- (void)_loadLargeForm:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017e88
- (void)_loadAlternateHTMLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017c1c
- (void)loadBlankPageforKeyboardTests;	// IMP=0x0000000100017af8
- (void)startKeyboardRotationTest;	// IMP=0x0000000100017978
- (void)startKeyboardBringupTest;	// IMP=0x00000001000177f4
- (void)startKeyboardSplitAndMergeTest;	// IMP=0x00000001000176f0
- (void)_observeNotificationOnce:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017440
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x00000001000063f8
- (id)_numberOption:(id)arg1;	// IMP=0x0000000100017294
- (void)checkExtendedLaunchPageLoad:(id)arg1 forTabDocument:(id)arg2;	// IMP=0x00000001000170fc
- (id)_extendLaunchTest;	// IMP=0x00000001000170e0
- (_Bool)overrideBrowserStateForTestNamed:(id)arg1 browserController:(id)arg2;	// IMP=0x0000000100016d00
- (void)startCommandLineTest;	// IMP=0x0000000100016c54
- (id)_browserControllerForApplicationTesting;	// IMP=0x0000000100016a3c
- (void)pageLoadTestRunnerFinished:(id)arg1;	// IMP=0x0000000100020930
- (void)tabSnapshotCacheStressTestRunnerDidFinish:(id)arg1;	// IMP=0x0000000100020b60
- (void)runTabSnapshotCacheStressTest;	// IMP=0x0000000100020a8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
