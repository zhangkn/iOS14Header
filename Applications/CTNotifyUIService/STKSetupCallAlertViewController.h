//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STKTextAlertViewController.h"

@class STKCallSetupSessionAction;

@interface STKSetupCallAlertViewController : STKTextAlertViewController
{
}

- (id)alertText;	// IMP=0x000000010000ab84
- (void)dial:(id)arg1;	// IMP=0x000000010000aab4
- (void)dismiss:(id)arg1;	// IMP=0x000000010000aa5c
- (id)newBottomBar;	// IMP=0x000000010000a600
- (id)newTopBarForInstance;	// IMP=0x000000010000a5f8
- (_Bool)validateAction:(id)arg1;	// IMP=0x000000010000a5a8

// Remaining properties
@property(readonly, nonatomic) STKCallSetupSessionAction *sessionAction; // @dynamic sessionAction;

@end
