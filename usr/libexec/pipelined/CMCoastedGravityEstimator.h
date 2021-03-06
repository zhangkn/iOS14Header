//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMCoastedGravityEstimator : NSObject
{
    struct CoastedGravityEstimator _impl;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000100024b9c
- (void).cxx_destruct;	// IMP=0x0000000100024b94
- (_Bool)isConverged;	// IMP=0x0000000100024b8c
- (unsigned long long)numSamples;	// IMP=0x0000000100024b84
- (struct CMGravity)feedRotationRateAtTimestamp:(double)arg1 X:(float)arg2 Y:(float)arg3 Z:(float)arg4;	// IMP=0x0000000100024b7c
- (struct CMGravity)feedAccelAtTimestamp:(double)arg1 X:(float)arg2 Y:(float)arg3 Z:(float)arg4;	// IMP=0x0000000100024b74
- (id)init;	// IMP=0x0000000100024b1c

@end

