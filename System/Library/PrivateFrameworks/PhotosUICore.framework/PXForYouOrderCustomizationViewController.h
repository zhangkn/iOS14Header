/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UITableViewController.h>

@class PXForYouGadgetRankStorage;

@interface PXForYouOrderCustomizationViewController : UITableViewController {

	PXForYouGadgetRankStorage* _storage;

}
-(id)initWithStorage:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)_handleDone;
-(long long)_rankForItem:(long long)arg1 ;
-(id)_currentGadgetTypesInOrderOfRank;
-(void)_persistRanksOfGadgetTypes:(id)arg1 ;
-(void)_fillDefaultRanks;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
