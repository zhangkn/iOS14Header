//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowItem-Protocol.h"

@class NSString, OBPrivacySplashController;
@protocol BFFFlowItemDelegate;

@interface BuddyPrivacyController : NSObject <BFFFlowItem>
{
    OBPrivacySplashController *_viewController;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
}

+ (void)_writeOutCurrentPrivacyVersion;	// IMP=0x0000000100031384
+ (_Bool)controllerNeedsToRun;	// IMP=0x0000000100030f70
+ (id)cloudConfigSkipKey;	// IMP=0x0000000100030f60
+ (void)initialize;	// IMP=0x0000000100030ed8
- (void).cxx_destruct;	// IMP=0x000000010003165c
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)learnMorePressed:(id)arg1;	// IMP=0x000000010003157c
- (void)viewDidAppear;	// IMP=0x0000000100031518
- (void)controllerDone;	// IMP=0x00000001000314bc
- (id)viewController;	// IMP=0x0000000100031140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

