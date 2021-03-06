//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTASleepBaseTableViewController.h"

#import "MTAEditAlarmVolumeCellDelegate-Protocol.h"
#import "MTPairedDeviceObserver-Protocol.h"
#import "MTUISelectionTableViewControllerDelegate-Protocol.h"
#import "MTUISwitchTableViewCellDelegate-Protocol.h"
#import "TKTonePickerViewControllerDelegate-Protocol.h"
#import "TKVibrationPickerViewControllerDelegate-Protocol.h"

@class MTAlarmDataSource, MTAlarmManager, NSArray, NSMutableArray, NSString, TKTonePickerViewController, TLAlert;
@protocol MTASleepOptionsDelegate;

@interface MTASleepOptionsViewController : MTASleepBaseTableViewController <MTUISwitchTableViewCellDelegate, MTAEditAlarmVolumeCellDelegate, TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate, MTPairedDeviceObserver, MTUISelectionTableViewControllerDelegate>
{
    id <MTASleepOptionsDelegate> _optionsDelegate;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
    MTAlarmManager *_alarmManager;	// 24 = 0x18
    MTAlarmDataSource *_dataSource;	// 32 = 0x20
    NSArray *_bedtimeRows;	// 40 = 0x28
    NSArray *_dndModeRows;	// 48 = 0x30
    NSMutableArray *_wakeupRows;	// 56 = 0x38
    TKTonePickerViewController *_tonePickerViewController;	// 64 = 0x40
    TLAlert *_previewAlert;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010000fcb0
@property(retain, nonatomic) TLAlert *previewAlert; // @synthesize previewAlert=_previewAlert;
@property(retain, nonatomic) TKTonePickerViewController *tonePickerViewController; // @synthesize tonePickerViewController=_tonePickerViewController;
@property(retain, nonatomic) NSMutableArray *wakeupRows; // @synthesize wakeupRows=_wakeupRows;
@property(retain, nonatomic) NSArray *dndModeRows; // @synthesize dndModeRows=_dndModeRows;
@property(retain, nonatomic) NSArray *bedtimeRows; // @synthesize bedtimeRows=_bedtimeRows;
@property(retain, nonatomic) MTAlarmDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <MTASleepOptionsDelegate> optionsDelegate; // @synthesize optionsDelegate=_optionsDelegate;
- (void)playOnAction;	// IMP=0x000000010000f65c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000f414
- (id)wakeUpSoundCell;	// IMP=0x000000010000f380
- (void)activePairedDeviceDidChange;	// IMP=0x000000010000f1a4
- (void)stopTonePlayback;	// IMP=0x000000010000f0b4
- (void)didFinishPlayingAlarmToneForPreviewAlert:(id)arg1;	// IMP=0x000000010000efac
- (void)playAlarmTone;	// IMP=0x000000010000ec5c
- (void)cellDidEditAlarmVolume:(id)arg1;	// IMP=0x000000010000ea40
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;	// IMP=0x000000010000e68c
- (void)_updateVibePickerSelection:(id)arg1;	// IMP=0x000000010000e5b4
- (void)_configureVibePicker:(id)arg1 fromViewController:(id)arg2;	// IMP=0x000000010000e3ec
- (void)_updateCurrentTonePickerSelections;	// IMP=0x000000010000e308
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;	// IMP=0x000000010000e2f4
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;	// IMP=0x000000010000e1ac
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;	// IMP=0x000000010000dce8
- (void)_updateTonePickerSelections:(id)arg1;	// IMP=0x000000010000db10
- (id)tonePickerController;	// IMP=0x000000010000d8c8
- (void)wakeupSoundAction;	// IMP=0x000000010000d7c0
- (void)updateVolumeSliderCellForSleepAlarm:(id)arg1;	// IMP=0x000000010000d664
- (id)playsOnIdentifierForSleepAlarm:(id)arg1;	// IMP=0x000000010000d578
- (id)titleForPlaysOnCell;	// IMP=0x000000010000d29c
- (void)updatePlaysOnSectionForSleepAlarm:(id)arg1;	// IMP=0x000000010000d250
- (void)updateWakeupSoundCellForSleepAlarm:(id)arg1;	// IMP=0x000000010000d14c
- (void)updateReminderCellForSleepAlarm:(id)arg1;	// IMP=0x000000010000d058
- (void)_updateSleepAlarmViewsForSleepAlarm:(id)arg1;	// IMP=0x000000010000cfd0
- (void)_updateSleepAlarmViews;	// IMP=0x000000010000cec4
- (void)cell:(id)arg1 didModifyAlarm:(id)arg2 reloadState:(_Bool)arg3;	// IMP=0x000000010000cd70
- (void)cell:(id)arg1 didModifyAlarm:(id)arg2;	// IMP=0x000000010000cd1c
- (void)switchDidChangeToState:(_Bool)arg1 senderCell:(id)arg2;	// IMP=0x000000010000c930
- (void)updatePlaysOnForIdentifier:(id)arg1;	// IMP=0x000000010000c5e0
- (void)didSelectOptions:(id)arg1 parentIndexPath:(id)arg2;	// IMP=0x000000010000c2cc
- (void)bedtimeReminderActionForCell:(id)arg1;	// IMP=0x000000010000bb90
- (id)bedtimeReminderCell;	// IMP=0x000000010000b96c
- (id)tonePickerCellForSleepAlarm:(id)arg1;	// IMP=0x000000010000b760
- (id)timeInBedCell;	// IMP=0x000000010000b598
- (id)playsOnCellForTableView:(id)arg1 row:(unsigned long long)arg2;	// IMP=0x000000010000b3f0
- (id)volumeSliderCell;	// IMP=0x000000010000b2a0
- (id)wakeupSectionCellForRow:(long long)arg1;	// IMP=0x000000010000b130
- (id)sleepOptionsModeCellForRow:(long long)arg1;	// IMP=0x000000010000ae1c
- (id)sleepOptionsBedtimeCellForRow:(long long)arg1;	// IMP=0x000000010000ad64
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000ac10
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000ab28
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010000a9ac
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000010000a880
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010000a834
- (void)doneAction:(id)arg1;	// IMP=0x000000010000a7f4
- (void)setupDoneButton;	// IMP=0x000000010000a6ec
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000a69c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000a62c
- (void)viewDidLoad;	// IMP=0x000000010000a4f8
- (void)setupSections;	// IMP=0x000000010000a398
- (id)initWithAlarmManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000010000a210

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

