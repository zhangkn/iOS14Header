//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VMAccountsViewController.h"

#import "PHVoicemailGreetingViewControllerDelegate-Protocol.h"
#import "TPSetPINViewControllerDelegate-Protocol.h"
#import "VMAccountsViewDataSource-Protocol.h"
#import "VMAccountsViewDelegate-Protocol.h"

@class NSArray, NSString, VMAccount;

@interface VMAccountProvisioningViewController : VMAccountsViewController <PHVoicemailGreetingViewControllerDelegate, TPSetPINViewControllerDelegate, VMAccountsViewDataSource, VMAccountsViewDelegate>
{
    NSArray *_accounts;	// 8 = 0x8
    VMAccount *_selectedAccount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100044dac
@property(retain, nonatomic) VMAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void)setPINViewControllerFinished:(id)arg1 success:(_Bool)arg2 oldPIN:(id)arg3 newPIN:(id)arg4;	// IMP=0x00000001000444d4
- (void)voicemailGreetingViewControllerFinished:(id)arg1;	// IMP=0x0000000100044368
- (void)accountsView:(id)arg1 buttonTappedForRowWithIndex:(unsigned long long)arg2;	// IMP=0x0000000100043fe8
- (id)titleForAccountsView:(id)arg1;	// IMP=0x0000000100043f74
- (unsigned long long)numberOfRowsForAccountsView:(id)arg1;	// IMP=0x0000000100043f28
- (id)accountsView:(id)arg1 buttonForRowAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100043dac
- (void)updateAccounts;	// IMP=0x0000000100043bac
- (id)accountAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100043b30
- (void)viewDidLoad;	// IMP=0x00000001000439bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

