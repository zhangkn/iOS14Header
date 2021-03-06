//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WhitelistChecker : NSObject
{
    NSDictionary *_domains;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004973c
@property(retain, nonatomic) NSDictionary *domains; // @synthesize domains=_domains;
- (_Bool)handleSystemContainerFiles:(id)arg1 withMetadata:(id)arg2;	// IMP=0x0000000100049424
- (_Bool)shouldRestoreSystemContainer_WatchAndTV:(id)arg1 shared:(_Bool)arg2;	// IMP=0x0000000100049380
- (_Bool)shouldRestoreSystemContainer_iOS:(id)arg1 shared:(_Bool)arg2;	// IMP=0x0000000100049178
- (_Bool)file:(id)arg1 blacklisted:(id)arg2;	// IMP=0x0000000100048f5c
- (_Bool)file:(id)arg1 whitelisted:(id)arg2;	// IMP=0x0000000100048de4
- (id)createFullPathList:(id)arg1 rootPath:(id)arg2 isAllowList:(_Bool)arg3;	// IMP=0x0000000100048b30
- (_Bool)annotated:(id)arg1;	// IMP=0x00000001000489c4
- (_Bool)checkFile_WatchAndTV:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0000000100048838
- (_Bool)checkFile_iOS:(id)arg1 withMetaData:(id)arg2;	// IMP=0x000000010004821c
- (_Bool)checkManifest:(id)arg1;	// IMP=0x0000000100047fd8
- (_Bool)checkManifestFile:(id)arg1;	// IMP=0x0000000100047e20
- (_Bool)load;	// IMP=0x0000000100047b28

@end

