//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKMultiplayerService-Protocol.h"

@class NSString;

@interface GKMultiplayerMatchService : GKService <GKMultiplayerService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001956c8
+ (Class)interfaceClass;	// IMP=0x00000001001956bc
- (oneway void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x000000010019eb0c
- (oneway void)presentNearbyInvite:(id)arg1;	// IMP=0x000000010019ead0
- (oneway void)updateCacheWithNearbyProfileDictionary:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019e51c
- (oneway void)cancelRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019e384
- (oneway void)updateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019e0e4
- (oneway void)initiateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019de34
- (oneway void)_performRelayAction:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019dbd8
- (oneway void)sendReconnectInvitation:(id)arg1 toPlayer:(id)arg2 connectionData:(id)arg3 sessionToken:(id)arg4 pushToken:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010019d698
- (oneway void)getInviteSessionTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019d544
- (oneway void)getPlayersToInviteWithHandlerV2:(CDUnknownBlockType)arg1;	// IMP=0x000000010019d2d4
- (oneway void)getAcceptedGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019cdc8
- (oneway void)declineGameInvite:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019cb5c
- (oneway void)acceptGameInvite:(id)arg1 connectionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019c1ec
- (oneway void)cancelGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019be94
- (oneway void)removePlayersFromGameInviteV2:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019b8d0
- (oneway void)invitePlayersForMatchRequest:(id)arg1 onlineConnectionData:(id)arg2 nearbyConnectionData:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019aa5c
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019a7ac
- (id)privateDatabase;	// IMP=0x000000010019a778
- (void)setupInviteShareWithRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019a36c
- (oneway void)loadURLWithData:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019917c
- (void)initiateInvitationForMatchRequest:(id)arg1 connectionData:(id)arg2 recipients:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100198350
- (oneway void)setShareRecordID:(id)arg1;	// IMP=0x00000001001982c4
- (oneway void)setShareInvitees:(id)arg1;	// IMP=0x0000000100197c88
- (oneway void)getCompatibilityMatrix:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019734c
- (oneway void)getOverallFlowRateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100196bc0
- (oneway void)getFlowRateForPlayerGroup:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100196408
- (oneway void)cancelOutstandingMatchRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100196120
- (oneway void)getPlayersForMatchRequest:(id)arg1 connectionData:(id)arg2 connectedPeers:(long long)arg3 rematchID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001956d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

