/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKGameCenterViewController.h>

@protocol GKLeaderboardViewControllerDelegate;
@class NSString;

@interface GKLeaderboardViewController : GKGameCenterViewController {

	id<GKLeaderboardViewControllerDelegate> _leaderboardDelegate;

}

@property (assign,nonatomic) long long timeScope; 
@property (nonatomic,copy) NSString * category; 
@property (assign,nonatomic,__weak) id<GKLeaderboardViewControllerDelegate> leaderboardDelegate;              //@synthesize leaderboardDelegate=_leaderboardDelegate - In the implementation block
-(void)setTimeScope:(long long)arg1 ;
-(id<GKLeaderboardViewControllerDelegate>)leaderboardDelegate;
-(void)setLeaderboardDelegate:(id<GKLeaderboardViewControllerDelegate>)arg1 ;
-(long long)timeScope;
-(NSString *)category;
-(id)init;
-(void)setCategory:(NSString *)arg1 ;
-(void)notifyDelegateOnWillFinish;
@end
