//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CommonProduct.h"

@class NSArray;

@interface tm099d3b858edfad880b4e38c9b3d8ab11 : CommonProduct
{
    NSArray *gridX;	// 360 = 0x168
    NSArray *gridY;	// 368 = 0x170
    int _filteredBacklightCurrentLI2;	// 376 = 0x178
    int _filteredTempRearCameraDieWithDefault;	// 380 = 0x17c
    int TG0B[4];	// 384 = 0x180
    int packagePower[4];	// 400 = 0x190
    int predictedTG0B[6];	// 416 = 0x1a0
    float predictionError;	// 440 = 0x1b8
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x000000010003aa24
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x000000010003a974
- (int)numberOfFields;	// IMP=0x000000010003a93c
- (void)updateCoreAnalyticsInfo;	// IMP=0x000000010003a480
- (void)updateAggdInfo;	// IMP=0x000000010003a2c0
- (void)predictSignal;	// IMP=0x0000000100039fdc
- (int *)compute2DGridTemps;	// IMP=0x0000000100039868
- (id)getGridY;	// IMP=0x00000001000397ac
- (id)getGridX;	// IMP=0x00000001000396f0
- (void)updateAllThermalLoad:(_Bool)arg1;	// IMP=0x0000000100039114
- (int)arcModuleTemperature;	// IMP=0x0000000100039104
- (int)gasGaugeBatteryTemperature;	// IMP=0x00000001000390f4
- (void)resetVTFilterState;	// IMP=0x00000001000390d4
- (id)initProduct:(id)arg1;	// IMP=0x000000010003902c

@end
