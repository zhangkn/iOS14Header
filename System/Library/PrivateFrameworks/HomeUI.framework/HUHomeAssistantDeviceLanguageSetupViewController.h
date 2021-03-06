/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HUOnboardingWarningPresenter.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class OBTrayButton, OBLinkTrayButton, HUPersonalRequestsEditorItemManager, NSArray, HMHome, NSString;

@interface HUHomeAssistantDeviceLanguageSetupViewController : HUImageOBWelcomeController <HUOnboardingWarningPresenter, HUConfigurationViewController, HUPreloadableViewController> {

	BOOL _maxNumberOfVoicesReached;
	BOOL _shouldSetMultiUserIsEnabled;
	id<HUConfigurationViewControllerDelegate> _delegate;
	OBTrayButton* _continueButton;
	OBLinkTrayButton* _customizeButton;
	HUPersonalRequestsEditorItemManager* _prEditorItemManager;
	NSArray* _supportedVoiceRecognitionLanguages;
	NSArray* _homeAssistantDevicesHavingLanguageMismatch;
	HMHome* _home;
	NSString* _titleString;
	NSString* _detailsString;
	NSString* _continueButtonString;
	SEL _continueSelector;
	NSString* _customizeButtonString;
	SEL _customizeSelector;

}

@property (nonatomic,retain) OBTrayButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                     //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) HUPersonalRequestsEditorItemManager * prEditorItemManager;              //@synthesize prEditorItemManager=_prEditorItemManager - In the implementation block
@property (nonatomic,retain) NSArray * supportedVoiceRecognitionLanguages;                           //@synthesize supportedVoiceRecognitionLanguages=_supportedVoiceRecognitionLanguages - In the implementation block
@property (nonatomic,retain) NSArray * homeAssistantDevicesHavingLanguageMismatch;                   //@synthesize homeAssistantDevicesHavingLanguageMismatch=_homeAssistantDevicesHavingLanguageMismatch - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL maxNumberOfVoicesReached;                                          //@synthesize maxNumberOfVoicesReached=_maxNumberOfVoicesReached - In the implementation block
@property (assign,nonatomic) BOOL shouldSetMultiUserIsEnabled;                                       //@synthesize shouldSetMultiUserIsEnabled=_shouldSetMultiUserIsEnabled - In the implementation block
@property (assign,nonatomic) NSString * titleString;                                                 //@synthesize titleString=_titleString - In the implementation block
@property (assign,nonatomic) NSString * detailsString;                                               //@synthesize detailsString=_detailsString - In the implementation block
@property (assign,nonatomic) NSString * continueButtonString;                                        //@synthesize continueButtonString=_continueButtonString - In the implementation block
@property (assign,nonatomic) SEL continueSelector;                                                   //@synthesize continueSelector=_continueSelector - In the implementation block
@property (assign,nonatomic) NSString * customizeButtonString;                                       //@synthesize customizeButtonString=_customizeButtonString - In the implementation block
@property (assign,nonatomic) SEL customizeSelector;                                                  //@synthesize customizeSelector=_customizeSelector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setCustomizeButton:(OBLinkTrayButton *)arg1 ;
-(OBLinkTrayButton *)customizeButton;
-(id)initWithHome:(id)arg1 ;
-(void)viewDidLoad;
-(void)_cancelLanguageSetup;
-(NSString *)detailsString;
-(void)setDetailsString:(NSString *)arg1 ;
-(NSArray *)homeAssistantDevicesHavingLanguageMismatch;
-(void)setMaxNumberOfVoicesReached:(BOOL)arg1 ;
-(BOOL)maxNumberOfVoicesReached;
-(void)setCustomizeButtonString:(NSString *)arg1 ;
-(void)_changeLanguage;
-(void)setCustomizeSelector:(SEL)arg1 ;
-(void)_completeLanguageSetup;
-(HUPersonalRequestsEditorItemManager *)prEditorItemManager;
-(void)_cancelLanguageSetupWithoutWarningUser;
-(BOOL)shouldSetMultiUserIsEnabled;
-(void)setPrEditorItemManager:(HUPersonalRequestsEditorItemManager *)arg1 ;
-(void)_turnOffPersonalRequests;
-(NSString *)continueButtonString;
-(SEL)continueSelector;
-(NSString *)customizeButtonString;
-(SEL)customizeSelector;
-(void)userTappedContinueFromWarning;
-(void)userTappedCancelFromWarning;
-(void)setSupportedVoiceRecognitionLanguages:(NSArray *)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(OBTrayButton *)continueButton;
-(void)setContinueButton:(OBTrayButton *)arg1 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)_setupPersonalRequestsItemInfrastructure;
-(void)setContinueButtonString:(NSString *)arg1 ;
-(void)setContinueSelector:(SEL)arg1 ;
-(void)setShouldSetMultiUserIsEnabled:(BOOL)arg1 ;
-(NSArray *)supportedVoiceRecognitionLanguages;
-(void)setHomeAssistantDevicesHavingLanguageMismatch:(NSArray *)arg1 ;
-(void)setTitleString:(NSString *)arg1 ;
-(id)hu_preloadContent;
-(void)setHome:(HMHome *)arg1 ;
-(NSString *)titleString;
-(HMHome *)home;
@end

