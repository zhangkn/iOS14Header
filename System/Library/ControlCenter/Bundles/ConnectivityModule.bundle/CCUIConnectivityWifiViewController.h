/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleDetailClickPresentationInteractionManagerDelegate.h>

@class WFControlCenterStateMonitor, CCUIContentModuleDetailClickPresentationInteractionManager, NSString;

@interface CCUIConnectivityWifiViewController : CCUIConnectivityButtonViewController <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {

	WFControlCenterStateMonitor* _stateMonitor;
	CCUIContentModuleDetailClickPresentationInteractionManager* _clickPresentationInteractionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_currentState;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)startObservingStateChanges;
-(id)displayName;
-(void)_toggleState;
-(BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)arg1 ;
-(void)_presentBehaviorPromptWithCompletion:(/*^block*/id)arg1 ;
-(void)stopObservingStateChanges;
-(BOOL)_enabledForState:(long long)arg1 ;
-(void)_updateWithState:(long long)arg1 ;
-(id)_debugDescriptionForState:(long long)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)_updateState;
-(id)init;
-(id)_glyphStateForState:(long long)arg1 ;
-(BOOL)_inoperativeForState:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)arg1 ;
-(BOOL)_useAlternateSelectedBackgroundForState:(long long)arg1 ;
-(id)_subtitleTextWithState:(long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(long long)_stateWithOverridesApplied:(long long)arg1 ;
-(id)_menuGlyphStateForState:(long long)arg1 ;
@end

