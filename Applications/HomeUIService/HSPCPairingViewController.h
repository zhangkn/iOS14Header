//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProxCardKit/PRXCardContentViewController.h>

#import "HSProxCardConfigurable-Protocol.h"

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIActivityIndicatorView;

@interface HSPCPairingViewController : PRXCardContentViewController <HSProxCardConfigurable>
{
    HSSetupStateMachineConfiguration *config;	// 8 = 0x8
    HSProxCardCoordinator *coordinator;	// 16 = 0x10
    UIActivityIndicatorView *_spinnerView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003ce8c
@property __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config;
- (void)updatePairingStatusTitle:(id)arg1;	// IMP=0x000000010003ce14
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010003cd84
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003ccc0
- (void)viewDidLoad;	// IMP=0x000000010003c9dc
- (id)commitConfiguration;	// IMP=0x000000010003c9c0
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x000000010003c8e4

// Remaining properties
@property(retain, nonatomic) NSString *subtitle;

@end

