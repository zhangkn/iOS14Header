//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPAlert.h>

@class UIAlertController;

@interface PHTelephonyAccountUnavailableAlert : TPAlert
{
    UIAlertController *_alertController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005e61c
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void)otherResponse;	// IMP=0x000000010005e528
- (void)alternateResponse;	// IMP=0x000000010005e45c
- (void)defaultResponse;	// IMP=0x000000010005e394
- (id)otherButtonTitle;	// IMP=0x000000010005e2d0
- (id)alternateButtonTitle;	// IMP=0x000000010005e210
- (id)defaultButtonTitle;	// IMP=0x000000010005e154
- (id)message;	// IMP=0x000000010005e100
- (id)title;	// IMP=0x000000010005e0ac
- (id)initWithSenderIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005dfec

@end

