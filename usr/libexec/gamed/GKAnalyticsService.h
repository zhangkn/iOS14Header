//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKAnalyticsService-Protocol.h"

@class NSString;

@interface GKAnalyticsService : GKService <GKAnalyticsService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001000d4a5c
+ (Class)interfaceClass;	// IMP=0x00000001000d4a50
- (void)respondedToBulletin:(id)arg1;	// IMP=0x00000001000d4aac
- (void)purchasedGame:(id)arg1;	// IMP=0x00000001000d4aa8
- (void)stoppedPlayingGame;	// IMP=0x00000001000d4aa4
- (void)beganPlayingGame;	// IMP=0x00000001000d4aa0
- (void)quitMatch:(id)arg1 withOutcome:(long long)arg2;	// IMP=0x00000001000d4a9c
- (void)disconnectedMatchWithID:(id)arg1;	// IMP=0x00000001000d4a98
- (void)rematchedWithMatchRequest:(id)arg1;	// IMP=0x00000001000d4a94
- (void)sentMatchRequest:(id)arg1;	// IMP=0x00000001000d4a90
- (void)declinedInvite:(id)arg1;	// IMP=0x00000001000d4a8c
- (void)declinedInviteForTurnBasedMatch:(id)arg1;	// IMP=0x00000001000d4a88
- (void)acceptedInviteForTurnBasedMatch:(id)arg1;	// IMP=0x00000001000d4a84
- (void)acceptedInvite:(id)arg1;	// IMP=0x00000001000d4a80
- (void)completedChallenge:(id)arg1;	// IMP=0x00000001000d4a7c
- (void)wantsToPlayChallenge:(id)arg1;	// IMP=0x00000001000d4a78
- (void)declinedChallenge:(id)arg1;	// IMP=0x00000001000d4a74
- (void)postedScore:(id)arg1;	// IMP=0x00000001000d4a70
- (void)updatedAchievement:(id)arg1;	// IMP=0x00000001000d4a6c
- (_Bool)requiresAuthentication;	// IMP=0x00000001000d4a64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

