/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem;

@interface SafariQuickWebsiteSearchSettingsController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;

}
-(void)willBecomeActive;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_deleteBarButtonItem;
-(void)_cancelEditing:(id)arg1 ;
-(void)_updateDeleteButton;
-(void)dealloc;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateEditButton;
-(id)specifiers;
-(id)_cancelBarButtonItem;
-(void)_quickWebsiteSearchControllerDidFinishLoading:(id)arg1 ;
-(void)_setUseSiteSpecificSearch:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_hasSearchProviders;
-(void)_deleteItemsForSpecifiers:(id)arg1 ;
-(void)_deleteSelectedItems:(id)arg1 ;
@end

