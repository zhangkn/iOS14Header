//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBSetupAssistantLanguageLocaleController.h>

#import "BFFFlowItem-Protocol.h"
#import "BuddyLocaleDependencyReceiver-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, OBAnimationController, UITableView;
@protocol BFFFlowItemDelegate, BuddyLanguageLocaleSelectionReceiver, BuddyLocaleComposite;

@interface BuddyLocaleController : OBSetupAssistantLanguageLocaleController <UITableViewDataSource, UITableViewDelegate, BFFFlowItem, BuddyLocaleDependencyReceiver>
{
    _Bool _showLocalizedNames;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
    id <BuddyLocaleComposite> _localeComposite;	// 24 = 0x18
    id <BuddyLanguageLocaleSelectionReceiver> _selectionReceiver;	// 32 = 0x20
    NSString *_language;	// 40 = 0x28
    UITableView *_buddyLocaleTableView;	// 48 = 0x30
    OBAnimationController *_animationController;	// 56 = 0x38
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x000000010004080c
+ (id)internalSkipKey;	// IMP=0x0000000100040800
+ (id)cloudConfigSkipKey;	// IMP=0x00000001000407f8
- (void).cxx_destruct;	// IMP=0x00000001000414c8
@property(retain, nonatomic) OBAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) UITableView *buddyLocaleTableView; // @synthesize buddyLocaleTableView=_buddyLocaleTableView;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) _Bool showLocalizedNames; // @synthesize showLocalizedNames=_showLocalizedNames;
@property(nonatomic) __weak id <BuddyLanguageLocaleSelectionReceiver> selectionReceiver; // @synthesize selectionReceiver=_selectionReceiver;
@property(retain, nonatomic) id <BuddyLocaleComposite> localeComposite; // @synthesize localeComposite=_localeComposite;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (id)internalMenuActions;	// IMP=0x0000000100041250
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000411f0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100041170
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100041168
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000100041160
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000100041158
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000410b4
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000100041018
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100040e7c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100040a60
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000409a4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010004099c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100040990
- (id)displayLanguage;	// IMP=0x0000000100040984
- (void)controllerWasPopped;	// IMP=0x0000000100040934
- (id)countryAtIndexPath:(id)arg1;	// IMP=0x0000000100040688
- (void)selectCountry:(id)arg1;	// IMP=0x0000000100040468
- (void)_updateChromelessBar:(id)arg1;	// IMP=0x0000000100040390
- (void)_loadSavedStatePostLanguageReboot;	// IMP=0x00000001000402b0
- (_Bool)_postLanguageReboot;	// IMP=0x0000000100040260
- (id)headerTitle;	// IMP=0x000000010004010c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010003feb4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003fca4
- (void)viewDidLoad;	// IMP=0x000000010003f870
- (void)loadView;	// IMP=0x000000010003f7fc
- (id)init;	// IMP=0x000000010003f7b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
