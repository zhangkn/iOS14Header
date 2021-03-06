//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MTAlarmEditSettingViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MTAAlarmEditView, MTAlarm, MTMutableAlarm, NSString;
@protocol MTAAlarmEditViewControllerDelegate;

@interface MTAAlarmEditViewController : UIViewController <MTAlarmEditSettingViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MTAAlarmEditView *_editAlarmView;	// 8 = 0x8
    long long _editingAlarmSetting;	// 16 = 0x10
    id <MTAAlarmEditViewControllerDelegate> _delegate;	// 24 = 0x18
    MTAlarm *_originalAlarm;	// 32 = 0x20
    MTMutableAlarm *_editedAlarm;	// 40 = 0x28
}

+ (struct CGSize)desiredContentSize;	// IMP=0x000000010003cb54
- (void).cxx_destruct;	// IMP=0x000000010003f9b0
@property(retain, nonatomic) MTMutableAlarm *editedAlarm; // @synthesize editedAlarm=_editedAlarm;
@property(retain, nonatomic) MTAlarm *originalAlarm; // @synthesize originalAlarm=_originalAlarm;
@property(nonatomic) __weak id <MTAAlarmEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tonePickerCellForTableView:(id)arg1;	// IMP=0x000000010003f744
- (void)alarmEditSettingController:(id)arg1 didEditAlarm:(id)arg2;	// IMP=0x000000010003f6c4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010003f5cc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003ebf8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010003ebe8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010003eba0
- (void)viewDidUnload;	// IMP=0x000000010003eb4c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010003ea1c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003e834
- (void)loadView;	// IMP=0x000000010003e4c8
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010003e494
- (void)contentSizeCategoryDidChange;	// IMP=0x000000010003e368
- (void)handleSuspend;	// IMP=0x000000010003e358
- (void)startEditingSetting:(long long)arg1;	// IMP=0x000000010003e210
- (void)_snoozeControlChanged:(id)arg1;	// IMP=0x000000010003e0a0
- (void)_doneButtonClicked:(id)arg1;	// IMP=0x000000010003dfa0
- (void)_cancelButtonClicked:(id)arg1;	// IMP=0x000000010003de80
- (void)saveAlarmOnlyIfEdited:(_Bool)arg1;	// IMP=0x000000010003db58
- (void)markAsEdited;	// IMP=0x000000010003db54
@property(readonly, nonatomic, getter=isEdited) _Bool edited;
- (_Bool)isNewAlarm;	// IMP=0x000000010003da78
- (void)_setTableContentInset:(double)arg1;	// IMP=0x000000010003d9d8
- (double)_adjustedContentInsetOfTable:(id)arg1 forOverlapHeight:(double)arg2;	// IMP=0x000000010003d8c0
- (double)_overlapHeightBetweenKeyboard:(id)arg1 andLastCellInTable:(id)arg2;	// IMP=0x000000010003d738
- (void)_resetSettingsTableContentInsetIfNeeded;	// IMP=0x000000010003d6b0
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000010003d440
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000010003d124
- (void)dealloc;	// IMP=0x000000010003d0ac
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010003cfb8
- (id)initWithAlarm:(id)arg1 isNewAlarm:(_Bool)arg2;	// IMP=0x000000010003cb68
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010003cb4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

