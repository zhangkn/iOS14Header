/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol GKMatchmakerServiceProtocol <GKExtensionProtocol>
@optional
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
-(void)setExistingPlayers:(id)arg1;
-(void)setAutomatchPlayerCount:(long long)arg1;
-(void)setPlayer:(id)arg1 responded:(long long)arg2;
-(void)setConnectingStateForPlayer:(id)arg1;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2;
-(void)setPlayer:(id)arg1 sentData:(id)arg2;
-(void)setInvitesFailedWithError:(id)arg1;
-(void)setAutomatchFailedWithError:(id)arg1;
-(void)setFailedWithError:(id)arg1;
-(void)inviterCancelled;
-(void)setAcceptedInviteInternal:(id)arg1;
-(void)applicationWillEnterForeground;
-(void)setMatchRequestInternal:(id)arg1;
-(void)setMatchmakingMode:(long long)arg1;
-(void)setDefaultInvitationMessage:(id)arg1;
-(void)setHosted:(BOOL)arg1;

@end
