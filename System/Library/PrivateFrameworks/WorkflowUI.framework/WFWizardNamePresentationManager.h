/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UINavigationController, WFWorkflowWizardNameViewController;

@interface WFWizardNamePresentationManager : NSObject {

	BOOL _presentsModally;
	UINavigationController* _navigationController;
	WFWorkflowWizardNameViewController* _wizardNameViewController;

}

@property (nonatomic,readonly) UINavigationController * navigationController;                              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) WFWorkflowWizardNameViewController * wizardNameViewController;              //@synthesize wizardNameViewController=_wizardNameViewController - In the implementation block
@property (nonatomic,readonly) BOOL presentsModally;                                                       //@synthesize presentsModally=_presentsModally - In the implementation block
-(UINavigationController *)navigationController;
-(void)present;
-(void)dismiss;
-(id)initWithNavigationController:(id)arg1 wizardNameViewController:(id)arg2 ;
-(void)presentModal;
-(WFWorkflowWizardNameViewController *)wizardNameViewController;
-(BOOL)presentsModally;
@end

