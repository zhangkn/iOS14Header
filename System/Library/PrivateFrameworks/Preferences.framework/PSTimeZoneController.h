/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>

@class NSArray, PSSpecifier, PSListController, UISearchController, NSString;

@interface PSTimeZoneController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate> {

	NSArray* _cities;
	PSSpecifier* _specifier;
	PSListController* _parentController;
	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;                   //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                 //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic,__weak) PSListController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setTimeZone:(id)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(PSSpecifier *)specifier;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UISearchController *)searchController;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setParentController:(PSListController *)arg1 ;
-(PSListController *)parentController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)currentTimeZoneCityName;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

