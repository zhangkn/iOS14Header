//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSString, UITableView;

@interface ASReportAConcernDetailsDataSource : NSObject <UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    NSString *_placeholder;	// 16 = 0x10
    NSString *_selectedReason;	// 24 = 0x18
    NSString *_privacyNote;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100008480
@property(copy, nonatomic) NSString *privacyNote; // @synthesize privacyNote=_privacyNote;
@property(copy, nonatomic) NSString *selectedReason; // @synthesize selectedReason=_selectedReason;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000100008424
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000083d0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000833c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100008334
- (id)initWithTableView:(id)arg1;	// IMP=0x0000000100008294
- (id)init;	// IMP=0x0000000100008244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

