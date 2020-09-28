//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDisplayBrightnessController;
@protocol BSInvalidatable;

@interface BKDisplayBrightnessUpdateTransactionManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _numPendingTransactions;	// 12 = 0xc
    float _systemDisplayBrightness;	// 16 = 0x10
    id <BSInvalidatable> _suppressBrightnessNotifications;	// 24 = 0x18
    BKDisplayBrightnessController *_brightnessController;	// 32 = 0x20
    _Bool _commitPending;	// 40 = 0x28
    _Bool _shouldRestoreSystemBrightness;	// 41 = 0x29
}

+ (id)sharedInstance;	// IMP=0x0000000100062b24
- (void).cxx_destruct;	// IMP=0x0000000100062af4
- (void)_lock_commitDisplayBrightness;	// IMP=0x0000000100062a14
- (void)_endUpdateTransaction:(id)arg1;	// IMP=0x0000000100062878
- (void)_beginUpdateTransaction:(id)arg1;	// IMP=0x0000000100062748
- (void)restoreSystemDisplayBrightness;	// IMP=0x00000001000626a8
- (float)systemDisplayBrightness;	// IMP=0x0000000100062660
- (void)setDisplayBrightness:(float)arg1 permanently:(_Bool)arg2;	// IMP=0x0000000100062598
- (void)synchronizeALSPreferencesAndSystemDisplayBrightness;	// IMP=0x0000000100062528
- (id)_initWithBrightnessController:(id)arg1;	// IMP=0x0000000100062448

@end
