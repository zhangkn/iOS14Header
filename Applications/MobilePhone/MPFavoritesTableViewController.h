//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHTableViewController.h"

#import "CNContactPickerDelegate-Protocol.h"
#import "CNUIFavoritesEntryPickerDelegate-Protocol.h"
#import "CNUIObjectViewControllerDelegate-Protocol.h"
#import "PHTabBarSystemItemProtocol-Protocol.h"

@class CNAvatarViewControllerSettings, CNUIFavoritesEntryPicker, NSArray, NSCache, NSObject, NSString, TPFavoritesController, UIBarButtonItem;
@protocol OS_dispatch_queue;

@interface MPFavoritesTableViewController : PHTableViewController <CNContactPickerDelegate, CNUIFavoritesEntryPickerDelegate, CNUIObjectViewControllerDelegate, PHTabBarSystemItemProtocol>
{
    _Bool _shouldShowAddButtonItem;	// 8 = 0x8
    CNAvatarViewControllerSettings *_avatarViewControllerSettings;	// 16 = 0x10
    TPFavoritesController *_favoritesController;	// 24 = 0x18
    NSCache *_contactCache;	// 32 = 0x20
    NSArray *_favoritesEntries;	// 40 = 0x28
    UIBarButtonItem *_addButtonItem;	// 48 = 0x30
    CNUIFavoritesEntryPicker *_favoritesEntryPicker;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_contactsQueue;	// 64 = 0x40
}

+ (id)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inArray:(id)arg3;	// IMP=0x000000010005ff58
+ (id)tabBarIconName;	// IMP=0x000000010005f544
+ (id)defaultPNGName;	// IMP=0x000000010005f538
+ (int)tabViewType;	// IMP=0x000000010005f530
+ (CDStruct_5ec447a9)badge;	// IMP=0x000000010005f520
- (void).cxx_destruct;	// IMP=0x0000000100062a6c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contactsQueue; // @synthesize contactsQueue=_contactsQueue;
@property(retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker; // @synthesize favoritesEntryPicker=_favoritesEntryPicker;
@property(retain, nonatomic) UIBarButtonItem *addButtonItem; // @synthesize addButtonItem=_addButtonItem;
@property(nonatomic) _Bool shouldShowAddButtonItem; // @synthesize shouldShowAddButtonItem=_shouldShowAddButtonItem;
@property(copy, nonatomic) NSArray *favoritesEntries; // @synthesize favoritesEntries=_favoritesEntries;
@property(readonly, nonatomic) NSCache *contactCache; // @synthesize contactCache=_contactCache;
@property(readonly, nonatomic) TPFavoritesController *favoritesController; // @synthesize favoritesController=_favoritesController;
@property(retain, nonatomic) CNAvatarViewControllerSettings *avatarViewControllerSettings; // @synthesize avatarViewControllerSettings=_avatarViewControllerSettings;
- (void)setNavigationItemsForEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100062828
- (void)refreshView;	// IMP=0x000000010006272c
- (void)reloadDataSource;	// IMP=0x0000000100062654
- (void)makeUIForDefaultPNG;	// IMP=0x00000001000625a0
- (void)handleUIContentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000001000623b4
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000010006229c
- (void)handleTPFavoritesControllerFavoritesEntriesDidChangeNotification:(id)arg1;	// IMP=0x0000000100061e2c
- (id)hostingViewControllerForController:(id)arg1;	// IMP=0x0000000100061e20
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;	// IMP=0x000000010006185c
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x00000001000616b0
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x0000000100061614
- (void)removeFavoriteEntryAtIndexPath:(id)arg1;	// IMP=0x000000010006127c
- (void)postCNContactsClientDidDisplayFavoritesNotification;	// IMP=0x0000000100061254
- (id)favoritesEntryPickerContactForContact:(id)arg1 contactStore:(id)arg2;	// IMP=0x0000000100061030
- (id)favoritesEntryAtIndex:(long long)arg1;	// IMP=0x0000000100060fac
- (id)contactCacheKeyForFavoritesEntry:(id)arg1;	// IMP=0x0000000100060f18
- (void)addButtonAction:(id)arg1;	// IMP=0x0000000100060f04
- (void)setShouldShowAddButtonItem:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100060ea0
- (void)presentContactPickerViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060c54
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010006092c
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x00000001000606e4
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000605a0
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100060410
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;	// IMP=0x00000001000600c4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100060078
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100060070
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000010005fe28
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010005fe0c
- (void)updateTableViewCell:(id)arg1 withContactUsingFavoritesEntry:(id)arg2;	// IMP=0x000000010005fa04
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010005f6c8
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x000000010005f6bc
- (id)tabBarSystemItemTitle;	// IMP=0x000000010005f648
- (long long)tabBarSystemItem;	// IMP=0x000000010005f640
- (unsigned long long)tabBarSystemItemTag;	// IMP=0x000000010005f638
- (void)prepareForSnapshot;	// IMP=0x000000010005f634
- (_Bool)shouldSnapshot;	// IMP=0x000000010005f5b8
- (_Bool)shouldNavigationControllerPresentLargeTitles;	// IMP=0x000000010005f450
- (void)reloadDataIfNeeded;	// IMP=0x000000010005f39c
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010005f254
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010005f1e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010005f0ac
- (void)viewDidLoad;	// IMP=0x000000010005edd8
- (void)dealloc;	// IMP=0x000000010005eca4
- (void)commonInit;	// IMP=0x000000010005ec34
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010005ebfc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010005ebc4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010005eb8c
- (id)init;	// IMP=0x000000010005eb54
- (id)initWithStyle:(long long)arg1 favoritesController:(id)arg2;	// IMP=0x000000010005ea50
- (id)initWithFavoritesController:(id)arg1;	// IMP=0x000000010005ea3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
