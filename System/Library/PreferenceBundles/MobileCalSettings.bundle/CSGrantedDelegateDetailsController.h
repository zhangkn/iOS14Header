/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol DelegateDetailProtocol;
@class EKEventStore, PSSpecifier, NSNumber, EKSource, CalGrantedDelegate;

@interface CSGrantedDelegateDetailsController : PSListController {

	BOOL _addDelegateMode;
	EKEventStore* _eventStore;
	PSSpecifier* _readWriteSwitch;
	PSSpecifier* _removeDelegateButton;
	NSNumber* _currentPermission;
	id<DelegateDetailProtocol> _delegateFromSpecifier;
	EKSource* _source;
	CalGrantedDelegate* _grantedDelegate;

}
-(void)setSpecifier:(id)arg1 ;
-(id)init;
-(id)specifiers;
-(void)modalCancelPressed:(id)arg1 ;
-(void)modalSavePressed:(id)arg1 ;
-(id)initInAddDelegateMode:(BOOL)arg1 ;
-(id)enabledWriteAccess:(id)arg1 ;
-(void)setEnabledWriteAccess:(id)arg1 specifier:(id)arg2 ;
-(void)removeDelegateTapped:(id)arg1 ;
@end

