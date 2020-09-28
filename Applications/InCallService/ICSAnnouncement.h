//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVSpeechSynthesizerDelegate-Protocol.h"

@class AVSpeechSynthesizer, AVSpeechUtterance, NSString;
@protocol ICSAnnouncementDelegate;

@interface ICSAnnouncement : NSObject <AVSpeechSynthesizerDelegate>
{
    id <ICSAnnouncementDelegate> _delegate;	// 8 = 0x8
    double _delay;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    AVSpeechSynthesizer *_speechSynthesizer;	// 32 = 0x20
    AVSpeechUtterance *_speechUtterance;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010003fc74
@property(retain, nonatomic) AVSpeechUtterance *speechUtterance; // @synthesize speechUtterance=_speechUtterance;
@property(retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) id <ICSAnnouncementDelegate> delegate; // @synthesize delegate=_delegate;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;	// IMP=0x000000010003fb64
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;	// IMP=0x000000010003fa78
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;	// IMP=0x000000010003f98c
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;	// IMP=0x000000010003f8c0
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;	// IMP=0x000000010003f7d4
- (void)stop;	// IMP=0x000000010003f738
- (void)start;	// IMP=0x000000010003f608
- (void)pause;	// IMP=0x000000010003f5c4
- (id)init;	// IMP=0x000000010003f584

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
