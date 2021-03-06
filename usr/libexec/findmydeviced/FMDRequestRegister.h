//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMDRequest.h"

@class NSData, NSString;

@interface FMDRequestRegister : FMDRequest
{
    NSString *_digestKey;	// 8 = 0x8
    NSData *_digestData;	// 16 = 0x10
    NSString *_cause;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100019dc0
@property(retain, nonatomic) NSString *cause; // @synthesize cause=_cause;
@property(retain, nonatomic) NSData *digestData; // @synthesize digestData=_digestData;
@property(retain, nonatomic) NSString *digestKey; // @synthesize digestKey=_digestKey;
- (_Bool)canReplace:(id)arg1;	// IMP=0x0000000100019d4c
- (long long)maxConsecutiveNetworkNotificationRetries;	// IMP=0x0000000100019d44
- (long long)maxNonNetworkRelatedRetries;	// IMP=0x0000000100019d3c
- (double)maxRetryInterval;	// IMP=0x0000000100019d30
- (id)urlTemplateType;	// IMP=0x0000000100019d20

@end

