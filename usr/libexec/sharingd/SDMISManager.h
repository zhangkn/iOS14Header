//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, RadiosPreferences;
@protocol SDMISManagerDelegate;

__attribute__((visibility("hidden")))
@interface SDMISManager : NSObject
{
    struct __CFRunLoopSource *_scRunLoopSource;	// 8 = 0x8
    struct __SCDynamicStore *_scDynamicStore;	// 16 = 0x10
    struct NETRBClient *_netClient;	// 24 = 0x18
    int _state;	// 32 = 0x20
    int _reason;	// 36 = 0x24
    _Bool _needStateUpdate;	// 40 = 0x28
    RadiosPreferences *_radioPrefs;	// 48 = 0x30
    long long _attachCount;	// 56 = 0x38
    NSTimer *_authTimer;	// 64 = 0x40
    long long _connectedHosts;	// 72 = 0x48
    id <SDMISManagerDelegate> _delegate;	// 80 = 0x50
}

+ (id)sharedManager;	// IMP=0x000000010003b018
- (void).cxx_destruct;	// IMP=0x000000010003bbcc
@property __weak id <SDMISManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMISStateChanged;	// IMP=0x000000010003ba30
- (long long)readConnectHosts;	// IMP=0x000000010003b8f4
- (void)readMISState:(int *)arg1 andReason:(int *)arg2;	// IMP=0x000000010003b814
- (_Bool)hostIsOnlyUSBEthernet;	// IMP=0x000000010003b6f4
- (long long)connectedHosts;	// IMP=0x000000010003b6b4
- (void)getState:(int *)arg1 andReason:(int *)arg2;	// IMP=0x000000010003b5b4
- (void)setState:(int)arg1;	// IMP=0x000000010003b4d8
- (void)stopService;	// IMP=0x000000010003b460
- (void)detachMIS;	// IMP=0x000000010003b398
- (void)attachMIS;	// IMP=0x000000010003b1f4
- (void)dealloc;	// IMP=0x000000010003b16c
- (id)init;	// IMP=0x000000010003b084

@end
