//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCEDUClassroomPayloadHandler : MCNewPayloadHandler
{
}

- (void)unsetAside;	// IMP=0x000000010001d2ec
- (void)setAside;	// IMP=0x000000010001d2e0
- (_Bool)isInstalled;	// IMP=0x000000010001d2a0
- (void)remove;	// IMP=0x000000010001d22c
- (void)_remove;	// IMP=0x000000010001d218
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001d208
- (_Bool)_installWithError:(id *)arg1;	// IMP=0x000000010001cac8
- (id)_persistentIDForPayloadUUID:(id)arg1 requireIdentity:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010001c850
- (_Bool)setConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001c6b4
- (id)configurationWithError:(id *)arg1;	// IMP=0x000000010001c480

@end

