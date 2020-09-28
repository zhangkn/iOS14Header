/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UINavigationController, NSString;

@interface _UIViewServiceViewController : UIViewController <UINavigationControllerDelegate> {

	id _hostingViewController;
	UINavigationController* _containedNavController;

}

@property (nonatomic,readonly) id hostingViewController;                                     //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (nonatomic,readonly) UINavigationController * containedNavController;              //@synthesize containedNavController=_containedNavController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)hostingViewController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(CGSize)_updatedContentSizeForPreferredContentSize:(CGSize)arg1 ;
-(void)setContainedNavController:(UINavigationController *)arg1 ;
-(UINavigationController *)containedNavController;
@end
