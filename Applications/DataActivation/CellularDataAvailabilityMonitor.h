//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol CellularDataAvailabilityMonitorDelegate;

@interface CellularDataAvailabilityMonitor : NSObject
{
    struct __CTServerConnection *_serverConnection;	// 8 = 0x8
    NSTimer *_assumeCellularDataTimer;	// 16 = 0x10
    _Bool _cellularDataAvailable;	// 24 = 0x18
    id <CellularDataAvailabilityMonitorDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000121f4
@property(readonly, nonatomic, getter=isCellularDataAvailable) _Bool cellularDataAvailable; // @synthesize cellularDataAvailable=_cellularDataAvailable;
@property(nonatomic) __weak id <CellularDataAvailabilityMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateCellularDataAvailabilityFromStatusDictionary:(id)arg1;	// IMP=0x0000000100012114
- (void)_updateCellularDataAvailability;	// IMP=0x00000001000120b0
- (void)_clearAssumeCellularDataTimer;	// IMP=0x000000010001207c
- (void)_cellularDataAvailabilityDidTimeout;	// IMP=0x000000010001202c
- (void)dealloc;	// IMP=0x0000000100011fe0
- (id)init;	// IMP=0x0000000100011e2c

@end

