/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>
#import <libobjc.A.dylib/TSSIMSetupDelegate.h>

@class CTCellularPlanManager, PSListController, TSSIMSetupFlow, NSString;

@interface PSUIFauxCardScannerSpecifier : PSSpecifier <TSSIMSetupDelegate> {

	CTCellularPlanManager* _planManager;
	PSListController* _hostController;
	TSSIMSetupFlow* _flow;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (retain) TSSIMSetupFlow * flow;                                           //@synthesize flow=_flow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSSIMSetupFlow *)flow;
-(void)setFlow:(TSSIMSetupFlow *)arg1 ;
-(void)setHostController:(PSListController *)arg1 ;
-(PSListController *)hostController;
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 ;
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 planManager:(id)arg3 ;
-(void)fauxCardScannerCellPressed:(id)arg1 ;
-(void)simSetupFlowCompleted;
-(long long)userConsentResponse;
@end
