/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKViewController.h>
#import <libobjc.A.dylib/_GKStateMachineDelegate.h>

@class UIActivityIndicatorView, NSArray, GKLoadableContentStateMachine, NSString;

@interface GKLoadableContentViewController : GKViewController <_GKStateMachineDelegate> {

	UIActivityIndicatorView* _activityIndicator;
	NSArray* _viewsToHideWhileLoading;
	double _loadingIndicatorDelay;
	GKLoadableContentStateMachine* _loadingMachine;

}

@property (nonatomic,retain) GKLoadableContentStateMachine * loadingMachine;              //@synthesize loadingMachine=_loadingMachine - In the implementation block
@property (nonatomic,retain) NSString * loadingState; 
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSArray * viewsToHideWhileLoading;                           //@synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading - In the implementation block
@property (assign,nonatomic) double loadingIndicatorDelay;                                //@synthesize loadingIndicatorDelay=_loadingIndicatorDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLoadingIndicatorDelay:(double)arg1 ;
-(void)dealloc;
-(void)setLoadingState:(NSString *)arg1 ;
-(NSString *)loadingState;
-(id)init;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(GKLoadableContentStateMachine *)loadingMachine;
-(NSArray *)viewsToHideWhileLoading;
-(void)setViewsToHideWhileLoading:(NSArray *)arg1 ;
-(void)didEnterLoadedState;
-(void)didExitLoadedState;
-(double)loadingIndicatorDelay;
-(void)setLoadingMachine:(GKLoadableContentStateMachine *)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
@end

