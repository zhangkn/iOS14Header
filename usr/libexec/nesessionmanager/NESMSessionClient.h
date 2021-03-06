//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface NESMSessionClient : NSObject
{
    NSString *_description;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    unsigned long long _permissions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100088c7c
@property(readonly) unsigned long long permissions; // @synthesize permissions=_permissions;
@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)cancel;	// IMP=0x0000000100088c38
- (void)sendStatusChangedNotification;	// IMP=0x0000000100088b90
- (id)description;	// IMP=0x0000000100088b88
- (int)type;	// IMP=0x0000000100088b80
- (id)initWithPID:(int)arg1;	// IMP=0x0000000100088a84
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000888d4

@end

