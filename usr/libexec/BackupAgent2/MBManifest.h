//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBManifestLike-Protocol.h"

@class MBDatabase, MBDatabaseIndex, MBProperties, NSString;

@interface MBManifest : NSObject <MBManifestLike>
{
    MBProperties *_properties;	// 8 = 0x8
    MBDatabase *_database;	// 16 = 0x10
    MBDatabaseIndex *_databaseIndex;	// 24 = 0x18
}

+ (id)manifestWithProperties:(id)arg1 database:(id)arg2 databaseIndex:(id)arg3;	// IMP=0x000000010005a9f0
@property(readonly, nonatomic) MBDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) MBProperties *properties; // @synthesize properties=_properties;
- (_Bool)setupEncryptionWithPassword:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010005ae78
- (void)buildIndexFromDatabaseIfNeeded;	// IMP=0x000000010005adcc
- (id)enumerateFiles:(CDUnknownBlockType)arg1 includeUninstalled:(_Bool)arg2;	// IMP=0x000000010005adbc
- (id)enumerateFiles:(CDUnknownBlockType)arg1;	// IMP=0x000000010005adac
- (id)fileEnumerator;	// IMP=0x000000010005ad9c
- (id)fetchFileWithID:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005ad90
- (id)fileWithID:(id)arg1;	// IMP=0x000000010005ac34
- (_Bool)containsFileWithID:(id)arg1;	// IMP=0x000000010005ac24
@property(readonly, nonatomic) MBDatabaseIndex *databaseIndex;
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000010005abb0
- (void)dealloc;	// IMP=0x000000010005ab58
- (id)initWithProperties:(id)arg1 database:(id)arg2 databaseIndex:(id)arg3;	// IMP=0x000000010005aa40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
