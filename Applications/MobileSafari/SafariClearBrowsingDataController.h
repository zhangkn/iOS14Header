//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SafariClearBrowsingDataController : NSObject
{
    NSArray *_availableIntervals;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000b2fa0
@property(readonly) NSArray *availableIntervals; // @synthesize availableIntervals=_availableIntervals;
- (void)_clearBrowsingDataAddedAfterDate:(id)arg1;	// IMP=0x00000001000b2768
- (void)clearAllBrowsingData;	// IMP=0x00000001000b2700
- (void)clearDataFromInterval:(id)arg1;	// IMP=0x00000001000b2648
- (id)init;	// IMP=0x00000001000b2240

@end
