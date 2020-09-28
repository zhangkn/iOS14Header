//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseMainController.h"

@class CUBluetoothClient, ShareAudioAcceptAskViewController, UIStoryboard;

@interface ShareAudioAcceptMainController : SVSBaseMainController
{
    CUBluetoothClient *_btClient;	// 24 = 0x18
    _Bool _dismissed;	// 32 = 0x20
    UIStoryboard *_storyboard;	// 40 = 0x28
    ShareAudioAcceptAskViewController *_vcAsk;	// 48 = 0x30
    unsigned int _btProductID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100077578
@property(nonatomic) unsigned int btProductID; // @synthesize btProductID=_btProductID;
- (void)dismissWithAction:(int)arg1;	// IMP=0x00000001000773b0
- (void)xpcStarted:(id)arg1;	// IMP=0x000000010007732c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000771bc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100076f9c
- (unsigned long long)desiredHomeButtonEvents;	// IMP=0x0000000100076f94

@end
