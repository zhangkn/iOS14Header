/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol ASBulletinPostingManager;
@class ASActivityDataBulletinManager, ASCompetitionBulletinManager, ASFakingManager, ASFriendInviteBulletinManager, NSString;

@interface ASFakeBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {

	ASActivityDataBulletinManager* _activityDataBulletinManager;
	ASCompetitionBulletinManager* _competitionBulletinManager;
	ASFakingManager* _fakingManager;
	ASFriendInviteBulletinManager* _friendInviteBulletinManager;
	id<ASBulletinPostingManager> _bulletinPostingManager;
	int notifyGoalCompletionToken;
	int notifyGoalCompletionDuringCompetitionToken;
	int notifyAchievementToken;
	int notifyWorkoutToken;
	int notifyBatchToken;
	int notifyCompetitionRequestToken;
	int notifyCompetitionAcceptToken;
	int notifyCompetitionEndWinnerToken;
	int notifyCompetitionEndLoserToken;
	int notifyCompetitionScoreCapCelebrationToken;
	int notifyInviteRequestToken;
	int notifyInviteResponseToken;
	int notifyOfFakeInviteNeedsSetupToken;
	int notifyOfFakeSignInToken;
	int notifyOfFakeUpgradeToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)deregisterBulletins;
-(void)_showFakeWorkoutNotification;
-(void)_showFakeAchievementNotification;
-(void)_showFakeGoalCompletionNotification;
-(void)_showFakeBatchNotification;
-(void)_showFakeGoalCompletionDuringCompetitionNotification;
-(void)_showFakeCompetitionRequestNotification;
-(void)_showFakeCompetitionAcceptedNotification;
-(void)_showFakeCompetitionEndedWinnerNotification;
-(void)_showFakeCompetitionEndedLoserNotification;
-(void)_showFakeCompetitionScoreCapCelebrationNotification;
-(void)_showFakeInvitationRequest;
-(void)_showFakeInvitationResponse;
-(void)_showFakeInviteAttemptNeedsSetup;
-(void)_showFakeNeedToSignIn;
-(void)_showFakeNeedToUpgrade;
-(id)_fakeContact;
-(void)registerBulletins;
@end
