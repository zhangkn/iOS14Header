//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC6FindMy26FMUpdateLostViewController : UIViewController
{
    MISSING_TYPE *mediator;	// 8 = 0x8
    MISSING_TYPE *phoneNumber;	// 16 = 0x10
    MISSING_TYPE *message;	// 32 = 0x20
    MISSING_TYPE *areEmailUpdatesEnabled;	// 48 = 0x30
    MISSING_TYPE *existingPhoneNumber;	// 56 = 0x38
    MISSING_TYPE *existingMessage;	// 72 = 0x48
    MISSING_TYPE *existingEmailUpdatesEnabled;	// 88 = 0x58
    MISSING_TYPE *scrollView;	// 96 = 0x60
    MISSING_TYPE *imageView;	// 104 = 0x68
    MISSING_TYPE *nameLabel;	// 112 = 0x70
    MISSING_TYPE *ownerLabel;	// 120 = 0x78
    MISSING_TYPE *tableView;	// 128 = 0x80
    MISSING_TYPE *rightBarButtonItem;	// 136 = 0x88
    MISSING_TYPE *style;	// 144 = 0x90
    MISSING_TYPE *tableViewHeightConstraint;	// 264 = 0x108
    MISSING_TYPE *remainingCharsLabel;	// 272 = 0x110
    MISSING_TYPE *areEmailUpdatesEnabledSwitch;	// 280 = 0x118
    MISSING_TYPE *deviceSubscription;	// 288 = 0x120
    MISSING_TYPE *selectionSubscription;	// 296 = 0x128
    MISSING_TYPE *keyboardHeightScrollViewPadding;	// 304 = 0x130
    MISSING_TYPE *keyboardWillShowObserver;	// 320 = 0x140
    MISSING_TYPE *keyboardWillHideObserver;	// 328 = 0x148
    MISSING_TYPE *heightForEmailLabel;	// 336 = 0x150
    MISSING_TYPE *scrollHandler;	// 344 = 0x158
}

- (void).cxx_destruct;	// IMP=0x00000001000761c4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100076160
- (void)cancelActionWithSender:(id)arg1;	// IMP=0x0000000100076098
- (void)doneActionWithSender:(id)arg1;	// IMP=0x0000000100076034
- (void)dismissKeyboardActionWithSender:(id)arg1;	// IMP=0x0000000100075ba4
- (void)performAction;	// IMP=0x0000000100075acc
- (void)areEmailUpdatesEnabledAction;	// IMP=0x0000000100075a80
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010007559c
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x00000001000753ec
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000100075100
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100074d64
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000100074a50
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100074970
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100074904
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010007481c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100073fd4
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000100073eec
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100073e20
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100073df8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100073dac
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100073d70
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100073b08
- (void)viewDidLoad;	// IMP=0x0000000100073520
- (void)updateViewConstraints;	// IMP=0x000000010007333c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100071fa0

@end
