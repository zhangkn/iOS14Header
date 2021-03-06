//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKAccountService.h"

#import "GKAccountServicePrivate-Protocol.h"

@class NSString;

@interface GKAccountServicePrivate : GKAccountService <GKAccountServicePrivate>
{
}

+ (id)lastProfilePrivacyVersionDisplayedForPlayer:(id)arg1;	// IMP=0x000000010014fc8c
+ (id)lastPersonalizationVersionDisplayedForPlayer:(id)arg1;	// IMP=0x000000010014fc08
+ (unsigned long long)lastPrivacyNoticeVersionDisplayedForPlayer:(id)arg1;	// IMP=0x000000010014fb84
+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010014fb7c
+ (Class)interfaceClass;	// IMP=0x000000010014fb70
- (void)updateClientSettings:(CDUnknownBlockType)arg1;	// IMP=0x000000010015a6b0
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015a378
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010015a0e0
- (oneway void)authenticationCancelled;	// IMP=0x000000010015a094
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100158ee0
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100158cd4
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001583d8
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100157af8
- (void)_continueAuthenticationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100156bd8
- (void)_notifyAllClientsPlayerAuthenticatedFromClient:(id)arg1 withCredential:(id)arg2 replyGroup:(id)arg3;	// IMP=0x00000001001568a8
- (void)_appInitWithGroup:(id)arg1;	// IMP=0x00000001001560a8
- (void)_loadProfileWithGroup:(id)arg1;	// IMP=0x0000000100155bd8
- (void)notifyClient:(id)arg1 authenticationDidChangeWithError:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100155a60
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100154dc0
- (void)_preloadDataForGameCenterTabs;	// IMP=0x0000000100154a94
- (void)_fetchCredentialsForUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100154404
- (void)_primeCacheWithGroup:(id)arg1;	// IMP=0x0000000100153f44
- (id)_authenticatedLocalPlayerWithUsername:(id)arg1 inContext:(id)arg2 isValid:(_Bool *)arg3;	// IMP=0x00000001001539a4
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100153988
- (void)_initGameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100152a44
- (void)renewAuthToken;	// IMP=0x0000000100152594
- (void)_postLaunchEventsForGame:(id)arg1 moc:(id)arg2;	// IMP=0x000000010015211c
- (void)_addAchievementPointsEntryForGame:(id)arg1 record:(id)arg2 profile:(id)arg3 moc:(id)arg4;	// IMP=0x0000000100151f94
- (void)_addGameListEntryForGame:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x0000000100151e24
- (void)_removeRecommendationForBundleID:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x0000000100151d54
- (void)_constructAuthenticationResponseWithError:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001517a4
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001516f8
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 validateOnly:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010015055c
- (void)updateBadgeCounts;	// IMP=0x0000000100150008
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x000000010014ff7c
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010014fd10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

