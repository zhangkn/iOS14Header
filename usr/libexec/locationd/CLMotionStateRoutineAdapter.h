//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLRoutineMonitorClientProtocol-Protocol.h"

@class NSString;

@interface CLMotionStateRoutineAdapter : NSObject <CLRoutineMonitorClientProtocol>
{
    struct CLMotionState *_motionState;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (id)initWithMotionState:(struct CLMotionState *)arg1;	// IMP=0x00000001001bc874

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
