//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface W5IOPowerSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _notifyPowerSourceUpdateToken;	// 16 = 0x10
    int _notifyLowBatteryToken;	// 20 = 0x14
    _Bool _isMonitoringEvents;	// 24 = 0x18
    CDUnknownBlockType _updatedPowerSourceCallback;	// 32 = 0x20
    CDUnknownBlockType _lowBatteryCallback;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType lowBatteryCallback; // @synthesize lowBatteryCallback=_lowBatteryCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedPowerSourceCallback; // @synthesize updatedPowerSourceCallback=_updatedPowerSourceCallback;
- (int)batteryWarningLevel;	// IMP=0x0000000100019778
- (long long)powerSourceType;	// IMP=0x0000000100019640
- (double)estimatedTimeRemaining;	// IMP=0x000000010001957c
- (double)internalBatteryLevel;	// IMP=0x000000010001941c
- (void)stopEventMonitoring;	// IMP=0x000000010001936c
- (void)startEventMonitoring;	// IMP=0x0000000100018d80
- (void)dealloc;	// IMP=0x0000000100018d24
- (id)init;	// IMP=0x0000000100018aec

@end

