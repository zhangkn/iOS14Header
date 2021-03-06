/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class PKPaymentTransaction, PKSearchService, NSMutableArray, NSMutableDictionary, CSSearchableItem;

@interface PKTransactionSpotlightDebugDetailsViewController : UITableViewController {

	PKPaymentTransaction* _transaction;
	PKSearchService* _searchService;
	BOOL _loading;
	BOOL _inBridge;
	NSMutableArray* _attributes;
	NSMutableDictionary* _attributesPerKey;
	NSMutableArray* _customAttributes;
	NSMutableDictionary* _customAttributesPerKey;
	CSSearchableItem* _item;

}
-(id)initWithTransaction:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)spotlightObjectDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadItemWithCompletion:(/*^block*/id)arg1 ;
-(id)_cellWithTitleText:(id)arg1 valueText:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

