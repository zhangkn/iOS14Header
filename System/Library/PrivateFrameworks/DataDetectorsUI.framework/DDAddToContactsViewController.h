/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DDRemoteActionViewService.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@protocol DDRemoteActionPresenter;
@class DDAction, CNContactViewController, NSString;

@interface DDAddToContactsViewController : UINavigationController <DDRemoteActionViewService, CNContactViewControllerDelegate> {

	id<DDRemoteActionPresenter> _proxy;
	DDAction* _action;
	CNContactViewController* _personViewController;
	BOOL _contactBeingAdded;

}

@property (retain) DDAction * action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
+(id)alternateNameForContact:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(DDAction *)action;
-(void)setAction:(DDAction *)arg1 ;
-(void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(id)arg1 ;
-(void)contactViewControllerForUnknownContactDidEndAddingToContacts:(id)arg1 ;
-(void)cancelPressed:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(void)prepareForAction:(id)arg1 ;
-(void)setCancelButtonVisible:(BOOL)arg1 ;
-(void)doneWithAddingContactShouldDismiss:(BOOL)arg1 ;
@end
