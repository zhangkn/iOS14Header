//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDRemoveProfileOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000734c8
+ (id)requiredEntitlements;	// IMP=0x00000001000734bc
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100073480
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100073938
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100073600

@end

