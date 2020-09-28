//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMDRequest.h"

@class FMDServiceProvider, NSString;

@interface FMDRequestLostModeExitAuth : FMDRequest
{
    FMDServiceProvider *_provider;	// 8 = 0x8
    NSString *_lostModeExitAuthToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009ca00
@property(retain, nonatomic) NSString *lostModeExitAuthToken; // @synthesize lostModeExitAuthToken=_lostModeExitAuthToken;
@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
- (_Bool)canReplace:(id)arg1;	// IMP=0x000000010009c95c
- (_Bool)canRequestBeRetriedNow;	// IMP=0x000000010009c954
- (_Bool)showAuthFailedMessage;	// IMP=0x000000010009c94c
- (id)authToken;	// IMP=0x000000010009c940
- (id)requestBody;	// IMP=0x000000010009c798
- (id)requestUrl;	// IMP=0x000000010009c698
- (id)initWithProvider:(id)arg1 lostModeExitAuthToken:(id)arg2;	// IMP=0x000000010009c5c0

@end
