//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPAlert.h>

@interface PHAirplaneEmergencyCallAlert : TPAlert
{
    CDUnknownBlockType _dialAction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100081064
@property(copy, nonatomic) CDUnknownBlockType dialAction; // @synthesize dialAction=_dialAction;
- (void)otherResponse;	// IMP=0x0000000100080fc8
- (void)defaultResponse;	// IMP=0x0000000100080f48
- (void)alternateResponse;	// IMP=0x0000000100080eac
- (id)defaultButtonTitle;	// IMP=0x0000000100080e38
- (id)otherButtonTitle;	// IMP=0x0000000100080d9c
- (id)alternateButtonTitle;	// IMP=0x0000000100080d28
- (id)message;	// IMP=0x0000000100080c8c
- (id)title;	// IMP=0x0000000100080bf0
- (id)initWithDialAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100080b7c

@end

