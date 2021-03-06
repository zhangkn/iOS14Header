//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKappaRecording : NSObject
{
    struct Writer *_writer;	// 8 = 0x8
    NSString *_filePath;	// 16 = 0x10
    double _iOSTriggerTime;	// 24 = 0x18
    double _aopTriggerTime;	// 32 = 0x20
    _Bool isRecording;	// 40 = 0x28
    unsigned char _state;	// 41 = 0x29
    double _startTime;	// 48 = 0x30
    double _stopTime;	// 56 = 0x38
}

@property(readonly, nonatomic) unsigned char state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_filePath;
@property(readonly, nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)onKappaTrigger:(const struct Event *)arg1 isMounted:(_Bool)arg2;	// IMP=0x000000010091d87c
- (void)onSOS:(unsigned int)arg1;	// IMP=0x000000010091d7b8
- (void)onGPSItem:(const struct CLKappaRecordingGpsItem *)arg1;	// IMP=0x000000010091d684
- (void)onMotionStateNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x000000010091d4e8
- (void)onPressureData:(const struct KappaSensorDataPressure *)arg1;	// IMP=0x000000010091d3f4
- (void)onDeviceMotionData:(const struct KappaSensorDataDeviceMotion *)arg1;	// IMP=0x000000010091d27c
- (void)onAccelerometer800Data:(const struct KappaSensorDataFastAccel *)arg1;	// IMP=0x000000010091d168
- (void)onAccelerometerData:(const struct KappaSensorDataAccel *)arg1;	// IMP=0x000000010091d068
- (unsigned int)stopAndKeep:(_Bool)arg1;	// IMP=0x000000010091cc9c
- (_Bool)start:(id)arg1;	// IMP=0x000000010091cb00
- (unsigned int)nByte;	// IMP=0x000000010091caa0
- (void)dealloc;	// IMP=0x000000010091ca34
- (id)init;	// IMP=0x000000010091c9f4

@end

