//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSpinnerController.h>

@class NSDate;

@interface BuddyProximityApplySettingsController : BFFSpinnerController
{
    NSDate *_startTime;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x0000000100025840
+ (void)endProximityIfApplicable;	// IMP=0x00000001000255f0
- (void).cxx_destruct;	// IMP=0x0000000100025bfc
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
- (_Bool)shouldAllowStartOver;	// IMP=0x0000000100025bd8
- (_Bool)isEphemeral;	// IMP=0x0000000100025bd0
- (void)waitForWirelessConnection;	// IMP=0x00000001000253ac
- (_Bool)addWirelessNetworks;	// IMP=0x0000000100025070
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100024db4
- (id)init;	// IMP=0x0000000100024c5c

@end

