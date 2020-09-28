//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCExtensibleSingleSignOnPayloadHandler : MCNewPayloadHandler
{
}

+ (_Bool)_writeConfiguration:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010009473c
+ (id)_configurationForPayloads:(id)arg1 includingPayloads:(id)arg2 excludingPayloads:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000936ac
+ (_Bool)rebuildConfigurationIncludingPayloads:(id)arg1 excludingPayloads:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100093518
- (void)unsetAside;	// IMP=0x00000001000933b0
- (void)setAside;	// IMP=0x0000000100093214
- (void)remove;	// IMP=0x0000000100092f44
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100092d68

@end
