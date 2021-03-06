/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@class HUServiceGridItemManager, HFMutableSetDiff, HFSetDiff, NSString;

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate> {

	BOOL _allowsEmptySelection;
	BOOL _allowsMultipleSelection;
	HUServiceGridItemManager* _serviceGridItemManager;
	HFMutableSetDiff* _mutableSelectedItems;

}

@property (assign,nonatomic,__weak) HUServiceGridItemManager * serviceGridItemManager;              //@synthesize serviceGridItemManager=_serviceGridItemManager - In the implementation block
@property (nonatomic,retain) HFMutableSetDiff * mutableSelectedItems;                               //@synthesize mutableSelectedItems=_mutableSelectedItems - In the implementation block
@property (nonatomic,retain) HFSetDiff * selectedItems; 
@property (assign,nonatomic) BOOL allowsEmptySelection;                                             //@synthesize allowsEmptySelection=_allowsEmptySelection - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection;                                          //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1 ;
+(/*^block*/id)transformationBlockWithOptions:(unsigned long long)arg1 ;
+(id)itemServiceTypesToHide;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)initWithItemManager:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(HFSetDiff *)selectedItems;
-(void)setSelectedItems:(HFSetDiff *)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(void)didChangeSelection;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)allowsMultipleSelection;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)didSelectItem:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(void)setAllowsEmptySelection:(BOOL)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)allowsEmptySelection;
-(void)didDeselectItem:(id)arg1 ;
-(void)addItemToSelection:(id)arg1 ;
-(void)deleteItemFromSelection:(id)arg1 ;
-(BOOL)_wantsToggleButtonForSection:(unsigned long long)arg1 ;
-(void)_updateSelectionState:(BOOL)arg1 forCell:(id)arg2 ;
-(HUServiceGridItemManager *)serviceGridItemManager;
-(void)setServiceGridItemManager:(HUServiceGridItemManager *)arg1 ;
-(HFMutableSetDiff *)mutableSelectedItems;
-(void)_updateToggleStateForSection:(long long)arg1 headerView:(id)arg2 ;
-(void)_setSelected:(BOOL)arg1 forItemsInSection:(long long)arg2 ;
-(void)_deleteItemFromSelection:(id)arg1 ;
-(void)_addItemToSelection:(id)arg1 ;
-(void)_addAllServicesInSectionFromButton:(id)arg1 ;
-(void)_removeAllServicesInSectionFromButton:(id)arg1 ;
-(void)setMutableSelectedItems:(HFMutableSetDiff *)arg1 ;
@end

