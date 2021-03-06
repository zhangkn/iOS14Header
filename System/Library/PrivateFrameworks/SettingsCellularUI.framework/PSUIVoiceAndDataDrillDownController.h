/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>
#import <libobjc.A.dylib/CoreTelephonyClientCapabilitiesDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class CTXPCServiceSubscriptionContext, PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory, CoreTelephonyClient, CTServiceDescriptor, Logger, NSString;

@interface PSUIVoiceAndDataDrillDownController : PSListItemsController <CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate> {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory* _switchFactory;
	int _currentRATMode;
	CoreTelephonyClient* _ctClient;
	CTServiceDescriptor* _serviceDescriptor;
	Logger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)airplaneModeChanged;
-(void)setSpecifier:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)context:(id)arg1 capabilitiesChanged:(id)arg2 ;
-(void)listItemSelected:(id)arg1 ;
-(void)startObservingNotifications;
-(id)init;
-(id)specifiers;
-(id)getLogger;
-(void)handleMaxDataRateChanged;
-(void)updateCurrentRATModeFromSpecifier:(id)arg1 ;
-(void)prepareSpecifiers:(id)arg1 ;
-(void)configureSpecifiers;
-(void)setUpRATModeSpecifierIdentifiers:(id)arg1 ;
-(id)getSwitchSpecifiers;
-(int)RATModeForSpecifier:(id)arg1 ;
-(id)identifierForRATMode:(int)arg1 ;
-(void)setRATGroupFooterText;
-(BOOL)shouldShowFooterTextWithVoiceExplanation;
-(BOOL)shouldShowVoLTESwitch;
-(void)setSA:(BOOL)arg1 andReload:(BOOL)arg2 ;
-(void)setVoLTE:(BOOL)arg1 andReload:(BOOL)arg2 ;
@end

