/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NAFuture, HMHome;


@protocol HUFeatureOnboardingFlow <NSObject>
@property (nonatomic,retain) NAFuture * onboardingFuture; 
@property (nonatomic,readonly) BOOL shouldAbortThisOnboardingFlowGroup; 
@property (nonatomic,readonly) BOOL shouldAbortAllOnboarding; 
@property (nonatomic,retain) UIViewController*<HUConfigurationViewController> initialViewController; 
@property (nonatomic,retain) HMHome * home; 
@optional
-(void)checkIfStillRequiredFromCurrentResults:(id)arg1;

@required
-(NAFuture *)onboardingFuture;
-(id)processUserInput:(id)arg1;
-(void)setOnboardingFuture:(id)arg1;
-(BOOL)shouldAbortThisOnboardingFlowGroup;
-(BOOL)shouldAbortAllOnboarding;
-(UIViewController*<HUConfigurationViewController>)initialViewController;
-(void)setInitialViewController:(id)arg1;
-(void)setHome:(id)arg1;
-(HMHome *)home;

@end

