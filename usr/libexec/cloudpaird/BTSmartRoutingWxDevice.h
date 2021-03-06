//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BTSmartRoutingWxDevice : NSObject
{
    _Bool _connected;	// 8 = 0x8
    _Bool _routed;	// 9 = 0x9
    unsigned int _audioRoutingClientID;	// 12 = 0xc
    unsigned int _currentAudioScore;	// 16 = 0x10
    int _routingAction;	// 20 = 0x14
    unsigned int _productID;	// 24 = 0x18
    CDUnknownBlockType _audioRoutingResponse;	// 32 = 0x20
    NSString *_conduitDeviceID;	// 40 = 0x28
    NSString *_deviceAddress;	// 48 = 0x30
    NSString *_deviceName;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100004250
@property(nonatomic) _Bool routed; // @synthesize routed=_routed;
@property(nonatomic) unsigned int productID; // @synthesize productID=_productID;
@property(nonatomic) int routingAction; // @synthesize routingAction=_routingAction;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(nonatomic) unsigned int currentAudioScore; // @synthesize currentAudioScore=_currentAudioScore;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(copy, nonatomic) NSString *conduitDeviceID; // @synthesize conduitDeviceID=_conduitDeviceID;
@property(nonatomic) unsigned int audioRoutingClientID; // @synthesize audioRoutingClientID=_audioRoutingClientID;
@property(copy, nonatomic) CDUnknownBlockType audioRoutingResponse; // @synthesize audioRoutingResponse=_audioRoutingResponse;

@end

