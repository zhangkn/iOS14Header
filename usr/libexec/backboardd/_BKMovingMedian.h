//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _BKMovingMedian : NSObject
{
    long long _valueCountLimit;	// 8 = 0x8
    NSMutableArray *_valuesByAge;	// 16 = 0x10
    NSMutableArray *_sortedValues;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100067058
- (double)average;	// IMP=0x0000000100066f90
- (void)addValue:(double)arg1;	// IMP=0x0000000100066d8c
- (id)initWithLimit:(long long)arg1;	// IMP=0x0000000100066cac

@end

