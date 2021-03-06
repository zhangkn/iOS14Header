//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMPedometerEntry : NSObject
{
    struct CLExtendedStepCountEntry pedEntry;	// 8 = 0x8
}

- (struct CLExtendedStepCountEntry)pedEntry;	// IMP=0x0000000100900a3c
- (double)pedometerArmConstrainedState;	// IMP=0x0000000100900a30
- (double)stepCadenceCurrent;	// IMP=0x0000000100900a28
- (double)speedCurrent;	// IMP=0x0000000100900a04
- (double)speedInstant;	// IMP=0x00000001009009e0
- (double)deltaDist;	// IMP=0x00000001009009d8
- (unsigned int)deltaSteps;	// IMP=0x00000001009009d0
- (double)deltaActiveTime;	// IMP=0x00000001009009c8
- (id)lastStepTime;	// IMP=0x00000001009009ac
- (id)firstStepTime;	// IMP=0x0000000100900990
- (id)date;	// IMP=0x0000000100900974
- (id)initWithStepEntry:(struct CLExtendedStepCountEntry)arg1;	// IMP=0x00000001009008d0

@end

