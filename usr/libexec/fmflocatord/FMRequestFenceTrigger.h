//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMRequest.h"

@class CLLocation, MonitoredFence, NSDate, NSURL;

@interface FMRequestFenceTrigger : FMRequest
{
    CLLocation *_triggeredLocation;	// 8 = 0x8
    MonitoredFence *_fence;	// 16 = 0x10
    NSURL *_triggerURL;	// 24 = 0x18
    NSDate *_triggerTimestamp;	// 32 = 0x20
    long long _triggerType;	// 40 = 0x28
    double _validityDuration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010002feb8
@property(nonatomic) double validityDuration; // @synthesize validityDuration=_validityDuration;
@property(nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) NSDate *triggerTimestamp; // @synthesize triggerTimestamp=_triggerTimestamp;
@property(retain, nonatomic) NSURL *triggerURL; // @synthesize triggerURL=_triggerURL;
@property(retain, nonatomic) MonitoredFence *fence; // @synthesize fence=_fence;
@property(retain, nonatomic) CLLocation *triggeredLocation; // @synthesize triggeredLocation=_triggeredLocation;
- (_Bool)canReplace:(id)arg1;	// IMP=0x000000010002fc48
- (_Bool)canRequestBeRetriedNow;	// IMP=0x000000010002faec
- (long long)maxConsecutiveNetworkNotificationRetries;	// IMP=0x000000010002fae4
- (long long)maxNonNetworkRelatedRetries;	// IMP=0x000000010002fadc
- (long long)maxTimerBasedNetworkRetries;	// IMP=0x000000010002fad4
- (id)requestBody;	// IMP=0x000000010002f118
- (id)requestUrl;	// IMP=0x000000010002f10c
- (id)initWithProvider:(id)arg1 triggeredLocation:(id)arg2 fence:(id)arg3 validityDuration:(double)arg4 triggerURL:(id)arg5;	// IMP=0x000000010002ef98
- (void)deinitializeRequest;	// IMP=0x000000010002ef08

@end

