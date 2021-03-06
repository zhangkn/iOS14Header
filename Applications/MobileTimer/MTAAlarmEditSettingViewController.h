//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TKTonePickerViewControllerDelegate-Protocol.h"
#import "TKVibrationPickerViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MTAAlarmEditableTextCell, MTMutableAlarm, NSString, TKTonePickerViewController, UITableView;
@protocol MTAlarmEditSettingViewControllerDelegate;

@interface MTAAlarmEditSettingViewController : UIViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    long long _setting;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    MTAAlarmEditableTextCell *_editingCell;	// 24 = 0x18
    TKTonePickerViewController *_tonePickerViewController;	// 32 = 0x20
    unsigned long long _firstWeekday;	// 40 = 0x28
    id <MTAlarmEditSettingViewControllerDelegate> _delegate;	// 48 = 0x30
    MTMutableAlarm *_alarm;	// 56 = 0x38
    unsigned long long _repeatSchedule;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000251c0
@property(nonatomic) unsigned long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property(copy, nonatomic) MTMutableAlarm *alarm; // @synthesize alarm=_alarm;
@property(nonatomic) __weak id <MTAlarmEditSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textValueChanged:(id)arg1;	// IMP=0x0000000100025050
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100024e48
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100024b20
- (unsigned int)maskForRow:(long long)arg1;	// IMP=0x0000000100024ad8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100024abc
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;	// IMP=0x0000000100024920
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;	// IMP=0x000000010002490c
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;	// IMP=0x00000001000247c4
- (void)tonePickerViewController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;	// IMP=0x0000000100024614
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;	// IMP=0x0000000100024410
- (void)updateTableViewRowHeight;	// IMP=0x00000001000242e4
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x00000001000240b4
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x0000000100023fb8
- (_Bool)_shouldIgnoreKeyboardNotification;	// IMP=0x0000000100023f10
- (void)_dismiss;	// IMP=0x0000000100023dd0
- (double)rowHeightWithCurrentAccessibilityConfiguration;	// IMP=0x0000000100023d58
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100023cd8
- (void)viewDidUnload;	// IMP=0x0000000100023c84
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100023bf0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000239bc
- (void)loadView;	// IMP=0x00000001000236c8
- (void)addDefaultSongsIfNeeded;	// IMP=0x00000001000233fc
- (void)dealloc;	// IMP=0x0000000100023330
- (void)_commonInitialization;	// IMP=0x0000000100022e08
- (id)initWithAlarm:(id)arg1 setting:(long long)arg2 delegate:(id)arg3;	// IMP=0x0000000100022d2c
- (id)initWithSetting:(long long)arg1 editController:(id)arg2;	// IMP=0x0000000100022cb4
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100022cac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

