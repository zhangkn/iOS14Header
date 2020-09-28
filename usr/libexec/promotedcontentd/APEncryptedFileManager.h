//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EncryptableStorage-Protocol.h"

@class NSFileManager, NSString;

@interface APEncryptedFileManager : NSObject <EncryptableStorage>
{
    NSFileManager *_fileManager;	// 8 = 0x8
    NSString *_pathPrefix;	// 16 = 0x10
}

+ (void)setRootPath:(id)arg1;	// IMP=0x000000010005f910
+ (id)_validatedPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005f18c
- (void).cxx_destruct;	// IMP=0x000000010005fd40
@property(retain, nonatomic) NSString *pathPrefix; // @synthesize pathPrefix=_pathPrefix;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (_Bool)_createDirectoriesForURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005fc0c
- (id)_makeApplicationSupportSubdirectory:(id)arg1;	// IMP=0x000000010005f98c
- (id)_rootURL;	// IMP=0x000000010005f920
- (id)_rootPath;	// IMP=0x000000010005f82c
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005f720
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005f6a4
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005f628
- (id)_validatedFullURLForPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005f4b0
- (id)_validatedFullPathForPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005f390
- (id)_validatedPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005efd0
- (CDUnknownBlockType)iterateObjectsIncludingFolders:(_Bool)arg1;	// IMP=0x000000010005ec68
- (_Bool)touchFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005ebc4
- (id)createdDateForFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005eb3c
- (id)lastModifiedDateForFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005eab4
- (id)fileForAppendingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005e968
- (id)fileForWritingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005e81c
- (id)fileForReadingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005e59c
- (_Bool)removeObjectAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005e528
- (_Bool)_fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x000000010005e4b0
- (_Bool)objectExistsAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005e480
- (Class)_classForEncryptedFile;	// IMP=0x000000010005e474
- (id)_dataStoredAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005e3e8
- (_Bool)_storeData:(id)arg1 atPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005e340
- (id)objectStoredAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005e298
- (_Bool)storeObject:(id)arg1 atPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005e1d8
- (id)initWithPathPrefix:(id)arg1;	// IMP=0x000000010005e144
- (id)init;	// IMP=0x000000010005e0e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
