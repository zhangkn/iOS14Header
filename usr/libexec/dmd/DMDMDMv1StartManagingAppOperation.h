//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDAppOperation.h"

@class DMDAppMetadata;

@interface DMDMDMv1StartManagingAppOperation : DMDAppOperation
{
    DMDAppMetadata *_metadata;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x000000010006575c
+ (id)whitelistedClassesForRequest;	// IMP=0x00000001000656a4
- (void).cxx_destruct;	// IMP=0x000000010006578c
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000663b8
- (void)_attemptSINFSwap;	// IMP=0x00000001000662ac
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000001000661cc
- (void)_manageApp;	// IMP=0x0000000100065e30
- (void)_runWithRequest:(id)arg1;	// IMP=0x0000000100065910
- (void)runWithRequest:(id)arg1;	// IMP=0x00000001000657a0

@end
