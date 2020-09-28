//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet, NSString, PTPObjectInfoDataset;

@interface PTPFolder : NSObject
{
    unsigned int _storageID;	// 8 = 0x8
    unsigned int _objectHandle;	// 12 = 0xc
    NSString *_path;	// 16 = 0x10
    unsigned long long _serialNumber;	// 24 = 0x18
    long long _size;	// 32 = 0x20
    id _parent;	// 40 = 0x28
    NSMutableDictionary *_files;	// 48 = 0x30
    NSMutableIndexSet *_fileIndices;	// 56 = 0x38
    NSMutableDictionary *_folders;	// 64 = 0x40
    NSMutableIndexSet *_folderIndices;	// 72 = 0x48
    PTPObjectInfoDataset *_objectInfoDataset;	// 80 = 0x50
    struct timespec _captureTimeSpec;	// 88 = 0x58
}

@property(retain, nonatomic) PTPObjectInfoDataset *objectInfoDataset; // @synthesize objectInfoDataset=_objectInfoDataset;
@property(nonatomic) unsigned int objectHandle; // @synthesize objectHandle=_objectHandle;
@property(nonatomic) unsigned int storageID; // @synthesize storageID=_storageID;
@property(retain, nonatomic) NSMutableIndexSet *folderIndices; // @synthesize folderIndices=_folderIndices;
@property(retain, nonatomic) NSMutableDictionary *folders; // @synthesize folders=_folders;
@property(retain, nonatomic) NSMutableIndexSet *fileIndices; // @synthesize fileIndices=_fileIndices;
@property(retain, nonatomic) NSMutableDictionary *files; // @synthesize files=_files;
@property(nonatomic) id parent; // @synthesize parent=_parent;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) struct timespec captureTimeSpec; // @synthesize captureTimeSpec=_captureTimeSpec;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;	// IMP=0x000000010002b7a8
- (unsigned long long)appendObjectData:(id)arg1 forObjectFormatCode:(unsigned short)arg2 inAssociation:(unsigned int)arg3 withContentType:(unsigned int)arg4;	// IMP=0x000000010002ab7c
- (id)folderObjectHandleMatchingName:(id)arg1 serialNumber:(unsigned long long)arg2 captureTimeSpec:(struct timespec *)arg3 andSize:(long long)arg4;	// IMP=0x000000010002aa74
- (id)fileObjectHandleMatchingName:(id)arg1 serialNumber:(unsigned long long)arg2 captureTimeSpec:(struct timespec *)arg3 andSize:(long long)arg4;	// IMP=0x000000010002a918
- (id)folderMatchingName:(id)arg1;	// IMP=0x000000010002a7b8
- (id)fileMatchingName:(id)arg1;	// IMP=0x000000010002a658
- (void)deleteFolder:(id)arg1;	// IMP=0x000000010002a5c0
- (void)deleteFile:(id)arg1;	// IMP=0x000000010002a528
- (id)objectForObjectHandle:(id)arg1;	// IMP=0x000000010002a464
- (id)objectHandlesForFiles;	// IMP=0x000000010002a33c
- (id)objectHandlesForFolders;	// IMP=0x000000010002a228
- (id)objectHandlesForObjectFormatCode:(unsigned short)arg1 inAssociation:(unsigned int)arg2;	// IMP=0x0000000100029608
- (id)objectMatchingAssetHandle:(id)arg1;	// IMP=0x00000001000293d4
- (unsigned int)fileCount;	// IMP=0x00000001000293b4
- (void)addContent;	// IMP=0x0000000100028588
- (id)initWithObjectHandle:(unsigned int)arg1 path:(id)arg2 andParent:(id)arg3;	// IMP=0x0000000100028444
- (id)initWithName:(id)arg1 path:(id)arg2 captureTimeSpec:(struct timespec *)arg3 parent:(id)arg4 parentID:(unsigned int)arg5;	// IMP=0x00000001000280e4

@end
