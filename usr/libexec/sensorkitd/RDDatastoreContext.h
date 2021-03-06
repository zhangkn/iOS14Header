//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RDDefaults, RDFileURLs;
@protocol RDDatastoreEventListening;

@interface RDDatastoreContext : NSObject
{
    RDFileURLs *_fileURLs;	// 8 = 0x8
    RDDefaults *_defaults;	// 16 = 0x10
    id <RDDatastoreEventListening> _eventListener;	// 24 = 0x18
    NSString *_sensorIdentifier;	// 32 = 0x20
    NSString *_deviceId;	// 40 = 0x28
    NSString *_bundleId;	// 48 = 0x30
    double _deletionStartTime;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002c6f8
- (void)dealloc;	// IMP=0x000000010002c4fc

@end

