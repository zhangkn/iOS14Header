//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RSDRemoteDevice;
@protocol OS_xpc_object;

@interface RSDRemoteService : NSObject
{
    char *_name;	// 8 = 0x8
    char *_entitlement;	// 16 = 0x10
    char *_port;	// 24 = 0x18
    NSObject<OS_xpc_object> *_properties;	// 32 = 0x20
    RSDRemoteDevice *_device;	// 40 = 0x28
    NSObject<OS_xpc_object> *_service_listener;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000064cc
@property(retain, nonatomic) NSObject<OS_xpc_object> *service_listener; // @synthesize service_listener=_service_listener;
@property(nonatomic) __weak RSDRemoteDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSObject<OS_xpc_object> *properties; // @synthesize properties=_properties;
@property(nonatomic) char *port; // @synthesize port=_port;
@property(nonatomic) char *entitlement; // @synthesize entitlement=_entitlement;
@property(nonatomic) char *name; // @synthesize name=_name;
- (id)description;	// IMP=0x00000001000063b0
- (int)getSocketWithConnectTimeout:(unsigned int)arg1;	// IMP=0x0000000100006248
- (void)dealloc;	// IMP=0x00000001000061f0
- (void)cancel;	// IMP=0x0000000100006164
- (void)updateWithDescription:(id)arg1;	// IMP=0x00000001000060b0
- (id)initWithName:(const char *)arg1 description:(id)arg2;	// IMP=0x0000000100005e30
- (id)copyClientDescription;	// IMP=0x000000010000ec74

@end
