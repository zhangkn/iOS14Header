//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProcessManagerObserver-Protocol.h"
#import "FBSceneManagerDelegate-Protocol.h"
#import "FBSceneManagerObserver-Protocol.h"
#import "FBSceneObserver-Protocol.h"
#import "FBSystemServiceDelegate-Protocol.h"

@class NSMutableSet, NSSet, NSString, UIApplicationSceneClientSettingsDiffInspector, UIRootWindowScenePresentationBinder;
@protocol BSInvalidatable;

@interface CBAppManager : NSObject <FBSystemServiceDelegate, FBProcessManagerObserver, FBSceneManagerDelegate, FBSceneManagerObserver, FBSceneObserver>
{
    UIRootWindowScenePresentationBinder *_rootWindowSceneBinder;	// 8 = 0x8
    NSMutableSet *_openApps;	// 16 = 0x10
    NSSet *_whitelist;	// 24 = 0x18
    NSSet *_whitelistPrefixes;	// 32 = 0x20
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;	// 40 = 0x28
    id <BSInvalidatable> _layoutElementInvalidator;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000010000fb10
- (void).cxx_destruct;	// IMP=0x0000000100012310
@property(retain, nonatomic) id <BSInvalidatable> layoutElementInvalidator; // @synthesize layoutElementInvalidator=_layoutElementInvalidator;
@property(retain, nonatomic) UIApplicationSceneClientSettingsDiffInspector *appClientSettingsDiffInspector; // @synthesize appClientSettingsDiffInspector=_appClientSettingsDiffInspector;
@property(readonly, nonatomic) NSSet *whitelistPrefixes; // @synthesize whitelistPrefixes=_whitelistPrefixes;
@property(readonly, nonatomic) NSSet *whitelist; // @synthesize whitelist=_whitelist;
@property(retain, nonatomic) NSMutableSet *openApps; // @synthesize openApps=_openApps;
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(_Bool)arg2;	// IMP=0x00000001000122c0
- (void)systemService:(id)arg1 dataReset:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000122a8
- (void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;	// IMP=0x0000000100012290
- (void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012278
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011f70
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011e8c
- (id)_appClientSettingsDiffInspector;	// IMP=0x0000000100011ab8
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x0000000100011ab4
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x0000000100011aa0
- (void)_updateLevelForScene:(id)arg1 transitionContext:(id)arg2;	// IMP=0x00000001000117a8
- (double)_effectiveKeyboardSceneLevelForClientSettings:(id)arg1;	// IMP=0x0000000100011674
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;	// IMP=0x00000001000115b8
- (void)_windowDidBecomeKey:(id)arg1;	// IMP=0x0000000100011500
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x00000001000114ec
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;	// IMP=0x0000000100011440
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000100011218
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x0000000100010ec4
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x0000000100010b50
- (void)_terminateApps:(id)arg1 reason:(long long)arg2 reportCrash:(_Bool)arg3 description:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100010638
- (void)terminateAppWithBundleID:(id)arg1 reason:(long long)arg2 reportCrash:(_Bool)arg3 description:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100010224
- (void)launchAppWithBundleID:(id)arg1 suspended:(_Bool)arg2 native:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000febc
- (id)init;	// IMP=0x000000010000fb7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

