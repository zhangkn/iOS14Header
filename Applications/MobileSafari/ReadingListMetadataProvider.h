//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ReadingListMetadataProvider-Protocol.h"

@class LPMetadataProvider, NSString;

@interface ReadingListMetadataProvider : NSObject <ReadingListMetadataProvider>
{
    LPMetadataProvider *_lpMetadataProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010007a1e8
- (void)fetchMetadataForBookmark:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100079d2c
- (id)init;	// IMP=0x0000000100079cb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
