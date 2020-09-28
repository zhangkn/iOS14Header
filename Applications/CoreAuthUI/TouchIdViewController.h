//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitionViewController.h"

@class NSDictionary, TouchIdAlertController, TouchIdViewModel;

@interface TouchIdViewController : TransitionViewController
{
    TouchIdAlertController *_alertController;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    TouchIdViewModel *_viewModel;	// 24 = 0x18
    NSDictionary *_actions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000c53c
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c358
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c25c
- (void)didReceiveAuthenticationData;	// IMP=0x000000010000c018
- (void)_handleBiometryNoMatch;	// IMP=0x000000010000bdfc
- (void)_setupAlertControllerActions:(id)arg1;	// IMP=0x000000010000badc
- (void)_setupAlertController;	// IMP=0x000000010000b998
- (void)_dismissUIWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b978
- (void)_presentUI;	// IMP=0x000000010000b958
- (void)_setupUI;	// IMP=0x000000010000b94c
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b8fc
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x000000010000b808
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000b710
- (void)loadView;	// IMP=0x000000010000b68c

@end
