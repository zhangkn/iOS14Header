//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandlerGenericLinks.h"

@class SDAirDropHandlerWebLinks;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerKeynoteLiveLinks : SDAirDropHandlerGenericLinks
{
    SDAirDropHandlerWebLinks *_webLinksHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004465c
- (void)updatePossibleActions;	// IMP=0x00000001000445b0
- (id)suitableContentsDescription;	// IMP=0x00000001000444f0
- (long long)transferTypes;	// IMP=0x00000001000444b8
- (_Bool)canHandleTransfer;	// IMP=0x000000010004429c
- (id)initWithTransfer:(id)arg1;	// IMP=0x0000000100044210

@end
