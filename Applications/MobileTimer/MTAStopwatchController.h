//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTACircleButton;
@protocol MTAStopwatchControlsTarget;

@interface MTAStopwatchController : NSObject
{
    id <MTAStopwatchControlsTarget> _target;	// 8 = 0x8
    MTACircleButton *_startStopButton;	// 16 = 0x10
    MTACircleButton *_lapControlButton;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100008f80
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) MTACircleButton *lapControlButton; // @synthesize lapControlButton=_lapControlButton;
@property(readonly, nonatomic) MTACircleButton *startStopButton; // @synthesize startStopButton=_startStopButton;
@property(readonly, nonatomic) __weak id <MTAStopwatchControlsTarget> target; // @synthesize target=_target;
- (void)setMode:(unsigned long long)arg1 force:(_Bool)arg2;	// IMP=0x0000000100008944
- (void)_lapControlButtonDown:(id)arg1;	// IMP=0x00000001000088c8
- (void)_startStopButtonDown:(id)arg1;	// IMP=0x000000010000885c
- (void)setButtonSize:(unsigned long long)arg1;	// IMP=0x0000000100008814
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000100008678

@end

