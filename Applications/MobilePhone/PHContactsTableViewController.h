//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHTableViewController.h"

#import "CNUIObjectViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CNAvatarViewControllerSettings, CNContactFormatter, NSArray, NSString;

@interface PHContactsTableViewController : PHTableViewController <UITableViewDataSource, UITableViewDelegate, CNUIObjectViewControllerDelegate>
{
    NSArray *_contactArray;	// 8 = 0x8
    NSArray *_contactHandles;	// 16 = 0x10
    CNAvatarViewControllerSettings *_avatarViewControllerSettings;	// 24 = 0x18
    CNContactFormatter *_contactFormatter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001255c
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNAvatarViewControllerSettings *avatarViewControllerSettings; // @synthesize avatarViewControllerSettings=_avatarViewControllerSettings;
@property(readonly, nonatomic) NSArray *contactHandles; // @synthesize contactHandles=_contactHandles;
@property(readonly, nonatomic) NSArray *contactArray; // @synthesize contactArray=_contactArray;
- (id)contactForContact:(id)arg1 contactStore:(id)arg2;	// IMP=0x00000001000122e0
- (void)setUpTableView;	// IMP=0x000000010001204c
- (id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2;	// IMP=0x0000000100011e64
- (id)handleAtIndex:(long long)arg1;	// IMP=0x0000000100011d54
- (id)contactAtIndex:(long long)arg1;	// IMP=0x0000000100011cd0
- (id)hostingViewControllerForController:(id)arg1;	// IMP=0x0000000100011ccc
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000100011cc4
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x0000000100011c74
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100011a58
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010001165c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100011610
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100011608
- (void)viewDidLoad;	// IMP=0x00000001000115b8
- (id)initWithContactArray:(id)arg1 contactHandles:(id)arg2;	// IMP=0x00000001000114a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
