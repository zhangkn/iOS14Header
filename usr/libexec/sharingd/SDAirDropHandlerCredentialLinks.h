//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandler.h"

@class SFSharablePassword;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerCredentialLinks : SDAirDropHandler
{
    SFSharablePassword *_credential;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100132c60
- (id)credential;	// IMP=0x00000001001329e4
- (void)updatePossibleActions;	// IMP=0x000000010013274c
- (long long)transferTypes;	// IMP=0x0000000100132714
- (id)suitableContentsDescription;	// IMP=0x00000001001324a8
- (void)handleAction;	// IMP=0x0000000100132328
- (_Bool)canHandleTransfer;	// IMP=0x00000001001320a0

@end

