//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, RPMessageable;

@interface RPMediaControlDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned int _movementCommand;	// 16 = 0x10
    unsigned int _movementEndCommand;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_movementEndTimer;	// 24 = 0x18
    unsigned long long _mediaControlFlags;	// 32 = 0x20
    _Bool _mediaControlInterest;	// 40 = 0x28
    _Bool _mediaRemoteCommandGetting;	// 41 = 0x29
    _Bool _mediaRemoteCommandObserving;	// 42 = 0x2a
    unsigned int _mediaRemoteVolumeCaps;	// 44 = 0x2c
    _Bool _mediaRemoteVolumeObserving;	// 48 = 0x30
    id <RPMessageable> _messenger;	// 56 = 0x38
    CDUnknownBlockType _sendInterestEventHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010003a384
@property(copy, nonatomic) CDUnknownBlockType sendInterestEventHandler; // @synthesize sendInterestEventHandler=_sendInterestEventHandler;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)_handleSetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003a00c
- (void)_handleGetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039e10
- (void)_handleSkipByRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039cc8
- (void)_handleMovementCommand:(unsigned int)arg1 endCommand:(unsigned int)arg2;	// IMP=0x0000000100039b24
- (void)_handleMediaCaptionSet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039900
- (void)_handleMediaCaptionGet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000397ac
- (void)_handleCommand:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039508
- (void)_mediaRemoteVolumeControlUpdate;	// IMP=0x00000001000394e8
- (void)_mediaRemoteVolumeControlChanged:(id)arg1;	// IMP=0x0000000100039340
- (void)_mediaRemoteSupportedCommandsGet;	// IMP=0x0000000100039050
- (void)_mediaRemoteSupportedCommandsChanged;	// IMP=0x0000000100038f68
- (void)_mediaControlFlagsUpdate:(unsigned long long)arg1 mask:(unsigned long long)arg2;	// IMP=0x0000000100038df4
- (void)_mediaControlEnsureStopped;	// IMP=0x0000000100038cd0
- (void)_mediaControlEnsureStarted;	// IMP=0x0000000100038a6c
- (void)_update;	// IMP=0x0000000100038a48
- (void)deregisteredEventID:(id)arg1;	// IMP=0x00000001000389f0
- (void)registeredEventID:(id)arg1;	// IMP=0x0000000100038994
- (void)invalidate;	// IMP=0x000000010003886c
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x00000001000385e4
- (id)init;	// IMP=0x000000010003857c

@end

