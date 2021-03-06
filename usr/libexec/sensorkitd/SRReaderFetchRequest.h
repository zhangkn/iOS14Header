//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SRRequestFetching-Protocol.h"

@class NSString;
@protocol SRRequestReading;

@interface SRReaderFetchRequest : NSObject <SRRequestFetching>
{
    id <SRRequestReading> _readerRequest;	// 8 = 0x8
    _Bool _bypassHoldingPeriod;	// 16 = 0x10
    double _from;	// 24 = 0x18
    double _to;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100007c30
@property _Bool bypassHoldingPeriod; // @synthesize bypassHoldingPeriod=_bypassHoldingPeriod;
@property double to; // @synthesize to=_to;
@property double from; // @synthesize from=_from;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100007ccc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100007c38
@property(retain, nonatomic) NSString *deviceIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier;
@property(retain, nonatomic) NSString *sensor;
- (void)dealloc;	// IMP=0x0000000100007b84
- (id)init;	// IMP=0x0000000100007b2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

