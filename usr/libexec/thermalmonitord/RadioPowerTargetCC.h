//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RadioCC.h"

#import "tGraphDataSource-Protocol.h"

@interface RadioPowerTargetCC : RadioCC <tGraphDataSource>
{
    int radioPowerTarget;	// 168 = 0xa8
    int maxRadioPower;	// 172 = 0xac
    int minRadioPower;	// 176 = 0xb0
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x00000001000103cc
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100010330
- (int)numberOfFields;	// IMP=0x00000001000102f8
- (void)setAdditionalRadioMitigations;	// IMP=0x00000001000102c4
- (void)calculateAdditionalRadioMitigations;	// IMP=0x0000000100010254
- (void)addRadioMitigations;	// IMP=0x0000000100010220
- (id)initWithRunLoopAndParams:(struct __CFRunLoop *)arg1 withParams:(struct __CFDictionary *)arg2;	// IMP=0x0000000100010150

@end
