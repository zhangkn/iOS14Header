/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewController.h>

@class UIBarButtonItemGroup;

@interface UIExpandedBarItemsTableViewController : UITableViewController {

	UIBarButtonItemGroup* _barButtonGroup;

}

@property (nonatomic,readonly) UIBarButtonItemGroup * barButtonGroup;              //@synthesize barButtonGroup=_barButtonGroup - In the implementation block
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(unsigned long long)_numberOfItems;
-(id)initWithBarButtonGroup:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_visibleItems;
-(UIBarButtonItemGroup *)barButtonGroup;
-(id)_displayTitleForBarButtonItem:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

