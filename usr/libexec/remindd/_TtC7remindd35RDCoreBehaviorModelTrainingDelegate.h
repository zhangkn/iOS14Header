//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RDBMMiningTaskDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC7remindd35RDCoreBehaviorModelTrainingDelegate : NSObject <RDBMMiningTaskDelegate>
{
    MISSING_TYPE *store;	// 8 = 0x8
    MISSING_TYPE *defaultList;	// 16 = 0x10
    MISSING_TYPE *trainingDataFrame;	// 32 = 0x20
    MISSING_TYPE *intentWords;	// 96 = 0x60
    MISSING_TYPE *metrics;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001001975b0
- (id)init;	// IMP=0x000000010019766c
- (id)eventsForTypes:(id)arg1 error:(id *)arg2;	// IMP=0x000000010019749c
- (id)taskSpecificEventProvidersForMiningTask:(id)arg1;	// IMP=0x0000000100197418
- (void)miningTask:(id)arg1 didExtractRules:(id)arg2;	// IMP=0x0000000100197364
- (id)miningTask:(id)arg1 filteredRulesForExtractedRules:(id)arg2;	// IMP=0x000000010019727c

@end

