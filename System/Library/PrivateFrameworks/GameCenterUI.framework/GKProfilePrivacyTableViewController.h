/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol GKProfilePrivacyTableViewControllerDelegate;
@class GKLocalPlayer, NSMutableArray;

@interface GKProfilePrivacyTableViewController : UITableViewController {

	BOOL _isSendingRequest;
	int _currentPrivacySettings;
	int _initialPrivacySettings;
	GKLocalPlayer* _localPlayer;
	id<GKProfilePrivacyTableViewControllerDelegate> _delegate;
	NSMutableArray* _availblePrivacySettings;

}

@property (assign,nonatomic) int currentPrivacySettings;                                                   //@synthesize currentPrivacySettings=_currentPrivacySettings - In the implementation block
@property (assign,nonatomic) int initialPrivacySettings;                                                   //@synthesize initialPrivacySettings=_initialPrivacySettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * availblePrivacySettings;                                     //@synthesize availblePrivacySettings=_availblePrivacySettings - In the implementation block
@property (assign,nonatomic) BOOL isSendingRequest;                                                        //@synthesize isSendingRequest=_isSendingRequest - In the implementation block
@property (nonatomic,retain) GKLocalPlayer * localPlayer;                                                  //@synthesize localPlayer=_localPlayer - In the implementation block
@property (assign,nonatomic,__weak) id<GKProfilePrivacyTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)setLocalPlayer:(GKLocalPlayer *)arg1 ;
-(GKLocalPlayer *)localPlayer;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<GKProfilePrivacyTableViewControllerDelegate>)arg1 ;
-(id<GKProfilePrivacyTableViewControllerDelegate>)delegate;
-(int)getLocalPlayerProfilePrivacy;
-(void)setCurrentPrivacySettings:(int)arg1 ;
-(int)currentPrivacySettings;
-(void)setInitialPrivacySettings:(int)arg1 ;
-(void)setIsSendingRequest:(BOOL)arg1 ;
-(id)titleForPrivacy:(int)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)updateTableViewLayoutMargins;
-(id)tableFooterForPrivacy:(int)arg1 ;
-(BOOL)isSendingRequest;
-(int)initialPrivacySettings;
-(NSMutableArray *)availblePrivacySettings;
-(void)setAvailblePrivacySettings:(NSMutableArray *)arg1 ;
@end
