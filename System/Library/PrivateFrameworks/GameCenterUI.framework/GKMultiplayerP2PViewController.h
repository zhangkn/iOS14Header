/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKMultiplayerViewController.h>

@protocol GKMultiplayerP2PViewControllerDelegate;
@class GKInvite;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController {

	BOOL _hosted;
	id<GKMultiplayerP2PViewControllerDelegate> _delegate;
	long long _mode;
	GKInvite* _acceptedInvite;
	double _inviteeConnectionTimeStamp;

}

@property (assign,nonatomic) long long mode;                                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) GKInvite * acceptedInvite;                                               //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (assign,nonatomic) double inviteeConnectionTimeStamp;                                       //@synthesize inviteeConnectionTimeStamp=_inviteeConnectionTimeStamp - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                                             //@synthesize hosted=_hosted - In the implementation block
@property (assign,nonatomic,__weak) id<GKMultiplayerP2PViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancel;
-(void)finishWithError:(id)arg1 ;
-(long long)mode;
-(void)processStatusUpdateMessageFromBytes:(const char*)arg1 withLength:(unsigned)arg2 ;
-(void)showInviterDisconnectedAlert;
-(void)showAutomatchingErrorAlert;
-(BOOL)haveInvitedPlayers;
-(void)setMode:(long long)arg1 ;
-(void)displayCancelConfirmationDialog;
-(GKInvite *)acceptedInvite;
-(void)resetInviteesStatus;
-(void)performActionsForButtonCancelCurrentMatching;
-(double)inviteeConnectionTimeStamp;
-(BOOL)isInSetupMode;
-(void)invitePlayers:(id)arg1 ;
-(void)showMatchDisconnectedAlertForPlayer:(id)arg1 ;
-(void)startGameButtonPressed;
-(id)initWithAcceptedInvite:(id)arg1 ;
-(long long)automatchParticipantStatus;
-(BOOL)isCanceling;
-(void)setExistingPlayers:(id)arg1 ;
-(void)setAutomatchPlayerCount:(long long)arg1 ;
-(void)setPlayer:(id)arg1 responded:(long long)arg2 ;
-(void)setConnectingStateForPlayer:(id)arg1 ;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2 ;
-(void)setPlayer:(id)arg1 sentData:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(void)setAutomatchFailedWithError:(id)arg1 ;
-(void)setFailedWithError:(id)arg1 ;
-(void)inviterCancelled;
-(BOOL)canStartForcedAutomatch;
-(void)dealloc;
-(void)willPresentPlayerPicker:(id)arg1 ;
-(void)loadShareURLWithCompletion:(/*^block*/id)arg1 ;
-(void)sendInvitesToContactPlayers:(id)arg1 legacyPlayers:(id)arg2 ;
-(void)setShareInvitees;
-(void)removedPlayer:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)startGame;
-(void)playNow;
-(void)configureDataSource;
-(void)setDelegate:(id<GKMultiplayerP2PViewControllerDelegate>)arg1 ;
-(void)applicationWillEnterForeground;
-(BOOL)isHosted;
-(id<GKMultiplayerP2PViewControllerDelegate>)delegate;
-(void)setHosted:(BOOL)arg1 ;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(void)cancelAlertWithoutDelegateCallback;
-(void)showParentalControlsRestrictionAlert;
-(void)cancelPendingInvites;
-(void)updateForNewMode;
-(void)updateStartGameButtonTitle;
-(BOOL)havePendingPlayers;
-(void)setInviteeConnectionTimeStamp:(double)arg1 ;
-(void)sendStatusUpdate;
-(void)playerConnected:(id)arg1 ;
-(void)playerDisconnected:(id)arg1 ;
@end

