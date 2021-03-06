//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface NFTapToRadar : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    Class _lsApplicationWorkspace;	// 16 = 0x10
    NSString *_pendingRequest;	// 24 = 0x18
    NSUserDefaults *_userDefaults;	// 32 = 0x20
    struct __CFRunLoopSource *_runLoopSource;	// 40 = 0x28
    struct __CFUserNotification *_userNotification;	// 48 = 0x30
}

+ (void)requestTapToRadar:(id)arg1 preferences:(id)arg2;	// IMP=0x00000001000743f0
+ (void)handleCallback:(unsigned long long)arg1;	// IMP=0x0000000100074334
+ (id)_getInstance;	// IMP=0x0000000100073ba8
- (void).cxx_destruct;	// IMP=0x0000000100074cec
- (void)_requestTapToRadarSync:(id)arg1 prefs:(id)arg2;	// IMP=0x0000000100074558
- (void)_handleCallbackSync:(unsigned long long)arg1;	// IMP=0x0000000100073c14
- (id)init;	// IMP=0x0000000100073874

@end

