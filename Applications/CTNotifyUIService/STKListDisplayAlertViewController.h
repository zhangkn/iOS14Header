//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STKBaseAlertViewController.h"

#import "UINavigationBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, STKListItemsSessionAction, UITableView;

@interface STKListDisplayAlertViewController : STKBaseAlertViewController <UINavigationBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000044c4
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;	// IMP=0x0000000100004478
- (id)newTopBar;	// IMP=0x0000000100004218
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100004208
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000416c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100003e48
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100003dfc
- (void)rightNavigationButtonPressed;	// IMP=0x0000000100003da4
- (void)leftNavigationButtonPressed;	// IMP=0x0000000100003d4c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100003a24
- (void)viewDidLoad;	// IMP=0x00000001000035e4
- (void)_selectListItem:(unsigned long long)arg1;	// IMP=0x000000010000359c
- (id)_simToolkitListItems;	// IMP=0x0000000100003520
- (_Bool)validateAction:(id)arg1;	// IMP=0x00000001000034d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) STKListItemsSessionAction *sessionAction; // @dynamic sessionAction;
@property(readonly) Class superclass;

@end
