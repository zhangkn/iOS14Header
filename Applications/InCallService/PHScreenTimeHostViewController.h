//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "STLockoutViewControllerDelegate-Protocol.h"

@class NSString, STLockoutViewController;
@protocol PHScreenTimeHostViewControllerDelegate;

@interface PHScreenTimeHostViewController : UIViewController <STLockoutViewControllerDelegate>
{
    STLockoutViewController *_lockoutViewController;	// 8 = 0x8
    id <PHScreenTimeHostViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100042ef4
@property(nonatomic) __weak id <PHScreenTimeHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) STLockoutViewController *lockoutViewController; // @synthesize lockoutViewController=_lockoutViewController;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100042e94
- (void)dismissAlert;	// IMP=0x0000000100042e28
- (void)lockoutViewControllerDidFinishDismissing:(id)arg1;	// IMP=0x0000000100042de8
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100042a80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
