//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDRemoveConfigurationOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100071c00
+ (id)requiredEntitlements;	// IMP=0x0000000100071bec
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100071bb0
- (unsigned long long)queueGroup;	// IMP=0x0000000100071bf8
- (_Bool)_removeRestrictionsWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007246c
- (void)_removeProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000721e0
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100071d38

@end
