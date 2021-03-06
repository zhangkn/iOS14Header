/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityGuidedAccessControlCenterModule.bundle/AccessibilityGuidedAccessControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXCCGuidedAccessModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, AXCCGuidedAccessModuleViewController, NSString;

@interface AXCCGuidedAccessModule : NSObject <AXCCGuidedAccessModuleViewControllerDelegate, CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	AXCCGuidedAccessModuleViewController* _contentViewController;

}

@property (nonatomic,retain) AXCCGuidedAccessModuleViewController * contentViewController;                                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentViewController:(AXCCGuidedAccessModuleViewController *)arg1 ;
-(AXCCGuidedAccessModuleViewController *)contentViewController;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(id)init;
-(void)openGuidedAccessSettings;
@end

