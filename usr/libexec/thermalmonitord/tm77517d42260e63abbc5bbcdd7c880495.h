//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CommonProduct.h"

@interface tm77517d42260e63abbc5bbcdd7c880495 : CommonProduct
{
    float _filteredBacklightCurrentLI2;	// 360 = 0x168
    float _filteredTorchOnState;	// 364 = 0x16c
    int _filteredTempRearCameraDie;	// 368 = 0x170
    int _mic1_previous;	// 372 = 0x174
    int _mic2_previous;	// 376 = 0x178
    int _filteredMinMicDelta;	// 380 = 0x17c
}

- (void)updateCoreAnalyticsInfo;	// IMP=0x0000000100021b94
- (void)postDeviceTempMetric;	// IMP=0x0000000100021ae8
- (void)updateAggdInfo;	// IMP=0x0000000100021970
- (void)updateAllThermalLoad:(_Bool)arg1;	// IMP=0x000000010002132c
- (int)arcVirtualTemperature;	// IMP=0x000000010002131c
- (int)arcModuleTemperature;	// IMP=0x000000010002130c
- (int)gasGaugeBatteryTemperature;	// IMP=0x00000001000212fc
- (void)resetVTFilterState;	// IMP=0x00000001000212a4
- (id)initProduct:(id)arg1;	// IMP=0x000000010002124c

@end
