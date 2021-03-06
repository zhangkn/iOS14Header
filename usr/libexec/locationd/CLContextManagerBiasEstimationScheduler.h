//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLBarometerCalibrationContextManager.h"

@class CLBarometerCalibrationTrack;

@interface CLContextManagerBiasEstimationScheduler : CLBarometerCalibrationContextManager
{
    CLBarometerCalibrationTrack *_currentTrack;	// 40 = 0x28
    double _lastTrackEndTime;	// 48 = 0x30
    double _biasEstimationTrackDataBufferSizeSeconds;	// 56 = 0x38
    double _biasEstimationTrackPeriodSeconds;	// 64 = 0x40
    double _timeSinceLastTrackStart;	// 72 = 0x48
    double _waitPeriodSeconds;	// 80 = 0x50
    unsigned long long _currentSource;	// 88 = 0x58
    struct map<CLBarometerCalibration_Types::Source, double, std::__1::less<CLBarometerCalibration_Types::Source>, std::__1::allocator<std::__1::pair<const CLBarometerCalibration_Types::Source, double>>> _trackLengthSecondsForSource;	// 96 = 0x60
    double _lastWetStateTimestamp;	// 120 = 0x78
}

- (id).cxx_construct;	// IMP=0x00000001008db9c8
- (void).cxx_destruct;	// IMP=0x00000001008db9b4
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x00000001008db888
- (_Bool)isRefDataAvailableBetweenStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x00000001008db604
- (void)sendTrackAndScheduleNextTick;	// IMP=0x00000001008db0c4
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x00000001008dab98
- (_Bool)shouldStartNewTrack:(unsigned long long)arg1;	// IMP=0x00000001008dab70
- (void)dealloc;	// IMP=0x00000001008daae4
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(array_4864b4ac *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x00000001008da90c

@end

