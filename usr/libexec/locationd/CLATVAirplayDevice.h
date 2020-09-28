//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface CLATVAirplayDevice : NSObject
{
    int _RSSI;	// 8 = 0x8
    unsigned int _ipv4;	// 12 = 0xc
    int _channel;	// 16 = 0x10
    time_point_406bde99 _timestamp;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000010042cdf4
@property(readonly, nonatomic) int channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) unsigned int ipv4; // @synthesize ipv4=_ipv4;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) int RSSI; // @synthesize RSSI=_RSSI;
@property(readonly, nonatomic) time_point_406bde99 timestamp; // @synthesize timestamp=_timestamp;
- (void)dealloc;	// IMP=0x000000010042cd84
- (id)initWithTimestamp:(time_point_406bde99)arg1 RSSI:(int)arg2 uuid:(id)arg3 ipv4:(unsigned int)arg4 channel:(int)arg5;	// IMP=0x000000010042ccf8
- (struct CLATVAirplayDeviceInternal)cppObject;	// IMP=0x000000010042cdfc

@end
