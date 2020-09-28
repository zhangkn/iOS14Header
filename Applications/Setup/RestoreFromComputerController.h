//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyWelcomeController.h"

#import "ATConnectionDelegate-Protocol.h"

@class ATConnection, NSLayoutConstraint, NSString;

@interface RestoreFromComputerController : BuddyWelcomeController <ATConnectionDelegate>
{
    NSString *_headerTitle;	// 8 = 0x8
    ATConnection *_airTrafficConnection;	// 16 = 0x10
    NSLayoutConstraint *_imageViewTopConstraint;	// 24 = 0x18
    NSLayoutConstraint *_imageViewHeightConstraint;	// 32 = 0x20
}

+ (id)cloudConfigSkipKey;	// IMP=0x000000010005b91c
- (void).cxx_destruct;	// IMP=0x000000010005baec
@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewTopConstraint; // @synthesize imageViewTopConstraint=_imageViewTopConstraint;
@property(retain, nonatomic) ATConnection *airTrafficConnection; // @synthesize airTrafficConnection=_airTrafficConnection;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)connectionWasInterrupted:(id)arg1;	// IMP=0x000000010005b9ec
- (void)connection:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x000000010005b924
- (void)_setHeaderTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010005b674
- (void)_updateHeaderForConnectedToComputer:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010005b5c4
- (void)_updateImageViewPadding;	// IMP=0x000000010005b3a8
- (void)_updateImageViewHeight;	// IMP=0x000000010005b2f0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010005b2a0
- (void)viewDidLayoutSubviews;	// IMP=0x000000010005b240
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010005b124
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010005af84
- (void)viewDidLoad;	// IMP=0x000000010005aa4c
- (void)dealloc;	// IMP=0x000000010005a9a4
- (id)init;	// IMP=0x000000010005a808

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
