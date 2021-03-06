//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface TabOverviewInterpolatedValue : NSObject
{
    NSHashTable *_dependants;	// 8 = 0x8
    NSHashTable *_dependencies;	// 16 = 0x10
    double _instantaneousTargetValue;	// 24 = 0x18
    double _lastRenderedValue;	// 32 = 0x20
    double _value;	// 40 = 0x28
    double _targetValue;	// 48 = 0x30
    double _epsilon;	// 56 = 0x38
    double _decelerationFactor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010013f158
@property(nonatomic) double decelerationFactor; // @synthesize decelerationFactor=_decelerationFactor;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (_Bool)isSteadyAtTargetValue:(double)arg1;	// IMP=0x000000010013f0e4
- (id)description;	// IMP=0x000000010013efcc
- (void)addDependency:(id)arg1;	// IMP=0x000000010013ef28
- (void)_recursivelyRemoveDependency:(id)arg1;	// IMP=0x000000010013ede0
- (void)_removeDependency:(id)arg1;	// IMP=0x000000010013ed8c
- (void)_addDependant:(id)arg1;	// IMP=0x000000010013ed14
- (void)_removeFromDependants;	// IMP=0x000000010013ebe0
- (void)resetLastRenderedValue;	// IMP=0x000000010013ebd4
- (void)resetToValue:(double)arg1;	// IMP=0x000000010013eb84
- (_Bool)interpolateByTimeInterval:(double)arg1;	// IMP=0x000000010013ea50
- (_Bool)_dependenciesAreInSteadyState;	// IMP=0x000000010013e928
@property(readonly, nonatomic, getter=isInSteadyState) _Bool inSteadyState;
- (id)initWithValue:(double)arg1 decelerationFactor:(double)arg2;	// IMP=0x000000010013e7ec

@end

