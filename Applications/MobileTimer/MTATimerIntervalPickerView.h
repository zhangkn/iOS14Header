//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSString, UILabel, UIPickerView;
@protocol MTATimerIntervalPickerViewDelegate;

@interface MTATimerIntervalPickerView : UIControl <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_timePicker;	// 8 = 0x8
    UILabel *_hoursLabel;	// 16 = 0x10
    UILabel *_minutesLabel;	// 24 = 0x18
    UILabel *_secondsLabel;	// 32 = 0x20
    id <MTATimerIntervalPickerViewDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100072108
@property(nonatomic) __weak id <MTATimerIntervalPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_secondsStringForSeconds:(long long)arg1;	// IMP=0x000000010007200c
- (id)_minutesStringForMinutes:(long long)arg1;	// IMP=0x0000000100071f44
- (id)_hoursStringForHour:(long long)arg1;	// IMP=0x0000000100071e7c
- (double)selectedDuration;	// IMP=0x0000000100071dec
- (void)setDuration:(double)arg1;	// IMP=0x0000000100071cf0
- (_Bool)isSelectedDurationValid;	// IMP=0x0000000100071c6c
- (void)_fadeLabelForComponent:(long long)arg1 toText:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100071960
- (void)_positionLabel:(id)arg1 forComponent:(long long)arg2;	// IMP=0x00000001000716e0
- (void)_setLabel:(id)arg1 forComponent:(long long)arg2;	// IMP=0x0000000100071680
- (id)_labelForComponent:(long long)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x0000000100071544
- (id)_makeNewComponentLabel;	// IMP=0x0000000100071458
- (void)_updateLabels:(_Bool)arg1;	// IMP=0x0000000100071318
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x000000010007130c
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;	// IMP=0x00000001000712d0
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000001000711e0
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x0000000100070eec
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000100070ecc
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x0000000100070ec4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100070dcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

