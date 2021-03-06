/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/GKExtensionHostProtocol.h>

@class GKGame, NSMutableDictionary, GKHostedViewController, UIColor, NSString;

@interface GKRemoteViewServiceController : _UIRemoteViewController <GKExtensionHostProtocol> {

	BOOL _didSetRemoteGame;
	BOOL _viewDidAppear;
	GKGame* _game;
	NSMutableDictionary* _dirtyProperties;
	GKHostedViewController* _managingViewController;
	UIColor* _previousStatusBarColor;
	/*^block*/id _blockToPerformAfterViewDidAppear;

}

@property (nonatomic,retain) NSMutableDictionary * dirtyProperties;                               //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (assign,nonatomic,__weak) GKHostedViewController * managingViewController;              //@synthesize managingViewController=_managingViewController - In the implementation block
@property (nonatomic,retain) UIColor * previousStatusBarColor;                                    //@synthesize previousStatusBarColor=_previousStatusBarColor - In the implementation block
@property (nonatomic,copy) id blockToPerformAfterViewDidAppear;                                   //@synthesize blockToPerformAfterViewDidAppear=_blockToPerformAfterViewDidAppear - In the implementation block
@property (assign,nonatomic) BOOL didSetRemoteGame;                                               //@synthesize didSetRemoteGame=_didSetRemoteGame - In the implementation block
@property (assign,nonatomic) BOOL viewDidAppear;                                                  //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (nonatomic,readonly) BOOL serviceNeedsCurrentGame; 
@property (nonatomic,readonly) BOOL serviceNeedsLocalPlayer; 
@property (nonatomic,retain) GKGame * game;                                                       //@synthesize game=_game - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)viewDidAppear;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(GKGame *)game;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)nudge;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)observedKeyPaths;
-(GKHostedViewController *)managingViewController;
-(BOOL)serviceNeedsCurrentGame;
-(BOOL)serviceNeedsLocalPlayer;
-(BOOL)serviceNeedsFriendCode;
-(void)populateInitialStateForRemoteView:(id)arg1 ;
-(void)setDidSetRemoteGame:(BOOL)arg1 ;
-(void)setupRemoteView;
-(void)setViewDidAppear:(BOOL)arg1 ;
-(long long)_desiredStatusBarStyle;
-(void)_performBlockAfterViewDidAppearIfNeeded;
-(id)blockToPerformAfterViewDidAppear;
-(void)setBlockToPerformAfterViewDidAppear:(id)arg1 ;
-(BOOL)_dismissSelfAfterGettingShouldFinish;
-(void)remoteViewControllerIsFinishing;
-(void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1 ;
-(void)remoteViewControllerIsCanceling;
-(BOOL)_dismissSelfAfterGettingShouldCancel;
-(void)messageFromExtension:(id)arg1 ;
-(void)readyToPresentInController:(id)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)didSetRemoteGame;
-(void)setManagingViewController:(GKHostedViewController *)arg1 ;
-(UIColor *)previousStatusBarColor;
-(void)setPreviousStatusBarColor:(UIColor *)arg1 ;
-(NSMutableDictionary *)dirtyProperties;
-(void)setDirtyProperties:(NSMutableDictionary *)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
@end

